/// @file system/object_ext.h
#pragma once

#include <system/object.h>
#include <system/smart_ptr.h>
#include <system/weak_ptr.h>
#include <system/boxed_enum.h>
#include <system/text/string_builder.h>
#include <system/convert.h>
#include <system/decimal.h>
#include <system/enum.h>
#include <system/nullable.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/get_hash_code.h>
#include <system/int32.h>
#include <system/int64.h>
#include <system/void.h>

#include <initializer_list>
#include <array>
#include <utility>

namespace System { namespace Collections { class IList; } }

namespace System
{

/// Provides static methods that emulate C# Object methods called for non-Object C++ types (strings, numbers, etc.).
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
class ObjectExt
{
public:
    /// Implements typeof() translation.
    /// Overload for smart pointers.
    /// @tparam T Pointer object type.
    /// @param obj Object to get TypeInfo for.
    /// @return Const reference to TypeInfo structure describing the final class of object passed.
    template<typename T>
    static inline typename std::enable_if<IsSmartPtr<T>::value, const System::TypeInfo&>::type GetType(const T& obj)
    {
        return obj->GetType();
    }

    /// Implements typeof() translation.
    /// Overload for structures.
    /// @tparam T Structure type.
    /// @param obj Object to get TypeInfo for.
    /// @return Const reference to TypeInfo structure describing the final class of object passed.
    template<typename T>
    static inline typename std::enable_if<!IsExceptionWrapper<T>::value && !IsSmartPtr<T>::value && !std::is_fundamental<T>::value && !std::is_enum<T>::value && !IsNullable<T>::value, const System::TypeInfo&>::type GetType(const T& obj)
    {
        return obj.GetType();
    }

    /// Implements typeof() translation.
    /// Overload for exceptions.
    /// @tparam T Exception type.
    /// @param obj Object to get TypeInfo for.
    /// @return Const reference to TypeInfo structure describing the final class of object passed.
    template<typename T>
    static inline typename std::enable_if<IsExceptionWrapper<T>::value, const System::TypeInfo&>::type GetType(const T& obj)
    {
        return obj.Get()->GetType();
    }

    /// Implements typeof() translation.
    /// Overload for primitive types.
    /// @tparam T Primitive type.
    /// @param obj IGNORED
    /// @return Const reference to TypeInfo structure describing the type of object passed.
    template<typename T>
    static inline typename std::enable_if<std::is_fundamental<T>::value || std::is_enum<T>::value, const System::TypeInfo&>::type GetType(const T obj)
    {
        return GetType<T>();
    }

    /// Implements typeof() translation.
    /// Overload for Nullable types.
    /// @tparam T Nullable type.
    /// @param obj IGNORED
    /// @return Const reference to TypeInfo structure describing the type of object passed.
    template<typename T>
    static inline typename std::enable_if<IsNullable<T>::value, const System::TypeInfo&>::type GetType(const T obj)
    {
        return GetType<typename T::ValueType>();
    }



    /// Implements typeof() translation.
    /// Overload for primitive types.
    /// @tparam T Primitive type.
    /// @return Const reference to TypeInfo structure describing the type specified.
    template <typename T>
    static inline typename std::enable_if<std::is_fundamental<T>::value && !std::is_enum<T>::value, const System::TypeInfo&>::type GetType()
    {
        return BoxedValue<T>::Type();
    }

    /// Implements typeof() translation.
    /// Overload for enum types.
    /// @tparam T Primitive type.
    /// @return Const reference to TypeInfo structure describing the type specified.
    template <typename T>
    static inline typename std::enable_if<std::is_enum<T>::value, const System::TypeInfo&>::type GetType()
    {
        return BoxedEnum<T>::Type();
    }


    /// Implements typeof() translation.
    /// Overload for structures and pointers.
    /// @tparam T Primitive type.
    /// @return Const reference to TypeInfo structure describing the strcture specified.
    template <typename T>
    static inline typename std::enable_if<(!std::is_fundamental<T>::value && !std::is_enum<T>::value && !IsBoxable<T>::value) || IsExceptionWrapper<T>::value, const System::TypeInfo&>::type GetType()
    {
        return T::Type(); // Works for pointers as well - they redirect Type() call to Pointee_::Type()
    }

