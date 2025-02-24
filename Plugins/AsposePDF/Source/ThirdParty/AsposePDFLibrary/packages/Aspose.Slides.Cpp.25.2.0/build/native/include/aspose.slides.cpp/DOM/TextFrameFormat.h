#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/ITextFrameFormat.h>
#include <DOM/Chart/IChartTextBlockFormat.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
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
class AutoShape;
class AutoShapeLayout;
class BaseHeaderFooterManager;
template <typename, typename> class BasePortionFormatEffectiveData;
class BasePortionFormatImpl;
class Cell;
namespace Charts
{
class AxisRenderContext;
class AxisTitleElement;
class ChartTextFormat;
class DataLabelTextBase;
class DisplayUnitElement;
class TextElementBase;
class TitleElement;
} // namespace Charts
class Column;
namespace DOM
{
namespace Xlsx
{
namespace Charts
{
namespace Chart3DNew
{
class Chart3DBaseRenderer;
class Chart3DMeasure;
} // namespace Chart3DNew
} // namespace Charts
} // namespace Xlsx
} // namespace DOM
namespace Drawing
{
class Margin64d;
namespace ThreeD
{
class FlatTextRenderer;
} // namespace ThreeD
} // namespace Drawing
namespace Effects
{
class Drawing2DHelper;
} // namespace Effects
namespace Export
{
class DrawingMLExporter;
class ExportNotesSlides;
} // namespace Export
namespace HtmlIO
{
class BodyTextBoxNode;
class HtmlDocumentSlidesVisitor;
class TableNode;
class TextBoxNode;
} // namespace HtmlIO
class IDOMObject;
class ITextFrameFormatEffectiveData;
class ITextStyle;
class IThreeDFormat;
namespace Layout
{
namespace MathMixed
{
class MathBlocksSplitter;
} // namespace MathMixed
class ParagraphLayout;
class TextFrameLayout;
class TextFrameLayoutHelper;
} // namespace Layout
class LayoutPlaceholderManager;
class MasterHandoutSlideManager;
class MasterNotesSlideManager;
class MasterSlideTemplate;
enum class NullableBool : int8_t;
namespace OdpSerialization
{
namespace PartParser
{
class CustomShapeOdpDeserialization;
class ParagraphOdpDeserialization;
class PortionOdpSerialization;
class StylePartsOdpSerialization;
class TextFrameOdpDeserialization;
class TextFrameOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class ParagraphCollection;
class ParagraphFormat;
class ParagraphFormatEffectiveData;
class PlaceholderCollection;
namespace PptSerialization
{
class Geometry2DPPTSerialization;
class GroupShapeMetroBlobSerialization;
class PptGroupShapeSerializationContext;
class PptTextFrameSerializationContext;
class PresetTextShapePPTSerialization;
class ShapeCollectionPPTSerialization;
class TablePPTSerialization;
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartTextFormatPPTXSerialization;
} // namespace Chart
class DrsShapePartParser;
class GroupVmlSerialization;
class TextFramePPTXSerialization;
} // namespace PartParser
enum class TextHorizontalOverflowType : int8_t;
} // namespace PptxSerialization
class Row;
class ShapeCollection;
namespace SmartArt
{
class DiagramPoint;
class SmartArtShape;
class TextAlgorithm;
} // namespace SmartArt
class Table;
enum class TextAnchorType : int8_t;
enum class TextAutofitType : int8_t;
class TextFrame;
class TextFrameFormatEffectiveData;
class TextFrameFormatImpl;
class TextLayout;
enum class TextShapeType : int8_t;
class TextStyle;
class TextStyleEffectiveData;
enum class TextVerticalOverflowType : int8_t;
enum class TextVerticalType : int8_t;
class ThreeDFormat;
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class TextFrameFormatPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class PresetTextShape;
class TextFrameFormatPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Contains the TextFrame's formatTextFrameFormatting properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS TextFrameFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::ITextFrameFormat, public Aspose::Slides::Charts::IChartTextBlockFormat
{
    typedef TextFrameFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::ITextFrameFormat BaseType1;
    typedef Aspose::Slides::Charts::IChartTextBlockFormat BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::HtmlIO::HtmlDocumentSlidesVisitor;
    friend class Aspose::Slides::LayoutPlaceholderManager;
    friend class Aspose::Slides::Layout::TextFrameLayoutHelper;
    friend class Aspose::Slides::Layout::MathMixed::MathBlocksSplitter;
    friend class Aspose::Slides::Drawing::ThreeD::FlatTextRenderer;
    friend class Aspose::Slides::AutoShapeLayout;
    friend class Aspose::Slides::BaseHeaderFooterManager;
    template<typename FT0, typename FT1> friend class Aspose::Slides::BasePortionFormatEffectiveData;
    friend class Aspose::Slides::Effects::Drawing2DHelper;
    friend class Aspose::Slides::ParagraphFormatEffectiveData;
    friend class Aspose::Slides::Layout::ParagraphLayout;
    friend class Aspose::Slides::Layout::TextFrameLayout;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DBaseRenderer;
    friend class Aspose::Slides::TextFrameFormatEffectiveData;
    friend class Aspose::Slides::BasePortionFormatImpl;
    friend class Aspose::Slides::HtmlIO::BodyTextBoxNode;
    friend class Aspose::Slides::TextStyleEffectiveData;
    friend class Aspose::Slides::Charts::ChartTextFormat;
    friend class Aspose::Slides::HtmlIO::TableNode;
    friend class Aspose::Slides::HtmlIO::TextBoxNode;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::Cell;
    friend class Aspose::Slides::Column;
    friend class Aspose::Slides::Row;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::Export::DrawingMLExporter;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptTextFrameSerializationContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupVmlSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::CustomShapeOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::PortionOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::StylePartsOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ParagraphOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TextFrameOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TextFrameOdpSerialization;
    friend class Aspose::Slides::PptSerialization::Geometry2DPPTSerialization;
    friend class Aspose::Slides::PptSerialization::GroupShapeMetroBlobSerialization;
    friend class Aspose::Slides::PptSerialization::PresetTextShapePPTSerialization;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::ParagraphCollection;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::SmartArt::SmartArtShape;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DMeasure;
    friend class Aspose::Slides::Charts::DisplayUnitElement;
    friend class Aspose::Slides::Charts::TextElementBase;
    friend class Aspose::Slides::Charts::DataLabelTextBase;
    friend class Aspose::Slides::Charts::AxisTitleElement;
    friend class Aspose::Slides::Charts::TitleElement;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::ChartTextHelper;
    friend class Aspose::Slides::Charts::AxisRenderContext;
    friend class Aspose::Slides::SmartArt::TextAlgorithm;
    friend class Aspose::Slides::TextFrameFormatImpl;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartTextFormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::TextFramePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::ShapeCollectionPPTSerialization;
    friend class Aspose::Slides::PptSerialization::TablePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::MasterHandoutSlideManager;
    friend class Aspose::Slides::MasterNotesSlideManager;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    friend class Aspose::Slides::MasterSlideTemplate;
    friend class Aspose::Slides::PlaceholderCollection;
    /// @endcond
    
protected:

