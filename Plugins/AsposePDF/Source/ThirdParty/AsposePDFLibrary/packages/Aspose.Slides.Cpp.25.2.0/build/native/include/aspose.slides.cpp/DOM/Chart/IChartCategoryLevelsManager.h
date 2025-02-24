#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
class IChartDataCell;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Managed container of the values of the chart category levels.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartCategoryLevelsManager : public virtual System::Object
{
    typedef IChartCategoryLevelsManager ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns IChartDataCell object for defined level.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> idx_get(int32_t level) = 0;
    
    /// <summary>
    /// Sets grouping item for defined level.
    /// </summary>
    /// <param name="level">Category level <see cref="int32_t"></see></param>
    /// <param name="value">Groping item <see cref="System::Object"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetGroupingItem(int32_t level, System::SharedPtr<System::Object> value) = 0;
    /// <summary>
    /// Delete grouping item for defined level.
    /// </summary>
    /// <param name="level">Category level <see cref="int32_t"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void DeleteGroupingItem(int32_t level) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


