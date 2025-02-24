#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
///  Specifies types of values in ChartDataPoint.ErrorBarsCustomValues properties list
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IDataSourceTypeForErrorBarsCustomValues : public virtual System::Object
{
    typedef IDataSourceTypeForErrorBarsCustomValues ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points XMinus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPoint.ErrorBarsCustomValues.XMinus.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API DataSourceType get_DataSourceTypeForXMinusValues() = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points XMinus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPoint.ErrorBarsCustomValues.XMinus.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DataSourceTypeForXMinusValues(DataSourceType value) = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points XPlus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPoint.ErrorBarsCustomValues.XPlus.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API DataSourceType get_DataSourceTypeForXPlusValues() = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points XPlus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPoint.ErrorBarsCustomValues.XPlus.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DataSourceTypeForXPlusValues(DataSourceType value) = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points YMinus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPointEx.ErrorBarsCustomValues.YMinus.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary> 
    virtual ASPOSE_SLIDES_API_LOCAL_API DataSourceType get_DataSourceTypeForYMinusValues() = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points YMinus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPointEx.ErrorBarsCustomValues.YMinus.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary> 
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DataSourceTypeForYMinusValues(DataSourceType value) = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points YPlus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPointEx.ErrorBarsCustomValues.YPlus.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary> 
    virtual ASPOSE_SLIDES_API_LOCAL_API DataSourceType get_DataSourceTypeForYPlusValues() = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points YPlus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPointEx.ErrorBarsCustomValues.YPlus.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary> 
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DataSourceTypeForYPlusValues(DataSourceType value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


