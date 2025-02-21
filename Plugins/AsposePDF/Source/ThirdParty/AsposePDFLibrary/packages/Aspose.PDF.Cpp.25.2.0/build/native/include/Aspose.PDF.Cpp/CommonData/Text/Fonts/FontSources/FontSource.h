#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

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
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Fonts
{
class FontRegistry;
} // namespace Fonts
} // namespace Text
} // namespace CommonData
} // namespace Engine
class HtmlConverter;
namespace Tests
{
namespace Fonts
{
class FontSourceTests;
} // namespace Fonts
} // namespace Tests
namespace Text
{
class TextAnalyzer;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a base class fot font source.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FontSource : public virtual System::Object
{
    typedef FontSource ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::FontRegistry;
    friend class Aspose::Pdf::HtmlConverter;
    friend class Aspose::Pdf::Text::TextAnalyzer;
    friend class Aspose::Pdf::Tests::Fonts::FontSourceTests;
    
protected:

    FontSource();
    
    virtual System::ArrayPtr<System::SharedPtr<Aspose::Font::Sources::FontDefinition>> GetFontDefinitions() = 0;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


