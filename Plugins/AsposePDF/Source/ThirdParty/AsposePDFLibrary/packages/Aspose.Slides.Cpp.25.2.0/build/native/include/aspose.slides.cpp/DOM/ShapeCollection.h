#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <DOM/IShapeCollection.h>

#include "DOM/GroupShape.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AudioFrame;
class AutoShape;
class BaseHeaderFooterManager;
namespace Charts
{
class Chart;
enum class ChartGrouping;
enum class ChartType;
class IChart;
} // namespace Charts
class Connector;
class GraphicalObject;
class IAudio;
class IAudioFrame;
class IAutoShape;
class IConnector;
class IGroupShape;
namespace Ink
{
class Ink;
} // namespace Ink
class IOleEmbeddedDataInfo;
class IOleObjectFrame;
class IPictureFrame;
class IPPImage;
class ISection;
class ISectionZoomFrame;
class IShape;
class ISlide;
class ISummaryZoomFrame;
class ISvgImage;
class ITable;
class IVideo;
class IVideoFrame;
class IZoomFrame;
class LayoutPlaceholderManager;
class LayoutTemplatesContext;
class LegacyDiagram;
class MasterHandoutSlideManager;
class MasterNotesSlideManager;
class MasterSlideTemplate;
class NotesTemplate;
namespace OdpSerialization
{
namespace PartParser
{
class ChartOdpDeserialization;
class MediaFrameOdpSerialization;
class OleObjectFrameOdpDeserialization;
class ShapeOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
class OleObjectFrame;
class PictureFrame;
namespace PptSerialization
{
class AutoShapePPTSerialization;
class ConnectorPPTSerialization;
class LayoutSlidePPTSerialization;
class LegacyDiagramPPTSerialization;
class PictureFramePPTSerialization;
class PptShapeDeserializationContext;
class ShapePPTSerialization;
class TablePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class AudioFramePPTXSerialization;
class ChartExPartParser;
class ChartPartParser;
class GroupShapePPTXSerialization;
class GroupVmlSerialization;
class LegacyDiagramPPTXSeriazation;
class SmartArtPPTXSerialization;
class TablePPTXSerialization;
class UserShapesPartParser;
class VideoFramePPTXSerialization;
class VmlDrawingPartParser;
} // namespace PartParser
} // namespace PptxSerialization
class SectionZoomFrame;
class Shape;
enum class ShapeType;
namespace SmartArt
{
class ISmartArt;
class LayoutTree;
class SmartArt;
enum class SmartArtLayoutType;
} // namespace SmartArt
class SummaryZoomFrame;
class Table;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
enum class AudioFrameType;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
class VideoFrame;
class ZoomFrame;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class SizeF;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/* Creating shape instanses:
     * ____________________________________________________________________________________
     *                                     | AddRaw*   | CreateTemplated*  | Add*, Insert* |
     * generating ShapeId                  | -           -                   +             |
     * applying initial template settings  | -           +                   +             |
     * Shape.m_transform2d inited with NaN | +           +                   -             |
     */
/// <summary>
/// Represents a collection of a shapes.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ShapeCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::GroupShape>>, public Aspose::Slides::IShapeCollection
{
    typedef ShapeCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::GroupShape>> BaseType;
    typedef Aspose::Slides::IShapeCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::LayoutPlaceholderManager;
    friend class Aspose::Slides::OdpSerialization::PartParser::ChartOdpDeserialization;
    friend class Aspose::Slides::BaseHeaderFooterManager;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::LayoutTemplatesContext;
    friend class Aspose::Slides::OdpSerialization::PartParser::OleObjectFrameOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::MediaFrameOdpSerialization;
    friend class Aspose::Slides::PptSerialization::PptShapeDeserializationContext;
    friend class Aspose::Slides::PptSerialization::LegacyDiagramPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ChartExPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::LegacyDiagramPPTXSeriazation;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupVmlSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpDeserialization;
    friend class Aspose::Slides::GroupShape;
    friend class Aspose::Slides::SmartArt::LayoutTree;
    friend class Aspose::Slides::PptxSerialization::PartParser::ChartPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::AudioFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SmartArtPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::TablePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::VideoFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::UserShapesPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::VmlDrawingPartParser;
    friend class Aspose::Slides::PptSerialization::PictureFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::AutoShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::ConnectorPPTSerialization;
    friend class Aspose::Slides::PptSerialization::ShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::LayoutSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TablePPTSerialization;
    friend class Aspose::Slides::MasterHandoutSlideManager;
    friend class Aspose::Slides::MasterNotesSlideManager;
    friend class Aspose::Slides::NotesTemplate;
    friend class Aspose::Slides::MasterSlideTemplate;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IShape>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns parent GroupShape object for a shapes collection.
    /// Read-only <see cref="Aspose::Slides::IGroupShape">IGroupShape</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGroupShape> get_ParentGroup() override;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() override;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> idx_get(int32_t index) override;
    
    /// <summary>
    /// Creates a new Chart, initialize it with sample series data and settings and adds 
    /// it to the end of the collection.
    /// </summary>
    /// <param name="type">Type of chart.</param>
    /// <param name="x">X coordinate of a new chart.</param>
    /// <param name="y">Y coordinate of a new chart.</param>
    /// <param name="width">Chart's width.</param>
    /// <param name="height">Chart's height.</param>
    /// <returns>Created chart.</returns>
    /// <example>
    /// The following example shows how to create Chart in PowerPoint Presentation.
    /// <code>
    /// // Instantiates the Presentation class that represents a PPTX file
    /// auto pres = System::MakeObject<Presentation>();
    /// // Accesses the first slide
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// // Adds a chart with its default data
    /// System::SharedPtr<IChart> chart = slide->get_Shapes()->AddChart(ChartType::ClusteredColumn, 0.0f, 0.0f, 500.0f, 500.0f);
    /// // Sets the chart title
    /// auto chartTitle = chart->get_ChartTitle();
    /// chartTitle->AddTextFrameForOverriding(u"Sample Title");
    /// chartTitle->get_TextFrameForOverriding()->get_TextFrameFormat()->set_CenterText(NullableBool::True);
    /// chartTitle->set_Height(20.0f);
    /// chart->set_HasTitle(true);
    /// 
    /// auto chartData = chart->get_ChartData();
    /// auto categories = chartData->get_Categories();
    /// auto chartSeries = chartData->get_Series();
    /// // Sets the first series to show values
    /// chartSeries->idx_get(0)->get_Labels()->get_DefaultDataLabelFormat()->set_ShowValue(true);
    /// // Sets the index for the chart data sheet
    /// int32_t defaultWorksheetIndex = 0;
    /// // Gets the chart data worksheet
    /// System::SharedPtr<IChartDataWorkbook> fact = chartData->get_ChartDataWorkbook();
    /// // Deletes the default generated series and categories
    /// chartSeries->Clear();
    /// categories->Clear();
    /// int32_t s = chartSeries->get_Count();
    /// s = categories->get_Count();
    /// // Adds new series
    /// chartSeries->Add(fact->GetCell(defaultWorksheetIndex, 0, 1, System::ExplicitCast<System::Object>(u"Series 1")), chart->get_Type());
    /// chartSeries->Add(fact->GetCell(defaultWorksheetIndex, 0, 2, System::ExplicitCast<System::Object>(u"Series 2")), chart->get_Type());
    /// // Adds new categories
    /// categories->Add(fact->GetCell(defaultWorksheetIndex, 1, 0, System::ExplicitCast<System::Object>(u"Caetegoty 1")));
    /// categories->Add(fact->GetCell(defaultWorksheetIndex, 2, 0, System::ExplicitCast<System::Object>(u"Caetegoty 2")));
    /// categories->Add(fact->GetCell(defaultWorksheetIndex, 3, 0, System::ExplicitCast<System::Object>(u"Caetegoty 3")));
    /// // Takes the first chart series
    /// System::SharedPtr<IChartSeries> series = chart->get_ChartData()->get_Series()->idx_get(0);
    /// auto dataPoints = series->get_DataPoints();
    /// // Populates series data
    /// dataPoints->AddDataPointForBarSeries(fact->GetCell(defaultWorksheetIndex, 1, 1, System::ExplicitCast<System::Object>(20)));
    /// dataPoints->AddDataPointForBarSeries(fact->GetCell(defaultWorksheetIndex, 2, 1, System::ExplicitCast<System::Object>(50)));
    /// dataPoints->AddDataPointForBarSeries(fact->GetCell(defaultWorksheetIndex, 3, 1, System::ExplicitCast<System::Object>(30)));
    /// // Sets the fill color for the series
    /// series->get_Format()->get_Fill()->set_FillType(FillType::Solid);
    /// series->get_Format()->get_Fill()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Red());
    /// // Takes the second chart series
    /// series = chart->get_ChartData()->get_Series()->idx_get(1);
    /// // Populates series data
    /// dataPoints->AddDataPointForBarSeries(fact->GetCell(defaultWorksheetIndex, 1, 2, System::ExplicitCast<System::Object>(30)));
    /// dataPoints->AddDataPointForBarSeries(fact->GetCell(defaultWorksheetIndex, 2, 2, System::ExplicitCast<System::Object>(10)));
    /// dataPoints->AddDataPointForBarSeries(fact->GetCell(defaultWorksheetIndex, 3, 2, System::ExplicitCast<System::Object>(60)));
    /// // Sets the fill color for series
    /// series->get_Format()->get_Fill()->set_FillType(FillType::Solid);
    /// series->get_Format()->get_Fill()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Green());
    /// // Sets the first label to show Category name
    /// System::SharedPtr<IDataLabel> lbl = dataPoints->idx_get(0)->get_Label();
    /// lbl->get_DataLabelFormat()->set_ShowCategoryName(true);
    /// lbl = dataPoints->idx_get(1)->get_Label();
    /// lbl->get_DataLabelFormat()->set_ShowSeriesName(true);
    /// // Sets the series to show the value for the third label
    /// lbl = dataPoints->idx_get(2)->get_Label();
    /// lbl->get_DataLabelFormat()->set_ShowValue(true);
    /// lbl->get_DataLabelFormat()->set_ShowSeriesName(true);
    /// lbl->get_DataLabelFormat()->set_Separator(u"/");
    /// // Saves the PPTX file to disk
    /// pres->Save(u"AsposeChart_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Charts::IChart> AddChart(Charts::ChartType type, float x, float y, float width, float height) override;
    /// <summary>
    /// Creates a new Chart and adds it to the end of the collection.
    /// </summary>
    /// <param name="type">Type of chart.</param>
    /// <param name="x">X coordinate of a new chart.</param>
    /// <param name="y">Y coordinate of a new chart.</param>
    /// <param name="width">Chart's width.</param>
    /// <param name="height">Chart's height.</param>
    /// <param name="initWithSample">
    /// If true then new chart will be initialized with sample series data and settings.
    /// If false then new chart will have no series and minimum settings. In this case 
    /// chart creation will be more fast.
    /// </param>
    /// <returns>Created chart.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Charts::IChart> AddChart(Charts::ChartType type, float x, float y, float width, float height, bool initWithSample) override;
    /// <summary>
    /// Add SmartArt diagram.
    /// </summary>
    /// <param name="x">The X-coordinate for a left side of diagram's frame.</param>
    /// <param name="y">The Y-coordinate for a left side of diagram's frame.</param>
    /// <param name="width">The width of diagram's frame.</param>
    /// <param name="height">The height of diagram's frame.</param>
    /// <param name="layoutType">The type of SmartArt diagram</param>
    /// <returns>Create SmartArt diagram</returns>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// auto smart = slide->get_Shapes()->AddSmartArt(0.0f, 0.0f, 400.0f, 400.0f, SmartArtLayoutType::BasicBlockList);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<SmartArt::ISmartArt> AddSmartArt(float x, float y, float width, float height, SmartArt::SmartArtLayoutType layoutType) override;
    /// <summary>
    /// Creates a new Chart, initialize it with sample series data and settings and inserts 
    /// it to the specified position in the collection.
    /// </summary>
    /// <param name="type">Type of chart.</param>
    /// <param name="x">X coordinate of a new chart.</param>
    /// <param name="y">Y coordinate of a new chart.</param>
    /// <param name="width">Chart's width.</param>
    /// <param name="height">Chart's height.</param>
    /// <param name="index">Chart's position in the collection.</param>
    /// <returns>Created chart.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Charts::IChart> InsertChart(Charts::ChartType type, float x, float y, float width, float height, int32_t index) override;
    /// <summary>
    /// Creates a new Chart and inserts it to the specified position in the collection.
    /// </summary>
    /// <param name="type">Type of chart.</param>
    /// <param name="x">X coordinate of a new chart.</param>
    /// <param name="y">Y coordinate of a new chart.</param>
    /// <param name="width">Chart's width.</param>
    /// <param name="height">Chart's height.</param>
    /// <param name="index">Chart's position in the collection.</param>
    /// <param name="initWithSample">
    /// If true then new chart will be initialized with sample series data and settings.
    /// If false then new chart will have no series and minimum settings. In this case 
    /// chart creation will be more fast.
    /// </param>
    /// <returns>Created chart.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Charts::IChart> InsertChart(Charts::ChartType type, float x, float y, float width, float height, int32_t index, bool initWithSample) override;
    /// <summary>
    /// Adds a new Zoom object to the end of a collection.
    /// </summary>
    /// <example>
    /// This example demonstrates adding a Zoom object to the end of a collection
    /// (assume that there are at least two slides in the "Presentation.pptx" presentation):
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// 
    /// System::SharedPtr<IZoomFrame> zoomFrame = pres->get_Slides()->idx_get(0)->get_Shapes()->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// </code>
    /// </example>
    /// <param name="x">X coordinate of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="y">Y coordinate of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="width">Width of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="height">Height of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="slide">The slide object referenced by the Zoom frame <see cref="Aspose::Slides::ISlide">ISlide</see>.</param>
    /// <returns>Created Zoom object <see cref="Aspose::Slides::IZoomFrame">IZoomFrame</see>.</returns>
    /// <exception cref="System::ArgumentException ">Referenced slide does not belong to the current presentation.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IZoomFrame> AddZoomFrame(float x, float y, float width, float height, System::SharedPtr<ISlide> slide) override;
    /// <summary>
    /// Adds a new Zoom object to the end of a collection.
    /// </summary>
    /// <example>
    /// This example demonstrates adding a Zoom object to the end of a collection
    /// (assume that there are at least two slides in the "Presentation.pptx" presentation):
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// 
    /// System::SharedPtr<IPPImage> image = pres->get_Images()->AddImage(System::Drawing::Image::FromFile(u"image.png"));
    /// System::SharedPtr<IZoomFrame> zoomFrame = pres->get_Slides()->idx_get(0)->get_Shapes()->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1), image);
    /// </code>
    /// </example>
    /// <param name="x">X coordinate of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="y">Y coordinate of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="width">Width of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="height">Height of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="slide">The slide object referenced by the Zoom frame <see cref="Aspose::Slides::ISlide">ISlide</see>.</param>
    /// <param name="image">The image for the referenced slide <see cref="Aspose::Slides::IPPImage">IPPImage</see></param>
    /// <returns>Created Zoom object <see cref="Aspose::Slides::IZoomFrame">IZoomFrame</see>.</returns>
    /// <exception cref="System::ArgumentException ">Referenced slide does not belong to the current presentation.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IZoomFrame> AddZoomFrame(float x, float y, float width, float height, System::SharedPtr<ISlide> slide, System::SharedPtr<IPPImage> image) override;
    /// <summary>
    /// Creates a new Zoom object and inserts it to a collection at the specified index.
    /// </summary>
    /// <example>
    /// This example demonstrates creation and inserting a Zoom object at the specified index of a collection
    /// (assume that there are at least two slides in the "Presentation.pptx" presentation):
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// System::SharedPtr<IZoomFrame> zoomFrame = pres->get_Slides()->idx_get(0)->get_Shapes()->InsertZoomFrame(2, 150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// </code>
    /// </example>
    /// <param name="index">The zero-based index at which Zoom frame should be inserted.</param>
    /// <param name="x">X coordinate of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="y">Y coordinate of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="width">Width of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="height">Height of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="slide">The slide object referenced by the Zoom frame <see cref="Aspose::Slides::ISlide">ISlide</see>.</param>
    /// <returns>Created Zoom object <see cref="Aspose::Slides::IZoomFrame">IZoomFrame</see>.</returns>
    /// <exception cref="System::ArgumentException ">Referenced slide does not belong to the current presentation.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IZoomFrame> InsertZoomFrame(int32_t index, float x, float y, float width, float height, System::SharedPtr<ISlide> slide) override;
    /// <summary>
    /// Creates a new Zoom object and inserts it to a collection at the specified index.
    /// </summary>
    /// <example>
    /// This example demonstrates creation and inserting a Zoom object at the specified index of a collection
    /// (assume that there are at least two slides in the "Presentation.pptx" presentation):
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// System::SharedPtr<IPPImage> image = pres->get_Images()->AddImage(System::Drawing::Image::FromFile(u"image.png"));
    /// 
    /// System::SharedPtr<IZoomFrame> zoomFrame = pres->get_Slides()->idx_get(0)->get_Shapes()->InsertZoomFrame(2, 150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1), image);
    /// </code>
    /// </example>
    /// <param name="index">The zero-based index at which Zoom frame should be inserted.</param>
    /// <param name="x">X coordinate of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="y">Y coordinate of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="width">Width of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="height">Height of a new Zoom frame <see cref="float"></see>.</param>
    /// <param name="slide">The slide object referenced by the Zoom frame <see cref="Aspose::Slides::ISlide">ISlide</see>.</param>
    /// <param name="image">The image for the referenced slide <see cref="Aspose::Slides::IPPImage">IPPImage</see></param>
    /// <returns>Created Zoom object <see cref="Aspose::Slides::IZoomFrame">IZoomFrame</see>.</returns>
    /// <exception cref="System::ArgumentException ">Referenced slide does not belong to the current presentation.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IZoomFrame> InsertZoomFrame(int32_t index, float x, float y, float width, float height, System::SharedPtr<ISlide> slide, System::SharedPtr<IPPImage> image) override;
    /// <summary>
    /// Adds a new Section Zoom object to the end of a collection.
    /// </summary>
    /// <example>
    /// This example demonstrates adding a Section Zoom object to the end of a collection
    /// (assume that there are at least two sections in the "Presentation.pptx" presentation):
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->AddSectionZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Sections()->idx_get(1));
    /// </code>
    /// </example>
    /// <param name="x">X coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="y">Y coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="width">Width of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="height">Height of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="section">The section object referenced by the Section Zoom frame <see cref="Aspose::Slides::ISection">ISection</see>.</param>
    /// <returns>Created Section Zoom object <see cref="Aspose::Slides::ISectionZoomFrame">ISectionZoomFrame</see>.</returns>
    /// <exception cref="System::ArgumentException ">Referenced section does not belong to the current presentation or does not contains any slides.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISectionZoomFrame> AddSectionZoomFrame(float x, float y, float width, float height, System::SharedPtr<ISection> section) override;
    /// <summary>
    /// Adds a new Section Zoom object to the end of a collection with a predefined image.
    /// </summary>
    /// <example>
    /// This example demonstrates adding a Section Zoom object to the end of a collection
    /// (assume that there are at least two sections in the "Presentation.pptx" presentation):
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto image = pres->get_Images()->AddImage(Image::FromFile(u"image.png"));
    /// auto zoomFrame = shapes->AddSectionZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Sections()->idx_get(1), image);
    /// </code>
    /// </example>
    /// <param name="x">X coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="y">Y coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="width">Width of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="height">Height of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="section">The section object referenced by the Section Zoom frame <see cref="Aspose::Slides::ISection">ISection</see>.</param>
    /// <param name="image">The image for the referenced slide <see cref="Aspose::Slides::IPPImage">IPPImage</see></param>
    /// <returns>Created Section Zoom object <see cref="Aspose::Slides::ISectionZoomFrame">ISectionZoomFrame</see>.</returns>
    /// <exception cref="System::ArgumentException ">Referenced section does not belong to the current presentation or does not contains any slides.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISectionZoomFrame> AddSectionZoomFrame(float x, float y, float width, float height, System::SharedPtr<ISection> section, System::SharedPtr<IPPImage> image) override;
    /// <summary>
    /// Creates a new Section Zoom object and inserts into to a collection at the specified index.
    /// </summary>
    /// <example>
    /// This example demonstrates the creation and inserting a Section Zoom object at the specified index of a collection
    /// (assume that there are at least two sections in the "Presentation.pptx" presentation):
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->InsertSectionZoomFrame(2, 150.0f, 20.0f, 50.0f, 50.0f, pres->get_Sections()->idx_get(1));
    /// </code>
    /// </example>
    /// <param name="index">The zero-based index at which Section Zoom frame should be inserted.</param>
    /// <param name="x">X coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="y">Y coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="width">Width of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="height">Height of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="section">The slide object referenced by the Section Zoom frame <see cref="Aspose::Slides::ISection">ISection</see>.</param>
    /// <returns>Created Section Zoom object <see cref="Aspose::Slides::ISectionZoomFrame">ISectionZoomFrame</see>.</returns>
    /// <exception cref="System::ArgumentException ">Referenced section does not belong to the current presentation or does not contains any slides.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISectionZoomFrame> InsertSectionZoomFrame(int32_t index, float x, float y, float width, float height, System::SharedPtr<ISection> section) override;
    /// <summary>
    /// Creates a new Section Zoom object and inserts it to a collection at the specified index.
    /// </summary>
    /// <example>
    /// This example demonstrates the creation and inserting a Section Zoom object at the specified index of a collection
    /// (assume that there are at least two sections in the "Presentation.pptx" presentation):
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto image = pres->get_Images()->AddImage(Image::FromFile(u"image.png"));
    /// auto zoomFrame = shapes->InsertSectionZoomFrame(2, 150.0f, 20.0f, 50.0f, 50.0f, pres->get_Sections()->idx_get(1), image);
    /// </code>
    /// </example>
    /// <param name="index">The zero-based index at which Section Zoom frame should be inserted.</param>
    /// <param name="x">X coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="y">Y coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="width">Width of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="height">Height of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="section">The slide object referenced by the Section Zoom frame <see cref="Aspose::Slides::ISection">ISection</see>.</param>
    /// <param name="image">The image for the referenced slide <see cref="Aspose::Slides::IPPImage">IPPImage</see></param>
    /// <returns>Created Section Zoom object <see cref="Aspose::Slides::ISectionZoomFrame">ISectionZoomFrame</see>.</returns>
    /// <exception cref="System::ArgumentException ">Referenced section does not belong to the current presentation or does not contains any slides.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISectionZoomFrame> InsertSectionZoomFrame(int32_t index, float x, float y, float width, float height, System::SharedPtr<ISection> section, System::SharedPtr<IPPImage> image) override;
    /// <summary>
    /// Adds a new Summary Zoom object to the end of a collection.
    /// </summary>
    /// <remarks>
    /// This method creates a new Summary Zoom and puts a collection of objects into it for all the sections in this presentation.
    /// </remarks>
    /// <example>
    /// This example demonstrates adding a Summary Zoom object to the end of a collection
    /// (assume that there are at least two sections in the "Presentation.pptx" presentation):
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->AddSummaryZoomFrame(150.0f, 20.0f, 500.0f, 250.0f);
    /// </code>
    /// </example>
    /// <param name="x">X coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="y">Y coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="width">Width of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="height">Height of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <returns>Created Summary Zoom object <see cref="Aspose::Slides::ISummaryZoomFrame">ISummaryZoomFrame</see>.</returns>
    /// <exception cref="PptxEditException">There are no sections in the presentation, or the target slide does not belong to any section.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISummaryZoomFrame> AddSummaryZoomFrame(float x, float y, float width, float height) override;
    /// <summary>
    /// Creates a new Summary Zoom object and inserts it to a collection at the specified index.
    /// </summary>
    /// <remarks>
    /// This method creates a new Summary Zoom and puts a collection of objects into it for all the sections in this presentation.
    /// </remarks>
    /// <example>
    /// This example demonstrates creation and inserting a Summary Zoom object at the specified index of a collection
    /// (assume that there are at least two sections in the "Presentation.pptx" presentation):
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->InsertSummaryZoomFrame(2, 150.0f, 20.0f, 50.0f, 50.0f)
    /// </code>
    /// </example>
    /// <param name="index">The zero-based index at which Section Zoom frame should be inserted.</param>
    /// <param name="x">X coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="y">Y coordinate of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="width">Width of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <param name="height">Height of a new Section Zoom frame <see cref="float"></see>.</param>
    /// <returns>Created Summary Zoom object <see cref="Aspose::Slides::ISummaryZoomFrame">ISummaryZoomFrame</see>.</returns>
    /// <exception cref="PptxEditException">There are no sections in the presentation, or the target slide does not belong to any section.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISummaryZoomFrame> InsertSummaryZoomFrame(int32_t index, float x, float y, float width, float height) override;
    /// <summary>
    /// Adds a new OLE object to the end of a collection.
    /// </summary>
    /// <example>
    /// The following examples shows how to adding OLE Object Frames to Slides of PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// // Accesses the first slide
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// // Loads an excel file to stream
    /// System::SharedPtr<System::IO::MemoryStream> mstream = System::MakeObject<System::IO::MemoryStream>();
    /// auto fs = System::MakeObject<System::IO::FileStream>(u"book1.xlsx", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// 
    /// System::ArrayPtr<uint8_t> buf = System::MakeArray<uint8_t>(4096, 0);
    /// while (true)
    /// {
    ///     int32_t bytesRead = fs->Read(buf, 0, buf->get_Length());
    ///     if (bytesRead <= 0)
    ///     {
    ///         break;
    ///     }
    ///     mstream->Write(buf, 0, bytesRead);
    /// }
    /// 
    /// // Creates a data object for embedding
    /// auto dataInfo = System::MakeObject<OleEmbeddedDataInfo>(mstream->ToArray(), u"xlsx");
    /// // Adds an Ole Object Frame shape
    /// auto slideSize = pres->get_SlideSize()->get_Size();
    /// auto oleObjectFrame = slide->get_Shapes()->AddOleObjectFrame(0.0f, 0.0f, slideSize.get_Width(), slideSize.get_Height(), dataInfo);
    /// //Writes the PPTX file to disk
    /// pres->Save(u"OleEmbed_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    /// <param name="x">X coordinate of a new OLE frame.</param>
    /// <param name="y">Y coordinate of a new OLE frame.</param>
    /// <param name="width">Width of a new OLE frame.</param>
    /// <param name="height">Height of a new OLE frame.</param>
    /// <param name="dataInfo">Embedded data info <see cref="Aspose::Slides::IOleEmbeddedDataInfo">IOleEmbeddedDataInfo</see>.</param>
    /// <returns>Created OLE object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IOleObjectFrame> AddOleObjectFrame(float x, float y, float width, float height, System::SharedPtr<IOleEmbeddedDataInfo> dataInfo) override;
    /// <summary>
    /// Adds a new OLE object to the end of a collection.
    /// </summary>
    /// <param name="x">X coordinate of a new OLE frame.</param>
    /// <param name="y">Y coordinate of a new OLE frame.</param>
    /// <param name="width">Width of a new OLE frame.</param>
    /// <param name="height">Height of a new OLE frame.</param>
    /// <param name="className">Name of an OLE class.</param>
    /// <param name="path">Path to the linked file.<para>The path is stored in the presentation as is. If a relative path is specified 
    /// the corresponding file will be inaccessible when opening the presentation from a different directory.</para></param>
    /// <returns>Created OLE object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IOleObjectFrame> AddOleObjectFrame(float x, float y, float width, float height, System::String className, System::String path) override;
    /// <summary>
    /// Creates a new OLE object and inserts it to a collection at the specified index.
    /// </summary>
    /// <example>
    /// This example demonstrates inserting an OLE object at the second index:
    /// <code>
    /// ArrayPtr<uint8_t> fileData = IO::File::ReadAllBytes(u"test.zip");
    /// auto dataInfo = MakeObject<OleEmbeddedDataInfo>(fileData, u"zip");
    /// auto oleObjectFrame = slide->get_Shapes()->InsertOleObjectFrame(2, 150.0f, 20.0f, 50.0f, 50.0f, dataInfo);
    /// </code>
    /// </example>
    /// <param name="index">The zero-based index at which OLE object should be inserted.</param>
    /// <param name="x">X coordinate of a new OLE frame.</param>
    /// <param name="y">Y coordinate of a new OLE frame.</param>
    /// <param name="width">Width of a new OLE frame.</param>
    /// <param name="height">Height of a new OLE frame.</param>
    /// <param name="dataInfo">Embedded data info <see cref="Aspose::Slides::IOleEmbeddedDataInfo">IOleEmbeddedDataInfo</see>.</param>
    /// <returns>Created OLE object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IOleObjectFrame> InsertOleObjectFrame(int32_t index, float x, float y, float width, float height, System::SharedPtr<IOleEmbeddedDataInfo> dataInfo) override;
    /// <summary>
    /// Creates a new OLE object and inserts it to a collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which OLE object should be inserted.</param>
    /// <param name="x">X coordinate of a new OLE frame.</param>
    /// <param name="y">Y coordinate of a new OLE frame.</param>
    /// <param name="width">Width of a new OLE frame.</param>
    /// <param name="height">Height of a new OLE frame.</param>
    /// <param name="className">Name of an OLE class.</param>
    /// <param name="path">Path to the linked file.</param>
    /// <returns>Created OLE object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IOleObjectFrame> InsertOleObjectFrame(int32_t index, float x, float y, float width, float height, System::String className, System::String path) override;
    /// <summary>
    /// Adds a new video frame to the end of a collection.
    /// </summary>
    /// <param name="x">X coordinate of a new video frame.</param>
    /// <param name="y">Y coordinate of a new video frame.</param>
    /// <param name="width">Width of a new video frame.</param>
    /// <param name="height">Height of a new video frame.</param>
    /// <param name="fname">Video file name.</param>
    /// <returns>Created VideoFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVideoFrame> AddVideoFrame(float x, float y, float width, float height, System::String fname) override;
    /// <summary>
    /// Adds a new video frame to the end of a collection.
    /// </summary>
    /// <param name="x">X coordinate of a new video frame.</param>
    /// <param name="y">Y coordinate of a new video frame.</param>
    /// <param name="width">Width of a new video frame.</param>
    /// <param name="height">Height of a new video frame.</param>
    /// <param name="video">Video to add.</param>
    /// <returns>Created VideoFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVideoFrame> AddVideoFrame(float x, float y, float width, float height, System::SharedPtr<IVideo> video) override;
    /// <summary>
    /// Creates a new video frame and inserts it to a collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which video frame should be inserted.</param>
    /// <param name="x">X coordinate of a new video frame.</param>
    /// <param name="y">Y coordinate of a new video frame.</param>
    /// <param name="width">Width of a new video frame.</param>
    /// <param name="height">Height of a new video frame.</param>
    /// <param name="fname">Video file name.</param>
    /// <returns>Created VideoFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVideoFrame> InsertVideoFrame(int32_t index, float x, float y, float width, float height, System::String fname) override;
    /// <summary>
    /// Adds an AudioFrame with CD to the end of collection.
    /// </summary>
    /// <param name="x">X coordinate of a new audio frame.</param>
    /// <param name="y">Y coordinate of a new audio frame.</param>
    /// <param name="width">Width of a new audio frame.</param>
    /// <param name="height">Height of a new audio frame.</param>
    /// <returns>Created AudioFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudioFrame> AddAudioFrameCD(float x, float y, float width, float height) override;
    /// <summary>
    /// Insert an AudioFrame with CD.
    /// </summary>
    /// <param name="index">The zero-based index at which video frame should be inserted.</param>
    /// <param name="x">X coordinate of a new audio frame.</param>
    /// <param name="y">Y coordinate of a new audio frame.</param>
    /// <param name="width">Width of a new audio frame.</param>
    /// <param name="height">Height of a new audio frame.</param>
    /// <returns>Created AudioFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudioFrame> InsertAudioFrameCD(int32_t index, float x, float y, float width, float height) override;
    /// <summary>
    /// Adds a new audio frame with linked audio file to the end of a collection.
    /// </summary>
    /// <param name="x">X coordinate of a new audio frame.</param>
    /// <param name="y">Y coordinate of a new audio frame.</param>
    /// <param name="width">Width of a new audio frame.</param>
    /// <param name="height">Height of a new audio frame.</param>
    /// <param name="fname">Audio file name.</param>
    /// <returns>Created AudioFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudioFrame> AddAudioFrameLinked(float x, float y, float width, float height, System::String fname) override;
    /// <summary>
    /// Creates a new audio frame with linked audio file and inserts it to a collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which audio frame should be inserted.</param>
    /// <param name="x">X coordinate of a new audio frame.</param>
    /// <param name="y">Y coordinate of a new audio frame.</param>
    /// <param name="width">Width of a new audio frame.</param>
    /// <param name="height">Height of a new audio frame.</param>
    /// <param name="fname">Audio file name.</param>
    /// <returns>Created AudioFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudioFrame> InsertAudioFrameLinked(int32_t index, float x, float y, float width, float height, System::String fname) override;
    /// <summary>
    /// Adds a new audio frame with embedded audio file to the end of a collection.
    /// Embedded audio file can be a WAV only.
    /// It adds new audio into Presentation::get_Audios list.
    /// </summary>
    /// <param name="x">X coordinate of a new audio frame.</param>
    /// <param name="y">Y coordinate of a new audio frame.</param>
    /// <param name="width">Width of a new audio frame.</param>
    /// <param name="height">Height of a new audio frame.</param>
    /// <param name="audio_stream">Inout stream with audio data.</param>
    /// <returns>Created AudioFrame object.</returns>
    /// <example>
    /// The following examples shows how to create Audio Frame.
    /// <code>
    /// // Instantiates a presentation class that represents a presentation file
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// // Gets the first slide
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// // Loads the the wav sound file to stream
    /// System::SharedPtr<System::IO::FileStream> fstr = System::MakeObject<System::IO::FileStream>(u"sampleaudio.wav", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// 
    /// // Adds the Audio Frame
    /// System::SharedPtr<IAudioFrame> audioFrame = slide->get_Shapes()->AddAudioFrameEmbedded(50.0f, 150.0f, 100.0f, 100.0f, fstr);
    /// // Sets the Play Mode and Volume of the Audio
    /// audioFrame->set_PlayMode(AudioPlayModePreset::Auto);
    /// audioFrame->set_Volume(AudioVolumeMode::Loud);
    /// 
    /// // Writes the PowerPoint file to disk
    /// pres->Save(u"AudioFrameEmbed_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudioFrame> AddAudioFrameEmbedded(float x, float y, float width, float height, System::SharedPtr<System::IO::Stream> audio_stream) override;
    /// <summary>
    /// Insert an AudioFrame with embedded audio file.
    /// Embedded audio file sound can be a WAV only.
    /// </summary>
    /// <param name="index">The zero-based index at which value should be inserted.</param>
    /// <param name="x">X coordinate of a new audio frame.</param>
    /// <param name="y">Y coordinate of a new audio frame.</param>
    /// <param name="width">Width of a new audio frame.</param>
    /// <param name="height">Height of a new audio frame.</param>
    /// <param name="audio_stream">Audio stream.</param>
    /// <returns>Created AudioFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudioFrame> InsertAudioFrameEmbedded(int32_t index, float x, float y, float width, float height, System::SharedPtr<System::IO::Stream> audio_stream) override;
    /// <summary>
    /// Adds a new audio frame with embedded audio file to the end of a collection.
    /// It uses audio file from Presentation::get_Audios list.
    /// </summary>
    /// <param name="x">X coordinate of a new audio frame.</param>
    /// <param name="y">Y coordinate of a new audio frame.</param>
    /// <param name="width">Width of a new audio frame.</param>
    /// <param name="height">Height of a new audio frame.</param>
    /// <param name="audio">Audio from Presentation::get_Audios list.</param>
    /// <returns>Created AudioFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudioFrame> AddAudioFrameEmbedded(float x, float y, float width, float height, System::SharedPtr<IAudio> audio) override;
    /// <summary>
    /// Insert an AudioFrame with embedded audio file.
    /// It uses audio file from Presentation::get_Audios list.
    /// </summary>
    /// <param name="index">The zero-based index at which value should be inserted.</param>
    /// <param name="x">X coordinate of a new audio frame.</param>
    /// <param name="y">Y coordinate of a new audio frame.</param>
    /// <param name="width">Width of a new audio frame.</param>
    /// <param name="height">Height of a new audio frame.</param>
    /// <param name="audio">Audio from Presentation::get_Audios list.</param>
    /// <returns>Created AudioFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudioFrame> InsertAudioFrameEmbedded(int32_t index, float x, float y, float width, float height, System::SharedPtr<IAudio> audio) override;
    /// <summary>
    /// Returns the zero-based index of the first occurrence of a shape in the collection.
    /// </summary>
    /// <param name="shape">The shape to locate in the collection.</param>
    /// <returns>The zero-based index of the first occurrence of shape within
    /// the collection, if found; otherwise, -1.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<IShape> shape) override;
    /// <summary>
    /// Creates and returns an array with all shapse in it.
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::Shape">Shape</see></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IShape>> ToArray() override;
    /// <summary>
    /// Creates and returns an array with all shapes from the specified range in it.
    /// <param name="startIndex">An index of a first shape to return.</param>
    /// <param name="count">A number of shapes to return.</param>
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::Shape">Shape</see></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IShape>> ToArray(int32_t startIndex, int32_t count) override;
    /// <summary>
    /// Moves a shape from the collection to the specified position.
    /// </summary>
    /// <param name="index">Target index.</param>
    /// <param name="shape">Shape to move.</param>
    ASPOSE_SLIDES_SHARED_API void Reorder(int32_t index, System::SharedPtr<IShape> shape) override;
    /// <summary>
    /// Moves shapes from the collection to the specified position.
    /// Shapes will be placed starting from index in order they appear in list. 
    /// </summary>
    /// <param name="index">Target index.</param>
    /// <param name="shapes">Shapes to move.</param>
    ASPOSE_SLIDES_SHARED_API void Reorder(int32_t index, const System::ArrayPtr<System::SharedPtr<IShape>>& shapes) override;
    /// <summary>
    /// Creates a new AutoShape, tunes it from default template and adds it to the end of the collection.
    /// </summary>
    /// <param name="shapeType">The <see cref="ShapeType"></see> of shape.</param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <returns>Created AutoShape object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAutoShape> AddAutoShape(ShapeType shapeType, float x, float y, float width, float height) override;
    /// <summary>
    /// Creates a new AutoShape and adds it to the end of the collection.
    /// </summary>
    /// <param name="shapeType">The <see cref="ShapeType"></see> of shape.</param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <param name="createFromTemplate">
    /// If true then new shape will be tuned from default template. Not empty name, 
    /// simple style, text centered will be assined to the new shape.
    /// If false then all values of the properties of the new shape will have default values.
    /// </param>
    /// <returns>Created AutoShape object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAutoShape> AddAutoShape(ShapeType shapeType, float x, float y, float width, float height, bool createFromTemplate) override;
    /// <summary>
    /// Creates a new Autoshape tuned from default template to math content and adds it to the end of the collection.
    /// </summary>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <returns>Created AutoShape object.</returns>
    /// <example>
    /// The following example shows how to add Mathematical Equation in PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto mathShape = pres->get_Slides()->idx_get(0)->get_Shapes()->AddMathShape(0.0f, 0.0f, 720.0f, 150.0f);
    /// auto mathPortion = mathShape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0);
    /// auto mathParagraph = (System::AsCast<MathPortion>(mathPortion))->get_MathParagraph();
    /// auto fraction = System::MakeObject<MathematicalText>(u"x")->Divide(u"y");
    /// mathParagraph->Add(System::MakeObject<MathBlock>(fraction));
    /// auto a2 = System::MakeObject<MathematicalText>(u"a")->SetSuperscript(u"2");
    /// auto b2 = System::MakeObject<MathematicalText>(u"b")->SetSuperscript(u"2");
    /// auto c2 = System::MakeObject<MathematicalText>(u"c")->SetSuperscript(u"2");
    /// auto mathBlock = c2->Join(u"=")->Join(a2)->Join(u"+")->Join(b2); // c^2 = a^2 + b^2
    /// mathParagraph->Add(mathBlock);
    /// pres->Save(u"math.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAutoShape> AddMathShape(float x, float y, float width, float height) override;
    /// <summary>
    /// Creates a new AutoShape, tunes it from default template and inserts it to 
    /// the collection at the specified index.
    /// Note: the type of the shape will be determined by the shapeType parameter.
    /// </summary>
    /// <param name="index">The zero-based index at which value should be inserted.</param>
    /// <param name="shapeType">An <see cref="ShapeType"></see> of shape.</param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <returns>Created AutoShape object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAutoShape> InsertAutoShape(int32_t index, ShapeType shapeType, float x, float y, float width, float height) override;
    /// <summary>
    /// Creates a new AutoShape and inserts it to the collection at the specified index.
    /// Note: the type of the shape will be determined by the shapeType parameter.
    /// </summary>
    /// <param name="index">The zero-based index at which value should be inserted.</param>
    /// <param name="shapeType">An <see cref="ShapeType"></see> of shape.</param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <param name="createFromTemplate">
    /// If true then new shape will be tuned from default template. Not empty name, 
    /// simple style, text centered will be assined to the new shape.
    /// If false then all values of the properties of the new shape will have default values.
    /// </param>
    /// <returns>Created AutoShape object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAutoShape> InsertAutoShape(int32_t index, ShapeType shapeType, float x, float y, float width, float height, bool createFromTemplate) override;
    /// <summary>
    /// Creates a new GroupShape and adds it to the end of the collection.
    /// GroupShape frame size and position will be fitted to content when new shape will be added into the GroupShape.
    /// </summary>
    /// <returns>Created GroupShape object.</returns>
    /// <example>
    /// The following example shows how to add a group shape to a slide of PowerPoint Presentation.
    /// <code>
    /// // Instantiate Presentation class
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// // Get the first slide
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// // Accessing the shape collection of slides
    /// auto slideShapes = slide->get_Shapes();
    /// // Adding a group shape to the slide
    /// System::SharedPtr<IGroupShape> groupShape = slideShapes->AddGroupShape();
    /// 
    /// // Adding shapes inside added group shape
    /// groupShape->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 300.0f, 100.0f, 100.0f, 100.0f);
    /// groupShape->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 500.0f, 100.0f, 100.0f, 100.0f);
    /// groupShape->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 300.0f, 300.0f, 100.0f, 100.0f);
    /// groupShape->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 500.0f, 300.0f, 100.0f, 100.0f);
    /// // Adding group shape frame
    /// groupShape->set_Frame(System::MakeObject<ShapeFrame>(100.0f, 300.0f, 500.0f, 40.0f, NullableBool::False, NullableBool::False, 0.0f));
    /// 
    /// // Write the PPTX file to disk
    /// pres->Save(u"GroupShape_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGroupShape> AddGroupShape() override;
    /// <summary>
    /// Creates a new GroupShape, fills it with converted shapes from SVG and adds it to the end of the collection. 
    /// </summary>
    /// <param name="svgImage">Svg image object <see cref="Aspose::Slides::ISvgImage">ISvgImage</see></param>
    /// <param name="x">The X coordinate for the left side of the shape group frame.</param>
    /// <param name="y">The Y coordinate for the top side of the shape group frame.</param>
    /// <param name="width">The width of the group of the shape group frame.</param>
    /// <param name="height">The height of a group of the shape group frame.</param>
    /// <returns>Created GroupShape object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGroupShape> AddGroupShape(System::SharedPtr<ISvgImage> svgImage, float x, float y, float width, float height) override;
    /// <summary>
    /// Creates a new GroupShape and inserts it to the collection at the specified index.
    /// GroupShape frame size and position will be fitted to content when new shape will be added into the GroupShape.
    /// </summary>
    /// <param name="index">The zero-based index at which value should be inserted.</param>
    /// <returns>Created GroupShape object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGroupShape> InsertGroupShape(int32_t index) override;
    /// <summary>
    /// Creates a new Connector, tunes it from default template and adds it to the end of the collection.
    /// </summary>
    /// <param name="shapeType">The <see cref="ShapeType"></see> of shape.</param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <returns>The zero-based index of the created shape.</returns>
    /// <returns>Created Connector object.</returns>
    /// <example>
    /// The following example shows how to add a connector (a bent connector) between two shapes (an ellipse and rectangle) in PowerPoint Presentation.
    /// <code>
    /// // Instantiates a presentation class that represents a PPTX file
    /// auto input = System::MakeObject<Presentation>();
    /// 
    /// // Accesses the shapes collection for a specific slide
    /// auto shapes = input->get_Slides()->idx_get(0)->get_Shapes();
    /// // Adds an Ellipse autoshape
    /// System::SharedPtr<IAutoShape> ellipse = shapes->AddAutoShape(ShapeType::Ellipse, 0.0f, 100.0f, 100.0f, 100.0f);
    /// // Adds a Rectangle autoshape
    /// System::SharedPtr<IAutoShape> rectangle = shapes->AddAutoShape(ShapeType::Rectangle, 100.0f, 300.0f, 100.0f, 100.0f);
    /// 
    /// // Adds a connector shape to the slide shape collection
    /// System::SharedPtr<IConnector> connector = shapes->AddConnector(ShapeType::BentConnector2, 0.0f, 0.0f, 10.0f, 10.0f);
    /// // Connects the shapes using the connector
    /// connector->set_StartShapeConnectedTo(ellipse);
    /// connector->set_EndShapeConnectedTo(rectangle);
    /// // Calls reroute that sets the automatic shortest path between shapes
    /// connector->Reroute();
    /// 
    /// // Saves the presentation
    /// input->Save(u"Shapes-connector.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IConnector> AddConnector(ShapeType shapeType, float x, float y, float width, float height) override;
    /// <summary>
    /// Creates a new Connector and adds it to the end of the collection.
    /// </summary>
    /// <param name="shapeType">The <see cref="ShapeType"></see> of shape.</param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <param name="createFromTemplate">
    /// If true then new shape will be tuned from default template. Not empty name, 
    /// simple style, text centered will be assined to the new shape.
    /// If false then all values of the properties of the new shape will have default values.
    /// </param>
    /// <returns>The zero-based index of the created shape.</returns>
    /// <returns>Created Connector object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IConnector> AddConnector(ShapeType shapeType, float x, float y, float width, float height, bool createFromTemplate) override;
    /// <summary>
    /// Creates a new Connector, tunes it from default template and inserts it to 
    /// the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which value should be inserted.</param>
    /// <param name="shapeType">An <see cref="ShapeType"></see> of shape.</param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <returns>Created Connector object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IConnector> InsertConnector(int32_t index, ShapeType shapeType, float x, float y, float width, float height) override;
    /// <summary>
    /// Creates a new Connector and inserts it to the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which value should be inserted.</param>
    /// <param name="shapeType">An <see cref="ShapeType"></see> of shape.</param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <param name="createFromTemplate">
    /// If true then new shape will be tuned from default template. Not empty name, 
    /// simple style, text centered will be assined to the new shape.
    /// If false then all values of the properties of the new shape will have default values.
    /// </param>
    /// <returns>Created Connector object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IConnector> InsertConnector(int32_t index, ShapeType shapeType, float x, float y, float width, float height, bool createFromTemplate) override;
    /// <summary>
    /// Creates a new PictureFrame and adds it to the end of the collection.
    /// </summary>
    /// <param name="shapeType"><para>The shape contained in the set <see cref="ShapeType"></see>
    /// of shapes, except all sorts of lines:</para>
    /// <para>    ShapeType::Line,</para>
    /// <para>    ShapeType::StraightConnector1,</para>
    /// <para>    ShapeType::BentConnector2,</para>
    /// <para>    ShapeType::BentConnector3,</para>
    /// <para>    ShapeType::BentConnector4,</para>
    /// <para>    ShapeType::BentConnector5,</para>
    /// <para>    ShapeType::CurvedConnector2,</para>
    /// <para>    ShapeType::CurvedConnector3,</para>
    /// <para>    ShapeType::CurvedConnector4,</para>
    /// <para>    ShapeType::CurvedConnector5.</para></param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <param name="image">The image of picture frame.</param>
    /// <returns>Created PictureFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPictureFrame> AddPictureFrame(ShapeType shapeType, float x, float y, float width, float height, System::SharedPtr<IPPImage> image) override;
    /// <summary>
    /// Creates a new PictureFrame and inserts it to the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which value should be inserted.</param>
    /// <param name="shapeType"><para>The shape contained in the set <see cref="ShapeType"></see>
    /// of shapes, except all sorts of lines:</para>
    /// <para>    ShapeType::Line,</para>
    /// <para>    ShapeType::StraightConnector1,</para>
    /// <para>    ShapeType::BentConnector2,</para>
    /// <para>    ShapeType::BentConnector3,</para>
    /// <para>    ShapeType::BentConnector4,</para>
    /// <para>    ShapeType::BentConnector5,</para>
    /// <para>    ShapeType::CurvedConnector2,</para>
    /// <para>    ShapeType::CurvedConnector3,</para>
    /// <para>    ShapeType::CurvedConnector4,</para>
    /// <para>    ShapeType::CurvedConnector5.</para></param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <param name="image">The image of picture frame.</param>
    /// <returns>Created PictureFrame object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPictureFrame> InsertPictureFrame(int32_t index, ShapeType shapeType, float x, float y, float width, float height, System::SharedPtr<IPPImage> image) override;
    /// <summary>
    /// Creates a new Table and adds it to the end of the collection.
    /// </summary>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="columnWidths">Array of doubles which represents widths of columns in the table.</param>
    /// <param name="rowHeights">Array of doubles which represents heights of rows in the table.</param>
    /// <returns>Created Table object.</returns>
    /// <example>
    /// The following examples shows how to add table in PowerPoint Presentation.
    /// <code>
    /// // Instantiate Presentation class that represents PPTX file
    /// auto pres = System::MakeObject<Presentation>();
    /// // Access first slide
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// // Define columns with widths and rows with heights
    /// System::ArrayPtr<double> dblCols = System::MakeArray<double>({50, 50, 50});
    /// System::ArrayPtr<double> dblRows = System::MakeArray<double>({50, 30, 30, 30, 30});
    /// // Add table shape to slide
    /// System::SharedPtr<ITable> table = slide->get_Shapes()->AddTable(100.0f, 50.0f, dblCols, dblRows);
    /// // Set border format for each cell
    /// for (int32_t row = 0; row < table->get_Rows()->get_Count(); row++)
    /// {
    ///     auto currentRow = table->get_Rows()->idx_get(row);
    ///     for (int32_t col = 0; col < currentRow->get_Count(); col++)
    ///     {
    ///         auto cell = currentRow->idx_get(col);
    ///         auto cellFormat = cell->get_CellFormat();
    ///         cellFormat->get_BorderTop()->get_FillFormat()->set_FillType(FillType::Solid);
    ///         cellFormat->get_BorderTop()->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Red());
    ///         cellFormat->get_BorderTop()->set_Width(5);
    ///         cellFormat->get_BorderBottom()->get_FillFormat()->set_FillType(FillType::Solid);
    ///         cellFormat->get_BorderBottom()->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Red());
    ///         cellFormat->get_BorderBottom()->set_Width(5);
    ///         cellFormat->get_BorderLeft()->get_FillFormat()->set_FillType(FillType::Solid);
    ///         cellFormat->get_BorderLeft()->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Red());
    ///         cellFormat->get_BorderLeft()->set_Width(5);
    ///         cellFormat->get_BorderRight()->get_FillFormat()->set_FillType(FillType::Solid);
    ///         cellFormat->get_BorderRight()->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Red());
    ///         cellFormat->get_BorderRight()->set_Width(5);
    ///     }
    /// }
    /// 
    /// // Merge cells 1 & 2 of row 1
    /// table->MergeCells(table->get_Rows()->idx_get(0)->idx_get(0), table->get_Rows()->idx_get(1)->idx_get(1), false);
    /// // Add text to the merged cell
    /// table->get_Rows()->idx_get(0)->idx_get(0)->get_TextFrame()->set_Text(u"Merged Cells");
    /// // Save PPTX to Disk
    /// pres->Save(u"table.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITable> AddTable(float x, float y, System::ArrayPtr<double> columnWidths, System::ArrayPtr<double> rowHeights) override;
    /// <summary>
    /// Creates a new Table and inserts it to the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which value should be inserted.</param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="columnWidths">Array of doubles which represents widths of columns in the table.</param>
    /// <param name="rowHeights">Array of doubles which represents heights of rows in the table.</param>
    /// <returns>Created Table object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITable> InsertTable(int32_t index, float x, float y, System::ArrayPtr<double> columnWidths, System::ArrayPtr<double> rowHeights) override;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes the first occurrence of a specific shape from the collection.
    /// </summary>
    /// <param name="shape">The shape to remove from the collection.</param>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<IShape> shape) override;
    /// <summary>
    /// Removes all shapes from the collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IShape>>> GetEnumerator() override;
    /// <summary>
    /// Adds a copy of a specified shape to the end of the collection.
    /// </summary>
    /// <param name="sourceShape">Shape to clone.</param>
    /// <param name="x">X coordinate of a new shape.</param>
    /// <param name="y">Y coordinate of a new shape.</param>
    /// <param name="width">Width of a new shape.</param>
    /// <param name="height">Height of a new shape.</param>
    /// <returns>New shape.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> AddClone(System::SharedPtr<IShape> sourceShape, float x, float y, float width, float height) override;
    /// <summary>
    /// Adds a copy of a specified shape to the end of the collection.
    /// Width and Height of the new shape are equal to Width and Height of the <paramref name="sourceShape"></paramref>.
    /// </summary>
    /// <param name="sourceShape">Shape to clone.</param>
    /// <param name="x">X coordinate of a new shape.</param>
    /// <param name="y">Y coordinate of a new shape.</param>
    /// <returns>New shape.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> AddClone(System::SharedPtr<IShape> sourceShape, float x, float y) override;
    /// <summary>
    /// Adds a copy of a specified shape to the end of the collection.
    /// X, Y, Width and Height of the new shape are equal to X, Y, Width and Height of the <paramref name="sourceShape"></paramref>.
    /// </summary>
    /// <param name="sourceShape">Shape to clone.</param>
    /// <returns>New shape.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> AddClone(System::SharedPtr<IShape> sourceShape) override;
    /// <summary>
    /// Inserts a copy of a specified shape to specified position of the collection.
    /// </summary>
    /// <param name="index">Index of new shape.</param>
    /// <param name="sourceShape">Shape to clone.</param>
    /// <param name="x">X coordinate of a new shape.</param>
    /// <param name="y">Y coordinate of a new shape.</param>
    /// <param name="width">Width of a new shape.</param>
    /// <param name="height">Height of a new shape.</param>
    /// <returns>Inserted shape.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> InsertClone(int32_t index, System::SharedPtr<IShape> sourceShape, float x, float y, float width, float height) override;
    /// <summary>
    /// Inserts a copy of a specified shape to specified position of the collection.
    /// Width and Height of the new shape are equal to Width and Height of the <paramref name="sourceShape"></paramref>.
    /// </summary>
    /// <param name="index">Index of new shape.</param>
    /// <param name="sourceShape">Shape to clone.</param>
    /// <param name="x">X coordinate of a new shape.</param>
    /// <param name="y">Y coordinate of a new shape.</param>
    /// <returns>Inserted shape.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> InsertClone(int32_t index, System::SharedPtr<IShape> sourceShape, float x, float y) override;
    /// <summary>
    /// Inserts a copy of a specified shape to specified position of the collection.
    /// X, Y, Width and Height of the new shape are equal to X, Y, Width and Height of the <paramref name="sourceShape"></paramref>.
    /// </summary>
    /// <param name="index">Index of new shape.</param>
    /// <param name="sourceShape">Shape to clone.</param>
    /// <returns>Inserted shape.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> InsertClone(int32_t index, System::SharedPtr<IShape> sourceShape) override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IShape>> array, int32_t index) override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GroupShape> get_ParentGroupInternal();
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IShape>>> m_shapes;
    
