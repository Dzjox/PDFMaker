#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/IChartComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class ErrorBarType;
enum class ErrorBarValueType;
class IFormat;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents error bars of chart series. ErrorBars custom values are in IChartDataPointCollection
/// (in <see cref="Aspose::Slides::Charts::IChartDataPoint::get_ErrorBarsCustomValues">IChartDataPoint::get_ErrorBarsCustomValues()</see> property).
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IErrorBarsFormat : public Aspose::Slides::Charts::IChartComponent
{
    typedef IErrorBarsFormat ThisType;
    typedef Aspose::Slides::Charts::IChartComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets type of error bars. 
    /// Read <see cref="ErrorBarType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ErrorBarType get_Type() = 0;
    /// <summary>
    /// Sets type of error bars. 
    /// Write <see cref="ErrorBarType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Type(ErrorBarType value) = 0;
    /// <summary>
    /// Represents possible ways to determine the length of the error bars. 
    /// In case of custom value type to specify value use <see cref="Aspose::Slides::Charts::IChartDataPoint::get_ErrorBarsCustomValues">IChartDataPoint::get_ErrorBarsCustomValues()</see> property of specific data point in DataPoints collection of series.  
    /// Read <see cref="ErrorBarValueType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ErrorBarValueType get_ValueType() = 0;
    /// <summary>
    /// Represents possible ways to determine the length of the error bars. 
    /// In case of custom value type to specify value use <see cref="Aspose::Slides::Charts::IChartDataPoint::get_ErrorBarsCustomValues">IChartDataPoint::get_ErrorBarsCustomValues()</see> property of specific data point in DataPoints collection of series.  
    /// Write <see cref="ErrorBarValueType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ValueType(ErrorBarValueType value) = 0;
    /// <summary>
    /// Specifies an end cap is not drawn on the error bars.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasEndCap() = 0;
    /// <summary>
    /// Specifies an end cap is not drawn on the error bars.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HasEndCap(bool value) = 0;
    /// <summary>
    /// Gets value which is used with Fixed, Percentage and StandardDeviation value types to determine the length of the error bars. 
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Value() = 0;
    /// <summary>
    /// Sets value which is used with Fixed, Percentage and StandardDeviation value types to determine the length of the error bars. 
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Value(float value) = 0;
    /// <summary>
    /// Represents the format of the error bars.
    /// Read <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
    /// <summary>
    /// Represents the format of the error bars.
    /// Write <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Format(System::SharedPtr<IFormat> value) = 0;
    /// <summary>
    /// Gets Error Bars visibility.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsVisible() = 0;
    /// <summary>
    /// Sets Error Bars visibility.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsVisible(bool value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