    /// @cond
    using ParameterlessSignal = System::MulticastDelegate<void()>;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the ThreeDFormat object that represents 3d effect properties for a text.
    /// Read-only <see cref="Aspose::Slides::IThreeDFormat">IThreeDFormat</see>.
    /// </summary>
    /// <example>
    /// <code>
    /// using namespace Aspose::Slides;
    /// 
    /// auto pres = System::MakeObject<Presentation>();
    /// auto autoShape = pres->get_Slides()->idx_get(0)->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 10.0f, 20.0f, 400.0f, 300.0f);
    /// auto textFrame = autoShape->get_TextFrame();
    /// 
    /// textFrame->set_Text(u"Aspose.Slide Test Text");
    /// 
    /// // Set text transformation
    /// textFrame->get_TextFrameFormat()->set_Transform(TextShapeType::ArchUpPour);
    /// 
    /// // Set Extrusion
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_ExtrusionColor()->set_Color(System::Drawing::Color::get_Orange());
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->set_ExtrusionHeight(6);
    /// 
    /// // Set Contour
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_ContourColor()->set_Color(System::Drawing::Color::get_DarkRed());
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->set_ContourWidth(1.5);
    /// 
    /// // Set Depth
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->set_Depth(3);
    /// 
    /// // Set Material
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->set_Material(MaterialPresetType::Plastic);
    /// 
    /// // Set Lighting
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_LightRig()->set_Direction(LightingDirection::Top);
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_LightRig()->set_LightType(LightRigPresetType::Balanced);
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_LightRig()->SetRotation(0.0f, 0.0f, 40.0f);
    /// 
    /// // Set camera type
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_Camera()->set_CameraType(CameraPresetType::PerspectiveContrastingRightFacing);
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IThreeDFormat> get_ThreeDFormat() override;
    /// <summary>
    /// Returns the left margin (points) in a TextFrame.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MarginLeft() override;
    /// <summary>
    /// Sets the left margin (points) in a TextFrame.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MarginLeft(double value) override;
    /// <summary>
    /// Returns the right margin (points) in a TextFrame.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MarginRight() override;
    /// <summary>
    /// Sets the right margin (points) in a TextFrame.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MarginRight(double value) override;
    /// <summary>
    /// Returns the top margin (points) in a TextFrame.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MarginTop() override;
    /// <summary>
    /// Sets the top margin (points) in a TextFrame.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MarginTop(double value) override;
    /// <summary>
    /// Returns the bottom margin (points) in a TextFrame.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MarginBottom() override;
    /// <summary>
    /// Sets the bottom margin (points) in a TextFrame.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MarginBottom(double value) override;
    /// <summary>
    /// <b>True</b> if text is wrapped at TextFrame's margins.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    /// <example>
    /// The following sample code shows how to wrap text in Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// auto autoShape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 30.0f, 30.0f, 350.0f, 100.0f);
    /// auto portion = System::MakeObject<Portion>(u"lorem ipsum...");
    /// portion->get_PortionFormat()->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Black());
    /// portion->get_PortionFormat()->get_FillFormat()->set_FillType(FillType::Solid);
    /// autoShape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Add(portion);
    /// auto textFrameFormat = autoShape->get_TextFrame()->get_TextFrameFormat();
    /// textFrameFormat->set_WrapText(NullableBool::True);
    /// pres->Save(u"Output-presentation.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API NullableBool get_WrapText() override;
    /// <summary>
    /// <b>True</b> if text is wrapped at TextFrame's margins.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    /// <example>
    /// The following sample code shows how to wrap text in Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// auto autoShape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 30.0f, 30.0f, 350.0f, 100.0f);
    /// auto portion = System::MakeObject<Portion>(u"lorem ipsum...");
    /// portion->get_PortionFormat()->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Black());
    /// portion->get_PortionFormat()->get_FillFormat()->set_FillType(FillType::Solid);
    /// autoShape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Add(portion);
    /// auto textFrameFormat = autoShape->get_TextFrame()->get_TextFrameFormat();
    /// textFrameFormat->set_WrapText(NullableBool::True);
    /// pres->Save(u"Output-presentation.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_WrapText(NullableBool value) override;
    /// <summary>
    /// Returns vertical anchor text in a TextFrame.
    /// Read <see cref="TextAnchorType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TextAnchorType get_AnchoringType() override;
    /// <summary>
    /// Sets vertical anchor text in a TextFrame.
    /// Write <see cref="TextAnchorType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AnchoringType(TextAnchorType value) override;
    /// <summary>
    /// If NullableBool::True then text should be centered in box horizontally.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_CenterText() override;
    /// <summary>
    /// If NullableBool::True then text should be centered in box horizontally.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CenterText(NullableBool value) override;
    /// <summary>
    /// Determines text orientation.
    /// The resulted value of visual text rotation summarized from this property and custom angle
    /// in property RotationAngle.
    /// Read <see cref="Slides::TextVerticalType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::TextVerticalType get_TextVerticalType() override;
    /// <summary>
    /// Determines text orientation.
    /// The resulted value of visual text rotation summarized from this property and custom angle
    /// in property RotationAngle.
    /// Write <see cref="Slides::TextVerticalType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TextVerticalType(Aspose::Slides::TextVerticalType value) override;
    /// <summary>
    /// Returns text's autofit mode.
    /// Read <see cref="TextAutofitType"></see>.
    /// </summary>
    /// <example>
    /// The following sample code shows how to resize shape to Fit Text in a PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// auto autoShape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 30.0f, 30.0f, 350.0f, 100.0f);
    /// auto portion = System::MakeObject<Portion>(u"lorem ipsum...");
    /// portion->get_PortionFormat()->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Black());
    /// portion->get_PortionFormat()->get_FillFormat()->set_FillType(FillType::Solid);
    /// autoShape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Add(portion);
    /// System::SharedPtr<ITextFrameFormat> textFrameFormat = autoShape->get_TextFrame()->get_TextFrameFormat();
    /// textFrameFormat->set_AutofitType(TextAutofitType::Shape);
    /// pres->Save(u"Output-presentation.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following sample code shows how to shrink text on overflow.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// 
    /// auto autoShape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 30.0f, 30.0f, 350.0f, 100.0f);
    /// auto portion = System::MakeObject<Portion>(u"lorem ipsum...");
    /// 
    /// portion->get_PortionFormat()->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Black());
    /// portion->get_PortionFormat()->get_FillFormat()->set_FillType(FillType::Solid);
    /// autoShape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Add(portion);
    /// System::SharedPtr<ITextFrameFormat> textFrameFormat = autoShape->get_TextFrame()->get_TextFrameFormat();
    /// textFrameFormat->set_AutofitType(TextAutofitType::Normal);
    /// pres->Save(u"Output-presentation.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API TextAutofitType get_AutofitType() override;
    /// <summary>
    /// Sets text's autofit mode.
    /// Write <see cref="TextAutofitType"></see>.
    /// </summary>
    /// <example>
    /// The following sample code shows how to resize shape to Fit Text in a PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// auto autoShape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 30.0f, 30.0f, 350.0f, 100.0f);
    /// auto portion = System::MakeObject<Portion>(u"lorem ipsum...");
    /// portion->get_PortionFormat()->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Black());
    /// portion->get_PortionFormat()->get_FillFormat()->set_FillType(FillType::Solid);
    /// autoShape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Add(portion);
    /// System::SharedPtr<ITextFrameFormat> textFrameFormat = autoShape->get_TextFrame()->get_TextFrameFormat();
    /// textFrameFormat->set_AutofitType(TextAutofitType::Shape);
    /// pres->Save(u"Output-presentation.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following sample code shows how to shrink text on overflow.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// 
    /// auto autoShape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 30.0f, 30.0f, 350.0f, 100.0f);
    /// auto portion = System::MakeObject<Portion>(u"lorem ipsum...");
    /// 
    /// portion->get_PortionFormat()->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Black());
    /// portion->get_PortionFormat()->get_FillFormat()->set_FillType(FillType::Solid);
    /// autoShape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Add(portion);
    /// System::SharedPtr<ITextFrameFormat> textFrameFormat = autoShape->get_TextFrame()->get_TextFrameFormat();
    /// textFrameFormat->set_AutofitType(TextAutofitType::Normal);
    /// pres->Save(u"Output-presentation.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_AutofitType(TextAutofitType value) override;
    /// <summary>
    /// Returns number of columns in the text area.
    /// This value must be a positive number. Otherwise, the value will be set to zero. 
    /// Value 0 means undefined value.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    /// <example>
    /// The following sample code shows how to add column in Text frame inside a PowerPoint Presentation.
    /// <code>
    ///     System::String outPptxFileName = u"ColumnsTest.pptx";
    ///     
    ///     auto pres = System::MakeObject<Presentation>();
    ///     
    ///     auto shape1 = pres->get_Slides()->idx_get(0)->get_Shapes()->AddAutoShape(Aspose::Slides::ShapeType::Rectangle, 100.0f, 100.0f, 300.0f, 300.0f);
    ///     auto format = System::ExplicitCast<Aspose::Slides::TextFrameFormat>(shape1->get_TextFrame()->get_TextFrameFormat());
    ///     format->set_ColumnCount(2);
    ///     shape1->get_TextFrame()->set_Text(System::String(u"All these columns are forced to stay within a single text container -- ") + u"you can add or delete text - and the new or remaining text automatically adjusts " + u"itself to stay within the container. You cannot have text spill over from one container " + u"to other, though -- because PowerPoint's column options for text are limited!");
    ///     pres->Save(outPptxFileName, Aspose::Slides::Export::SaveFormat::Pptx);
    ///     
    ///     
    ///     {
    ///         auto test = System::MakeObject<Presentation>(outPptxFileName);
    ///         assert(2 == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnCount());
    ///         assert(std::numeric_limits<double>::quiet_NaN() == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnSpacing());
    ///     }
    ///     
    ///     format->set_ColumnSpacing(20);
    ///     pres->Save(outPptxFileName, SaveFormat::Pptx);
    ///     
    ///     {
    ///         auto test = System::MakeObject<Presentation>(outPptxFileName);
    ///         assert(2 == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnCount());
    ///         assert(20 == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnSpacing());
    ///     }
    ///     
    ///     format->set_ColumnCount(3);
    ///     format->set_ColumnSpacing(15);
    ///     pres->Save(outPptxFileName, SaveFormat::Pptx);
    ///     
    ///     {
    ///         auto test = System::MakeObject<Presentation>(outPptxFileName);
    ///         assert(3 == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnCount());
    ///         assert(15 == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnSpacing());
    ///     }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API int32_t get_ColumnCount() override;
    /// <summary>
    /// Sets number of columns in the text area.
    /// This value must be a positive number. Otherwise, the value will be set to zero. 
    /// Value 0 means undefined value.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    /// <example>
    /// The following sample code shows how to add column in Text frame inside a PowerPoint Presentation.
    /// <code>
    ///     System::String outPptxFileName = u"ColumnsTest.pptx";
    ///     
    ///     auto pres = System::MakeObject<Presentation>();
    ///     
    ///     auto shape1 = pres->get_Slides()->idx_get(0)->get_Shapes()->AddAutoShape(Aspose::Slides::ShapeType::Rectangle, 100.0f, 100.0f, 300.0f, 300.0f);
    ///     auto format = System::ExplicitCast<Aspose::Slides::TextFrameFormat>(shape1->get_TextFrame()->get_TextFrameFormat());
    ///     format->set_ColumnCount(2);
    ///     shape1->get_TextFrame()->set_Text(System::String(u"All these columns are forced to stay within a single text container -- ") + u"you can add or delete text - and the new or remaining text automatically adjusts " + u"itself to stay within the container. You cannot have text spill over from one container " + u"to other, though -- because PowerPoint's column options for text are limited!");
    ///     pres->Save(outPptxFileName, Aspose::Slides::Export::SaveFormat::Pptx);
    ///     
    ///     
    ///     {
    ///         auto test = System::MakeObject<Presentation>(outPptxFileName);
    ///         assert(2 == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnCount());
    ///         assert(std::numeric_limits<double>::quiet_NaN() == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnSpacing());
    ///     }
    ///     
    ///     format->set_ColumnSpacing(20);
    ///     pres->Save(outPptxFileName, SaveFormat::Pptx);
    ///     
    ///     {
    ///         auto test = System::MakeObject<Presentation>(outPptxFileName);
    ///         assert(2 == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnCount());
    ///         assert(20 == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnSpacing());
    ///     }
    ///     
    ///     format->set_ColumnCount(3);
    ///     format->set_ColumnSpacing(15);
    ///     pres->Save(outPptxFileName, SaveFormat::Pptx);
    ///     
    ///     {
    ///         auto test = System::MakeObject<Presentation>(outPptxFileName);
    ///         assert(3 == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnCount());
    ///         assert(15 == (System::ExplicitCast<Aspose::Slides::AutoShape>(test->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)))->get_TextFrame()->get_TextFrameFormat()->get_ColumnSpacing());
    ///     }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_ColumnCount(int32_t value) override;
    /// <summary>
    /// Returns the space between text columns in the text area (in points). This should only apply 
    /// when there is more than 1 column present.
    /// This value must be a positive number. Otherwise, the value will be set to zero. 
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_ColumnSpacing() override;
    /// <summary>
    /// Sets the space between text columns in the text area (in points). This should only apply 
    /// when there is more than 1 column present.
    /// This value must be a positive number. Otherwise, the value will be set to zero. 
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ColumnSpacing(double value) override;
    /// <summary>
    /// Specifies custom the rotation that is being applied to the text within the bounding box. If it not
    /// specified, the rotation of the accompanying shape is used. If it is specified, then this is
    /// applied independently from the shape. That is the shape can have a rotation applied in
    /// addition to the text itself having a rotation applied to it.
    /// The resulted value of visual text rotation summarized from this property and predefined
    /// vertical type in property TextVerticalType.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// Consider the case where a shape has a rotation of 90 degrees clockwise applied to it. 
    /// In addition to this, the text body itself has a rotation of -90 degrees 
    /// counter-clockwise applied to it. Then the resulting shape would appear to
    /// be rotated but the text within it would appear as though it had not been rotated at all.
    /// </example>
    ASPOSE_SLIDES_SHARED_API float get_RotationAngle() override;
    /// <summary>
    /// Specifies custom the rotation that is being applied to the text within the bounding box. If it not
    /// specified, the rotation of the accompanying shape is used. If it is specified, then this is
    /// applied independently from the shape. That is the shape can have a rotation applied in
    /// addition to the text itself having a rotation applied to it.
    /// The resulted value of visual text rotation summarized from this property and predefined
    /// vertical type in property TextVerticalType.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// Consider the case where a shape has a rotation of 90 degrees clockwise applied to it. 
    /// In addition to this, the text body itself has a rotation of -90 degrees 
    /// counter-clockwise applied to it. Then the resulting shape would appear to
    /// be rotated but the text within it would appear as though it had not been rotated at all.
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_RotationAngle(float value) override;
    /// <summary>
    /// Gets text wrapping shape.
    /// Read <see cref="TextShapeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TextShapeType get_Transform() override;
    /// <summary>
    /// Sets text wrapping shape.
    /// Write <see cref="TextShapeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Transform(TextShapeType value) override;
    /// <summary>
    /// Gets keeping text flat even if a 3-D Rotation effect was applied.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_KeepTextFlat() override;
    /// <summary>
    /// Sets keeping text flat even if a 3-D Rotation effect was applied.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_KeepTextFlat(bool value) override;
    
