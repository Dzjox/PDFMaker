#pragma once

// Based on https://github.com/akrzemi1/Optional
// Copyright (C) 2011 - 2012 Andrzej Krzemienski.
//
// Use, modification, and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
// The idea and interface is based on Boost.Optional library
// authored by Fernando Luis Cacciola Carballal

#include <utility>
#include <type_traits>
#include <initializer_list>
#include <system/diagnostics/debug.h>
#include <functional>
#include <string>
#include <stdexcept>

#define TR2_OPTIONAL_REQUIRES(...) typename std::enable_if<__VA_ARGS__::value, bool>::type = false

#define OPTIONAL_HAS_CONSTEXPR_INIT_LIST 0
#define OPTIONAL_CONSTEXPR_INIT_LIST
#define OPTIONAL_HAS_MOVE_ACCESSORS 0
#define OPTIONAL_MUTABLE_CONSTEXPR constexpr
#   define OPTIONAL_HAS_THIS_RVALUE_REFS 1

namespace std {
namespace experimental {

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4643)
#endif
// 20.5.4, optional for object types
template <class T> class optional;

// 20.5.5, optional for lvalue reference types
template <class T> class optional<T&>;
#ifdef _MSC_VER
#pragma warning(pop)
#endif

#if defined NDEBUG
# define TR2_OPTIONAL_ASSERTED_EXPRESSION(CHECK, EXPR) (EXPR)
#else
# define TR2_OPTIONAL_ASSERTED_EXPRESSION(CHECK, EXPR) ((CHECK) ? (EXPR) : ([]{CODEPORTING_DEBUG_ASSERT(!#CHECK);}(), (EXPR)))
#endif

namespace detail_ {

// static_addressof: a constexpr version of addressof
template <typename T>
struct has_overloaded_addressof
{
    template <class X>
    constexpr static bool has_overload(...) { return false; }

    template <class X, size_t S = sizeof(std::declval<X&>().operator&()) >
    constexpr static bool has_overload(bool) { return true; }

    constexpr static bool value = has_overload<T>(true);
};

template <typename T, TR2_OPTIONAL_REQUIRES(!has_overloaded_addressof<T>)>
constexpr T* static_addressof(T& ref)
{
    return &ref;
}

template <typename T, TR2_OPTIONAL_REQUIRES(has_overloaded_addressof<T>)>
T* static_addressof(T& ref)
{
    return std::addressof(ref);
}


// the call to convert<A>(b) has return type A and converts b to type A iff b decltype(b) is implicitly convertible to A  
template <class U>
constexpr U convert(U v) { return v; }

} // namespace detail

constexpr struct trivial_init_t{} trivial_init{};


// 20.5.6, In-place construction
constexpr struct in_place_t{} in_place{};


// 20.5.7, Disengaged state indicator
struct nullopt_t
{
  struct init{};
  constexpr explicit nullopt_t(init){}
};
constexpr nullopt_t nullopt{nullopt_t::init()};


// 20.5.8, class bad_optional_access
class bad_optional_access : public std::logic_error {
public:
  explicit bad_optional_access(const std::string& what_arg) : std::logic_error{what_arg} {}
  explicit bad_optional_access(const char* what_arg) : std::logic_error{what_arg} {}
};


template <class T>
union storage_t
{
  unsigned char dummy_;
  T value_;

  constexpr storage_t( trivial_init_t ) noexcept : dummy_() {};

  template <class... Args>
  constexpr storage_t( Args&&... args ) : value_(std::forward<Args>(args)...) {}

  ~storage_t(){}
};


template <class T>
union constexpr_storage_t
{
    unsigned char dummy_;
    T value_;

    constexpr constexpr_storage_t( trivial_init_t ) noexcept : dummy_() {};

    template <class... Args>
    constexpr constexpr_storage_t( Args&&... args ) : value_(std::forward<Args>(args)...) {}

    ~constexpr_storage_t() = default;
};


template <class T>
struct optional_base
{
    bool init_;
    storage_t<T> storage_;

    constexpr optional_base() noexcept : init_(false), storage_(trivial_init) {};

    explicit constexpr optional_base(const T& v) : init_(true), storage_(v) {}

    explicit constexpr optional_base(T&& v) : init_(true), storage_(std::move(v)) {}

    template <class... Args> explicit optional_base(in_place_t, Args&&... args)
        : init_(true), storage_(std::forward<Args>(args)...) {}