    /// Implements typeof() translation.
    /// Overload for Nullable.
    /// @tparam T Nullable type.
    /// @return Const reference to TypeInfo structure describing the strcture specified.
    template <typename T>
    static inline typename std::enable_if<IsNullable<T>::value, const System::TypeInfo&>::type GetType()
    {
        return T::Type(); // Works for pointers as well - they redirect Type() call to Pointee_::Type()
    }


    /// Implements typeof() translation.
    /// Overload for structures and pointers.
    /// @tparam T Primitive type.
    /// @return Const reference to TypeInfo structure describing the strcture specified or pointee type if called for SmartPtr.
    template <typename T>
    static inline typename std::enable_if<!std::is_fundamental<T>::value && !std::is_enum<T>::value && IsBoxable<T>::value && !IsNullable<T>::value && !IsExceptionWrapper<T>::value, const System::TypeInfo&>::type GetType()
    {
        return BoxedValue<T>::Type(); // Works for pointers as well - they redirect Type() call to Pointee_::Type()
    }

    /// Implements typeof() translation.
    /// Overload for string type.
    /// @tparam T Primitive type.
    /// @return Const reference to TypeInfo structure describing String type.
    static inline const System::TypeInfo& GetType(const String& obj)
    {
        ASPOSE_UNUSED(obj);
        return System::String::Type();
    }

    /// Implements GetHashCode() calls; works on both Object subclasses and unrelated types.
    /// @tparam T Type to calculate hash code for.
    /// @param obj Object to calculate hash code for.
    /// @return Hash code calculated for object passed.
    template <typename T>
    static int GetHashCode(const T& obj)
    {
        return System::GetHashCode<T>(obj);
    }

    template<typename T, typename T2>
    static typename std::enable_if<IsExceptionWrapper<T>::value, bool>::type Equals(const T& obj, const T2& another)
    {
        if (obj.IsNull())
            System::Detail::SmartPtrCounter::ThrowNullReferenceException();
        return obj.Equals(another);
    }

    /// Substitution for C# Object.Equals calls working for any type in C++.
    /// Overload for smart pointer types.
    /// @tparam T First object type.
    /// @tparam T2 Second object type.
    /// @param obj First object.
    /// @param another Second object.
    /// @return True if objects are considered equal, false otherwise.
    template<typename T, typename T2>
    static typename std::enable_if<IsSmartPtr<T>::value, bool>::type Equals(const T& obj, const T2& another)
    {
        return obj->Equals(another);
    }

    /// Substitution for C# Object.Equals calls working for any type in C++.
    /// Overload for structure types.
    /// @tparam T First object type.
    /// @tparam T2 Second object type.
    /// @param obj First object.
    /// @param another Second object.
    /// @return True if objects are considered equal, false otherwise.
    template<typename T, typename T2>
    static typename std::enable_if<!IsExceptionWrapper<T>::value && !IsSmartPtr<T>::value && !std::is_scalar<T>::value, bool>::type Equals(T obj, const T2& another)
    {
        return obj.Equals(another);
    }

    /// Substitution for C# Object.Equals calls working for any type in C++.
    /// Overload for scalar types.
    /// @tparam T First object type.
    /// @tparam T2 Second object type.
    /// @param obj First object.
    /// @param another Second object.
    /// @return True if objects are considered equal, false otherwise.
    template<typename T, typename T2>
    static typename std::enable_if<!IsSmartPtr<T>::value && std::is_scalar<T>::value, bool>::type Equals(const T& obj, const T2& another)
    {
        return (obj == another);
    }

    /// Substitution for C# Object.Equals calls working for any type in C++.
    /// Overload for string literal with string comparison.
    /// @tparam N String literal size.
    /// @param obj String literal.
    /// @param another String.
    /// @return True if strings match, false otherwise.
    template<size_t N>
    static bool Equals(const char_t (&obj)[N], String another)
    {
        return another == obj;
    }


