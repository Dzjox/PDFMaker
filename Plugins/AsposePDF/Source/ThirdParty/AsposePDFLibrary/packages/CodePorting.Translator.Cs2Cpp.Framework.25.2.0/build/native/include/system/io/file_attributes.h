/// @file system/io/file_attributes.h
#ifndef _FileAttributes_h_
#define _FileAttributes_h_
#include <system/enum_helpers.h>

namespace System { namespace IO {
    /// Represents attributes of a directory or a file.
    enum class FileAttributes
    {
        /// The filesystem entity is a candidate for removal or backup. 
        Archive = 0x00020,
        /// The filesystem entity is compressed.
        Compressed = 0x00800,
        /// Not used.
        Device = 0x00040, // Reserved for future use (NOT the w32 value).
        /// The filesystem entity is a directory.
        Directory = 0x00010,
        /// The filesystem entity is encrypted.
        Encrypted = 0x04000, // NOT the w32 value
        /// The filesystem entity is hidden.
        Hidden = 0x00002,
        /// The filesystem entity contains data integrity support.
        IntegrityStream = 0x8000,
        /// The filesystem entity is a file that has no special attributes.
        Normal = 0x00080,
        /// The filesystem entity will not be indexed by the content indexing service.
        NotContentIndexed = 0x02000,
        /// The filesystem entity is not included in the data integrity scan.
        NoScrubData = 0x20000,
        /// The filesystem entity is offline and its data is not immediately available.
        Offline = 0x01000,
        /// The filesystem entity is read-only.
        ReadOnly = 0x00001,
        /// The filesystem entity is a file that contains a reparse point.
        ReparsePoint = 0x00400, 
        /// The filesystem entity is a sparse file.
        SparseFile = 0x00200,
        /// The filesystem entity is a system file.
        System = 0x00004,
        /// The filesystem entity is a temporary file.
        Temporary = 0x00100,
        /// Invalid value.
        Invalid = 0
    };

    /// @cond
    /// Declaration of template arithmetic operators for values of the FileAttributes enum type.
    DECLARE_ENUM_OPERATORS(System::IO::FileAttributes);
    /// Import of global operators into current namespace.
    DECLARE_USING_GLOBAL_OPERATORS
    /// @endcond
}} // namespace System::IO

/// Inserts using declaratios for arithmetic operators declared in namespace System::IO.
DECLARE_USING_ENUM_OPERATORS(System::IO);

#endif
