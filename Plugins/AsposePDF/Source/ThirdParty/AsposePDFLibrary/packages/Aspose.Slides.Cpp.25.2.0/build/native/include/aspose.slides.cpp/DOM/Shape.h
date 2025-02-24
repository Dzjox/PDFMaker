#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/multicast_delegate.h>
#include <system/event.h>
#include <system/array.h>
#include <DOM/IShape.h>
#include <DOM/ILineFormat.h>
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
class AxisHelper;
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
class BaseHeaderFooterManager;
template <typename, typename> class BasePortionFormatEffectiveData;
class BaseSlide;
enum class BlackWhiteMode : int8_t;
class Cell;
namespace Charts
{
class Chart;
class ChartLayout;
class TextElementBase;
} // namespace Charts
class Connector;
class CustomData;
namespace DOM
{
namespace Xlsx
{
namespace Charts
{
namespace Chart3DNew
{
class Chart3DTextRenderer;
} // namespace Chart3DNew
} // namespace Charts
} // namespace Xlsx
} // namespace DOM
namespace Drawing
{
class FlipRotation;
class RectAndFlipRotation;
class RenderContext;
namespace ThreeD
{
class BaseRenderer;
class CameraSettingsManager;
class Drawing3DHelper;
class FlatShapeRenderer;
class OneSceneGroupShapeRenderer;
class Shape3DBaseSettingsManager;
class ShapeRenderer;
} // namespace ThreeD
class Vector2d32f;
class Vector2d64d;
} // namespace Drawing
class EffectFormat;
class EffectFormatEffectiveData;
namespace Effects
{
class Drawing2DHelper;
} // namespace Effects
namespace Export
{
class ApsPptxCanvas;
class DrawingMLExporter;
namespace FramesStream
{
namespace AnimationPlaying
{
class AnimationRenderContext;
class ShapeRectNotifiable;
} // namespace AnimationPlaying
} // namespace FramesStream
class ISVGOptions;
class RenderingFontsInfoMockCanvas;
} // namespace Export
class ExternalTheme;
class FillFormat;
class FillFormatEffectiveData;
class GeometryShape;
class GeometryShapeLayout;
class GraphicalObject;
class GroupShape;
class HandoutsView;
namespace HtmlIO
{
class HtmlDocumentSlidesVisitor;
} // namespace HtmlIO
class Hyperlink;
class HyperlinkManager;
class IBaseShapeLock;
class IBaseSlide;
class ICustomData;
class IEffectFormat;
class IFillFormat;
class IFillFormatEffectiveData;
class IGroupShape;
class IHyperlink;
class IHyperlinkManager;
class IImage;
class ILineFormatEffectiveData;
namespace Ink
{
class InkLayout;
} // namespace Ink
class IPlaceholder;
class IPresentation;
class IPresentationComponent;
class IShapeFrame;
class ISlideComponent;
class IThreeDFormat;
namespace Layout
{
class TableLayout;
class TextFrameLayout;
class TextFrameLayoutHelper;
} // namespace Layout
class LayoutPlaceholderManager;
class LayoutTemplatesContext;
class LegacyDiagram;
class LineFormat;
class LineFormatEffectiveData;
class MasterHandoutSlideManager;
class MasterNotesSlideManager;
class MasterSlideHeaderFooterManager;
class MasterSlideTemplate;
class NotesTemplate;
namespace OdpSerialization
{
namespace PartParser
{
class CustomShapeOdpDeserialization;
class ShapeOdpDeserialization;
class TextFrameOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
enum class Orientation : int8_t;
class PictureFrame;
class PictureFrameLayout;
class Placeholder;
enum class PlaceholderSize : int8_t;
enum class PlaceholderType : int8_t;
class PortionFormatEffectiveData;
namespace PptSerialization
{
class AutoShapePPTSerialization;
class BaseSlidePPTSerialization;
class ConnectorPPTSerialization;
class GeometryShapePPTSerialization;
class GroupShapeMetroBlobSerialization;
class GroupShapePPTSerialization;
class LayoutSlidePPTSerialization;
class LegacyDiagramPPTSerialization;
class PlaceholderPPTSerialization;
class PptGroupShapeDeserializationContext;
class PptGroupShapeSerializationContext;
class PptShapeSerializationContext;
class PptSlideSerializationContext;
class ShapeCollectionPPTSerialization;
class ShapePPTSerialization;
class TablePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class AlternateContentPPTXSerialization;
class AnimationTimeLinePPTXSerialization;
class AudioFramePPTXSerialization;
class AutoShapePPTXSerialization;
class BaseSlidePartParser;
class BaseSlidePPTXSerialization;
class ConnectorPPTXSerialization;
class DrsDownRevPartParser;
class GraphicalObjectPPTXSerialization;
class GroupShapePPTXSerialization;
class GroupTransform2DPPTXSerialization;
class GroupVmlSerialization;
class InkPPTXSerialization;
class LegacyDiagramPPTXSeriazation;
class ModernCommentListPartParser;
class PlaceholderPPTXSerialization;
class ShapePPTXSerialization;
class SmartArtPPTXSerialization;
class SummaryZoomPPTXSerialization;
class Transform2DPPTXSerialization;
class UserShapesPartParser;
class VideoFramePPTXSerialization;
} // namespace PartParser
class PptxCloner;
class PptxDeserializator;
class SlidePptxDeserializationContext;
class TimelinePptxSerializationContext;
} // namespace PptxSerialization
namespace PresentationML
{
class Geometry2D;
class Transform2D;
} // namespace PresentationML
class RowCollection;
class Shape;
class ShapeCollection;
class ShapeElement;
class ShapeFrame;
class ShapeLayout;
enum class ShapeThumbnailBounds;
class SketchFormat;
class Slide;
class SlideTemplateCreator;
namespace SmartArt
{
class DiagramPoint;
class LayoutTree;
class SmartArt;
class SmartArtLayout;
class SmartArtShape;
class SmartArtShapeContainer;
} // namespace SmartArt
class SummaryZoomFrameLayout;
class Table;
class TextFrame;
class TextFrameFormat;
class TextParam;
namespace ThmxSerialization
{
class ThmxDeserializator;
} // namespace ThmxSerialization
class ThreeDFormat;
class ThreeDFormatEffectiveData;
namespace TypicalValues
{
template <typename, typename> class ITypicalValuesRegistry;
class ITypicalValuesRegistryManager;
} // namespace TypicalValues
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class ShapePPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class ShapePPTXUnsupportedProps;
namespace TimeLine
{
class EffectPPTXUnsupportedProps;
} // namespace TimeLine
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
namespace Util
{
class SlideUtil;
} // namespace Util
class VideoFrame;
namespace View
{
class NotesSlideView;
class SlideView;
} // namespace View
enum class ZOrderCmd;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Bitmap;
class PointF;
class RectangleF;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a shape on a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Shape : public virtual Aspose::Slides::IShape, public Aspose::Slides::IDOMObject
{
    typedef Shape ThisType;
    typedef Aspose::Slides::IShape BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::HandoutsView;
    friend class Aspose::Slides::HtmlIO::HtmlDocumentSlidesVisitor;
    friend class Aspose::Slides::LayoutPlaceholderManager;
    friend class Aspose::Slides::Layout::TextFrameLayoutHelper;
    friend class Aspose::Slides::GraphicalObject;
    friend class Aspose::Slides::Drawing::ThreeD::BaseRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::CameraSettingsManager;
    friend class Aspose::Slides::Drawing::ThreeD::Drawing3DHelper;
    friend class Aspose::Slides::Drawing::ThreeD::FlatShapeRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::OneSceneGroupShapeRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::ShapeRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::Shape3DBaseSettingsManager;
    friend class Aspose::Slides::Export::FramesStream::AnimationPlaying::AnimationRenderContext;
    friend class Aspose::Slides::Drawing::RenderContext;
    friend class Aspose::Slides::Export::FramesStream::AnimationPlaying::ShapeRectNotifiable;
    friend class Aspose::Slides::AutoShapeLayout;
    friend class Aspose::Slides::GeometryShapeLayout;
    friend class Aspose::Slides::BaseHeaderFooterManager;
    template<typename FT0, typename FT1> friend class Aspose::Slides::BasePortionFormatEffectiveData;
    friend class Aspose::Slides::Charts::ChartLayout;
    friend class Aspose::Slides::ShapeLayout;
    friend class Aspose::Slides::Ink::InkLayout;
    friend class Aspose::Slides::Effects::Drawing2DHelper;
    friend class Aspose::Slides::GeometryShape;
    friend class Aspose::Slides::PictureFrameLayout;
    friend class Aspose::Slides::View::NotesSlideView;
    friend class Aspose::Slides::View::SlideView;
    friend class Aspose::Slides::SmartArt::SmartArtLayout;
    friend class Aspose::Slides::EffectFormatEffectiveData;
    friend class Aspose::Slides::FillFormatEffectiveData;
    friend class Aspose::Slides::LineFormatEffectiveData;
    friend class Aspose::Slides::PortionFormatEffectiveData;
    friend class Aspose::Slides::Layout::TableLayout;
    friend class Aspose::Slides::Layout::TextFrameLayout;
    friend class Aspose::Slides::SummaryZoomFrameLayout;
    friend class Aspose::Slides::PptxSerialization::PartParser::SummaryZoomPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ModernCommentListPartParser;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DTextRenderer;
    friend class Aspose::Slides::PptxSerialization::PartParser::AlternateContentPPTXSerialization;
    friend class Aspose::Slides::ExternalTheme;
    friend class Aspose::Slides::LegacyDiagram;
    friend class Aspose::Slides::MasterSlideHeaderFooterManager;
    friend class Aspose::Slides::TextFrameFormat;
    friend class Aspose::Slides::ThreeDFormatEffectiveData;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::Cell;
    friend class Aspose::Slides::RowCollection;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::LayoutTemplatesContext;
    friend class Aspose::Slides::TextParam;
    friend class Aspose::Slides::Export::ApsPptxCanvas;
    friend class Aspose::Slides::Export::DrawingMLExporter;
    friend class Aspose::Slides::Export::RenderingFontsInfoMockCanvas;
    friend class Aspose::Slides::PptSerialization::PptShapeSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeDeserializationContext;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptSlideSerializationContext;
    friend class Aspose::Slides::PptSerialization::LegacyDiagramPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::InkPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::LegacyDiagramPPTXSeriazation;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupVmlSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsDownRevPartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::CustomShapeOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TextFrameOdpSerialization;
    friend class Aspose::Slides::PptSerialization::GroupShapeMetroBlobSerialization;
    friend class Aspose::Slides::PptxSerialization::TimelinePptxSerializationContext;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::Animation::Sequence;
    friend class Aspose::Slides::PictureFrame;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::Connector;
    friend class Aspose::Slides::GroupShape;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::Slide;
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::SmartArt::SmartArtShape;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::VideoFrame;
    friend class Aspose::Slides::Util::SlideUtil;
    friend class Aspose::Slides::Charts::TextElementBase;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::AxisHelper;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::ChartTextHelper;
    friend class Aspose::Slides::SmartArt::LayoutTree;
    friend class Aspose::Slides::SmartArt::SmartArtShapeContainer;
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::EffectPPTXUnsupportedProps;
    friend class Aspose::Slides::PptxSerialization::PartParser::BaseSlidePartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::AudioFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::AutoShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::BaseSlidePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ConnectorPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::GraphicalObjectPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupTransform2DPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PlaceholderPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SmartArtPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::AnimationTimeLinePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Transform2DPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::VideoFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::UserShapesPartParser;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    friend class Aspose::Slides::PptxSerialization::SlidePptxDeserializationContext;
    friend class Aspose::Slides::PptSerialization::AutoShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::GeometryShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::BaseSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::ConnectorPPTSerialization;
    friend class Aspose::Slides::PptSerialization::ShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::GroupShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::LayoutSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::PlaceholderPPTSerialization;
    friend class Aspose::Slides::PptSerialization::ShapeCollectionPPTSerialization;
    friend class Aspose::Slides::PptSerialization::TablePPTSerialization;
    friend class Aspose::Slides::MasterHandoutSlideManager;
    friend class Aspose::Slides::MasterNotesSlideManager;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    friend class Aspose::Slides::NotesTemplate;
    friend class Aspose::Slides::MasterSlideTemplate;
    friend class Aspose::Slides::SlideTemplateCreator;
    /// @endcond
    
protected:

    /// @cond
    using ParameterlessShapeEvent = System::MulticastDelegate<void(System::SharedPtr<Shape>)>;
    
    /// @endcond
    
public:

    /// <summary>
    /// Determines whether the shape is TextHolder_PPT.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsTextHolder() override;
    /// <summary>
    /// Returns the placeholder for a shape. Returns null if the shape has no placeholder.
    /// Read-only <see cref="Aspose::Slides::IPlaceholder">IPlaceholder</see>.
    /// </summary>
    /// <example>
    /// The following example shows how to change Text in Placeholder.
    /// <code>
    /// // Instantiates a Presentation class
    /// auto pres = System::MakeObject<Presentation>(u"ReplacingText.pptx");
    /// 
    /// // Accesses the first slide
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// 
    /// // Iterates through shapes to find the placeholder
    /// for (auto&& shape : slide->get_Shapes())
    /// {
    ///     if (shape->get_Placeholder() != nullptr)
    ///     {
    ///         // Changes the text in each placeholder
    ///         (System::ExplicitCast<IAutoShape>(shape))->get_TextFrame()->set_Text(u"This is a Placeholder");
    ///     }
    /// }
    /// 
    /// // Saves the presentation to disk
    /// pres->Save(u"output_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following example shows how to set Prompt Text in Placeholder.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"Presentation2.pptx");
    /// 
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// for (auto&& shape : slide->get_Slide()->get_Shapes())
    /// {
    ///     if (shape->get_Placeholder() != nullptr && System::ObjectExt::Is<AutoShape>(shape))
    ///     {
    ///         System::String text = u"";
    ///         if (shape->get_Placeholder()->get_Type() == PlaceholderType::CenteredTitle)
    ///         {
    ///             text = u"Add Title";
    ///         }
    ///         else if (shape->get_Placeholder()->get_Type() == PlaceholderType::Subtitle)
    ///         {
    ///             text = u"Add Subtitle";
    ///         }
    ///         
    ///         (System::ExplicitCast<IAutoShape>(shape))->get_TextFrame()->set_Text(text);
    ///         
    ///         System::Console::WriteLine(System::String::Format(u"Placeholder with text: {0}", text));
    ///     }
    /// }
    /// 
    /// pres->Save(u"Placeholders_PromptText.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPlaceholder> get_Placeholder() override;
    /// <summary>
    /// Returns the shape's custom data.
    /// Read-only <see cref="Aspose::Slides::ICustomData">ICustomData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICustomData> get_CustomData() override;
    /// <summary>
    /// Returns the raw shape frame's properties.
    /// Read <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    /// <example>
    /// Code that attempts to assign undefined frame to IShape::set_Frame doesn't make sense in general case (particulary in case when parent GroupShape is multiple nested into other GroupShape-s). For example:
    /// <code>
    /// SharedPtr<IShape> shape = ...;
    /// shape->set_Frame(System::MakeObject<ShapeFrame>(std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), NullableBool::NotDefined, 
    /// NullableBool::NotDefined, std::numeric_limits<float>::quiet_NaN()));
    /// </code>
    /// or
    /// <code>
    /// slide->get_Shapes()->AddAutoShape(ShapeType::RoundCornerRectangle,
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN());
    /// </code>
    /// Such code can lead to unclear situations. So restrictions had been added for using undefined values for IShape::set_Frame. Values of x, y, width, height, flipH, flipV and rotationAngle must be defined (not std::numeric_limits<float>::quiet_NaN() or NullableBool::NotDefined). Example code above now throws ArgumentException exception.
    /// This applies to these use cases:
    /// <code>
    /// SharedPtr<IShape> shape = ...;
    /// shape->set_Frame(...); // cannot be undefined
    /// 
    /// SharedPtr<IShapeCollection> shapes = ...;
    /// // x, y, width, height parameters cannot be std::numeric_limits<float>::quiet_NaN():
    /// {
    ///     shapes->AddAudioFrameCD(...);
    ///     shapes->AddAudioFrameEmbedded(...);
    ///     shapes->AddAudioFrameLinked(...);
    ///     shapes->AddAutoShape(...);
    ///     shapes->AddChart(...);
    ///     shapes->AddConnector(...);
    ///     shapes->AddOleObjectFrame(...);
    ///     shapes->AddPictureFrame(...);
    ///     shapes->AddSmartArt(...);
    ///     shapes->AddTable(...);
    ///     shapes->AddVideoFrame(...);
    ///     shapes->InsertAudioFrameEmbedded(...);
    ///     shapes->InsertAudioFrameLinked(...);
    ///     shapes->InsertAutoShape(...);
    ///     shapes->InsertChart(...);
    ///     shapes->InsertConnector(...);
    ///     shapes->InsertOleObjectFrame(...);
    ///     shapes->InsertPictureFrame(...);
    ///     shapes->InsertTable(...);
    ///     shapes->InsertVideoFrame(...);
    /// }
    /// </code>
    /// 
    /// But a frame for IShape::set_RawFrame method can be undefined. This make sense when shape is linked to placeholder. Then undefined shape frame values is overridden from the parent placeholder shape. If there is no parent placeholder shape for that shape then that shape uses default values when it evaluates effective frame based on its IShape::get_RawFrame. Default values are 0 and NullableBool::False for x, y, width, height, flipH, flipV and rotationAngle. For example:
    /// <code>
    /// SharedPtr<IShape> shape = ...; // shape is linked to placeholder
    /// shape->set_RawFrame(System::MakeObject<ShapeFrame>(std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), 100.0f, std::numeric_limits<float>::quiet_NaN(), 
    /// NullableBool::NotDefined, NullableBool::NotDefined, 0.0f)); // now shape inherits x, y, height, flipH, flipV values form placeholder and overrides width=100 and rotationAngle=0.
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShapeFrame> get_RawFrame() override;
    /// <summary>
    /// Sets the raw shape frame's properties.
    /// Write <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    /// <example>
    /// Code that attempts to assign undefined frame to IShape::set_Frame doesn't make sense in general case (particulary in case when parent GroupShape is multiple nested into other GroupShape-s). For example:
    /// <code>
    /// SharedPtr<IShape> shape = ...;
    /// shape->set_Frame(System::MakeObject<ShapeFrame>(std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), NullableBool::NotDefined, 
    /// NullableBool::NotDefined, std::numeric_limits<float>::quiet_NaN()));
    /// </code>
    /// or
    /// <code>
    /// slide->get_Shapes()->AddAutoShape(ShapeType::RoundCornerRectangle,
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN());
    /// </code>
    /// Such code can lead to unclear situations. So restrictions had been added for using undefined values for IShape::set_Frame. Values of x, y, width, height, flipH, flipV and rotationAngle must be defined (not std::numeric_limits<float>::quiet_NaN() or NullableBool::NotDefined). Example code above now throws ArgumentException exception.
    /// This applies to these use cases:
    /// <code>
    /// SharedPtr<IShape> shape = ...;
    /// shape->set_Frame(...); // cannot be undefined
    /// 
    /// SharedPtr<IShapeCollection> shapes = ...;
    /// // x, y, width, height parameters cannot be std::numeric_limits<float>::quiet_NaN():
    /// {
    ///     shapes->AddAudioFrameCD(...);
    ///     shapes->AddAudioFrameEmbedded(...);
    ///     shapes->AddAudioFrameLinked(...);
    ///     shapes->AddAutoShape(...);
    ///     shapes->AddChart(...);
    ///     shapes->AddConnector(...);
    ///     shapes->AddOleObjectFrame(...);
    ///     shapes->AddPictureFrame(...);
    ///     shapes->AddSmartArt(...);
    ///     shapes->AddTable(...);
    ///     shapes->AddVideoFrame(...);
    ///     shapes->InsertAudioFrameEmbedded(...);
    ///     shapes->InsertAudioFrameLinked(...);
    ///     shapes->InsertAutoShape(...);
    ///     shapes->InsertChart(...);
    ///     shapes->InsertConnector(...);
    ///     shapes->InsertOleObjectFrame(...);
    ///     shapes->InsertPictureFrame(...);
    ///     shapes->InsertTable(...);
    ///     shapes->InsertVideoFrame(...);
    /// }
    /// </code>
    /// 
    /// But a frame for IShape::set_RawFrame method can be undefined. This make sense when shape is linked to placeholder. Then undefined shape frame values is overridden from the parent placeholder shape. If there is no parent placeholder shape for that shape then that shape uses default values when it evaluates effective frame based on its IShape::get_RawFrame. Default values are 0 and NullableBool::False for x, y, width, height, flipH, flipV and rotationAngle. For example:
    /// <code>
    /// SharedPtr<IShape> shape = ...; // shape is linked to placeholder
    /// shape->set_RawFrame(System::MakeObject<ShapeFrame>(std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), 100.0f, std::numeric_limits<float>::quiet_NaN(), 
    /// NullableBool::NotDefined, NullableBool::NotDefined, 0.0f)); // now shape inherits x, y, height, flipH, flipV values form placeholder and overrides width=100 and rotationAngle=0.
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_RawFrame(System::SharedPtr<IShapeFrame> value) override;
    /// <summary>
    /// Returns the shape frame's properties.
    /// Read <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    /// <remarks>
    /// Value of each property of the returned IShapeFrame instance is not 
    /// undefined (is not NaN or NotDefined).
    /// Value of each property of the assigned IShapeFrame instance must be not 
    /// undefined (must be not NaN or NotDefined).
    /// You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShapeFrame> get_Frame() override;
    /// <summary>
    /// Sets the shape frame's properties.
    /// Write <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    /// <remarks>
    /// Value of each property of the returned IShapeFrame instance is not 
    /// undefined (is not NaN or NotDefined).
    /// Value of each property of the assigned IShapeFrame instance must be not 
    /// undefined (must be not NaN or NotDefined).
    /// You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_Frame(System::SharedPtr<IShapeFrame> value) override;
    /// <summary>
    /// Returns the LineFormat object that contains line formatting properties for a shape.
    /// Note: can return null for certain types of shapes which don't have line properties.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_LineFormat() override;
    /// <summary>
    /// Returns the ThreeDFormat object that 3d effect properties for a shape.
    /// Note: can return null for certain types of shapes which don't have 3d properties.
    /// Read-only <see cref="Aspose::Slides::IThreeDFormat">IThreeDFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IThreeDFormat> get_ThreeDFormat() override;
    /// <summary>
    /// Returns the EffectFormat object which contains pixel effects applied to a shape.
    /// Note: can return null for certain types of shapes which don't have effect properties.
    /// Read-only <see cref="Aspose::Slides::IEffectFormat">IEffectFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectFormat> get_EffectFormat() override;
    /// <summary>
    /// Returns the FillFormat object that contains fill formatting properties for a shape.
    /// Note: can return null for certain types of shapes which don't have fill properties.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    /// <example>
    /// The following example shows how to change the accent color for a theme of PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// auto shape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 10.0f, 10.0f, 100.0f, 100.0f);
    /// 
    /// shape->get_FillFormat()->set_FillType(FillType::Solid);
    /// shape->get_FillFormat()->get_SolidFillColor()->set_SchemeColor(SchemeColor::Accent4);
    /// </code>
    /// The following example demonstrates how to obtain palette colors from the main theme color and then used in shapes.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>();
    /// 
    /// auto slide = presentation->get_Slides->idx_get(0);
    /// auto shapes = slide->get_Shapes();
    /// 
    /// // Accent 4
    /// auto shape1 = shapes->AddAutoShape(ShapeType::Rectangle, 10.0f, 10.0f, 50.0f, 50.0f);
    /// auto fillFormat1 = shape1->get_FillFormat();
    /// 
    /// fillFormat1->set_FillType(FillType::Solid);
    /// fillFormat1->get_SolidFillColor()->set_SchemeColor(SchemeColor::Accent4);
    /// 
    /// // Accent 4, Lighter 80%
    /// auto shape2 = shapes->AddAutoShape(ShapeType::Rectangle, 10.0f, 70.0f, 50.0f, 50.0f);
    /// auto fillFormat2 = shape2->get_FillFormat();
    /// auto solidFillColor2 = fillFormat2->get_SolidFillColor();
    /// 
    /// fillFormat2->set_FillType(FillType::Solid);
    /// solidFillColor2->set_SchemeColor(SchemeColor::Accent4);
    /// solidFillColor2->get_ColorTransform()->Add(ColorTransformOperation::MultiplyLuminance, 0.2f);
    /// solidFillColor2->get_ColorTransform()->Add(ColorTransformOperation::AddLuminance, 0.8f);
    /// 
    /// // Accent 4, Lighter 60%
    /// auto shape3 = shapes->AddAutoShape(ShapeType::Rectangle, 10.0f, 130.0f, 50.0f, 50.0f);
    /// auto fillFormat3 = shape3->get_FillFormat();
    /// auto solidFillColor3 = fillFormat3->get_SolidFillColor();
    /// 
    /// fillFormat3->set_FillType(FillType::Solid);
    /// solidFillColor3->set_SchemeColor(SchemeColor::Accent4);
    /// solidFillColor3->get_ColorTransform()->Add(ColorTransformOperation::MultiplyLuminance, 0.4f);
    /// solidFillColor3->get_ColorTransform()->Add(ColorTransformOperation::AddLuminance, 0.6f);
    /// 
    /// // Accent 4, Lighter 40%
    /// auto shape4 = shapes->AddAutoShape(ShapeType::Rectangle, 10.0f, 190.0f, 50.0f, 50.0f);
    /// auto fillFormat4 = shape4->get_FillFormat();
    /// auto solidFillColor4 = fillFormat4->get_SolidFillColor();
    /// 
    /// fillFormat4->set_FillType(FillType::Solid);
    /// solidFillColor4->set_SchemeColor(SchemeColor::Accent4);
    /// solidFillColor4->get_ColorTransform()->Add(ColorTransformOperation::MultiplyLuminance, 0.6f);
    /// solidFillColor4->get_ColorTransform()->Add(ColorTransformOperation::AddLuminance, 0.4f);
    /// 
    /// // Accent 4, Darker 25%
    /// auto shape5 = shapes->AddAutoShape(ShapeType::Rectangle, 10.0f, 250.0f, 50.0f, 50.0f);
    /// auto fillFormat5 = shape5->get_FillFormat();
    /// auto solidFillColor5 = fillFormat5->get_SolidFillColor();
    /// 
    /// fillFormat5->set_FillType(FillType::Solid);
    /// solidFillColor5->set_SchemeColor(SchemeColor::Accent4);
    /// solidFillColor5->get_ColorTransform()->Add(ColorTransformOperation::MultiplyLuminance, 0.75f);
    /// 
    /// // Accent 4, Darker 50%
    /// auto shape6 = shapes->AddAutoShape(ShapeType::Rectangle, 10.0f, 310.0f, 50.0f, 50.0f);
    /// auto fillFormat6 = shape6->get_FillFormat();
    /// auto solidFillColor6 = fillFormat6->get_SolidFillColor();
    /// 
    /// fillFormat6->set_FillType(FillType::Solid);
    /// solidFillColor6->set_SchemeColor(SchemeColor::Accent4);
    /// solidFillColor6->get_ColorTransform()->Add(ColorTransformOperation::MultiplyLuminance, 0.5f);
    /// 
    /// presentation->Save(u"example.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_FillFormat() override;
    /// <summary>
    /// Returns the hyperlink defined for mouse click.
    /// Read <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlink> get_HyperlinkClick() override;
    /// <summary>
    /// Sets the hyperlink defined for mouse click.
    /// Write <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HyperlinkClick(System::SharedPtr<IHyperlink> value) override;
    /// <summary>
    /// Returns the hyperlink defined for mouse over.
    /// Read <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlink> get_HyperlinkMouseOver() override;
    /// <summary>
    /// Sets the hyperlink defined for mouse over.
    /// Write <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HyperlinkMouseOver(System::SharedPtr<IHyperlink> value) override;
    /// <summary>
    /// Returns the hyperlink manager.
    /// Read-only <see cref="Aspose::Slides::IHyperlinkManager">IHyperlinkManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlinkManager> get_HyperlinkManager() override;
    /// <summary>
    /// Determines whether the shape is hidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Hidden() override;
    /// <summary>
    /// Determines whether the shape is hidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Hidden(bool value) override;
    /// <summary>
    /// Returns the position of a shape in the z-order.
    /// Shapes[0] returns the shape at the back of the z-order,
    /// and Shapes[Shapes.Count - 1] returns the shape at the front of the z-order.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_ZOrderPosition() override;
    /// <summary>
    /// Returns the number of connection sites on the shape.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_ConnectionSiteCount() override;
    /// <summary>
    /// Returns the number of degrees the specified shape is rotated around
    /// the z-axis. A positive value indicates clockwise rotation; a negative value
    /// indicates counterclockwise rotation.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API float get_Rotation() override;
    /// <summary>
    /// Sets the number of degrees the specified shape is rotated around
    /// the z-axis. A positive value indicates clockwise rotation; a negative value
    /// indicates counterclockwise rotation.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_Rotation(float value) override;
    /// <summary>
    /// Returns the x-coordinate of the upper-left corner of the shape.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API float get_X() override;
    /// <summary>
    /// Sets the x-coordinate of the upper-left corner of the shape.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_X(float value) override;
    /// <summary>
    /// Returns the y-coordinate of the upper-left corner of the shape.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API float get_Y() override;
    /// <summary>
    /// Sets the y-coordinate of the upper-left corner of the shape.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_Y(float value) override;
    /// <summary>
    /// Returns the width of the shape.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API float get_Width() override;
    /// <summary>
    /// Sets the width of the shape.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_Width(float value) override;
    /// <summary>
    /// Returns the height of the shape.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API float get_Height() override;
    /// <summary>
    /// Sets the height of the shape.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_Height(float value) override;
    /// <summary>
    /// Property specifies how a shape will render in black-and-white display mode..
    /// Read <see cref="Slides::BlackWhiteMode"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::BlackWhiteMode get_BlackWhiteMode() override;
    /// <summary>
    /// Property specifies how a shape will render in black-and-white display mode..
    /// Write <see cref="Slides::BlackWhiteMode"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BlackWhiteMode(Aspose::Slides::BlackWhiteMode value) override;
    /// <summary>
    /// Gets unique shape identifier in presentation scope.
    /// Read-only <see cref="uint32_t"></see>.
    /// See also <see cref="Shape::get_OfficeInteropShapeId"></see> for getting unique shape identifier in slide scope.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_UniqueId() override;
    /// <summary>
    /// Gets unique shape identifier in slide scope.
    /// Read-only <see cref="uint32_t"></see>.
    /// See also <see cref="Shape::get_UniqueId"></see> for getting unique shape identifier in presentation scope.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_OfficeInteropShapeId() override;
    /// <summary>
    /// Returns the alternative text associated with a shape.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_AlternativeText() override;
    /// <summary>
    /// Sets the alternative text associated with a shape.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AlternativeText(System::String value) override;
    /// <summary>
    /// Returns the title of alternative text associated with a shape.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_AlternativeTextTitle() override;
    /// <summary>
    /// Sets the title of alternative text associated with a shape.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AlternativeTextTitle(System::String value) override;
    /// <summary>
    /// Returns the name of a shape.
    /// Must be not null. Use empty string value if needed.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Sets the name of a shape.
    /// Must be not null. Use empty string value if needed.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::String value) override;
    /// <summary>
    /// Gets 'Mark as decorative' option
    /// Reed/write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"sample.pptx")
    /// pres->get_Slide(0)->get_Shape(0)->set_IsDecorative(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_IsDecorative() override;
    /// <summary>
    /// Sets 'Mark as decorative' option
    /// Reed/write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"sample.pptx")
    /// pres->get_Slide(0)->get_Shape(0)->set_IsDecorative(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_IsDecorative(bool value) override;
    /// <summary>
    /// Returns shape's locks.
    /// Read-only <see cref="Aspose::Slides::IBaseShapeLock">IBaseShapeLock</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseShapeLock> get_ShapeLock() override;
    /// <summary>
    /// Determines whether the shape is grouped.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Property <see cref="Shape::get_ParentGroup"></see> returns parent GroupShape object if shape is grouped.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_IsGrouped() override;
    /// <summary>
    /// Returns parent GroupShape object if shape is grouped. Otherwise returns null.
    /// Read-only <see cref="Aspose::Slides::IGroupShape">IGroupShape</see>.
    /// </summary>
    /// <remarks>
    /// Property <see cref="Shape::get_IsGrouped"></see> determines whether the shape is grouped.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGroupShape> get_ParentGroup() override;
    /// <summary>
    /// Returns the parent slide of a shape.
    /// Read-only <see cref="Aspose::Slides::IBaseSlide">IBaseSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a slide.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    void _anonymous_method_0(System::SharedPtr<Shape> self, System::SharedPtr<ILineFormat> registryReference);
    /// <summary>
    /// Defines that this shape isn't a placeholder.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void RemovePlaceholder() override;
    /// <summary>
    /// Adds a new placeholder if there is no and sets placeholder properties to a specified one.
    /// </summary>
    /// <param name="placeholderToCopyFrom">Placeholder to copy content from.</param>
    /// <returns>New <see cref="Shape::get_Placeholder"></see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPlaceholder> AddPlaceholder(System::SharedPtr<IPlaceholder> placeholderToCopyFrom) override;
    /// <summary>
    /// Returns a basic placeholder shape (shape from the layout and/or master slide that the current shape is inherited from).
    /// <remarks>A null is returned if the current shape is not inherited.</remarks> 
    /// </summary>
    /// <example>
    /// <code>
    /// // get all (master/layout/slide) animated effects of the placeholder shape
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"sample.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = pres->get_Slide(0);
    /// System::SharedPtr<IShape> shape = slide->get_Shape(0);
    /// System::ArrayPtr<System::SharedPtr<IEffect>> shapeEffects = slide->get_Timeline()->get_MainSequence()->GetEffectsByShape(shape);
    /// 
    /// System::SharedPtr<IShape> layoutShape = shape->GetBasePlaceholder();
    /// System::ArrayPtr<System::SharedPtr<IEffect>> layoutShapeEffects = slide->get_LayoutSlide()->get_Timeline()->get_MainSequence()->GetEffectsByShape(layoutShape);
    /// 
    /// System::SharedPtr<IShape> masterShape = layoutShape->GetBasePlaceholder();
    /// System::ArrayPtr<System::SharedPtr<IEffect>> masterShapeEffects = slide->get_LayoutSlide()->get_MasterSlide()->get_Timeline()->get_MainSequence()->GetEffectsByShape(masterShape);
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> GetBasePlaceholder() override;
    /// @deprecated Use GetImage method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns shape thumbnail.
    /// ShapeThumbnailBounds::Shape shape thumbnail bounds type is used by default.
    /// </summary>
    /// <returns>Shape thumbnail.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail() override;
    /// <summary>
    /// Returns shape thumbnail.
    /// ShapeThumbnailBounds::Shape shape thumbnail bounds type is used by default.
    /// </summary>
    /// <returns>Shape thumbnail.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetImage() override;
    /// @deprecated Use GetImage(ShapeThumbnailBounds bounds, float scaleX, float scaleY) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns shape thumbnail.
    /// </summary>
    /// <param name="bounds">Shape thumbnail bounds type.</param>
    /// <param name="scaleX">X scale</param>
    /// <param name="scaleY">Y scale</param>
    /// <returns>Shape thumbnail or null in case when ShapeThumbnailBounds::Appearance is used and a shape doesn't have visible elements.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(ShapeThumbnailBounds bounds, float scaleX, float scaleY) override;
    /// <summary>
    /// Returns shape thumbnail.
    /// </summary>
    /// <param name="bounds">Shape thumbnail bounds type.</param>
    /// <param name="scaleX">X scale</param>
    /// <param name="scaleY">Y scale</param>
    /// <returns>Shape thumbnail or null in case when ShapeThumbnailBounds::Appearance is used and a shape doesn't have visible elements.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetImage(ShapeThumbnailBounds bounds, float scaleX, float scaleY) override;
    /// <summary>
    /// Saves content of Shape as SVG file.
    /// </summary>
    /// <param name="stream">Target stream</param>
    ASPOSE_SLIDES_SHARED_API void WriteAsSvg(System::SharedPtr<System::IO::Stream> stream) override;
    /// <summary>
    /// Saves content of Shape as SVG file.
    /// </summary>
    /// <param name="stream">Target stream</param>
    /// <param name="svgOptions">SVG generation options</param>
    ASPOSE_SLIDES_SHARED_API void WriteAsSvg(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Export::ISVGOptions> svgOptions) override;
    