    /// Substitution for C# ToString method to work on any C++ type.
    /// @param obj String literal to convert to string.
    /// @return String representation of @p obj.
    static inline String ToString(const char_t * obj)
    {
        return String(obj);
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Nullable type.
    /// @param obj Nullable object to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static inline String ToString(const Nullable<T> & obj)
    {
        return (obj.IsNull() ? u"" : ToString(obj.get_Value()));
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Enum type.
    /// @param obj Enum value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<std::is_enum<T>::value, String>::type ToString(const T& obj)
    {
        String str = Enum<T>::GetName(obj);
        return !str.IsNullOrEmpty() ? str : System::Convert::ToString(static_cast<typename std::underlying_type<T>::type>(obj));
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Smart pointer type.
    /// @param obj SmartPtr value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<IsSmartPtr<T>::value, String>::type ToString(const T& obj)
    {
        return obj->ToString();
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Smart pointer type or ExceptionWrapper.
    /// @param obj Smart pointer or ExceptionWrapper to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<IsSmartPtr<T>::value || std::is_pointer<T>::value || IsExceptionWrapper<T>::value, String>::type ToString(T& obj)
    {
        return obj->ToString();
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Scalar type.
    /// @param obj Scalar value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value && std::is_scalar<T>::value && !std::is_enum<T>::value, String>::type ToString(T& obj)
    {
        return System::Convert::ToString(obj);
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Scalar type.
    /// @param obj Scalar value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value && std::is_scalar<T>::value && !std::is_enum<T>::value, String>::type ToString(T&& obj)
    {
        return System::Convert::ToString(obj);
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Structure type.
    /// @param obj Structure value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<!IsExceptionWrapper<T>::value && !IsSmartPtr<T>::value && !std::is_scalar<T>::value && !IsNullable<T>::value, String>::type ToString(T& obj)
    {
        return obj.ToString();
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Structure type.
    /// @param obj Structure value to convert to string.
    /// @return String representation of @p obj.
    template <typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value && !std::is_scalar<T>::value && !IsNullable<T>::value, String>::type ToString(const T& obj)
    {
        return obj.ToString();
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Scalar type.
    /// @param obj Scalar value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value && !std::is_scalar<T>::value && !IsNullable<T>::value && !std::is_reference<T>::value, String>::type ToString(T&& obj)
    {
        return obj.ToString();
    }

    /// Boxes value types for converting to Object.
    /// Implementation for enum types.
    /// @tparam T Enum type.
    /// @param value Enum value to box.
    /// @return Smart pointer to object keeping boxed value.
    template<typename T>
    static typename std::enable_if<std::is_enum<T>::value, System::SmartPtr<System::Object>>::type Box(const T& value)
    {
        return System::MakeObject<BoxedEnum<T>>(value);
    }

    /// Boxes value types for converting to Object.
    /// Implementation for non-enum types.
    /// @tparam T Value type.
    /// @param value Value to box.
    /// @return Smart pointer to object keeping boxed value.
    template<typename T>
    static typename std::enable_if<!std::is_enum<T>::value && !IsNullable<T>::value, System::SmartPtr<System::Object>>::type Box(const T& value)
    {
        return System::MakeObject<BoxedValue<T>>(value);
    }

    /// Boxes Nullable types for converting to Object.
    /// @tparam T Value type.
    /// @param value Value to box.
    /// @return Smart pointer to object keeping boxed value.
    template<typename T>
    static typename std::enable_if <IsNullable<T>::value, System::SmartPtr<System::Object>>::type Box(const T& value)
    {
        if (value == nullptr)
            return nullptr;

        return System::MakeObject<BoxedValue<typename T::ValueType>>(value.get_Value());
    }

    /// Unboxes value types after converting to Object.
    /// Implementation for enum types.
    /// @tparam T Enum type.
    /// @param obj Object to unbox.
    /// @return Enum value.
    template<typename T>
    static typename std::enable_if<std::is_enum<T>::value, T>::type Unbox(const SmartPtr<Object>& obj)
    {
        using UT = typename std::underlying_type<T>::type;

        if (obj && obj->Is(BoxedEnum<T>::Type()))
        {
            auto boxed = StaticCast<BoxedEnum<T>>(obj);
            return static_cast<T>(boxed->unbox());
        }
        using UT = typename std::underlying_type<T>::type;
        if (obj && obj->Is(ObjectExt::GetType<UT>()))
        {
            auto boxed = StaticCast<BoxedValue<UT>>(obj);
            return static_cast<T>(boxed->unbox());
        }


        throw InvalidCastException();
    }

    /// Unboxes value types after converting to Object.
    /// Implementation for non-enum & non-nullable types.
    /// @tparam T Value type.
    /// @param obj Object to unbox.
    /// @return Unboxed value.
    template<class T>
    static typename std::enable_if<!std::is_enum<T>::value && detail::has_operator_equal<T>::value, T>::type Unbox(const SmartPtr<Object>& obj)
    {
        if (obj)
        {
            if (obj->Is(ObjectExt::GetType<T>()))
            {
                auto boxed = StaticCast<BoxedValue<T>>(obj);
                return boxed->unbox();
            }

            throw InvalidCastException();
        }
        throw NullReferenceException();
    }

    /// Unboxes value types after converting to Object.
    /// Implementation for non-enum & non-nullable types.
    /// @tparam T Value type.
    /// @param obj Object to unbox.
    /// @return Unboxed value.
    template<class T>
    static typename std::enable_if<!std::is_enum<T>::value && !detail::has_operator_equal<T>::value, T>::type Unbox(const SmartPtr<Object>& obj)
    {
            
        if (obj && obj->Is(BoxedValue<T>::Type()))
        {
            auto boxed = StaticCast< BoxedValue<T> >(obj);
            return boxed->unbox();
        }
        
        throw InvalidCastException();
    }

    /// Unboxes enum types to integer.
    /// @tparam T Destination integer type.
    /// @tparam E Source enum type.
    /// @param e Value to unbox.
    /// @return Integer representation of enum.
    template<class T, class E>
    static typename std::enable_if<std::is_enum<E>::value && std::numeric_limits<T>::is_integer, T>::type Unbox(E e)
    {
        return static_cast<T>(e);
    }

    /// Converts enum types.
    /// @tparam T Destination enum type.
    /// @tparam E Source enum type.
    /// @param e Value to unbox.
    /// @return Converted enum value.
    template<class T, class E>
    static typename std::enable_if<std::is_enum<E>::value && std::is_enum<T>::value, T>::type Unbox(E e)
    {
        return static_cast<T>(e);
    }

    /// Unboxes string from boxed value.
    /// @throw Nothing.
    /// @param obj Boxed string value.
    /// @return If @p obj is a boxed string, returns unboxed value, otherwise returns empty string.
    static ASPOSECPP_SHARED_API String UnboxStringSafe(const SmartPtr<Object>& obj);

    /// Unboxes object to nullable type.
    /// @tparam T Destination type.
    /// @param obj Object to unbox.
    /// @param safe If true, return nullptr on failure, otherwise throw InvalidCastException.
    /// @return Unboxed nullable value (could be null).
    template<class T>
    static Nullable<T> UnboxToNullable(const SmartPtr<Object>& obj, bool safe = true)
    {
        if (obj)
        {
            if (obj->Is(ObjectExt::GetType<T>()))
            {
                auto boxed = StaticCast<BoxedValue<T>>(obj);
                return Nullable<T>(boxed->unbox());
            }
        }

        if (!obj || safe)
            return Nullable<T>(nullptr);

        throw InvalidCastException();
    }

    /// Implements 'is' operator translation.
    /// Specialization for pointer types optimized for 'final' classes.
    /// @tparam T Target type.
    /// @tparam U Tested type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T, class U>
    static typename std::enable_if<std::is_convertible<T, Object>::value && std::is_final<T>::value &&
                                   !System::IsBoxable<T>::value && System::IsSmartPtr<U>::value,
        bool>::type Is(const U& obj)
    {
        if (obj == nullptr)
            return false;

        return typeid(*obj.get()) == typeid(T);
    }

    /// Implements 'is' operator translation.
    /// Specialization for pointer types.
    /// @tparam T Target type.
    /// @tparam U Tested type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T, class U>
    static typename std::enable_if<std::is_convertible<T, Object>::value&& !std::is_final<T>::value &&
                                   !System::IsBoxable<T>::value && System::IsSmartPtr<U>::value,
        bool>::type Is(const U& obj)
    {
        if (!obj)
            return false;

        return dynamic_cast<T*>(obj.get()) != nullptr;
    }

    /// Implements 'is' operator translation.
    /// Specialization for value types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T>
    static typename std::enable_if<std::is_convertible<T, Object>::value,
        bool>::type Is(const Object& obj)
    {
        return obj.Is(T::Type());
    }

    /// Implements 'is' operator translation.
    /// Specialization for unconvertible types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return Always returns false as types are unconvertible.
    template<class T>
    static typename std::enable_if<!std::is_convertible<T, Object>::value,
        bool>::type Is(const Object& obj)
    {
        return false;
    }

    /// Implements 'is' operator translation.
    /// Specialization for pointer types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T, class U>
    static typename std::enable_if<IsSmartPtr<T>::value, bool>::type Is(const SmartPtr<U>& obj)
    {
        if (!obj)
            return false;

        return dynamic_cast<typename T::Pointee_*>(obj.get()) != nullptr;
    }

    /// Implements 'is' operator translation.
    /// Specialization for exception wrapper types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T, class U>
    static typename std::enable_if<IsExceptionWrapper<T>::value, bool>::type Is(const ExceptionWrapper<U>& obj)
    {
        if (obj == nullptr)
            return false;

        return Is<SmartPtr<typename T::ExceptionType>>(obj.Get());
    }

    /// Implements 'is' operator translation.
    /// Specialization for nullable types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T>
    static typename std::enable_if<IsNullable<T>::value, bool>::type Is(const SmartPtr<Object>& obj)
    {
        if (!obj)
            return false;

        if (obj->Is(System::ObjectExt::GetType<typename T::ValueType>()))
            return true;

        return false;
    }

    /// Implements 'is' operator translation.
    /// Specialization for boxable types with == operator defined.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T>
    static typename std::enable_if<
        System::IsBoxable<T>::value && !IsNullable<T>::value && !std::is_enum<T>::value && detail::has_operator_equal<T>::value,
        bool
    >::type Is(const SmartPtr<Object>& obj)
    {
        if (!obj)
            return false;

        if (obj->Is(System::ObjectExt::GetType<T>()))
        {
            return true;
        }

        if (obj->Is(Nullable<T>::Type()))
        {
            auto boxed = StaticCast<BoxedValue<Nullable<T>>>(obj);
            return !boxed->unbox().IsNull();
        }

        return false;
    }

    /// Implements 'is' operator translation.
    /// Specialization for boxable types without defined ==.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T>
    static typename std::enable_if<
        System::IsBoxable<T>::value && !IsNullable<T>::value && !std::is_enum<T>::value && !detail::has_operator_equal<T>::value,
        bool
    >::type Is(const SmartPtr<Object>& obj)
    {
        if (!obj)
            return false;

        if (obj->Is(System::BoxedValue<T>::Type()))
        {
            return true;
        }

        return false;
    }

    /// Implements 'is' operator translation.
    /// Specialization for enum types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T>
    static typename std::enable_if<std::is_enum<T>::value, bool>::type Is(const SmartPtr<Object>& obj)
    {
        if (!obj)
            return false;

        if (obj->Is(System::BoxedEnum<T>::Type()))
            return Enum<T>::IsDefined(Unbox<T>(obj));

        return false;
    }

    /// Implements 'is' operator translation.
    /// Specialization for enum types vs weak pointers.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T>
    static typename std::enable_if<std::is_enum<T>::value, bool>::type Is(const WeakPtr<Object>& obj)
    {
        if (!obj)
            return false;

        if (obj->Is(System::BoxedEnum<T>::Type()))
            return Enum<T>::IsDefined(Unbox<T>(obj));

        return false;
    }

    /// Implements 'is' operator translation.
    /// Specialization for Nullable type
    /// @tparam T Target type.
    /// @param value Nullable type.
    /// @return True if 'is' returns true, false otherwise.
    template<class T, class U>
    static bool Is(const Nullable<U>& value)
    {
        if (value == nullptr)
            return false;

        TypeInfo typeU = ObjectExt::GetType<U>();
        TypeInfo typeT = ObjectExt::GetType<T>();
        return typeU == typeT || typeU.IsSubclassOf(typeT);
    }


    /// Checks if object is a boxed value.
    /// @param obj Object to test for being boxed value.
    /// @return True if @p obj is a boxed value, false otherwise.
    static ASPOSECPP_SHARED_API bool IsBoxedValue(const SmartPtr<Object>& obj);

    /// Converts unknown type to Object, handling both smart pointer type and value type situations.
    /// @tparam T Type to convert to Object.
    /// @param obj Object to convert.
    /// @return Smart pointer to Object being either converted pointer or boxed value.
    template<typename T>
    static typename std::enable_if<IsSmartPtr<T>::value, System::SmartPtr<Object> >::type UnknownToObject(T obj)
    {
        return System::StaticCast<System::Object>(obj);
    }

    /// Converts unknown type to Object, handling both smart pointer type and value type situations.
    /// @tparam T Type to convert to Object.
    /// @param obj Object to convert.
    /// @return Smart pointer to Object being either converted pointer or boxed value.
    template<typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value, System::SmartPtr<Object> >::type UnknownToObject(const T& obj)
    {
        return Box<T>(obj);
    }

    /// Converts Object to unknown type, handling both smart pointer type and bpxed value situations.
    /// @tparam T Type to convert Object to.
    /// @param obj Object to convert.
    /// @return Either unboxed value or converted pointer.
    template<typename T>
    static typename std::enable_if<IsSmartPtr<T>::value, T>::type ObjectToUnknown(SmartPtr<Object> obj)
    {
        return System::StaticCast<typename T::Pointee_>(obj);
    }

    /// Converts Object to unknown type, handling both smart pointer type and boxed value situations.
    /// @tparam T Type to convert Object to.
    /// @param obj Object to convert.
    /// @return Either unboxed value or converted pointer.
    template<typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value, T>::type ObjectToUnknown(SmartPtr<Object> obj)
    {
        return System::ObjectExt::Unbox<T>(obj);
    }
        
    /// Checks whether unknown type object is nullptr.
    /// Overload for non-scalar types.
    /// @tparam T Object type.
    /// @param obj Object to check.
    /// @return True if 'obj == nullptr' is true, false otherwise. 
    template<typename T>
    static typename std::enable_if<!std::is_scalar<T>::value, bool>::type UnknownIsNull(T obj)
    {
        return obj == nullptr;
    }

    /// Checks whether unknown type object is nullptr.
    /// Overload for scalar types.
    /// @tparam T Object type.
    /// @param obj Object to check.
    /// @return Always returns false.
    template<typename T>
    static typename std::enable_if<std::is_scalar<T>::value, bool>::type UnknownIsNull(T obj)
    {
        return false;
    }
    
    /// Implementation of '?' operator translation for non-nullable types.
    /// @tparam T0 LHS value type.
    /// @tparam T1 Type of lambda encapsulating RHS expression.
    /// @param value LHS value.
    /// @param func RHS expression.
    /// @return If LHS value is not null, returns LHS, otherwise calculates RHS expression and returns result.
    template<typename T0, typename T1>
    static T0 Coalesce(T0 value, T1 func)
    {
        return value != nullptr ? value : func();
    }

    /// Implementation of '?' operator translation for nullable types.
    /// @tparam T0 LHS value type.
    /// @tparam T1 Type of lambda encapsulating RHS expression.
    /// @param value LHS value.
    /// @param func RHS expression.
    /// @return If LHS value is not null, returns LHS, otherwise calculates RHS expression and returns result.
    template<typename T0, typename T1>
    static T0 Coalesce(System::Nullable<T0> value, T1 func)
    {
        return !value.IsNull() ? value.get_Value() : func();
    }

    /// Boxes enum types for being propagated as Object.
    /// @tparam T Enum type to box.
    /// @param enumValue Enum value to box.
    /// @return Boxed enum value.
    template<typename T>
    static SmartPtr<System::BoxedValueBase> BoxEnum(T enumValue)
    {
        return SmartPtr<System::BoxedValueBase>(new System::BoxedEnum<T>(enumValue));
    }
    
    /// Converts array fundamental values (which C# does implicitly but C++ apparently does not).
    /// @tparam To Target type.
    /// @tparam From Source types.
    /// @param args Values to convert and push to target array.
    /// @return Array containing converted copies of all arguments in the same order.
    template<typename To, typename ...From>
    static typename std::enable_if<(std::is_fundamental<To>::value), std::array<To, sizeof...(From)>>::type ArrayInitializerCast(From ...args)
    {
        return std::array<To, sizeof...(From)>({ static_cast<To>(args)... });
    }

    static ASPOSECPP_SHARED_API SmartPtr<System::Collections::IList> CastToIList(const SmartPtr<Object>& obj);

    template<typename T>
    static typename std::enable_if<System::IsBoxable<T>::value, System::SharedPtr<System::Object>>::type ExplicitCastToObject(const T& value)
    {
        return ObjectExt::Box(value);
    }

    template<typename T>
    static typename std::enable_if<System::IsSmartPtr<T>::value, System::SharedPtr<System::Object>>::type ExplicitCastToObject(const T& value)
    {
        return value;
    }
};

/// Emulates C#-style floating point comparison where two NaNs are considered equal even though according to IEC 60559:1989 NaN is not equal to any value,
/// including NaN.
/// @param obj LHS floating point value.
/// @param another RHS floating point value.
/// @return True if @p obj and @p another are both NaN or equal, false otherwise.
template<>
inline bool ObjectExt::Equals<float, float>(const float& obj, const float& another)
{
    return (std::isnan(obj) && std::isnan(another)) ? true : obj == another;
}

/// Emulates C#-style floating point comparison where two NaNs are considered equal even though according to IEC 60559:1989 NaN is not equal to any value,
/// including NaN.
/// @param obj LHS floating point value.
/// @param another RHS floating point value.
/// @return True if @p obj and @p another are both NaN or equal, false otherwise.
template<>
inline bool ObjectExt::Equals<double, double>(const double& obj, const double& another)
{
    return (std::isnan(obj) && std::isnan(another)) ? true : obj == another;
}

/// Boxes string values.
/// @param value Value to box.
/// @return Boxed value or null, if source string is null.
template<>
inline SmartPtr<Object> ObjectExt::Box<String>(const String& value)
{
    return value.IsNull() ? nullptr : MakeObject<BoxedValue<String>>(value);
}

/// Unboxes string values.
/// @param obj Object to unbox
/// @return String representation of boxed string, can be null if boxed string was null.
template<>
inline String ObjectExt::Unbox<String>(const SmartPtr<Object>& obj)
{
    if (obj == nullptr)
        return String();

    if (obj && obj->Is(String::Type()))
    {
        auto boxed = StaticCast< BoxedValue<String> >(obj);
        return boxed->unbox();
    }

    throw InvalidCastException();
}

/// Implements typeof() translation.
/// Overload for uint8_t.
template <>
inline const System::TypeInfo& ObjectExt::GetType<uint8_t>()
{
    return System::Byte::Type();
}

/// Implements typeof() translation.
/// Overload for char16_t
template <>
inline const System::TypeInfo& ObjectExt::GetType<char16_t>()
{
    return System::Char::Type();
}

/// Implements typeof() translation.
/// Overload for int32_t
template <>
inline const System::TypeInfo& ObjectExt::GetType<int32_t>()
{
    return System::Int32::Type();
}

/// Implements typeof() translation.
/// Overload for int64_t
template <>
inline const System::TypeInfo& ObjectExt::GetType<int64_t>()
{
    return System::Int64::Type();
}

/// Implements typeof() translation.
/// Overload for bool
template <>
inline const System::TypeInfo& ObjectExt::GetType<bool>()
{
    return System::Boolean::Type();
}

/// Implements typeof() translation.
/// Overload for String
template <>
inline const System::TypeInfo& ObjectExt::GetType<System::String>()
{
    return System::String::Type();
}

/// Implements typeof() translation.
/// Overload for DateTime
template <>
inline const System::TypeInfo& ObjectExt::GetType<System::DateTime>()
{
    return System::DateTime::Type();
}

/// Implements typeof() translation.
/// Overload for Void
template <>
inline const System::TypeInfo& ObjectExt::GetType<void>()
{
    return System::Void::Type();
}

} // namespace System

#include "system/boxed_value_impl.h"
