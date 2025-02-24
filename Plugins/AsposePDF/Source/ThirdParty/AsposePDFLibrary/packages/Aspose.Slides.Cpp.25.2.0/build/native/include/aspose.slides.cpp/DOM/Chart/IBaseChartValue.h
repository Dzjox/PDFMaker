#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class DataSourceType;
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
class ASPOSE_SLIDES_API_SHARED_CLASS IBaseChartValue : public virtual System::Object
{
    typedef IBaseChartValue ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual. In other words it specifies the type of value of the Data property.
    /// This property is read-only. For changing value of this property you can use
    /// one of the ChartDataPointCollection.DataSourceTypeFor&lt;...&gt; properties.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Charts::DataSourceType get_DataSourceType() = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual. In other words it specifies the type of value of the Data property.
    /// This property is read-only. For changing value of this property you can use
    /// one of the ChartDataPointCollection.DataSourceTypeFor&lt;...&gt; properties.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DataSourceType(Aspose::Slides::Charts::DataSourceType value) = 0;
    /// <summary>
    /// 
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Object> get_Data() = 0;
    /// <summary>
    /// 
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Data(System::SharedPtr<System::Object> value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


