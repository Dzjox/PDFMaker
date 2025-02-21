#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/CommonData/Text/Fonts/FontSources/FontSource.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Font
{
namespace Sources
{
class FontDefinition;
} // namespace Sources
} // namespace Font
namespace Pdf
{
namespace Tests
{
namespace HTML
{
class Pdf2HtmlConverterTests;
} // namespace HTML
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents the folder that contains font files. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FolderFontSource final : public Aspose::Pdf::Text::FontSource
{
    typedef FolderFontSource ThisType;
    typedef Aspose::Pdf::Text::FontSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::HTML::Pdf2HtmlConverterTests;
    
public:

    /// <summary>
    /// Path to the folder that contains font files. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FolderPath() const;
    /// <summary>
    /// Path to the folder that contains font files. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FolderPath(System::String value);
    
    /// <summary> 
    /// Initializes a new instance of <see cref="FolderFontSource"></see> class.
    /// </summary>
    /// <param name="folderPath">Path to the folder.</param>
    ASPOSE_PDF_SHARED_API FolderFontSource(System::String folderPath);
    
    /// <summary>
    /// Check if folder font source objects are equal.
    /// </summary>
    /// <param name="obj">Folder font source object which will be compared.</param>
    /// <returns>True if both objects are folder font sources targeted to the same folder.</returns>
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    
protected:

    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Font::Sources::FontDefinition>> GetFontDefinitions() override;
    
private:

    System::String folderPath;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


