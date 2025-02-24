#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <cstdint>

#include "DOM/Chart/IChartComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartLinesFormat;
class IChartSeries;
class IDataLabel;
class IDataLabelFormat;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a series labels.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IDataLabelCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Charts::IDataLabel>>, public Aspose::Slides::Charts::IChartComponent
{
    typedef IDataLabelCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Charts::IDataLabel>> BaseType;
    typedef Aspose::Slides::Charts::IChartComponent BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns default format of all data labels in the collection.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataLabelFormat">IDataLabelFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDataLabelFormat> get_DefaultDataLabelFormat() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartLinesFormat> get_LeaderLinesFormat() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsVisible() = 0;
    /// <summary>
    /// Gets the number of visible data labels in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_CountOfVisibleDataLabels() = 0;
    /// <summary>
    /// Gets the number of all data labels in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    /// <summary>
    /// Returns parent chart series.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartSeries">IChartSeries</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeries> get_ParentSeries() = 0;
    
    /// <summary>
    /// Gets the data label for the data point with the specified index.
    /// </summary>
    /// <remarks>
    /// Alternate way to access data label is:
    /// - SeriesEx.DataPoints[i].Label - manage label properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDataLabel> idx_get(int32_t index) = 0;
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void Hide() = 0;
    /// <summary>
    /// Returns an index of the specified DataLabel in the collection.
    /// </summary>
    /// <param name="value">DataLabel to find.</param>
    /// <returns>Index of a DataLabel or -1 if DataLabel not from this collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(System::SharedPtr<IDataLabel> value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


