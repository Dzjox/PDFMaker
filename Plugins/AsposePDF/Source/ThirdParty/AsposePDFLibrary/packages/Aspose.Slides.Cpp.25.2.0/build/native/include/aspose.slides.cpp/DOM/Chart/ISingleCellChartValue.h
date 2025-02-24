#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/IBaseChartValue.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartDataCell;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a chart data cell.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISingleCellChartValue : public virtual Aspose::Slides::Charts::IBaseChartValue
{
    typedef ISingleCellChartValue ThisType;
    typedef Aspose::Slides::Charts::IBaseChartValue BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns chart data cell.
    /// Read <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> get_AsCell() = 0;
    /// <summary>
    /// Sets chart data cell.
    /// Write <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AsCell(System::SharedPtr<IChartDataCell> value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


