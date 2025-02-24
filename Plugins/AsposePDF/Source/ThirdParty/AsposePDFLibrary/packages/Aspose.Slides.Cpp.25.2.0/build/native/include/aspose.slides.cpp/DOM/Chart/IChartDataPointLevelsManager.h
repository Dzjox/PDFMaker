#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartDataPointLevel;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Container of data point levels. Applied for Treeamp and Sunburst series.
/// Data point levels indexing is zero-based.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartDataPointLevelsManager : public virtual System::Object
{
    typedef IChartDataPointLevelsManager ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns data point levels count.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Returns IChartDataPointLevel object for defined level.
    /// </summary>
    /// <example>
    /// <code>
    /// 
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPointLevel> idx_get(int32_t level) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


