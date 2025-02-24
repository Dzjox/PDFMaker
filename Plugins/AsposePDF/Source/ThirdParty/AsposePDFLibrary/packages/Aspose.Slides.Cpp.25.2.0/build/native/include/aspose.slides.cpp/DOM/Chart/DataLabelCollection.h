#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Chart/IDataLabelCollection.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/ChartSeries.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class DataLabel;
class DataLabelElement;
class DataLabelFormat;
class IChart;
class IChartLinesFormat;
class IChartSeries;
class IDataLabel;
class IDataLabelFormat;
} // namespace Charts
class GeometryShape;
class IBaseSlide;
class IPresentation;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartDataCachePPTXSerialization;
class ChartDataPPTXSerialization;
class ChartSeriesPPTXSerialization;
class DataLabelsExPPTXSerialization;
class DataLabelsPPTXSerialization;
class WorkbookPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class DataLabelCollectionPPTXUnsupportedProps;
} // namespace Charts
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a series labels.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS DataLabelCollection : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartSeries>>, public Aspose::Slides::Charts::IDataLabelCollection
{
    typedef DataLabelCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartSeries>> BaseType;
    typedef Aspose::Slides::Charts::IDataLabelCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartSeries;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelsExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataCachePPTXSerialization;
    friend class Aspose::Slides::Charts::DataLabelElement;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelsPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the parent chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    /// <summary>
    /// False means that data label is not visible by default (and so all 
    /// Show*-flags (ShowValue, ...) of the DefaultDataLabelFormat property are false).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If data label is visible by default you can make it hidden by default with Hide() method.
    /// But if data label is not visible by default (IsVisible is false) you can make data label "visible 
    /// by default" with setting Show*-flags (ShowValue, ...) of the DefaultDataLabelFormat property
    /// to true state.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_IsVisible() override;
    /// <summary>
    /// Gets the number of visible data labels in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_CountOfVisibleDataLabels() override;
    /// <summary>
    /// Gets the number of all data labels in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Gets the default data label format.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataLabelFormat">IDataLabelFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDataLabelFormat> get_DefaultDataLabelFormat() override;
    /// <summary>
    /// Represents data labels leader lines format.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartLinesFormat">IChartLinesFormat</see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IChart> chart = System::ExplicitCast<IChart>(pres->get_Slide(0)->get_Shape(0));
    /// System::SharedPtr<IChartSeriesCollection> series = chart->get_ChartData()->get_Series();
    /// System::SharedPtr<IDataLabelCollection> labels = series->idx_get(0)->get_Labels();
    /// System::SharedPtr<ILineFillFormat> fillFormat = labels->get_LeaderLinesFormat()->get_Line()->get_FillFormat();
    /// 
    /// fillFormat->set_FillType(FillType::Solid);
    /// fillFormat->get_SolidFillColor()->set_Color(System::Drawing::Color::FromArgb(255, 255, 0, 0));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartLinesFormat> get_LeaderLinesFormat() override;
    /// <summary>
    /// Gets the parent series.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartSeries">IChartSeries</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeries> get_ParentSeries() override;
    
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IDataLabel>>> GetEnumerator() override;
    /// <summary>
    /// Make data label hidden by default by setting all Show*-flags (ShowValue, ...) of the 
    /// DefaultDataLabelFormat property to false state.
    /// IsVisible will be false after this.
    /// </summary>
    /// <remarks>
    /// If data label is not visible by default (IsVisible is false) you can make data label "visible 
    /// by default" with setting Show*-flags (ShowValue, ...) of the DefaultDataLabelFormat property
    /// to true state.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void Hide() override;
    /// <summary>
    /// Returns an index of the specified DataLabel in the collection.
    /// </summary>
    /// <param name="value">DataLabel to find.</param>
    /// <returns>Index of a DataLabel or -1 if DataLabel not from this collection.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<IDataLabel> value) override;
    
    /// <summary>
    /// Gets the data label for the data point with the specified index.
    /// </summary>
    /// <remarks>
    /// Alternate way to access data label is:
    /// - SeriesEx.DataPoints[i].Label - manage label properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDataLabel> idx_get(int32_t index) override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::String get_CellsRangeCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_CellsRangeCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::DataLabelCollectionPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GeometryShape> get_DefaultCalloutShape();
    
    ASPOSE_SLIDES_LOCAL_API DataLabelCollection(System::SharedPtr<ChartSeries> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DataLabelCollection, CODEPORTING_ARGS(System::SharedPtr<ChartSeries> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::String GetFormula();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~DataLabelCollection();
    
private:

    System::SharedPtr<DataLabelFormat> m_defaultDataLabelFormat;
    System::SharedPtr<IChartLinesFormat> m_leaderLinesFormat;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::DataLabelCollectionPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<GeometryShape> m_calloutShape;
    System::String pr_CellsRangeCachedFormula;
    
    /// <summary>
    /// Returns the parent slide of a FillFormat.
    /// Read-only <see cref="BaseSlide"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a FillFormat.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


