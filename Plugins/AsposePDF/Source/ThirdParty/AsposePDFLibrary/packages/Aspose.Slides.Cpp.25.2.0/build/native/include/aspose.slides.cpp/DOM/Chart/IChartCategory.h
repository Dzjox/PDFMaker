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
class IChartCategoryLevelsManager;
class IChartDataCell;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents chart categories.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartCategory : public virtual System::Object
{
    typedef IChartCategory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
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
    /// value to ChartCategoryCollection.UseCells property.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_UseCell() = 0;
    /// <summary>
    /// Returns IChartDataCell object.
    /// If category is multi-level then used IChartDataCell object for level "0".
    /// Read <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> get_AsCell() = 0;
    /// <summary>
    /// Sets IChartDataCell object.
    /// If category is multi-level then used IChartDataCell object for level "0".
    /// Write <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AsCell(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Returns AsLiteral if UseCell is false.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Object> get_AsLiteral() = 0;
    /// <summary>
    /// Sets AsLiteral if UseCell is false.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AsLiteral(System::SharedPtr<System::Object> value) = 0;
    /// <summary>
    /// If UseCell is true then this property represents get_AsCell()->get(set)_Value() property.
    /// If UseCell is false then this property represents AsLiteral property.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Object> get_Value() = 0;
    /// <summary>
    /// If UseCell is true then this property represents get_AsCell()->get(set)_Value() property.
    /// If UseCell is false then this property represents AsLiteral property.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Value(System::SharedPtr<System::Object> value) = 0;
    /// <summary>
    /// Managed container of the values of the chart category grouping levels.
    /// Multi-level category contain more then one grouping level.
    /// Grouping levels indexing is zero-based.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartCategoryLevelsManager">IChartCategoryLevelsManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartCategoryLevelsManager> get_GroupingLevels() = 0;
    
    /// <summary>
    /// Removes category from chart.
    /// </summary>
    /// <exception cref="PptxEditException">
    /// Thrown if category is already removed from chart.
    /// </exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove() = 0;
    /// <summary>
    /// Returns a chart category grouping level at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> get_GroupingLevel(int32_t level) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


