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
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents single font file source.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FileFontSource final : public Aspose::Pdf::Text::FontSource
{
    typedef FileFontSource ThisType;
    typedef Aspose::Pdf::Text::FontSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Path to the font file. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FilePath() const;
    /// <summary>
    /// Path to the font file. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FilePath(System::String value);
    
    /// <summary> 
    /// Initializes a new instance of <see cref="FileFontSource"></see> class.
    /// </summary>
    /// <param name="filePath">Path to the font file.</param>
    ASPOSE_PDF_SHARED_API FileFontSource(System::String filePath);
    
    /// <summary>
    /// Check if font file source objects are equal.
    /// </summary>
    /// <param name="obj">Font file source object which will be compared.</param>
    /// <returns>True if both objects are font file sources targeted to the same file.</returns>
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    
protected:

    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Font::Sources::FontDefinition>> GetFontDefinitions() override;
    
private:

    System::String filePath;
    System::ArrayPtr<System::SharedPtr<Aspose::Font::Sources::FontDefinition>> fonts;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


