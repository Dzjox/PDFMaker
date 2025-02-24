#pragma once
//Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum_helpers.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Contains a set of flags specifying which access permissions should be granted when the document is opened with 
/// user access.
/// </summary>
enum class PdfAccessPermissions
{
    /// <summary>
    /// Specifies that a user does not have access permissions.
    /// </summary>
    None = 0,
    /// <summary>
    /// Specifies whether a user may print the document (possibly not at the highest quality level, depending on 
    /// whether bit <see cref="PdfAccessPermissions::HighQualityPrint"></see> is also set).
    /// </summary>
    PrintDocument = 4,
    /// <summary>
    /// Specifies whether a user may modify the contents of the document by operations other than those controlled
    /// by bits <see cref="PdfAccessPermissions::AddOrModifyFields"></see>, <see cref="PdfAccessPermissions::FillExistingFields"></see>, <see cref="PdfAccessPermissions::AssembleDocument"></see>.
    /// </summary>
    ModifyContent = 8,
    /// <summary>
    /// Specifies whether a user may copy or otherwise extract text and graphics from the document by operations 
    /// other than that controlled by bit <see cref="PdfAccessPermissions::ExtractTextAndGraphics"></see>.
    /// </summary>
    CopyTextAndGraphics = 16,
    /// <summary>
    /// Specifies whether a user may add or modify text annotations, fill in interactive form fields, and, if bit
    /// <see cref="PdfAccessPermissions::ModifyContent"></see> is also set, create or modify interactive form fields (including signature 
    /// fields).
    /// </summary>
    AddOrModifyFields = 32,
    /// <summary>
    /// Specifies whether a user may fill in existing interactive form fields (including signature fields), even if
    /// bit <see cref="PdfAccessPermissions::AddOrModifyFields"></see> is clear.
    /// </summary>
    FillExistingFields = 256,
    /// <summary>
    /// Specifies whether a user may extract text and graphics in support of accessibility to users with disabilities
    /// or for other purposes.
    /// </summary>
    ExtractTextAndGraphics = 512,
    /// <summary>
    /// Specifies whether a user may assemble the document (insert, rotate, or delete pages and create bookmarks or
    /// thumbnail images), even if bit <see cref="PdfAccessPermissions::ModifyContent"></see> is clear.
    /// </summary>
    AssembleDocument = 1024,
    /// <summary>
    /// Specifies whether a user may print the document to a representation from which a faithful digital copy of
    /// the PDF content could be generated. When this bit is clear (and bit <see cref="PdfAccessPermissions::PrintDocument"></see> is set),
    /// printing is limited to a low-level representation of the appearance, possibly of degraded quality.
    /// </summary>
    HighQualityPrint = 2048
};

/// @cond
DECLARE_ENUM_OPERATORS(Aspose::Slides::Export::PdfAccessPermissions);
DECLARE_USING_GLOBAL_OPERATORS
/// @endcond

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
DECLARE_USING_ENUM_OPERATORS(Aspose::Slides::Export);
template<>
struct EnumMetaInfo<Aspose::Slides::Export::PdfAccessPermissions>
{
    typedef void Flags;
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::PdfAccessPermissions, const char_t*>, 9>& values();
};
/// @endcond