protected:

    System::SharedPtr<Aspose::Slides::FillFormat> m_fillFormat;
    System::SharedPtr<Aspose::Slides::LineFormat> m_lineFormat;
    /// @cond
    uint32_t m_version_OldMode;
    uint32_t m_nFSTVersion;
    bool m_ScalingProcess;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Shape> get_FallbackShape() const;
    ASPOSE_SLIDES_LOCAL_API void set_FallbackShape(System::SharedPtr<Shape> value);
    ASPOSE_SLIDES_LOCAL_API bool get_Unprocessed() const;
    ASPOSE_SLIDES_LOCAL_API void set_Unprocessed(bool value);
    ASPOSE_SLIDES_LOCAL_API bool get_IsScalingProcess();
    ASPOSE_SLIDES_LOCAL_API void set_IsScalingProcess(bool value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PresentationML::Transform2D> get_Transform2DInternal();
    ASPOSE_SLIDES_LOCAL_API void set_Transform2DInternal(System::SharedPtr<PresentationML::Transform2D> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ShapeFrame> get_FrameImpl();
    ASPOSE_SLIDES_LOCAL_API void set_FrameImpl(System::SharedPtr<ShapeFrame> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ShapeLayout> get_Layout() const;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ShapePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::ShapePPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API bool get_SwapXY();
    ASPOSE_SLIDES_LOCAL_API System::Drawing::RectangleF get_ShapeRectangleRotated();
    ASPOSE_SLIDES_LOCAL_API Drawing::Vector2d64d get_Size();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_ShapeId();
    virtual ASPOSE_SLIDES_SHARED_API uint32_t get_Version_OldMode();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GroupShape> get_ParentGroupInternal();
    virtual ASPOSE_SLIDES_SHARED_API bool get_MetroBlobRequired();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISlideComponent> get_Parent_ISlideComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ShapeCollection> get_Parent_ShapeCollection();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BaseSlide> get_SlideInternal();
    
    System::Event<void(System::SharedPtr<Shape>)> m_shapeRemoved;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::ThreeDFormat> GetThreeDFormatLazy();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::LineFormat> GetLineFormatLazy();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::LineFormat> GetLineFormatRawRef();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::LineFormat> GetLineFormatRawRef(System::SharedPtr<Shape> parent);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::EffectFormat> GetEffectFormatLazy();
    ASPOSE_SLIDES_LOCAL_API void SetEffectFormat(System::SharedPtr<Aspose::Slides::EffectFormat> effectFormat);
    ASPOSE_SLIDES_LOCAL_API void SetLineFormatRawRef(System::SharedPtr<Aspose::Slides::LineFormat> lineFormat);
    ASPOSE_SLIDES_LOCAL_API void SetSketchEvent();
    ASPOSE_SLIDES_LOCAL_API void SetPlaceholder(Orientation orientation, PlaceholderSize size, PlaceholderType type, uint32_t index, bool hasCustomPrompt);
    virtual ASPOSE_SLIDES_SHARED_API System::SharedPtr<PresentationML::Transform2D> GetRawFrameImpl();
    ASPOSE_SLIDES_LOCAL_API void SetRawFrameImpl(Drawing::RectAndFlipRotation value);
    virtual ASPOSE_SLIDES_SHARED_API void SetRawFrameImpl(Drawing::Vector2d64d pos, Drawing::Vector2d64d size, Drawing::FlipRotation flipRotation);
    ASPOSE_SLIDES_LOCAL_API void SetSize(double width, double height);
    virtual ASPOSE_SLIDES_SHARED_API void SetSize(Drawing::Vector2d64d size);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<Shape>> GetPrototypes();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ShapeFrame> GetSlideSpaceFrame();
    ASPOSE_SLIDES_LOCAL_API void SetSlideSpaceFrame(System::SharedPtr<ShapeFrame> value);
    ASPOSE_SLIDES_LOCAL_API void SetSlideSpaceFrame(Drawing::RectAndFlipRotation value);
    ASPOSE_SLIDES_LOCAL_API Drawing::RectAndFlipRotation SlideSpaceToRaw(Drawing::RectAndFlipRotation value);
    ASPOSE_SLIDES_LOCAL_API Drawing::RectAndFlipRotation SlideSpaceToRaw(System::SharedPtr<ShapeFrame> frame);
    virtual ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormatEffectiveData> CreateLineFormatEffectiveImpl();
    virtual ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormatEffectiveData> CreateFillFormatEffectiveImpl();
    
    ASPOSE_SLIDES_LOCAL_API Shape(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Shape, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Shape(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ShapePPTXUnsupportedProps> pptxUnsupportedProps, System::SharedPtr<IBaseShapeLock> shapeLock);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Shape, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ShapePPTXUnsupportedProps> pptxUnsupportedProps, System::SharedPtr<IBaseShapeLock> shapeLock));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Shape(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ShapePPTXUnsupportedProps> pptxUnsupportedProps, System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::ShapePPTUnsupportedProps> pptUnsupportedProps, System::SharedPtr<IBaseShapeLock> shapeLock);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Shape, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ShapePPTXUnsupportedProps> pptxUnsupportedProps, System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::ShapePPTUnsupportedProps> pptUnsupportedProps, System::SharedPtr<IBaseShapeLock> shapeLock));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void OnConstruct(System::SharedPtr<ShapeLayout> layout);
    virtual ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::Drawing::PointF> CreateConnectionPoints();
    virtual ASPOSE_SLIDES_SHARED_API System::ArrayPtr<float> CreateConnectionDirections();
    virtual ASPOSE_SLIDES_SHARED_API void ZOrder(ZOrderCmd cmd);
    ASPOSE_SLIDES_LOCAL_API bool SetPosition(Drawing::Vector2d32f newPos);
    virtual ASPOSE_SLIDES_SHARED_API void OnHeightChanged(float newHeight);
    virtual ASPOSE_SLIDES_SHARED_API void OnWidthChanged(float newWidth);
    ASPOSE_SLIDES_LOCAL_API void SetSize(Drawing::Vector2d32f newSize);
    ASPOSE_SLIDES_LOCAL_API void SetUniqueId(System::String value);
    ASPOSE_SLIDES_LOCAL_API void SetShapeId(uint32_t id);
    ASPOSE_SLIDES_LOCAL_API void RedefineShapeId(uint32_t id);
    ASPOSE_SLIDES_LOCAL_API uint32_t CreateShapeId();
    virtual ASPOSE_SLIDES_SHARED_API void ScaleGeometry(float scalingCoefX, float scalingCoefY, float scalingContentCoef);
    virtual ASPOSE_SLIDES_SHARED_API void LocateGeometry(float locatingCoefX, float locatingCoefY);
    virtual ASPOSE_SLIDES_SHARED_API void Reset();
    ASPOSE_SLIDES_LOCAL_API void ScaleSizes(float scalingCoefX, float scalingCoefY, float scalingContentCoef);
    virtual ASPOSE_SLIDES_SHARED_API void ConfirmTextFrameIsFittedToShape();
    ASPOSE_SLIDES_LOCAL_API void Changed_OldMode();
    virtual ASPOSE_SLIDES_SHARED_API void BeforeRemove();
    ASPOSE_SLIDES_LOCAL_API void ResetFrame();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Shape();
    