    template <class U, class... Args, TR2_OPTIONAL_REQUIRES(std::is_constructible<T, std::initializer_list<U>>)>
    explicit optional_base(in_place_t, std::initializer_list<U> il, Args&&... args)
        : init_(true), storage_(il, std::forward<Args>(args)...) {}

    ~optional_base() { if (init_) storage_.value_.T::~T(); }
};


template <class T>
struct constexpr_optional_base
{
    bool init_;
    constexpr_storage_t<T> storage_;

    constexpr constexpr_optional_base() noexcept : init_(false), storage_(trivial_init) {};

    explicit constexpr constexpr_optional_base(const T& v) : init_(true), storage_(v) {}

    explicit constexpr constexpr_optional_base(T&& v) : init_(true), storage_(std::move(v)) {}

    template <class... Args> explicit constexpr constexpr_optional_base(in_place_t, Args&&... args)
      : init_(true), storage_(std::forward<Args>(args)...) {}

    template <class U, class... Args, TR2_OPTIONAL_REQUIRES(is_constructible<T, std::initializer_list<U>>)>
    OPTIONAL_CONSTEXPR_INIT_LIST explicit constexpr_optional_base(in_place_t, std::initializer_list<U> il, Args&&... args)
      : init_(true), storage_(il, std::forward<Args>(args)...) {}

    ~constexpr_optional_base() = default;
};


template <class T>
using OptionalBase = typename std::conditional<
    is_trivially_destructible<T>::value,                          // if possible
    constexpr_optional_base<typename std::remove_const<T>::type>, // use base with trivial destructor
    optional_base<typename std::remove_const<T>::type>
>::type;



template <class T>
class optional : private OptionalBase<T>
{
  static_assert( !std::is_same<typename std::decay<T>::type, nullopt_t>::value, "bad T" );
  static_assert( !std::is_same<typename std::decay<T>::type, in_place_t>::value, "bad T" );
  

  constexpr bool initialized() const noexcept { return OptionalBase<T>::init_; }
  typename std::remove_const<T>::type* dataptr() {  return std::addressof(OptionalBase<T>::storage_.value_); }
  constexpr const T* dataptr() const { return detail_::static_addressof(OptionalBase<T>::storage_.value_); }
  
# if OPTIONAL_HAS_THIS_RVALUE_REFS == 1
  constexpr const T& contained_val() const& { return OptionalBase<T>::storage_.value_; }
#   if OPTIONAL_HAS_MOVE_ACCESSORS == 1
  OPTIONAL_MUTABLE_CONSTEXPR T&& contained_val() && { return std::move(OptionalBase<T>::storage_.value_); }
  OPTIONAL_MUTABLE_CONSTEXPR T& contained_val() & { return OptionalBase<T>::storage_.value_; }
#   else
  T& contained_val() & { return OptionalBase<T>::storage_.value_; }
  T&& contained_val() && { return std::move(OptionalBase<T>::storage_.value_); }
#   endif
# else
  constexpr const T& contained_val() const { return OptionalBase<T>::storage_.value_; }
  T& contained_val() { return OptionalBase<T>::storage_.value_; }
# endif

  void clear() noexcept {
    if (initialized()) dataptr()->T::~T();
    OptionalBase<T>::init_ = false;
  }
  
  template <class... Args>
  void initialize(Args&&... args) noexcept(noexcept(T(std::forward<Args>(args)...)))
  {
    CODEPORTING_DEBUG_ASSERT(!OptionalBase<T>::init_);
    ::new (static_cast<void*>(dataptr())) T(std::forward<Args>(args)...);
    OptionalBase<T>::init_ = true;
  }

  template <class U, class... Args>
  void initialize(std::initializer_list<U> il, Args&&... args) noexcept(noexcept(T(il, std::forward<Args>(args)...)))
  {
    CODEPORTING_DEBUG_ASSERT(!OptionalBase<T>::init_);
    ::new (static_cast<void*>(dataptr())) T(il, std::forward<Args>(args)...);
    OptionalBase<T>::init_ = true;
  }

public:
  typedef T value_type;

  // 20.5.5.1, constructors
  constexpr optional() noexcept : OptionalBase<T>()  {};
  constexpr optional(nullopt_t) noexcept : OptionalBase<T>() {};

