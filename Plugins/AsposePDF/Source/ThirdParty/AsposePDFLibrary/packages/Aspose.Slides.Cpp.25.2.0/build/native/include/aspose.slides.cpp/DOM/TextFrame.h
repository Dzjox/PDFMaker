#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/ITextFrame.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Cells
{
namespace Render
{
namespace Chart2007
{
namespace ChartHelpers
{
class ChartTextHelper;
} // namespace ChartHelpers
} // namespace Chart2007
} // namespace Render
} // namespace Cells
namespace Slides
{
namespace Animation
{
class Sequence;
} // namespace Animation
class AutoShape;
class AutoShapeLayout;
template <typename, typename> class BasePortionFormatEffectiveData;
class BaseSlide;
class BulletFormatImpl;
class Cell;
namespace Charts
{
class ChartTitle;
class ChartTitleRenderContext;
class DataLabel;
class DataLabelFormatImpl;
class DataLabelRenderContext;
class DataLabelTextBase;
class DisplayUnitElement;
class DisplayUnitLabel;
class LegendTextElement;
class TextElementBase;
class TitleElement;
class Trendline;
class TrendlineLabelOverridingTextElement;
class TrendlineRenderContext;
class TrendlineUpCaseTextElement;
class VerticalCategoryAxis;
} // namespace Charts
namespace DOM
{
namespace Xlsx
{
namespace Charts
{
namespace Chart3DNew
{
class Chart3DMeasure;
} // namespace Chart3DNew
} // namespace Charts
} // namespace Xlsx
} // namespace DOM
namespace Drawing
{
class Margin32f;
class RenderContext;
namespace ThreeD
{
class CameraSettingsManager;
class FlatTextRenderer;
class Shape3DBaseSettingsManager;
class ShapeRenderer;
class TextRenderer;
} // namespace ThreeD
} // namespace Drawing
namespace Effects
{
class Drawing2DHelper;
} // namespace Effects
namespace Export
{
class DrawingMLExporter;
namespace FramesStream
{
namespace AnimationPlaying
{
namespace Players
{
class SetEffectPlayer;
} // namespace Players
} // namespace AnimationPlaying
} // namespace FramesStream
class PptxExporter;
class PresentationAnimationsGenerator;
class PrimitiveHtmlFormattingController;
class RenderingFontsInfoMockCanvas;
} // namespace Export
class FindTextFrameResult;
class FloatColor;
class FontsManager;
class GroupShapeLayout;
namespace HtmlIO
{
class HtmlToPptxTextConverter;
} // namespace HtmlIO
class HyperlinkQueries;
class IBaseSlide;
class ICell;
class IFindResultCallback;
class IHyperlinkQueries;
class IMasterSlide;
class IParagraph;
class IParagraphCollection;
class IParagraphFormat;
class IPresentation;
class IPresentationComponent;
class IShape;
class IShapeStyle;
class ISlideComponent;
class ITextFrameFormat;
class ITextHighlightingOptions;
class ITextSearchOptions;
class ITextStyle;
namespace Layout
{
namespace Interfaces
{
class ITextFrameLayout;
} // namespace Interfaces
namespace MathMixed
{
class MathBlocksSplitter;
} // namespace MathMixed
class ParagraphLayout;
class PortionLayout;
class TableLayout;
class TextFrameLayout;
class TextFrameLayoutHelper;
} // namespace Layout
class MasterSlide;
namespace MathText
{
class MathPortion;
} // namespace MathText
namespace OdpSerialization
{
namespace PartParser
{
namespace Animation
{
class AnimBehaviorTargetOdpDeserialization;
} // namespace Animation
class OdpStylesPartParser;
class ParagraphOdpDeserialization;
class ParagraphOdpSerialization;
class ShapeOdpSerialization;
class TextFrameOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class ParagraphCollection;
class ParagraphFormat;
class ParagraphFormatEffectiveData;
class PlaceholderCollection;
enum class PlaceholderType : int8_t;
class PortionFormatEffectiveData;
namespace PptSerialization
{
class BaseSlidePPTSerialization;
class Geometry2DPPTSerialization;
class GroupShapeMetroBlobSerialization;
class PlaceholderPPTSerialization;
class PortionFormatPPTSerialization;
class PptDeserializator;
class PptGroupShapeSerializationContext;
class PptTextFrameDeserializationContext;
class PptTextFrameSerializationContext;
class PresetTextShapePPTSerialization;
class ShapeCollectionPPTSerialization;
class SlidePPTSerialization;
class TablePPTSerialization;
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class AlternateContentPPTXSerialization;
class AutoShapePPTXSerialization;
namespace Chart
{
class FormatPPTXSerialization;
} // namespace Chart
class DrsShapePartParser;
class GroupVmlSerialization;
class TextFramePPTXSerialization;
class TextFrameVmlSerialization;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
class Shape;
class ShapeCollection;
class ShapeLayout;
namespace SmartArt
{
class DataTreeNode;
class DiagramPoint;
class SmartArt;
class SmartArtNode;
class SmartArtShape;
class SmartArtShapeContainer;
class SmartArtShapeLayout;
class TextAlgorithm;
} // namespace SmartArt
class TableCellTextStyle;
class TextFrameFormat;
class TextFrameFormatEffectiveData;
class TextLayout;
class TextStyleEffectiveData;
enum class TextStyleSource;
namespace Util
{
class PresentationInfoProc;
class SlideUtil;
template <typename, typename> class ValueMap;
} // namespace Util
class VentureLicense;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
namespace Text
{
namespace RegularExpressions
{
class Regex;
} // namespace RegularExpressions
} // namespace Text
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a TextFrame.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS TextFrame final : public Aspose::Slides::ITextFrame, public Aspose::Slides::IDOMObject
{
    typedef TextFrame ThisType;
    typedef Aspose::Slides::ITextFrame BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Layout::TextFrameLayoutHelper;
    friend class Aspose::Slides::Layout::MathMixed::MathBlocksSplitter;
    friend class Aspose::Slides::Drawing::ThreeD::CameraSettingsManager;
    friend class Aspose::Slides::Drawing::ThreeD::FlatTextRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::ShapeRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::Shape3DBaseSettingsManager;
    friend class Aspose::Slides::Drawing::ThreeD::TextRenderer;
    friend class Aspose::Slides::Drawing::RenderContext;
    friend class Aspose::Slides::Export::FramesStream::AnimationPlaying::Players::SetEffectPlayer;
    friend class Aspose::Slides::Export::PresentationAnimationsGenerator;
    friend class Aspose::Slides::AutoShapeLayout;
    template<typename FT0, typename FT1> friend class Aspose::Slides::BasePortionFormatEffectiveData;
    friend class Aspose::Slides::ShapeLayout;
    friend class Aspose::Slides::Effects::Drawing2DHelper;
    friend class Aspose::Slides::GroupShapeLayout;
    friend class Aspose::Slides::SmartArt::SmartArtShapeLayout;
    friend class Aspose::Slides::MathText::MathPortion;
    friend class Aspose::Slides::ParagraphFormatEffectiveData;
    friend class Aspose::Slides::PortionFormatEffectiveData;
    friend class Aspose::Slides::Layout::ParagraphLayout;
    friend class Aspose::Slides::Layout::TableLayout;
    friend class Aspose::Slides::Layout::TextFrameLayout;
    friend class Aspose::Slides::Layout::PortionLayout;
    friend class Aspose::Slides::PptxSerialization::PartParser::AlternateContentPPTXSerialization;
    friend class Aspose::Slides::TextFrameFormatEffectiveData;
    friend class Aspose::Slides::BulletFormatImpl;
    friend class Aspose::Slides::SmartArt::DataTreeNode;
    friend class Aspose::Slides::TextStyleEffectiveData;
    friend class Aspose::Slides::Charts::ChartTitle;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::Charts::DataLabelFormatImpl;
    friend class Aspose::Slides::Charts::DisplayUnitLabel;
    friend class Aspose::Slides::Charts::Trendline;
    friend class Aspose::Slides::HtmlIO::HtmlToPptxTextConverter;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::FontsManager;
    friend class Aspose::Slides::Cell;
    friend class Aspose::Slides::Export::DrawingMLExporter;
    friend class Aspose::Slides::Export::RenderingFontsInfoMockCanvas;
    friend class Aspose::Slides::Export::PrimitiveHtmlFormattingController;
    friend class Aspose::Slides::Export::PptxExporter;
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimBehaviorTargetOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptTextFrameDeserializationContext;
    friend class Aspose::Slides::PptSerialization::PptTextFrameSerializationContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupVmlSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::TextFrameVmlSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ParagraphOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ParagraphOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TextFrameOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::OdpStylesPartParser;
    friend class Aspose::Slides::PptSerialization::Geometry2DPPTSerialization;
    friend class Aspose::Slides::PptSerialization::GroupShapeMetroBlobSerialization;
    friend class Aspose::Slides::PptSerialization::PortionFormatPPTSerialization;
    friend class Aspose::Slides::PptSerialization::PresetTextShapePPTSerialization;
    friend class Aspose::Slides::Util::PresentationInfoProc;
    friend class Aspose::Slides::Animation::Sequence;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::ParagraphCollection;
    friend class Aspose::Slides::PlaceholderCollection;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::SmartArt::SmartArtNode;
    friend class Aspose::Slides::SmartArt::SmartArtShape;
    friend class Aspose::Slides::Util::SlideUtil;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DMeasure;
    friend class Aspose::Slides::Charts::DisplayUnitElement;
    friend class Aspose::Slides::Charts::TextElementBase;
    friend class Aspose::Slides::Charts::DataLabelTextBase;
    friend class Aspose::Slides::Charts::TrendlineUpCaseTextElement;
    friend class Aspose::Slides::Charts::TrendlineLabelOverridingTextElement;
    friend class Aspose::Slides::Charts::DataLabelRenderContext;
    friend class Aspose::Slides::Charts::LegendTextElement;
    friend class Aspose::Slides::Charts::TitleElement;
    friend class Aspose::Slides::Charts::VerticalCategoryAxis;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::ChartTextHelper;
    friend class Aspose::Slides::Charts::ChartTitleRenderContext;
    friend class Aspose::Slides::Charts::TrendlineRenderContext;
    friend class Aspose::Slides::SmartArt::TextAlgorithm;
    friend class Aspose::Slides::SmartArt::SmartArtShapeContainer;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::AutoShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::FormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::TextFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptSerialization::BaseSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::PlaceholderPPTSerialization;
    friend class Aspose::Slides::PptSerialization::ShapeCollectionPPTSerialization;
    friend class Aspose::Slides::PptSerialization::SlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TablePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the list of all paragraphs in a frame.
    /// Read-only <see cref="Aspose::Slides::IParagraphCollection">IParagraphCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IParagraphCollection> get_Paragraphs() override;
    /// <summary>
    /// Gets the plain text for a TextFrame.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    ASPOSE_SLIDES_SHARED_API System::String get_Text() override;
    /// <summary>
    /// Sets the plain text for a TextFrame.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    ASPOSE_SLIDES_SHARED_API void set_Text(System::String value) override;
    /// <summary>
    /// Returns the formatting object for this TextFrame object.
    /// Read-only <see cref="Aspose::Slides::ITextFrameFormat">ITextFrameFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrameFormat> get_TextFrameFormat() override;
    /// <summary>
    /// Provides easy access to contained hyperlinks.
    /// Read-only <see cref="Aspose::Slides::IHyperlinkQueries">IHyperlinkQueries</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlinkQueries> get_HyperlinkQueries() override;
    /// <summary>
    /// Returns the parent slide of a TextFrame.
    /// Read-only <see cref="Aspose::Slides::IBaseSlide">IBaseSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a TextFrame.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    /// <summary>
    /// Returns the parent shape or null if the parent object does not implement the IShape interface
    /// Read-only <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    /// <example>
    /// The following code sample shows 
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// System::SharedPtr<AutoShape> autoShape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// ASSERT_TRUE(autoShape->get_TextFrame()->get_ParentShape() == autoShape);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> get_ParentShape() override;
    /// <summary>
    /// Returns the parent cell or null if the parent object does not implement the ICell interface.
    /// Read-only <see cref="Aspose::Slides::ICell">ICell</see>.
    /// </summary>
    /// <example>
    /// The following code sample shows 
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// System::SharedPtr<Table> table = System::ExplicitCast<Table>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// ASSERT_TRUE(table->idx_get(0, 0)->get_TextFrame()->get_ParentCell() == table->idx_get(0, 0));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICell> get_ParentCell() override;
    
    /// <summary>
    /// Joins runs with same formatting in all paragraphs.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void JoinPortionsWithSameFormatting() override;
    /// <summary>
    /// Highlights all matches of the sample text with the specified color.
    /// </summary>
    /// <param name="text">Text sample to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    ASPOSE_SLIDES_SHARED_API void HighlightText(System::String text, System::Drawing::Color highlightColor) override;
    /// @deprecated Use HighlightText(string text, Color highlightColor, ITextSearchOptions options) method instead. The method will be removed after release of version 24.10.
    /// <summary>
    /// Highlights all matches of the sample text with the specified color.
    /// </summary>
    /// <param name="text">The text to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="options">Highlighting options.</param>
    /// <example>
    /// The following sample code shows how to Highlight Text in a TextFrame.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto shape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// // highlighting all words 'important'
    /// shape->get_TextFrame()->HighlightText(u"title", System::Drawing::Color::get_LightBlue());
    /// 
    /// auto textHighlightOptions = System::MakeObject<TextHighlightingOptions>();
    /// textHighlightOptions->set_WholeWordsOnly(true);
    /// 
    /// // highlighting all separate 'the' occurrences
    /// shape->get_TextFrame()->HighlightText(u"to", System::Drawing::Color::get_Violet(), textHighlightOptions);
    /// presentation->Save(u"SomePresentation-out2.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void HighlightText(System::String text, System::Drawing::Color highlightColor, System::SharedPtr<ITextHighlightingOptions> options) override;
    /// <summary>
    /// Highlights all matches of the sample text with the specified color.
    /// </summary>
    /// <param name="text">The text to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="options">Text search options <see cref="Aspose::Slides::ITextSearchOptions">ITextSearchOptions</see>.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="IFindResultCallback"></see>.</param>
    /// <example>
    /// The following code sample shows how to highlight text in a TextFrame.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto shape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// // highlighting all words 'important'
    /// shape->get_TextFrame()->HighlightText(u"important", System::Drawing::Color::get_LightBlue());
    /// 
    /// auto textSearchOptions = System::MakeObject<TextSearchOptions>();
    /// textSearchOptions->set_WholeWordsOnly(true);
    /// 
    /// // highlighting all separate 'the' occurrences
    /// shape->get_TextFrame()->HighlightText(u"the", System::Drawing::Color::get_Violet(), textSearchOptions, nullptr);
    /// presentation->Save(u"SomePresentation-out2.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void HighlightText(System::String text, System::Drawing::Color highlightColor, System::SharedPtr<ITextSearchOptions> options, System::SharedPtr<IFindResultCallback> callback) override;
    /// @deprecated Use HighlightRegex(Regex regex, Color highlightColor, IFindResultCallback callback) method instead. The method will be removed after release of version 24.10.
    /// <summary>
    /// Highlights all matches of the regular expression with the specified color.
    /// </summary>
    /// <param name="regex">Text of regular expression to get text to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="options">Highlighting options.</param>
    /// <example>
    /// The following code sample shows how to highlight text in a TextFrame using a regular expression.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto shape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// auto options = System::MakeObject<TextHighlightingOptions>();
    /// 
    /// // highlighting all words with 10 or more characters
    /// shape->get_TextFrame()->HighlightRegex(u"\\b[^\\s]{10,}\\b", System::Drawing::Color::get_Blue(), options);
    /// presentation->Save(u"SomePresentation-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void HighlightRegex(System::String regex, System::Drawing::Color highlightColor, System::SharedPtr<ITextHighlightingOptions> options) override;
    /// <summary>
    /// Highlights all matches of the regular expression with the specified color.
    /// </summary>
    /// <param name="regex">The regular expression <see cref="System::Text::RegularExpressions::Regex"></see> to get strings to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="IFindResultCallback"></see>.</param>
    /// <example>
    /// The following code sample shows how to highlight text in a TextFrame using a regular expression.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto shape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// auto regex = System::MakeObject<System::Text::RegularExpressions::Regex>(u"\\b[^\\s]{10,}\\b");
    /// // highlighting all words with 10 or more characters
    /// shape->get_TextFrame()->HighlightRegex(regex, System::Drawing::Color::get_Blue(), nullptr);
    /// presentation->Save(u"SomePresentation-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void HighlightRegex(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::Drawing::Color highlightColor, System::SharedPtr<IFindResultCallback> callback) override;
    /// <summary>
    /// Replaces all occurrences of the specified text with another specified text.
    /// </summary>
    /// <param name="oldText">The string to be replaced.</param>
    /// <param name="newText">The string to replace all occurrences of oldText.</param>
    /// <param name="options">Text search options <see cref="Aspose::Slides::ITextSearchOptions">ITextSearchOptions</see>.</param>
    /// <param name="callback">Callback object for saving replacement operation result <see cref="IFindResultCallback"></see>.</param>
    /// <example>
    /// The following sample code shows how to replace one speified string with another speified string.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto shape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// auto textSearchOptions = System::MakeObject<TextSearchOptions>();
    /// textSearchOptions->set_WholeWordsOnly(true);
    /// 
    /// // Replace all separate 'the' occurrences with '***'
    /// shape->get_TextFrame()->ReplaceText(u"the", u"***", textSearchOptions, nullptr);
    /// presentation->Save(u"SomePresentation-out2.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void ReplaceText(System::String oldText, System::String newText, System::SharedPtr<ITextSearchOptions> options, System::SharedPtr<IFindResultCallback> callback) override;
    /// <summary>
    /// Replaces all matches of regular expression with specified string.
    /// </summary>
    /// <param name="regex">The regular expression <see cref="System::Text::RegularExpressions::Regex"></see> to get strings to be replaced.</param>
    /// <param name="newText">The string to replace all occurrences of strings to be replaced.</param>
    /// <param name="callback">Callback object for saving replacement operation result <see cref="IFindResultCallback"></see>.</param>
    /// <example>
    /// The following sample code shows how to replace text using regular expression with specified string.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto shape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// auto regex = System::MakeObject<System::Text::RegularExpressions::Regex>(u"\\b[^\\s]{10,}\\b");
    /// 
    /// // Replace all words with 10 or more characters with '***'
    /// shape->get_TextFrame()->ReplaceRegex(regex, u"***", nullptr);
    /// presentation->Save(u"SomePresentation-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void ReplaceRegex(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::String newText, System::SharedPtr<IFindResultCallback> callback) override;
    /// <summary>
    /// Returns a paragraph in a frame at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IParagraph> get_Paragraph(int32_t index) override;
    
protected:

    /// @cond
    System::SharedPtr<Aspose::Slides::TextFrameFormat> m_textFrameFormat;
    System::SharedPtr<FloatColor> m_styleColorCache;
    System::SharedPtr<FindTextFrameResult> m_findResult;
    System::SharedPtr<Layout::Interfaces::ITextFrameLayout> Layout;
    
    ASPOSE_SLIDES_LOCAL_API bool get_FromMetroBlob() const;
    ASPOSE_SLIDES_LOCAL_API void set_FromMetroBlob(bool value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISlideComponent> get_Parent_ISlideComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TextFrame> get_SmartArtFrame() const;
    ASPOSE_SLIDES_LOCAL_API void set_SmartArtFrame(System::SharedPtr<TextFrame> value);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<IParagraphFormat>> get_TextStyleCache();
    ASPOSE_SLIDES_LOCAL_API bool get_HasTextWarp();
    ASPOSE_SLIDES_LOCAL_API bool get_MathChanged() const;
    ASPOSE_SLIDES_LOCAL_API void set_MathChanged(bool value);
    ASPOSE_SLIDES_LOCAL_API System::String get_TextInternal();
    ASPOSE_SLIDES_LOCAL_API void set_TextInternal(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::TextFrameFormat> get_TextFrameFormatInternal();
    ASPOSE_SLIDES_LOCAL_API bool get_MetroBlobRequired();
    ASPOSE_SLIDES_LOCAL_API bool get_IsMathContentExist();
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Util::ValueMap<PlaceholderType, TextStyleSource>> PlaceholderTypeToTextStyleSource;
    
    ASPOSE_SLIDES_LOCAL_API TextFrame(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextFrame, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API bool HasMathMixedContent(System::SharedPtr<TextFrame> textFrame);
    static ASPOSE_SLIDES_LOCAL_API bool HasMathContent(System::SharedPtr<TextFrame> textFrame);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ITextFrame> source);
    ASPOSE_SLIDES_LOCAL_API void ReplaceBy(System::SharedPtr<ITextFrame> source);
    ASPOSE_SLIDES_LOCAL_API void CopyPropertiesFrom(System::SharedPtr<TextFrame> source);
    ASPOSE_SLIDES_LOCAL_API void CopyContentFrom(System::SharedPtr<TextFrame> source);
    ASPOSE_SLIDES_LOCAL_API Drawing::Margin32f GetEffectiveMargin();
    ASPOSE_SLIDES_LOCAL_API Drawing::Margin32f GetEffectiveMargin(System::SharedPtr<Shape> shape);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<IParagraphFormat>> GetAutoShapeParagraphProperties(System::SharedPtr<FloatColor>& styleColor);
    ASPOSE_SLIDES_LOCAL_API void UpdateTextFrameWithEffectivesTemp(System::ArrayPtr<System::SharedPtr<TextFrame>> parentFrames, System::SharedPtr<TextFrame> textFrameToUpdate);
    ASPOSE_SLIDES_LOCAL_API void HighlightText(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::Drawing::Color highlightColor);
    ASPOSE_SLIDES_LOCAL_API void ReplaceText(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::String newText);
    ASPOSE_SLIDES_LOCAL_API void FindText(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::SharedPtr<IFindResultCallback> callback);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~TextFrame();
    
private:

    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    System::WeakPtr<ISlideComponent> m_parentISlideComponent;
    System::SharedPtr<ParagraphCollection> m_paragraphs;
    System::ArrayPtr<System::SharedPtr<IParagraphFormat>> m_textStyleCache;
    int32_t m_textStyleCacheVersion;
    System::SharedPtr<Aspose::Slides::HyperlinkQueries> m_hyperlinkQueries;
    bool pr_FromMetroBlob;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<TextFrame> pr_SmartArtFrame;
    bool pr_MathChanged;
    
    ASPOSE_SLIDES_LOCAL_API void ApplyShapeStyle(System::SharedPtr<IShapeStyle> style, System::SharedPtr<BaseSlide> parentSlide, System::SharedPtr<ParagraphFormat> defaultFormat, System::SharedPtr<ITextStyle> textStyle, System::ArrayPtr<System::SharedPtr<ParagraphFormat>> resultFormats, System::SharedPtr<FloatColor>& styleColor);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MasterSlide> GetMasterSlide(System::SharedPtr<BaseSlide> slide);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<ParagraphFormat>> GetDefaultParagraphProperties();
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<ParagraphFormat>> GetLayoutSlideParagraphProperties(System::SharedPtr<BaseSlide> parent, System::SharedPtr<FloatColor>& styleColor);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<IParagraphFormat>> GetTableCellParagraphProperties(System::SharedPtr<BaseSlide> slide, System::SharedPtr<IMasterSlide> master, System::SharedPtr<TableCellTextStyle> cellTextStyle, System::SharedPtr<FloatColor>& styleColor);
    ASPOSE_SLIDES_LOCAL_API System::String GetText(System::SharedPtr<VentureLicense> ventureLicense);
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