    ASPOSE_SLIDES_LOCAL_API ShapeCollection(System::SharedPtr<GroupShape> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ShapeCollection, CODEPORTING_ARGS(System::SharedPtr<GroupShape> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void Add(System::SharedPtr<Shape> value);
    ASPOSE_SLIDES_LOCAL_API void Insert(int32_t index, System::SharedPtr<Shape> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Shape> AddRawShape();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Charts::Chart> CreateTemplatedChart(Charts::ChartType type, bool initWithSample);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Charts::Chart> AddRawChart(Charts::ChartType type);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Charts::Chart> AddRawChart(Charts::ChartType type, Charts::ChartGrouping grouping);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Ink::Ink> AddRawInk();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SmartArt::SmartArt> AddRawSmartArt();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SmartArt::ISmartArt> InsertSmartArt(int32_t index, float x, float y, float width, float height, SmartArt::SmartArtLayoutType layoutType);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SmartArt::SmartArt> CreateTemplatedSmartArtObject(SmartArt::SmartArtLayoutType layoutType);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<OleObjectFrame> CreateTemplatedOleObjectFrame(float width, float height, System::String className, System::ArrayPtr<uint8_t> objData);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<OleObjectFrame> CreateTemplatedOleObjectFrame(float width, float height, System::SharedPtr<IOleEmbeddedDataInfo> dataInfo);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<OleObjectFrame> CreateTemplatedOleObjectFrame(float width, float height, System::String className, System::String path);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<OleObjectFrame> CreateTemplatedOleObjectFrame(float width, float height, System::String className);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<OleObjectFrame> AddRawOleObjectFrame();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ZoomFrame> AddRawZoomFrame();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SectionZoomFrame> AddRawSectionZoomFrame();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SummaryZoomFrame> AddRawSummaryZoomFrame();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<VideoFrame> CreateTemplatedVideoFrame(System::String fname);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<VideoFrame> AddRawVideoFrame();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<VideoFrame> CreateTemplatedVideoFrame(System::SharedPtr<IVideo> video);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<VideoFrame> AddRawVideoFrame(System::SharedPtr<IVideo> video);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PictureFrame> CreateTemplatedPictureFrame(ShapeType preset, System::SharedPtr<IPPImage> image);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PictureFrame> CreateTemplatedPictureFrame(ShapeType preset, System::SharedPtr<IPPImage> image, int32_t width, int32_t height);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AudioFrame> AddRawAudioFrameCD();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AudioFrame> CreateTemplatedAudioFrameLinked(System::String fname);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AudioFrame> AddRawAudioFrameLinked(System::String fname);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AudioFrame> CreateTemplatedAudioFrameEmbedded(System::SharedPtr<System::IO::Stream> audio_stream);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AudioFrame> CreateTemplatedAudioFrameEmbedded(System::SharedPtr<IAudio> audio);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AudioFrame> AddRawAudioFrameEmbedded(System::SharedPtr<IAudio> audio);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<LegacyDiagram> AddRawLegacyDiagram();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AutoShape> AddBlankNonGroupableShape();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AutoShape> CreateTemplatedAutoShape(ShapeType preset, bool createFromTemplate);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Connector> CreateTemplatedConnector(ShapeType preset, bool createFromTemplate);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Table> CreateTemplatedTable(System::ArrayPtr<double> columnWidths, System::ArrayPtr<double> rowHeights, double& width, double& height);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AutoShape> AddRawAutoShape();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GroupShape> AddRawGroupShape();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GroupShape> CreateTemplatedGroupShape();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GraphicalObject> AddRawGraphicalObject();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Connector> AddRawConnector();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PictureFrame> AddRawPictureFrame();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Table> AddRawTable();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Table> AddRawTable(System::ArrayPtr<double> columnWidths, System::ArrayPtr<double> rowHeights);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AutoShape> CreateTemplatedMathShape(ShapeType preset);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ShapeCollection();
    
private:

    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::Dictionary<ShapeType, ShapeType>> NoFillShapesSet;
    
    static ASPOSE_SLIDES_LOCAL_API System::Drawing::SizeF GetSubstImageSize(float frameWidth, float frameHeight);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AudioFrame> CreateTemplatedAudioFrame(UnsupportedProps::PPTXUnsupportedProps::AudioFrameType audioFrameType, System::String shapeName);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AudioFrame> CreateTemplatedAudioFrame(UnsupportedProps::PPTXUnsupportedProps::AudioFrameType audioFrameType);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Table> CreateTable(System::ArrayPtr<double> columnWidths, System::ArrayPtr<double> rowHeights, double& width, double& height);
    ASPOSE_SLIDES_LOCAL_API void AddAndSetFrameAndId(int32_t insertIndex, System::SharedPtr<Shape> shape, float x, float y, float width, float height);
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