  optional(const optional& rhs)
  : OptionalBase<T>()
  {
    if (rhs.initialized()) {
        ::new (static_cast<void*>(dataptr())) T(*rhs);
        OptionalBase<T>::init_ = true;
    }
  }

  optional(optional&& rhs) noexcept(is_nothrow_move_constructible<T>::value)
  : OptionalBase<T>()
  {
    if (rhs.initialized()) {
        ::new (static_cast<void*>(dataptr())) T(std::move(*rhs));
        OptionalBase<T>::init_ = true;
    }
  }

  constexpr optional(const T& v) : OptionalBase<T>(v) {}

  constexpr optional(T&& v) : OptionalBase<T>(std::move(v)) {}

  template <class... Args>
  explicit constexpr optional(in_place_t, Args&&... args)
  : OptionalBase<T>(in_place_t{}, std::forward<Args>(args)...) {}

  template <class U, class... Args, TR2_OPTIONAL_REQUIRES(is_constructible<T, std::initializer_list<U>>)>
  OPTIONAL_CONSTEXPR_INIT_LIST explicit optional(in_place_t, std::initializer_list<U> il, Args&&... args)
  : OptionalBase<T>(in_place_t{}, il, std::forward<Args>(args)...) {}

  // 20.5.4.2, Destructor
  ~optional() = default;

  // 20.5.4.3, assignment
  optional& operator=(nullopt_t) noexcept
  {
    clear();
    return *this;
  }
  
  optional& operator=(const optional& rhs)
  {
    if      (initialized() == true  && rhs.initialized() == false) clear();
    else if (initialized() == false && rhs.initialized() == true)  initialize(*rhs);
    else if (initialized() == true  && rhs.initialized() == true)  contained_val() = *rhs;
    return *this;
  }
  
  optional& operator=(optional&& rhs)
  noexcept(is_nothrow_move_assignable<T>::value && is_nothrow_move_constructible<T>::value)
  {
    if      (initialized() == true  && rhs.initialized() == false) clear();
    else if (initialized() == false && rhs.initialized() == true)  initialize(std::move(*rhs));
    else if (initialized() == true  && rhs.initialized() == true)  contained_val() = std::move(*rhs);
    return *this;
  }

  template <class U>
  auto operator=(U&& v)
  -> typename enable_if
  <
    is_same<typename decay<U>::type, T>::value,
    optional&
  >::type
  {
    if (initialized()) { contained_val() = std::forward<U>(v); }
    else               { initialize(std::forward<U>(v));  }
    return *this;
  }
  
  
  template <class... Args>
  void emplace(Args&&... args)
  {
    clear();
    initialize(std::forward<Args>(args)...);
  }
  
  template <class U, class... Args>
  void emplace(initializer_list<U> il, Args&&... args)
  {
    clear();
    initialize<U, Args...>(il, std::forward<Args>(args)...);
  }
  
  // 20.5.4.4, Swap
  void swap(optional<T>& rhs) noexcept(is_nothrow_move_constructible<T>::value && noexcept(swap(declval<T&>(), declval<T&>())))
  {
    if      (initialized() == true  && rhs.initialized() == false) { rhs.initialize(std::move(**this)); clear(); }
    else if (initialized() == false && rhs.initialized() == true)  { initialize(std::move(*rhs)); rhs.clear(); }
    else if (initialized() == true  && rhs.initialized() == true)  { using std::swap; swap(**this, *rhs); }
  }

  // 20.5.4.5, Observers
  
  explicit constexpr operator bool() const noexcept { return initialized(); }
  constexpr bool has_value() const noexcept { return initialized(); }
  
  constexpr T const* operator ->() const {
    return TR2_OPTIONAL_ASSERTED_EXPRESSION(initialized(), dataptr());
  }
  
# if OPTIONAL_HAS_MOVE_ACCESSORS == 1

  OPTIONAL_MUTABLE_CONSTEXPR T* operator ->() {
    CODEPORTING_DEBUG_ASSERT (initialized());
    return dataptr();
  }
  
  constexpr T const& operator *() const& {
    return TR2_OPTIONAL_ASSERTED_EXPRESSION(initialized(), contained_val());
  }
  
  OPTIONAL_MUTABLE_CONSTEXPR T& operator *() & {
    CODEPORTING_DEBUG_ASSERT (initialized());
    return contained_val();
  }
  
