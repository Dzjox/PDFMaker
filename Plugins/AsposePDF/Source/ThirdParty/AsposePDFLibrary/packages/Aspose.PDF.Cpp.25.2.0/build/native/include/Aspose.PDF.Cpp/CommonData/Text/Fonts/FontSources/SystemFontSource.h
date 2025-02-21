#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

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
/// Represents all fonts installed to the system. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SystemFontSource final : public Aspose::Pdf::Text::FontSource
{
    typedef SystemFontSource ThisType;
    typedef Aspose::Pdf::Text::FontSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary> 
    /// Initializes a new instance of <see cref="SystemFontSource"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API SystemFontSource();
    
    /// <summary>
    /// Check if system font source objects are equal.
    /// </summary>
    /// <param name="obj">System font source object which will be compared.</param>
    /// <returns>True if both objects are system font sources, false otherwise.</returns>
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    
protected:

    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Font::Sources::FontDefinition>> GetFontDefinitions() override;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