private:

    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    System::WeakPtr<ISlideComponent> m_parentISlideComponent;
    System::WeakPtr<ShapeCollection> m_parentShapeCollection;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ShapePPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::ShapePPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<IBaseShapeLock> m_lock;
    System::SharedPtr<Aspose::Slides::Placeholder> m_placeholder;
    System::SharedPtr<Aspose::Slides::CustomData> m_customData;
    System::SharedPtr<Hyperlink> m_hyperlinkClick;
    System::SharedPtr<Hyperlink> m_hyperlinkMouseOver;
    System::SharedPtr<Aspose::Slides::HyperlinkManager> m_hyperlinkManager;
    bool m_hidden;
    Aspose::Slides::BlackWhiteMode m_bwMode;
    System::SharedPtr<Aspose::Slides::ThreeDFormat> m_3dFormat;
    System::SharedPtr<Aspose::Slides::EffectFormat> m_effectFormat;
    System::SharedPtr<PresentationML::Transform2D> m_transform2d;
    System::SharedPtr<TypicalValues::ITypicalValuesRegistryManager> m_typicalValuesRegistryManager;
    System::String m_shapeName;
    System::String m_alternativeText;
    System::String m_alternativeTitle;
    bool m_isDecorative;
    System::SharedPtr<Shape> pr_FallbackShape;
    bool pr_Unprocessed;
    System::SharedPtr<ShapeLayout> pr_Layout;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void set_Layout(System::SharedPtr<ShapeLayout> value);
    /// @endcond
    
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<float> s_defaultConnectionDirections;
    int32_t m_uniqueId;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TypicalValues::ITypicalValuesRegistry<System::SharedPtr<ILineFormat>, System::SharedPtr<Aspose::Slides::LineFormat>>> get_LineFormatRegistry();
    
    ASPOSE_SLIDES_LOCAL_API void OnSketchFormatChanged();
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<ShapeElement>> GetGeometryElements(System::SharedPtr<SketchFormat> sketchFormat, System::SharedPtr<PresentationML::Geometry2D> parentSketchGeometry);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PresentationML::Geometry2D> GetActualSketchGeometry();
    ASPOSE_SLIDES_LOCAL_API void RemoveSketchGraphics(System::SharedPtr<PresentationML::Geometry2D> sketchGeometry);
    ASPOSE_SLIDES_LOCAL_API void PreventAutofit(System::SharedPtr<GroupShape> grShape);
    ASPOSE_SLIDES_LOCAL_API void NormalizeParentGroupShapes();
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


