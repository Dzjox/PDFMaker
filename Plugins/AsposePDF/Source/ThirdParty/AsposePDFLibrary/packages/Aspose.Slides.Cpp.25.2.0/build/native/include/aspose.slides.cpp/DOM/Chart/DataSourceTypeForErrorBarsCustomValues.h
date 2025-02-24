#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IDataSourceTypeForErrorBarsCustomValues.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class DataSourceType;
class DataSourceTypeHolder;
class ErrorBarsCustomValues;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
///  Specifies types of values in ChartDataPoint::get_ErrorBarsCustomValues properties list
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS DataSourceTypeForErrorBarsCustomValues : public Aspose::Slides::Charts::IDataSourceTypeForErrorBarsCustomValues
{
    typedef DataSourceTypeForErrorBarsCustomValues ThisType;
    typedef Aspose::Slides::Charts::IDataSourceTypeForErrorBarsCustomValues BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ErrorBarsCustomValues;
    /// @endcond
    
public:

    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points XMinus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPoint.ErrorBarsCustomValues.XMinus.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API DataSourceType get_DataSourceTypeForXMinusValues() override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points XMinus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPoint.ErrorBarsCustomValues.XMinus.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DataSourceTypeForXMinusValues(DataSourceType value) override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points XPlus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPoint.ErrorBarsCustomValues.XPlus.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API DataSourceType get_DataSourceTypeForXPlusValues() override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points XPlus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPoint.ErrorBarsCustomValues.XPlus.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DataSourceTypeForXPlusValues(DataSourceType value) override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points YMinus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPointEx.ErrorBarsCustomValues.YMinus.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API DataSourceType get_DataSourceTypeForYMinusValues() override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points YMinus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPointEx.ErrorBarsCustomValues.YMinus.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DataSourceTypeForYMinusValues(DataSourceType value) override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points YPlus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPointEx.ErrorBarsCustomValues.YPlus.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API DataSourceType get_DataSourceTypeForYPlusValues() override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points YPlus property object for error bars custom values. In other words it specifies 
    /// the type of value of ChartDataPointEx.ErrorBarsCustomValues.YPlus.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DataSourceTypeForYPlusValues(DataSourceType value) override;
    
    ASPOSE_SLIDES_SHARED_API DataSourceTypeForErrorBarsCustomValues();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DataSourceTypeHolder> GetDataSourceTypeForXMinusValuesHolder();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DataSourceTypeHolder> GetDataSourceTypeForXPlusValuesHolder();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DataSourceTypeHolder> GetDataSourceTypeForYMinusValuesHolder();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DataSourceTypeHolder> GetDataSourceTypeForYPlusValuesHolder();
    /// @endcond
    
private:

    System::SharedPtr<DataSourceTypeHolder> m_dataSourceTypeForXMinus;
    System::SharedPtr<DataSourceTypeHolder> m_dataSourceTypeForXPlus;
    System::SharedPtr<DataSourceTypeHolder> m_dataSourceTypeForYMinus;
    System::SharedPtr<DataSourceTypeHolder> m_dataSourceTypeForYPlus;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


