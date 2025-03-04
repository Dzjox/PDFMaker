/// @file drawing/imaging/image_lock_mode.h
#ifndef _image_lock_mode_h_
#define _image_lock_mode_h_

#include <system/enum_helpers.h>

namespace System {  namespace Drawing { namespace Imaging {
    /// Specifies properties of the region of an image being locked.
    enum class ImageLockMode {
        /// The region is locked only for reading.
        ReadOnly = 0x0001,
        /// The region is locked only for writing.
        WriteOnly = 0x0002,
        /// The region is locked both for reading and writing.
        ReadWrite = ReadOnly | WriteOnly,
        /// The image resides in a user input buffer, access to which is controlled by the user.
        UserInputBuffer = 0x0004,
    };

/// @cond
/// Declaration of template arithmetic operators for values of the ImageLockMode enum type.
DECLARE_ENUM_OPERATORS(System::Drawing::Imaging::ImageLockMode);

/// Import of global operators into current namespace.
DECLARE_USING_GLOBAL_OPERATORS
/// @endcond
}}}
/// Inserts using declaratios for arithmetic operators declared in namespace System::Drawing::Imaging.
DECLARE_USING_ENUM_OPERATORS(System::Drawing::Imaging);  

#endif