  OPTIONAL_MUTABLE_CONSTEXPR T&& operator *() && {
    CODEPORTING_DEBUG_ASSERT (initialized());
    return std::move(contained_val());
  }

  constexpr T const& value() const& {
    return initialized() ? contained_val() : (throw bad_optional_access("bad optional access"), contained_val());
  }
  
  OPTIONAL_MUTABLE_CONSTEXPR T& value() & {
    return initialized() ? contained_val() : (throw bad_optional_access("bad optional access"), contained_val());
  }
  
  OPTIONAL_MUTABLE_CONSTEXPR T&& value() && {
    if (!initialized()) throw bad_optional_access("bad optional access");
	return std::move(contained_val());
  }
  
# else

  T* operator ->() {
    CODEPORTING_DEBUG_ASSERT (initialized());
    return dataptr();
  }
  
  constexpr T const& operator *() const {
    return TR2_OPTIONAL_ASSERTED_EXPRESSION(initialized(), contained_val());
  }
  
  T& operator *() {
    CODEPORTING_DEBUG_ASSERT (initialized());
    return contained_val();
  }
  
  constexpr T const& value() const {
    return initialized() ? contained_val() : (throw bad_optional_access("bad optional access"), contained_val());
  }
  
  T& value() {
    return initialized() ? contained_val() : (throw bad_optional_access("bad optional access"), contained_val());
  }
  
# endif
  
# if OPTIONAL_HAS_THIS_RVALUE_REFS == 1

  template <class V>
  constexpr T value_or(V&& v) const&
  {
    return *this ? **this : detail_::convert<T>(std::forward<V>(v));
  }
  
#   if OPTIONAL_HAS_MOVE_ACCESSORS == 1

  template <class V>
  OPTIONAL_MUTABLE_CONSTEXPR T value_or(V&& v) &&
  {
    return *this ? std::move(const_cast<optional<T>&>(*this).contained_val()) : detail_::convert<T>(std::forward<V>(v));
  }

#   else
 
  template <class V>
  T value_or(V&& v) &&
  {
    return *this ? std::move(const_cast<optional<T>&>(*this).contained_val()) : detail_::convert<T>(std::forward<V>(v));
  }
  
#   endif
  
# else
  
  template <class V>
  constexpr T value_or(V&& v) const
  {
    return *this ? **this : detail_::convert<T>(std::forward<V>(v));
  }

# endif

  // 20.6.3.6, modifiers
  void reset() noexcept { clear(); }
};


template <class T>
class optional<T&>
{
  static_assert( !std::is_same<T, nullopt_t>::value, "bad T" );
  static_assert( !std::is_same<T, in_place_t>::value, "bad T" );
  T* ref;
  
public:

  // 20.5.5.1, construction/destruction
  constexpr optional() noexcept : ref(nullptr) {}
  
  constexpr optional(nullopt_t) noexcept : ref(nullptr) {}
   
  constexpr optional(T& v) noexcept : ref(detail_::static_addressof(v)) {}
  
  optional(T&&) = delete;
  
  constexpr optional(const optional& rhs) noexcept : ref(rhs.ref) {}
  
  explicit constexpr optional(in_place_t, T& v) noexcept : ref(detail_::static_addressof(v)) {}
  
  explicit optional(in_place_t, T&&) = delete;
  
  ~optional() = default;
  
  // 20.5.5.2, mutation
  optional& operator=(nullopt_t) noexcept {
    ref = nullptr;
    return *this;
  }
  
  template <typename U>
  auto operator=(U&& rhs) noexcept
  -> typename enable_if
  <
    is_same<typename decay<U>::type, optional<T&>>::value,
    optional&
  >::type
  {
    ref = rhs.ref;
    return *this;
  }
  
  template <typename U>
  auto operator=(U&& rhs) noexcept
  -> typename enable_if
  <
    !is_same<typename decay<U>::type, optional<T&>>::value,
    optional&
  >::type
  = delete;
  
  void emplace(T& v) noexcept {
    ref = detail_::static_addressof(v);
  }
  
  void emplace(T&&) = delete;
  
  
  void swap(optional<T&>& rhs) noexcept
  {
    std::swap(ref, rhs.ref);
  }
    
  // 20.5.5.3, observers
  constexpr T* operator->() const {
    return TR2_OPTIONAL_ASSERTED_EXPRESSION(ref, ref);
  }
  