    /// <summary>
    /// Initializes a new instance of <see cref="Aspose::Slides::TextFrameFormat">TextFrameFormat</see> class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TextFrameFormat();
    
    /// <summary>
    /// Gets effective text frame formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::ITextFrameFormatEffectiveData">ITextFrameFormatEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates getting some of effective text frame formatting properties.
    /// <code>
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto shape = AsCast<IAutoShape>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// auto effectiveTextFrameFormat = shape->get_TextFrame()->get_TextFrameFormat()->GetEffective();
    /// 
    /// Console::WriteLine(String(u"Anchoring type: ") + ObjectExt::ToString(effectiveTextFrameFormat->get_AnchoringType()));
    /// Console::WriteLine(String(u"Autofit type: ") + ObjectExt::ToString(effectiveTextFrameFormat->get_AutofitType()));
    /// Console::WriteLine(String(u"Text vertical type: ") + ObjectExt::ToString(effectiveTextFrameFormat->get_TextVerticalType()));
    /// Console::WriteLine(u"Margins");
    /// Console::WriteLine(String(u"   Left: ") + effectiveTextFrameFormat->get_MarginLeft());
    /// Console::WriteLine(String(u"   Top: ") + effectiveTextFrameFormat->get_MarginTop());
    /// Console::WriteLine(String(u"   Right: ") + effectiveTextFrameFormat->get_MarginRight());
    /// Console::WriteLine(String(u"   Bottom: ") + effectiveTextFrameFormat->get_MarginBottom());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrameFormatEffectiveData> GetEffective() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TextFrameFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Drawing::Margin64d get_Margin();
    ASPOSE_SLIDES_LOCAL_API void set_Margin(Drawing::Margin64d value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::TextFrameFormatPPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::TextFrameFormatPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::TextStyle> get_TextStyleInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PresetTextShape> get_TextShape();
    ASPOSE_SLIDES_LOCAL_API TextAutofitType get_AutofitTypeInternal();
    ASPOSE_SLIDES_LOCAL_API void set_AutofitTypeInternal(TextAutofitType value);
    ASPOSE_SLIDES_LOCAL_API NullableBool get_RightToLeftColumns();
    ASPOSE_SLIDES_LOCAL_API void set_RightToLeftColumns(NullableBool value);
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::PptxSerialization::TextHorizontalOverflowType get_TextHorizontalOverflowType();
    ASPOSE_SLIDES_LOCAL_API void set_TextHorizontalOverflowType(Aspose::Slides::PptxSerialization::TextHorizontalOverflowType value);
    ASPOSE_SLIDES_LOCAL_API float get_NormalAutofitFontScale();
    ASPOSE_SLIDES_LOCAL_API void set_NormalAutofitFontScale(float value);
    ASPOSE_SLIDES_LOCAL_API float get_NormalAutofitLineSpaceReduction();
    ASPOSE_SLIDES_LOCAL_API void set_NormalAutofitLineSpaceReduction(float value);
    ASPOSE_SLIDES_LOCAL_API NullableBool get_FirstLastParagraphSpacing();
    ASPOSE_SLIDES_LOCAL_API void set_FirstLastParagraphSpacing(NullableBool value);
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::TextVerticalOverflowType get_TextVerticalOverflowType();
    ASPOSE_SLIDES_LOCAL_API void set_TextVerticalOverflowType(Aspose::Slides::TextVerticalOverflowType value);
    ASPOSE_SLIDES_LOCAL_API NullableBool get_FromWordArt();
    ASPOSE_SLIDES_LOCAL_API void set_FromWordArt(NullableBool value);
    ASPOSE_SLIDES_LOCAL_API NullableBool get_ForceAntiAliased();
    ASPOSE_SLIDES_LOCAL_API void set_ForceAntiAliased(NullableBool value);
    ASPOSE_SLIDES_LOCAL_API bool get_RemainUpright();
    ASPOSE_SLIDES_LOCAL_API void set_RemainUpright(bool value);
    ASPOSE_SLIDES_LOCAL_API NullableBool get_CompatibleLineSpacing();
    ASPOSE_SLIDES_LOCAL_API void set_CompatibleLineSpacing(NullableBool value);
    ASPOSE_SLIDES_LOCAL_API bool get_MetroBlobRequired();
    ASPOSE_SLIDES_LOCAL_API int32_t get_TextPropertiesVersion();
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::TextVerticalType get_InheritedTextVerticalType();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version_OldMode();
    
    TextFrameFormat::ParameterlessSignal m_changedSignal_OldMode;
    uint32_t m_version_OldMode;
    
    ASPOSE_SLIDES_LOCAL_API TextFrameFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextFrameFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API Drawing::Margin64d GetMargin(System::SharedPtr<ITextFrameFormat> format);
    static ASPOSE_SLIDES_LOCAL_API Drawing::Margin64d GetMargin(System::SharedPtr<ITextFrameFormatEffectiveData> format);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<TextFrameFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDefinedDataFrom(System::SharedPtr<ITextFrameFormat> source);
    ASPOSE_SLIDES_LOCAL_API bool IsDefault();
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnParentPropertiesChanded(System::SharedPtr<ParagraphFormat> whichParagraph);
    ASPOSE_SLIDES_LOCAL_API bool NeedToScaleSize(System::ArrayPtr<System::SharedPtr<ITextFrameFormat>> parentFormats);
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TextFrameFormatEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API void ClearEffective();
    ASPOSE_SLIDES_LOCAL_API void Changed_OldMode();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~TextFrameFormat();
    
private:

    /// <summary>
    /// Returns text's style.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextStyle> get_TextStyle() override;
    
    int32_t m_tpVersion;
    System::SharedPtr<Aspose::Slides::TextStyle> m_textStyle;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PresetTextShape> m_presetTextShape;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::TextFrameFormatPPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::TextFrameFormatPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<Aspose::Slides::ThreeDFormat> m_threeDFormat;
    System::SharedPtr<TextFrameFormatEffectiveData> m_effective;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TextFrameFormatEffectiveData> m_defaultEffective;
    
};

} // namespace Slides
} // namespace Aspose


