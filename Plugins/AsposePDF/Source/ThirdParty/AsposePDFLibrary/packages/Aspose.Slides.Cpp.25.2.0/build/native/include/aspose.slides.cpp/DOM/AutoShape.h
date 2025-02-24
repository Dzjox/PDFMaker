#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IAutoShape.h>

#include "DOM/GeometryShape.h"
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
class AutoShapeLayout;
class BaseSlideHeaderFooterManager;
namespace Charts
{
class DataLabel;
class DataLabelCollection;
class DataLabelTextBase;
class DisplayUnitElement;
class LegendTextElement;
class TextElementBase;
class TitleElement;
class TrendlineLabelOverridingTextElement;
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
class Chart3DBaseRenderer;
class Chart3DMeasure;
} // namespace Chart3DNew
} // namespace Charts
} // namespace Xlsx
} // namespace DOM
namespace Drawing
{
namespace ThreeD
{
class ShapeRenderer;
} // namespace ThreeD
} // namespace Drawing
namespace Export
{
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
class PresentationAnimationsGenerator;
class PrimitiveHtmlFormattingController;
} // namespace Export
class GeometryShapeLayout;
namespace HtmlIO
{
class HtmlDocumentSlidesVisitor;
} // namespace HtmlIO
class IAutoShapeLock;
class IDOMObject;
class IFillFormat;
class ITextFrame;
class ITextFrameFormat;
namespace Layout
{
namespace MathMixed
{
class MathBlocksSplitter;
} // namespace MathMixed
} // namespace Layout
class LayoutPlaceholderManager;
class LayoutTemplates;
class LayoutTemplatesContext;
class MasterHandoutSlideManager;
class MasterNotesSlideManager;
class MasterSlideTemplate;
class NotesTemplate;
namespace OdpSerialization
{
namespace PartParser
{
class OdpStylesPartParser;
class ShapeOdpDeserialization;
class ShapeOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptSerialization
{
class AutoShapePPTSerialization;
class BaseSlidePPTSerialization;
class GroupShapeMetroBlobSerialization;
class PlaceholderPPTSerialization;
class PptDeserializator;
class PptGroupShapeSerializationContext;
class PptTextFrameDeserializationContext;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class AlternateContentPPTXSerialization;
class AutoShapePPTXSerialization;
class DrsShapePartParser;
class GroupShapePPTXSerialization;
class GroupVmlSerialization;
class ShapePPTXSerialization;
class TextFrameVmlSerialization;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
class Shape;
class ShapeCollection;
class ShapeLayout;
class Slide;
class SlideCollection;
namespace SmartArt
{
class DiagramPoint;
class SmartArt;
class SmartArtShape;
} // namespace SmartArt
class TextFrame;
class TextFrameFormatEffectiveData;
class TextStyleEffectiveData;
namespace ThmxSerialization
{
class ThmxDeserializator;
} // namespace ThmxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class AutoShapePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
namespace Util
{
class PresentationInfoProc;
} // namespace Util
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an AutoShape.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS AutoShape final : public Aspose::Slides::GeometryShape, public Aspose::Slides::IAutoShape
{
    typedef AutoShape ThisType;
    typedef Aspose::Slides::GeometryShape BaseType;
    typedef Aspose::Slides::IAutoShape BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::HtmlIO::HtmlDocumentSlidesVisitor;
    friend class Aspose::Slides::LayoutPlaceholderManager;
    friend class Aspose::Slides::Layout::MathMixed::MathBlocksSplitter;
    friend class Aspose::Slides::Drawing::ThreeD::ShapeRenderer;
    friend class Aspose::Slides::Export::FramesStream::AnimationPlaying::Players::SetEffectPlayer;
    friend class Aspose::Slides::Export::PresentationAnimationsGenerator;
    friend class Aspose::Slides::AutoShapeLayout;
    friend class Aspose::Slides::GeometryShapeLayout;
    friend class Aspose::Slides::BaseSlideHeaderFooterManager;
    friend class Aspose::Slides::ShapeLayout;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DBaseRenderer;
    friend class Aspose::Slides::PptxSerialization::PartParser::AlternateContentPPTXSerialization;
    friend class Aspose::Slides::TextFrameFormatEffectiveData;
    friend class Aspose::Slides::TextStyleEffectiveData;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::Charts::DataLabelCollection;
    friend class Aspose::Slides::LayoutTemplatesContext;
    friend class Aspose::Slides::Export::PrimitiveHtmlFormattingController;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptTextFrameDeserializationContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupVmlSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::TextFrameVmlSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::OdpStylesPartParser;
    friend class Aspose::Slides::PptSerialization::GroupShapeMetroBlobSerialization;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::Util::PresentationInfoProc;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::Slide;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::SmartArt::SmartArtShape;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DMeasure;
    friend class Aspose::Slides::Charts::DisplayUnitElement;
    friend class Aspose::Slides::Charts::TextElementBase;
    friend class Aspose::Slides::Charts::DataLabelTextBase;
    friend class Aspose::Slides::Charts::TrendlineUpCaseTextElement;
    friend class Aspose::Slides::Charts::TrendlineLabelOverridingTextElement;
    friend class Aspose::Slides::Charts::LegendTextElement;
    friend class Aspose::Slides::Charts::TitleElement;
    friend class Aspose::Slides::Charts::VerticalCategoryAxis;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::ChartTextHelper;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::AutoShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptSerialization::AutoShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::BaseSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::PlaceholderPPTSerialization;
    friend class Aspose::Slides::MasterHandoutSlideManager;
    friend class Aspose::Slides::MasterNotesSlideManager;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    friend class Aspose::Slides::NotesTemplate;
    friend class Aspose::Slides::MasterSlideTemplate;
    friend class Aspose::Slides::LayoutTemplates;
    /// @endcond
    
public:

    /// <summary>
    /// Returns autoshape's locks.
    /// Read-only <see cref="Aspose::Slides::IAutoShapeLock">IAutoShapeLock</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAutoShapeLock> get_AutoShapeLock() override;
    /// <summary>
    /// Returns TextFrame object for the AutoShape.
    /// Read-only <see cref="Aspose::Slides::ITextFrame">ITextFrame</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrame> get_TextFrame() override;
    /// <summary>
    /// Determines whether this autoshape should be filled with slide's background fill instead of specified by style or fill format.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_UseBackgroundFill() override;
    /// <summary>
    /// Determines whether this autoshape should be filled with slide's background fill instead of specified by style or fill format.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_UseBackgroundFill(bool value) override;
    /// <summary>
    /// Specifies if the shape is a text box.
    /// </summary>
    /// <remarks>
    /// If shape is not specified to be a text box does not mean that it cannot have text attached to it. A text
    /// box is merely a specialized shape with specific properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_IsTextBox() override;
    
    /// <summary>
    /// Adds a new TextFrame to a shape.
    /// If shape already has TextFrame then simply changes its text.
    /// </summary>
    /// <param name="text">Default text for a new TextFrame.</param>
    /// <example>
    /// The following sample code shows how to add watermark text in PowerPoint Presentation.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>();
    /// 
    /// auto slide = presentation->get_Slides()->idx_get(0);
    /// auto watermarkShape = slide->get_Shapes()->AddAutoShape(ShapeType::Triangle, 0.0f, 0.0f, 150.0f, 50.0f);
    /// System::SharedPtr<ITextFrame> watermarkTextFrame = watermarkShape->AddTextFrame(u"Watermark");
    /// </code>
    /// The following example shows how to create Text Box on Slide.
    /// <code>
    /// // Instantiates Presentation
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// // Gets the first slide in the presentation
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// // Adds an AutoShape with type set as Rectangle
    /// auto shape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 150.0f, 75.0f, 150.0f, 50.0f);
    /// // Adds TextFrame to the Rectangle
    /// shape->AddTextFrame(u" ");
    /// // Accesses the text frame
    /// auto txtFrame = shape->get_TextFrame();
    /// // Creates the Paragraph object for text frame
    /// auto para = txtFrame->get_Paragraphs()->idx_get(0);
    /// // Creates a Portion object for the paragraph
    /// auto portion = para->get_Portions()->idx_get(0);
    /// // Sets the text
    /// portion->set_Text(u"Aspose TextBox");
    /// // Saves the presentation to disk
    /// pres->Save(u"TextBox_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following example shows how to add column in Text Box.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>();
    /// 
    /// // Gets the first slide in the presentation
    /// auto slide = presentation->get_Slides()->idx_get(0);
    /// // Add an AutoShape with type set as Rectangle
    /// auto shape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 100.0f, 100.0f, 300.0f, 300.0f);
    /// // Add TextFrame to the Rectangle
    /// shape->AddTextFrame(System::String(u"All these columns are limited to be within a single text container -- ") +
    ///                     u"you can add or delete text and the new or remaining text automatically adjusts " +
    ///                     u"itself to flow within the container. You cannot have text flow from one container " +
    ///                     u"to other though -- we told you PowerPoint's column options for text are limited!");
    /// // Gets the text format of TextFrame
    /// auto format = shape->get_TextFrame()->get_TextFrameFormat();
    /// // Specifies the number of columns in TextFrame
    /// format->set_ColumnCount(3);
    /// // Specifies the spacing between columns
    /// format->set_ColumnSpacing(10);
    /// // Saves the presentation
    /// presentation->Save(u"ColumnCount.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrame> AddTextFrame(System::String text) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::AutoShapePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::TextFrame> get_TextFrameInternal();
    ASPOSE_SLIDES_LOCAL_API void set_TextFrameInternal(System::SharedPtr<Aspose::Slides::TextFrame> value);
    ASPOSE_SLIDES_LOCAL_API bool get_HasField();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IFillFormat> get_FallbackFillFormat();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version_OldMode() override;
    /// <summary>
    /// Shows if saving this shape to ppt requires GroupShapeMetroBlob record to save all shape's properties correctly
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_MetroBlobRequired() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_IsMathContentExist();
    
    ASPOSE_SLIDES_LOCAL_API AutoShape(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AutoShape, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Shape> CreateFallbackShapeFromCurrent();
    /// @endcond
    /// <summary>
    /// This method prevents autofitting text.
    /// </summary>
    /// <remarks>
    /// When size/position/text of TextFrame is changed or size/position of shape is changed then
    /// size/position of shape and TextFrame will be fitted one to other. This "fitting" procedure get 
    /// many resources and if you know that size/position of shape and TextFrame are already 
    /// matched one to other than you can cancel upcoming "fitting" procedure with calling this 
    /// ConfirmTextFrameIsFittedToShape() method. Cancelling will be performed one time, not permanent -
    /// this mean that if for example TextFrame will be changed in future then "fitting" procedure
    /// will become upcoming again.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void ConfirmTextFrameIsFittedToShape() override;
    ASPOSE_SLIDES_SHARED_API void ScaleGeometry(float scalingCoefX, float scalingCoefY, float scalingContentCoef) override;
    /// <summary>
    /// Sets all formats to NotDefined state. For shapes with placeholders this will cause default state.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Reset() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void UpdateTextFrameWithEffectivesTemp(System::SharedPtr<Aspose::Slides::TextFrame> textFrameToUpdate);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::TextFrame> AddTextFrameEmpty();
    ASPOSE_SLIDES_LOCAL_API void SetIsTextBox(bool isTextBox);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~AutoShape();
    
private:

    bool m_useBgFill;
    System::SharedPtr<Aspose::Slides::TextFrame> m_textFrame;
    bool m_isTextBox;
    
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<ITextFrameFormat>> GetTextFrameFormats(System::ArrayPtr<System::SharedPtr<Shape>> prototypes);
    
};

} // namespace Slides
} // namespace Aspose


