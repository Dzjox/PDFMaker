#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartDataPointLevelsManager.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/ChartDataPoint.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ChartDataPointLevel;
class IChartDataPointLevel;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Container of data point levels. Applied for Treeamp and Sunburst series.
/// Data point levels indexing is zero-based.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartDataPointLevelsManager : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartDataPoint>>, public Aspose::Slides::Charts::IChartDataPointLevelsManager
{
    typedef ChartDataPointLevelsManager ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartDataPoint>> BaseType;
    typedef Aspose::Slides::Charts::IChartDataPointLevelsManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPoint;
    /// @endcond
    
public:

    /// <summary>
    /// Returns data point levels count.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    
    /// <summary>
    /// Returns IChartDataPointLevel object for defined level.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPointLevel> idx_get(int32_t level) override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API ChartDataPointLevelsManager(System::SharedPtr<ChartDataPoint> parent);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataPointLevelsManager, CODEPORTING_ARGS(System::SharedPtr<ChartDataPoint> parent));
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartDataPointLevelsManager();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ChartDataPointLevel>>> m_levels;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


