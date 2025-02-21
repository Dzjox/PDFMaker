/// @file system/default.h
/// Contains the definition of System::Defualt() function.
#ifndef _aspose_system_default_h_
#define _aspose_system_default_h_

#include "system/boxable_traits.h"
#include "system/shared_ptr.h"
#include "system/object.h"
#include <type_traits>

namespace System {

/// Returns the default-constructed instance of the specified type.
/// @tparam T The type whose instance is returned
template<typename T>
typename std::enable_if<IsExceptionWrapper<T>::value, const T&>::type Default()
{
    static T value = T(nullptr);
    return value;
}

/// Returns the default-constructed instance of the specified type.
/// @tparam T The type whose instance is returned
template <typename T>
typename std::enable_if<!IsExceptionWrapper<T>::value, const T&>::type Default()
{
    static T value = T();
    return value;
}

/// Returns the default-constructed temporary instance of the specified type, which can be placed instead of discarding '_' argument.
/// @tparam T The type whose instance is returned.
template <typename T>
auto Discard()
{
    struct Impl
    {
        operator T&()
        {
            return value;
        }

        T value = Default<T>();
    };

    return Impl();
}

}
#endif
