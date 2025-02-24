#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IBaseChartValue.h>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class Chart;
enum class DataSourceType;
class DataSourceTypeHolder;
class DoubleChartValue;
class StringChartValue;
class StringOrDoubleChartValue;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a value of a chart.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BaseChartValue : public virtual Aspose::Slides::Charts::IBaseChartValue, public Aspose::Slides::IDOMObject
{
    typedef BaseChartValue ThisType;
    typedef Aspose::Slides::Charts::IBaseChartValue BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::Charts::StringOrDoubleChartValue;
    friend class Aspose::Slides::Charts::DoubleChartValue;
    friend class Aspose::Slides::Charts::StringChartValue;
    /// @endcond
    
public:

    /// <summary>
    /// Specifies whether AsCell, AsCells, AsLiteralString or AsLiteralDouble 
    /// property is actual in descendants. In other words it specifies the type 
    /// of value of the Data property.
    /// Read <see cref="Charts::DataSourceType"></see>.
    /// </summary>
    /// <remarks>
    /// For points in ChartDataPointCollection this property is read-only. 
    /// In this case for changing value of this property you can use one of the 
    /// ChartDataPointCollection.DataSourceTypeFor&lt;...&gt; properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Charts::DataSourceType get_DataSourceType() override;
    /// <summary>
    /// Specifies whether AsCell, AsCells, AsLiteralString or AsLiteralDouble 
    /// property is actual in descendants. In other words it specifies the type 
    /// of value of the Data property.
    /// Write <see cref="Charts::DataSourceType"></see>.
    /// </summary>
    /// <remarks>
    /// For points in ChartDataPointCollection this property is read-only. 
    /// In this case for changing value of this property you can use one of the 
    /// ChartDataPointCollection.DataSourceTypeFor&lt;...&gt; properties.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_DataSourceType(Aspose::Slides::Charts::DataSourceType value) override;
    /// <summary>
    /// Data.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_Data() override = 0;
    /// <summary>
    /// Data.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Data(System::SharedPtr<System::Object> value) override = 0;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Chart> get_ChartInternal();
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    
    ASPOSE_SLIDES_LOCAL_API BaseChartValue(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<DataSourceTypeHolder> dataSourceTypeHolder, bool centralizedTypeChangingRestriction);
    /// @endcond
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<DataSourceTypeHolder> m_dataSourceTypeHolder;
    Aspose::Slides::Charts::DataSourceType m_dataSourceType;
    bool m_centralizedTypeChangingRestriction;
    System::WeakPtr<Chart> m_parentChart;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


