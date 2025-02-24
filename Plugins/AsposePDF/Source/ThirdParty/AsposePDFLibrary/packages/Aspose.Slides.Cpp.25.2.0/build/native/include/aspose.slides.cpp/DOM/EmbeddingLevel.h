#pragma once
//Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum_helpers.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the licensing rights for embedding the font.
/// </summary>
enum class EmbeddingLevel : uint16_t
{
    /// <summary>
    /// Fonts with this setting indicate that they may be embedded and permanently installed on the remote system by an application. 
    /// The user of the remote system acquires the identical rights, obligations and licenses for that font as the original purchaser of the font, 
    /// and is subject to the same end-user license agreement, copyright, design patent, and/or trademark as was the original purchaser.
    /// </summary>
    Installable = 0x0000,
    /// <summary>
    /// Fonts that have only this bit set must not be modified, embedded or exchanged in any manner without first obtaining permission of the legal owner. 
    /// </summary>
    Restricted = 0x0002,
    /// <summary>
    /// When this bit is set, the font may be embedded, and temporarily loaded on the remote system. Documents containing Preview &amp; 
    /// Print fonts must be opened "read-only;" no edits can be applied to the document.
    /// </summary>
    PreviewPrint = 0x0004,
    /// <summary>
    /// When this bit is set, the font may be embedded but must only be installed temporarily on other systems. In contrast to Preview &amp; 
    /// Print fonts, documents containing Editable fonts may be opened for reading, editing is permitted, and changes may be saved.
    /// </summary>
    Editable = 0x0008,
    /// <summary>
    /// When this bit is set, the font may not be subsetted prior to embedding. Other embedding restrictions specified in bits 0-3 and 9 also apply.
    /// </summary>
    NoSubsetting = 0x0100,
    /// <summary>
    /// When this bit is set, only bitmaps contained in the font may be embedded. No outline data may be embedded. If there are no bitmaps available in the font, 
    /// then the font is considered unembeddable and the embedding services will fail.
    /// </summary>
    BitmapOnly = 0x0200
};

/// @cond
DECLARE_ENUM_OPERATORS(Aspose::Slides::EmbeddingLevel);
DECLARE_USING_GLOBAL_OPERATORS
/// @endcond

} // namespace Slides
} // namespace Aspose

/// @cond
DECLARE_USING_ENUM_OPERATORS(Aspose::Slides);
template<>
struct EnumMetaInfo<Aspose::Slides::EmbeddingLevel>
{
    typedef void Flags;
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::EmbeddingLevel, const char_t*>, 6>& values();
};
/// @endcond



