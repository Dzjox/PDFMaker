#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

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
class Document;
namespace Engine
{
namespace CommonData
{
namespace PageContent
{
namespace Operators
{
namespace TextShowing
{
class ShowTextBase;
} // namespace TextShowing
} // namespace Operators
} // namespace PageContent
namespace Text
{
namespace Encoding
{
namespace PdfFontEncoding
{
class Type1PdfFontEncoding;
} // namespace PdfFontEncoding
} // namespace Encoding
namespace Fonts
{
class PdfFont;
namespace Substitution
{
class FontSubstitutor;
} // namespace Substitution
} // namespace Fonts
} // namespace Text
} // namespace CommonData
namespace IO
{
namespace ConvertStrategies
{
class PdfAConvertStrategyBase;
class PdfConvertStrategy;
class PdfUaConvertStrategy;
class PdfXConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
namespace Presentation
{
namespace APSImpl
{
class APSPresenter;
} // namespace APSImpl
namespace GDIImpl
{
class GdiPresenter;
} // namespace GDIImpl
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a base class fot font substitution strategies.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FontSubstitution : public System::Object
{
    typedef FontSubstitution ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextBase;
    friend class Aspose::Pdf::Engine::CommonData::Text::Encoding::PdfFontEncoding::Type1PdfFontEncoding;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::PdfFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Substitution::FontSubstitutor;
    friend class Aspose::Pdf::Engine::Presentation::APSImpl::APSPresenter;
    friend class Aspose::Pdf::Engine::Presentation::GDIImpl::GdiPresenter;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    
protected:

    const System::SharedPtr<Aspose::Font::Sources::FontDefinition>& get_SubstitutionFontDefinition() const;
    void set_SubstitutionFontDefinition(System::SharedPtr<Aspose::Font::Sources::FontDefinition> value);
    
    FontSubstitution();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontSubstitution, CODEPORTING_ARGS());
    /// <summary>
    /// Returns unicode substitution
    /// </summary>
    /// <param name="unicode"></param>
    /// <returns></returns>
    virtual ASPOSE_PDF_SHARED_API char16_t GetSubstitutedUnicode(char16_t unicode);
    
private:

    System::SharedPtr<Aspose::Font::Sources::FontDefinition> pr_SubstitutionFontDefinition;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


