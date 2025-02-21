#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class SaveFormat;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to PS (PostScript) or EPS format.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PsSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef PsSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets/sets flag that indicates if fonts must be embedded in resulting PS document.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_EmbedFont() const;
    /// <summary>
    /// Gets/sets flag that indicates if fonts must be embedded in resulting PS document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EmbedFont(bool value);
    /// <summary>
    /// Gets/sets type in which fonts must be embedded in resulting PS document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_EmbedFontAs() const;
    /// <summary>
    /// Gets/sets type in which fonts must be embedded in resulting PS document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EmbedFontAs(System::String value);
    
    /// <summary>
    /// Constructor.
    /// </summary>
    ASPOSE_PDF_SHARED_API PsSaveOptions();
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="saveFormat">Save format.</param>
    ASPOSE_PDF_SHARED_API PsSaveOptions(Aspose::Pdf::SaveFormat saveFormat);
    
private:

    bool embedFont;
    System::String embedFontAs;
    
};

} // namespace Pdf
} // namespace Aspose


