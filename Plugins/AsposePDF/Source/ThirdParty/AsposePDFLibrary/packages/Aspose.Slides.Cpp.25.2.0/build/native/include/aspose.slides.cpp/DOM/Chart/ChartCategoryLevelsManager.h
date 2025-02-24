#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartCategoryLevelsManager.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ChartCategory;
class ChartCategoryCollection;
class ChartData;
class ChartDataCellWrapper;
class IChartDataCell;
} // namespace Charts
class IDOMObject;
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
/// Managed container of the values of the chart category levels.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartCategoryLevelsManager : public Aspose::Slides::Charts::IChartCategoryLevelsManager
{
    typedef ChartCategoryLevelsManager ThisType;
    typedef Aspose::Slides::Charts::IChartCategoryLevelsManager BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartCategory;
    friend class Aspose::Slides::Charts::ChartCategoryCollection;
    friend class Aspose::Slides::Charts::ChartData;
    /// @endcond
    
public:

    /// <summary>
    /// Returns IChartDataCell object for defined level.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> idx_get(int32_t level) override;
    
    /// <summary>
    /// Sets grouping item for defined level.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void SetGroupingItem(int32_t level, System::SharedPtr<System::Object> value) override;
    /// <summary>
    /// Delete grouping item for defined level.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void DeleteGroupingItem(int32_t level) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API int32_t get_MaxLevelIndex();
    ASPOSE_SLIDES_LOCAL_API int32_t get_Count();
    
    ASPOSE_SLIDES_LOCAL_API ChartCategoryLevelsManager(System::SharedPtr<IDOMObject> parent);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartCategoryLevelsManager, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parent));
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ChartDataCellWrapper>>> m_levels;
    System::WeakPtr<IDOMObject> m_parentIntermediate;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


