#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IDataLabel;
class IFormat;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents data point level. Applies for Treemap and Sunburst chart.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartDataPointLevel : public virtual System::Object
{
    typedef IChartDataPointLevel ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents formatting properties of data point level.
    /// Read <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    /// <example>
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(ChartType::Treemap, 50.0f, 50.0f, 500.0f, 400.0f);
    /// auto series = chart->get_ChartData()->get_Series()->idx_get(0);
    /// 
    /// auto dataPointLevel = series->get_DataPoints()->idx_get(7)->get_DataPointLevels()->idx_get(2);
    /// dataPointLevel->get_Format()->get_Fill()->set_FillType(FillType::Solid);
    /// dataPointLevel->get_Format()->get_Fill()->get_SolidFillColor()->set_Color(Color::get_Red());
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
    /// <summary>
    /// Represents data label of data point level. Applied for Treemap and  Sunburst sereis types.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataLabel">IDataLabel</see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(ChartType::Sunburst, 50.0f, 50.0f, 500.0f, 400.0f);
    /// auto series = chart->get_ChartData()->get_Series()->idx_get(0);
    /// auto dataPointLevel = series->get_DataPoints()->idx_get(0)->get_DataPointLevels()->idx_get(1);
    /// 
    /// dataPointLevel->get_Label()->get_DataLabelFormat()->set_ShowCategoryName(false);
    /// dataPointLevel->get_Label()->get_DataLabelFormat()->set_ShowValue(true);
    /// dataPointLevel->get_Label()->get_DataLabelFormat()->set_ShowSeriesName(true);
    /// 
    /// dataPointLevel = series->get_DataPoints()->idx_get(12)->get_DataPointLevels()->idx_get(1);
    /// dataPointLevel->get_Label()->get_TextFormat()->get_PortionFormat()->get_FillFormat()->set_FillType(FillType::Solid);
    /// dataPointLevel->get_Label()->get_TextFormat()->get_PortionFormat()->get_FillFormat()->get_SolidFillColor()->set_Color(Color::get_Red());
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDataLabel> get_Label() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