  constexpr T& operator*() const {
    return TR2_OPTIONAL_ASSERTED_EXPRESSION(ref, *ref);
  }
  
  constexpr T& value() const {
    return ref ? *ref : (throw bad_optional_access("bad optional access"), *ref);
  }
  
  explicit constexpr operator bool() const noexcept {
    return ref != nullptr;
  }
 
  constexpr bool has_value() const noexcept {
    return ref != nullptr;
  }
  
  template <class V>
  constexpr typename decay<T>::type value_or(V&& v) const
  {
    return *this ? **this : detail_::convert<typename decay<T>::type>(std::forward<V>(v));
  }

  // x.x.x.x, modifiers
  void reset() noexcept { ref = nullptr; }
};


template <class T>
class optional<T&&>
{
  static_assert( sizeof(T) == 0, "optional rvalue references disallowed" );
};


// 20.5.8, Relational operators
template <class T> constexpr bool operator==(const optional<T>& x, const optional<T>& y)
{
  return bool(x) != bool(y) ? false : bool(x) == false ? true : *x == *y;
}

template <class T> constexpr bool operator!=(const optional<T>& x, const optional<T>& y)
{
  return !(x == y);
}

template <class T> constexpr bool operator<(const optional<T>& x, const optional<T>& y)
{
  return (!y) ? false : (!x) ? true : *x < *y;
}

template <class T> constexpr bool operator>(const optional<T>& x, const optional<T>& y)
{
  return (y < x);
}

template <class T> constexpr bool operator<=(const optional<T>& x, const optional<T>& y)
{
  return !(y < x);
}

template <class T> constexpr bool operator>=(const optional<T>& x, const optional<T>& y)
{
  return !(x < y);
}


// 20.5.9, Comparison with nullopt
template <class T> constexpr bool operator==(const optional<T>& x, nullopt_t) noexcept
{
  return (!x);
}

template <class T> constexpr bool operator==(nullopt_t, const optional<T>& x) noexcept
{
  return (!x);
}

template <class T> constexpr bool operator!=(const optional<T>& x, nullopt_t) noexcept
{
  return bool(x);
}

template <class T> constexpr bool operator!=(nullopt_t, const optional<T>& x) noexcept
{
  return bool(x);
}

template <class T> constexpr bool operator<(const optional<T>&, nullopt_t) noexcept
{
  return false;
}

template <class T> constexpr bool operator<(nullopt_t, const optional<T>& x) noexcept
{
  return bool(x);
}

template <class T> constexpr bool operator<=(const optional<T>& x, nullopt_t) noexcept
{
  return (!x);
}

template <class T> constexpr bool operator<=(nullopt_t, const optional<T>&) noexcept
{
  return true;
}

template <class T> constexpr bool operator>(const optional<T>& x, nullopt_t) noexcept
{
  return bool(x);
}

template <class T> constexpr bool operator>(nullopt_t, const optional<T>&) noexcept
{
  return false;
}

template <class T> constexpr bool operator>=(const optional<T>&, nullopt_t) noexcept
{
  return true;
}

template <class T> constexpr bool operator>=(nullopt_t, const optional<T>& x) noexcept
{
  return (!x);
}



// 20.5.10, Comparison with T
template <class T> constexpr bool operator==(const optional<T>& x, const T& v)
{
  return bool(x) ? *x == v : false;
}

template <class T> constexpr bool operator==(const T& v, const optional<T>& x)
{
  return bool(x) ? v == *x : false;
}

template <class T> constexpr bool operator!=(const optional<T>& x, const T& v)
{
  return bool(x) ? *x != v : true;
}

template <class T> constexpr bool operator!=(const T& v, const optional<T>& x)
{
  return bool(x) ? v != *x : true;
}

template <class T> constexpr bool operator<(const optional<T>& x, const T& v)
{
  return bool(x) ? *x < v : true;
}

template <class T> constexpr bool operator>(const T& v, const optional<T>& x)
{
  return bool(x) ? v > *x : true;
}

template <class T> constexpr bool operator>(const optional<T>& x, const T& v)
{
  return bool(x) ? *x > v : false;
}

template <class T> constexpr bool operator<(const T& v, const optional<T>& x)
{
  return bool(x) ? v < *x : false;
}

template <class T> constexpr bool operator>=(const optional<T>& x, const T& v)
{
  return bool(x) ? *x >= v : false;
}

template <class T> constexpr bool operator<=(const T& v, const optional<T>& x)
{
  return bool(x) ? v <= *x : false;
}

template <class T> constexpr bool operator<=(const optional<T>& x, const T& v)
{
  return bool(x) ? *x <= v : true;
}

template <class T> constexpr bool operator>=(const T& v, const optional<T>& x)
{
  return bool(x) ? v >= *x : true;
}


// Comparison of optional<T&> with T
template <class T> constexpr bool operator==(const optional<T&>& x, const T& v)
{
  return bool(x) ? *x == v : false;
}

template <class T> constexpr bool operator==(const T& v, const optional<T&>& x)
{
  return bool(x) ? v == *x : false;
}

template <class T> constexpr bool operator!=(const optional<T&>& x, const T& v)
{
  return bool(x) ? *x != v : true;
}

template <class T> constexpr bool operator!=(const T& v, const optional<T&>& x)
{
  return bool(x) ? v != *x : true;
}

template <class T> constexpr bool operator<(const optional<T&>& x, const T& v)
{
  return bool(x) ? *x < v : true;
}

template <class T> constexpr bool operator>(const T& v, const optional<T&>& x)
{
  return bool(x) ? v > *x : true;
}

template <class T> constexpr bool operator>(const optional<T&>& x, const T& v)
{
  return bool(x) ? *x > v : false;
}

template <class T> constexpr bool operator<(const T& v, const optional<T&>& x)
{
  return bool(x) ? v < *x : false;
}

template <class T> constexpr bool operator>=(const optional<T&>& x, const T& v)
{
  return bool(x) ? *x >= v : false;
}

template <class T> constexpr bool operator<=(const T& v, const optional<T&>& x)
{
  return bool(x) ? v <= *x : false;
}

template <class T> constexpr bool operator<=(const optional<T&>& x, const T& v)
{
  return bool(x) ? *x <= v : true;
}

template <class T> constexpr bool operator>=(const T& v, const optional<T&>& x)
{
  return bool(x) ? v >= *x : true;
}

// Comparison of optional<T const&> with T
template <class T> constexpr bool operator==(const optional<const T&>& x, const T& v)
{
  return bool(x) ? *x == v : false;
}

template <class T> constexpr bool operator==(const T& v, const optional<const T&>& x)
{
  return bool(x) ? v == *x : false;
}

template <class T> constexpr bool operator!=(const optional<const T&>& x, const T& v)
{
  return bool(x) ? *x != v : true;
}

template <class T> constexpr bool operator!=(const T& v, const optional<const T&>& x)
{
  return bool(x) ? v != *x : true;
}

template <class T> constexpr bool operator<(const optional<const T&>& x, const T& v)
{
  return bool(x) ? *x < v : true;
}

template <class T> constexpr bool operator>(const T& v, const optional<const T&>& x)
{
  return bool(x) ? v > *x : true;
}

template <class T> constexpr bool operator>(const optional<const T&>& x, const T& v)
{
  return bool(x) ? *x > v : false;
}

template <class T> constexpr bool operator<(const T& v, const optional<const T&>& x)
{
  return bool(x) ? v < *x : false;
}

template <class T> constexpr bool operator>=(const optional<const T&>& x, const T& v)
{
  return bool(x) ? *x >= v : false;
}

template <class T> constexpr bool operator<=(const T& v, const optional<const T&>& x)
{
  return bool(x) ? v <= *x : false;
}

template <class T> constexpr bool operator<=(const optional<const T&>& x, const T& v)
{
  return bool(x) ? *x <= v : true;
}

template <class T> constexpr bool operator>=(const T& v, const optional<const T&>& x)
{
  return bool(x) ? v >= *x : true;
}


// 20.5.12, Specialized algorithms
template <class T>
void swap(optional<T>& x, optional<T>& y) noexcept(noexcept(x.swap(y)))
{
  x.swap(y);
}


template <class T>
constexpr optional<typename decay<T>::type> make_optional(T&& v)
{
  return optional<typename decay<T>::type>(std::forward<T>(v));
}

template <class X>
constexpr optional<X&> make_optional(reference_wrapper<X> v)
{
  return optional<X&>(v.get());
}


} // namespace experimental
} // namespace std

#undef TR2_OPTIONAL_REQUIRES
#undef TR2_OPTIONAL_ASSERTED_EXPRESSION
