#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartCategory.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class AggregatedDataPointCollection;
class Axis;
class CachedChartCategoryLevels;
class CategoryAxisBase;
class CategoryLabelRenderContext;
class ChartCategoryCollection;
class ChartCategoryLevelsManager;
class ChartDataPointCollection;
class ChartDataPointLevel;
class ChartRenderContext;
class HorizontalCategoryAxisEx;
class IChartCategoryLevelsManager;
class IChartDataCell;
class SunburstElement;
class TreemapSquareElement;
} // namespace Charts
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartCategoryCollectionExPPTXSerialization;
class ChartDataCachePPTXSerialization;
class ChartDataPPTXSerialization;
class ChartSeriesExPPTXSerialization;
class WorkbookPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents chart categories.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartCategory : public Aspose::Slides::Charts::IChartCategory, public Aspose::Slides::IDOMObject
{
    typedef ChartCategory ThisType;
    typedef Aspose::Slides::Charts::IChartCategory BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPointLevel;
    friend class Aspose::Slides::Charts::AggregatedDataPointCollection;
    friend class Aspose::Slides::Charts::Axis;
    friend class Aspose::Slides::Charts::ChartCategoryCollection;
    friend class Aspose::Slides::Charts::ChartDataPointCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartCategoryCollectionExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataCachePPTXSerialization;
    friend class Aspose::Slides::Charts::HorizontalCategoryAxisEx;
    friend class Aspose::Slides::Charts::CategoryAxisBase;
    friend class Aspose::Slides::Charts::SunburstElement;
    friend class Aspose::Slides::Charts::TreemapSquareElement;
    friend class Aspose::Slides::Charts::CategoryLabelRenderContext;
    friend class Aspose::Slides::Charts::ChartRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// If true then AsCell property is actual. In other words, worksheet is used for 
    /// storing category (this case supports a multi-level category).
    /// If false then AsLiteral property is actual. In other words, worksheet is NOT used 
    /// for storing category (and this case doesn't support a multi-level categories).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// For change value of this property (for all categories in collection) set new 
    /// value to ChartCategoryCollection::get(set)_UseCells property.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_UseCell() override;
    /// <summary>
    /// Returns IChartDataCell object.
    /// If category is multi-level then used IChartDataCell object for level "0".
    /// Read <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> get_AsCell() override;
    /// <summary>
    /// Sets IChartDataCell object.
    /// If category is multi-level then used IChartDataCell object for level "0".
    /// Write <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AsCell(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Returns AsLiteral object.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_AsLiteral() override;
    /// <summary>
    /// Sets AsLiteral object.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AsLiteral(System::SharedPtr<System::Object> value) override;
    /// <summary>
    /// If UseCell is true then this property represents get_AsCell()->get(set)_Value() property.
    /// If UseCell is false then this property represents AsLiteral property.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_Value() override;
    /// <summary>
    /// If UseCell is true then this property represents get_AsCell()->get(set)_Value() property.
    /// If UseCell is false then this property represents AsLiteral property.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Value(System::SharedPtr<System::Object> value) override;
    /// <summary>
    /// Managed container of the values of the chart category grouping levels.
    /// Multi-level category contain more then one grouping level.
    /// Grouping levels indexing is zero-based.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartCategoryLevelsManager">IChartCategoryLevelsManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartCategoryLevelsManager> get_GroupingLevels() override;
    
    /// <summary>
    /// Removes category from chart.
    /// </summary>
    /// <exception cref="PptxEditException">
    /// Thrown if category is already removed from chart.
    /// </exception>
    ASPOSE_SLIDES_SHARED_API void Remove() override;
    /// <summary>
    /// Returns a chart category grouping level at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> get_GroupingLevel(int32_t level) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Object> get_CacheValue() const;
    ASPOSE_SLIDES_LOCAL_API void set_CacheValue(System::SharedPtr<System::Object> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<CachedChartCategoryLevels> get_CachedGroupingLevels();
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Object> GetActualCategoryValue();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Object> GetActualGroupingLevelValue(int32_t lvlIdx);
    
    ASPOSE_SLIDES_LOCAL_API ChartCategory(System::SharedPtr<ChartCategoryCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartCategory, CODEPORTING_ARGS(System::SharedPtr<ChartCategoryCollection> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartCategory();
    
private:

    System::SharedPtr<System::Object> pr_CacheValue;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<ChartCategoryLevelsManager> m_levels;
    System::SharedPtr<CachedChartCategoryLevels> m_cachedLevels;
    System::SharedPtr<System::Object> m_asLiteral;
    System::WeakPtr<ChartCategoryCollection> m_parentImmediate;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


