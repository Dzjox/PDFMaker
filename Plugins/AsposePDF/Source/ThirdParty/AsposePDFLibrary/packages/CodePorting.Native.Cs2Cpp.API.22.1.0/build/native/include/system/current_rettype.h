/// @file system/current_rettype.h
#pragma once

/// This header is deprecated since 21.12 release, and not used by porter.
/// This header included in library just for compatibility reasons and will be removed later.
/// You shoult avoid usage of CODEPORTING_CURRENT_RETTYPE macro in your code:
/// For System::String and System::SharedPtr<X> types use:
///     const System::String&
///     const System::SharedPtr<X>&
/// For any other known types just use it without macro.
/// For remplate arguments T, use
///     MakeConstRef_t<T>
/// which declared in system/make_const_ref.h

#pragma message("Header system/current_rettype.h is deprecated.")

#define CODEPORTING_ENUMERATION_USES_CONSTREF

#ifdef CODEPORTING_ENUMERATION_USES_CONSTREF
#include <system/make_const_ref.h>
/// The semantics of IEnumerable::get_Current() was changed recently. This macro replaces argument 
/// type "T" with "const T &", if T is a reference type. This is to prevent item's reference copying while 
/// iterating over collections.
#define CODEPORTING_CURRENT_RETTYPE(...) System::MakeConstRef_t<__VA_ARGS__>
#else
/// The semantics of IEnumerable::get_Current() will be changed in the future. For reference types, 
/// the return type will changed from "T" to "const T &"  to prevent item's reference copying while 
/// iterating over collections. This macro were introduced to simplify this transition, making 
/// possible to perform it with one touch. For now, this macro is just a stub, and DOES NOT change
/// its argument type.
#define CODEPORTING_CURRENT_RETTYPE(...) __VA_ARGS__
#endif
