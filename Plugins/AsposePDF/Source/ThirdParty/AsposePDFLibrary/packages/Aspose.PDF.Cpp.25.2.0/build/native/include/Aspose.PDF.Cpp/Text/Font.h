#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/eventhandler.h>

#include "Aspose.PDF.Cpp/Text/Interfaces/IFontOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Font
{
class IFont;
} // namespace Font
namespace Pdf
{
namespace Annotations
{
class ColorBarAnnotation;
class PageInformationAnnotation;
class RedactionAnnotation;
class WatermarkAnnotation;
class WidgetAnnotation;
} // namespace Annotations
class ApsToPdfConverter;
class Artifact;
class Document;
namespace Engine
{
namespace CommonData
{
namespace PageContent
{
namespace Operators
{
namespace OperatorHelpers
{
class ShowTextFontResolver;
} // namespace OperatorHelpers
} // namespace Operators
} // namespace PageContent
namespace Text
{
namespace Fonts
{
class IPdfFont;
class OpenTypeLayoutFont;
namespace Substitution
{
class FontSubstitutor;
} // namespace Substitution
namespace Utilities
{
class DocumentCIDType2FontContentUpdater;
class DocumentFontsCollector;
class FontUtilities;
} // namespace Utilities
} // namespace Fonts
namespace Segmenting
{
class TextSegmentBuilder;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
namespace ConvertHelpers
{
class LowLevelFontSubstitutor;
} // namespace ConvertHelpers
class PdfAConvertStrategyBase;
class PdfUaConvertStrategy;
class TransparentContentRemoval;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
namespace Facades
{
class Form;
class FormattedText;
} // namespace Facades
namespace Forms
{
class ButtonField;
class C128Barcode;
class ListBoxField;
class TextModel;
} // namespace Forms
class Heading;
class HtmlFragment;
namespace Operators
{
class ShowText;
} // namespace Operators
class PageGenerator;
namespace PageModel
{
class TextElement;
} // namespace PageModel
namespace src
{
namespace CommonData
{
namespace Text
{
namespace Fonts
{
namespace Substitution
{
namespace FontChoosingStrategies
{
class TryToFindFontByAnalyzingText;
} // namespace FontChoosingStrategies
} // namespace Substitution
} // namespace Fonts
} // namespace Text
} // namespace CommonData
} // namespace src
namespace Tests
{
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
class TextShowingTests;
} // namespace TextShowing
} // namespace Operators
} // namespace PageContent
namespace Text
{
namespace Fonts
{
class FontSubstitutorTests;
} // namespace Fonts
} // namespace Text
} // namespace CommonData
} // namespace Engine
namespace Facades
{
class DomFormTests;
} // namespace Facades
namespace Fonts
{
class FontRepositoryTests;
class FontTests;
class Resources_ViewFont_Tests;
} // namespace Fonts
namespace Markdown
{
class MarkdownToPDFTests;
} // namespace Markdown
class RegressionTests_v10_2;
class RegressionTests_v10_3;
class RegressionTests_v10_4;
class RegressionTests_v10_8;
class RegressionTests_v17_10;
class RegressionTests_v17_11;
class RegressionTests_v17_12;
class RegressionTests_v17_5;
class RegressionTests_v18_6;
class RegressionTests_v22_06;
class RegressionTests_v23_12;
class RegressionTests_v24_02;
class RegressionTests_v24_07;
class RegressionTests_v24_08;
class RegressionTests_v24_10;
class RegressionTests_v6_9;
class RegressionTests_v7_0;
class RegressionTests_v7_1;
class RegressionTests_v7_3;
class RegressionTests_v7_4;
class RegressionTests_v7_5;
class RegressionTests_v7_7;
class RegressionTests_v7_8;
class RegressionTests_v7_9;
class RegressionTests_v8_4;
class RegressionTests_v9_0;
class RegressionTests_v9_3;
class RegressionTests_v9_6;
class RegressionTests_v9_8;
class TestBase;
namespace Text
{
class TextFragmentTests;
class TextSegmentTests;
} // namespace Text
class XpsToPdfConverterTests;
} // namespace Tests
namespace Text
{
class FontAbsorber;
class FontCleanup;
class FontCollection;
class FontRepository;
class FontSubstitutionRegistrator;
class TextAnalyzer;
class TextParagraph;
class TextState;
} // namespace Text
class TextBoxFieldXfa;
class TextStamp;
class XfaToPdfConverter;
} // namespace Pdf
namespace XfaRenderer
{
namespace Core
{
class XfaFontCash;
class XfaPdfFont;
} // namespace Core
} // namespace XfaRenderer
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents font object.
/// </summary>
/// <example>
/// </example>
/// <seealso cref="TextFragmentAbsorber"></seealso>
/// <seealso cref="FontRepository"></seealso>
/// <seealso cref="Document"></seealso>
class ASPOSE_PDF_SHARED_CLASS Font final : public System::Object
{
    typedef Font ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::OperatorHelpers::ShowTextFontResolver;
    friend class Aspose::Pdf::Text::FontSubstitutionRegistrator;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::OpenTypeLayoutFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsCollector;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontUtilities;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::HtmlFragment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Substitution::FontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Text::FontCleanup;
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Text::FontAbsorber;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormattedText;
    friend class Aspose::Pdf::Annotations::ColorBarAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::C128Barcode;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Operators::ShowText;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Text::TextAnalyzer;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::FontCollection;
    friend class Aspose::Pdf::Text::FontRepository;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::XfaRenderer::Core::XfaFontCash;
    friend class Aspose::XfaRenderer::Core::XfaPdfFont;
    friend class Aspose::Pdf::XfaToPdfConverter;
    friend class Aspose::Pdf::TextBoxFieldXfa;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Forms::TextModel;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Annotations::PageInformationAnnotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    friend class Aspose::Pdf::src::CommonData::Text::Fonts::Substitution::FontChoosingStrategies::TryToFindFontByAnalyzingText;
    friend class Aspose::Pdf::Tests::Engine::CommonData::Text::Fonts::FontSubstitutorTests;
    friend class Aspose::Pdf::Tests::Text::TextFragmentTests;
    friend class Aspose::Pdf::Tests::Text::TextSegmentTests;
    friend class Aspose::Pdf::Tests::Facades::DomFormTests;
    friend class Aspose::Pdf::Tests::Fonts::FontRepositoryTests;
    friend class Aspose::Pdf::Tests::Fonts::FontTests;
    friend class Aspose::Pdf::Tests::Fonts::Resources_ViewFont_Tests;
    friend class Aspose::Pdf::Tests::Engine::CommonData::PageContent::Operators::TextShowing::TextShowingTests;
    friend class Aspose::Pdf::Tests::TestBase;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_6;
    friend class Aspose::Pdf::Tests::Markdown::MarkdownToPDFTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_06;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_02;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_08;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_10;
    friend class Aspose::Pdf::Tests::XpsToPdfConverterTests;
    
private:

    class FontOptionsImplementor : public Aspose::Pdf::Text::IFontOptions
    {
        typedef FontOptionsImplementor ThisType;
        typedef Aspose::Pdf::Text::IFontOptions BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Sometimes it's not possible to embed desired font into document. There are many reasons, for example
        /// license restrictions or when desired font was not found on destination computer.
        /// When this situation comes it's not simply to detect, because desired font is embedded via set 
        /// of property flag Font.IsEmbedded = true; Of course it's possible to read this property immediately after it was set but
        /// it's not convenient approach. Flag NotifyAboutFontEmbeddingError manages an exceptions mechanism 
        /// for cases when attempt to embed font became failed. If this flag is set an exception of type
        /// <see cref="Aspose::Pdf::FontEmbeddingException"></see> will be thrown. By default true.
        /// </summary>
        bool get_NotifyAboutFontEmbeddingError() override;
        /// <summary>
        /// Sometimes it's not possible to embed desired font into document. There are many reasons, for example
        /// license restrictions or when desired font was not found on destination computer.
        /// When this situation comes it's not simply to detect, because desired font is embedded via set 
        /// of property flag Font.IsEmbedded = true; Of course it's possible to read this property immediately after it was set but
        /// it's not convenient approach. Flag NotifyAboutFontEmbeddingError manages an exceptions mechanism 
        /// for cases when attempt to embed font became failed. If this flag is set an exception of type
        /// <see cref="Aspose::Pdf::FontEmbeddingException"></see> will be thrown. By default true.
        /// </summary>
        void set_NotifyAboutFontEmbeddingError(bool value) override;
        
        FontOptionsImplementor(System::SharedPtr<Font> parent);
        
    private:
    
        bool _notifyAboutFontEmbeddingError;
        System::WeakPtr<Font> _parent;
        
    };
    
    
public:

    /// <summary>
    /// Gets font name of the <see cref="Font"></see> object.
    /// </summary>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    ASPOSE_PDF_SHARED_API System::String get_FontName() const;
    /// <summary>
    /// Sometimes PDF fonts(usually Chinese/Japanese/Korean fonts) could have specificical font name.
    /// This name is value of PDF font property "BaseFont" and sometimes this property
    /// could be represented in hexademical form. If read this name directly it could be represented
    /// in non-readable form. To get readable form it's necessary to decode font's name by
    /// rules specifical for this font. 
    /// This property returns decoded font name, so use it for cases when you meet 
    /// with a non-readable <see cref="FontName"></see>.
    /// If property <see cref="FontName"></see> has readable form this property will be the same as 
    /// <see cref="FontName"></see>, so you can use this property for any cases when you need to
    /// get font name in a readable form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DecodedFontName();
    /// <summary>        
    /// Gets BaseFont value of PDF font object. Also known as PostScript name of the font.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_BaseFont();
    /// <summary>
    /// Gets a value that indicates whether the font is embedded.
    /// Font based on IFont will automatically be subset and embedded
    /// </summary>
    /// <example>
    /// </example> 
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="FontRepository"></seealso>
    /// <seealso cref="Document"></seealso>
    ASPOSE_PDF_SHARED_API bool get_IsEmbedded() const;
    /// <summary>
    /// Sets a value that indicates whether the font is embedded.
    /// Font based on IFont will automatically be subset and embedded
    /// </summary>
    /// <example>
    /// </example> 
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="FontRepository"></seealso>
    /// <seealso cref="Document"></seealso>
    ASPOSE_PDF_SHARED_API void set_IsEmbedded(bool value);
    /// <summary>
    /// Gets a value that indicates whether the font is a subset.
    /// Font based on IFont will automatically be subset and embedded
    /// </summary>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    ASPOSE_PDF_SHARED_API bool get_IsSubset();
    /// <summary>
    /// Sets a value that indicates whether the font is a subset.
    /// Font based on IFont will automatically be subset and embedded
    /// </summary>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    ASPOSE_PDF_SHARED_API void set_IsSubset(bool value);
    /// <summary>
    /// Gets indicating whether the font is present (installed) in the system.
    /// </summary>
    /// <remarks>
    /// Some operations are not available with fonts that could not be found in the system.
    /// </remarks>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    ASPOSE_PDF_SHARED_API bool get_IsAccessible() const;
    /// <summary>
    /// Useful properties to tune Font behaviour
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<IFontOptions> get_FontOptions();
    
    /// <summary>
    /// An objective of this method - to return description of error if an attempt
    /// to embed font was failed. If there are no error cases it returns empty string. 
    /// </summary>
    /// <returns>Error description</returns>
    ASPOSE_PDF_SHARED_API System::String GetLastFontEmbeddingError();
    /// <summary>
    /// Saves the font into the stream.
    /// Note that the font is saved to intermediate TTF format intended to be used in a converted copy of the original document only.
    /// The font file is not intended to be used outside the original document context.
    /// </summary>
    /// <param name="stream">Stream to save the font.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Measures the string.
    /// </summary>
    /// <param name="str">The string.</param>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Width of the string represented with this font and the specified size.</returns>
    ASPOSE_PDF_SHARED_API double MeasureString(System::String str, float fontSize);
    ASPOSE_PDF_SHARED_API bool CppIsSetTrailerable();
    
protected:

    const System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont>& get_iPdfFont() const;
    void set_iPdfFont(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> value);
    const System::SharedPtr<Aspose::Font::IFont>& get_iFont() const;
    void set_iFont(System::SharedPtr<Aspose::Font::IFont> value);
    /// <summary>
    /// Pdf font object.
    /// </summary>
    /// <remarks>
    /// For internal usage only
    /// </remarks>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> get_IPdfFont();
    /// <summary>
    /// System font object.
    /// </summary>
    /// <remarks>
    /// For internal usage only
    /// </remarks>
    System::SharedPtr<Aspose::Font::IFont> get_IFont();
    System::String get_UniqueId();
    
    System::EventHandler<> FontPropertiesChanged;
    
    Font(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> fontObj);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Font, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> fontObj));
    
    Font(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> iPdfFont);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Font, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> iPdfFont));
    
    Font(System::SharedPtr<Aspose::Font::IFont> font);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Font, CODEPORTING_ARGS(System::SharedPtr<Aspose::Font::IFont> font));
    
    Font(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> iPdfFont);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Font, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> iPdfFont));
    void InitWithIPdfFont(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> iPdfFont);
    System::SharedPtr<Font> Clone();
    
    virtual ASPOSE_PDF_SHARED_API ~Font();
    
private:

    System::String fontName;
    bool isEmbedded;
    bool isSubset;
    bool isAccessible;
    bool isAttached;
    System::String subsetTag;
    System::WeakPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable;
    System::SharedPtr<Font::FontOptionsImplementor> _fontOptions;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> pr_iPdfFont;
    System::SharedPtr<Aspose::Font::IFont> pr_iFont;
    
    System::SharedPtr<Font::FontOptionsImplementor> GetFontOptions();
    bool IsPdfVersion_1_2();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


