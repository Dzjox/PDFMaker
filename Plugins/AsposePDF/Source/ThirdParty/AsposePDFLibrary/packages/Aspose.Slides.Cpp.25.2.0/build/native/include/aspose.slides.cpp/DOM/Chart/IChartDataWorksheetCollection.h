#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartDataWorksheet;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents the collection of worksheets of chart data workbook.
/// </summary>
/// <example> Example:
/// <code>
/// auto pres = System::MakeObject<Presentation>();
/// 
/// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(ChartType::Pie, 50.0f, 50.0f, 400.0f, 500.0f);
/// auto workbook = chart->get_ChartData()->get_ChartDataWorkbook();
/// for (const auto& worksheet : workbook->get_Worksheets())
/// {
///     System::String worksheetName = worksheet->get_Name();
/// }
/// </code>
/// </example>    
class ASPOSE_SLIDES_API_SHARED_CLASS IChartDataWorksheetCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Charts::IChartDataWorksheet>>
{
    typedef IChartDataWorksheetCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Charts::IChartDataWorksheet>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the worksheet by index.
    /// </summary>
    /// <param name="index">Index of the worksheet in the collection.</param>
    /// <returns>Instance of the IChartDataWorksheet.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataWorksheet> idx_get(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


