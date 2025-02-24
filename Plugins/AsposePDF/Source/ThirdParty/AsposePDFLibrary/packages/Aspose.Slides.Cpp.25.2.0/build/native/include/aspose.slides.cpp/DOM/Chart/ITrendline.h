#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/Chart/IOverridableText.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IFormat;
class ILegendEntryProperties;
enum class TrendlineType;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Class represents trend line of chart series
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITrendline : public Aspose::Slides::Charts::IOverridableText
{
    typedef ITrendline ThisType;
    typedef Aspose::Slides::Charts::IOverridableText BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets  name of the trendline.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_TrendlineName() = 0;
    /// <summary>
    /// Sets  name of the trendline.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TrendlineName(System::String value) = 0;
    /// <summary>
    /// Gets type of trend line. 
    /// Read <see cref="TrendlineType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Charts::TrendlineType get_TrendlineType() = 0;
    /// <summary>
    /// Sets type of trend line. 
    /// Write <see cref="TrendlineType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TrendlineType(Aspose::Slides::Charts::TrendlineType value) = 0;
    /// <summary>
    /// Represents the format of the trend line.
    /// Read <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
    /// <summary>
    /// Represents the format of the trend line.
    /// Write <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Format(System::SharedPtr<IFormat> value) = 0;
    /// <summary>
    /// Specifies the number of categories (or units on a scatter chart) that the trend line extends before
    /// the data for the series that is being trended. On scatter and non-scatter charts, the value shall be any nonnegative
    /// value.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Backward() = 0;
    /// <summary>
    /// Specifies the number of categories (or units on a scatter chart) that the trend line extends before
    /// the data for the series that is being trended. On scatter and non-scatter charts, the value shall be any nonnegative
    /// value.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Backward(double value) = 0;
    /// <summary>
    /// Specifies the number of categories (or units on a scatter chart) that the trendline extends after the
    /// data for the series that is being trended. On scatter and non-scatter charts, the value shall be any non-negative
    /// value.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Forward() = 0;
    /// <summary>
    /// Specifies the number of categories (or units on a scatter chart) that the trendline extends after the
    /// data for the series that is being trended. On scatter and non-scatter charts, the value shall be any non-negative
    /// value.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Forward(double value) = 0;
    /// <summary>
    /// Specifies the value where the trendline shall cross the y axis. This property shall be supported only
    /// when the trendline type is exp, linear, or poly.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Intercept() = 0;
    /// <summary>
    /// Specifies the value where the trendline shall cross the y axis. This property shall be supported only
    /// when the trendline type is exp, linear, or poly.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Intercept(double value) = 0;
    /// <summary>
    /// Specifies that the equation for the trendline is displayed on the chart (in the same label as the Rsquaredvalue).
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DisplayEquation() = 0;
    /// <summary>
    /// Specifies that the equation for the trendline is displayed on the chart (in the same label as the Rsquaredvalue).
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DisplayEquation(bool value) = 0;
    /// <summary>
    /// Specifies the order of the polynomial trend line. It is ignored for other trend line types. Value must be between 2 and 6.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_Order() = 0;
    /// <summary>
    /// Specifies the order of the polynomial trend line. It is ignored for other trend line types. Value must be between 2 and 6.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Order(uint8_t value) = 0;
    /// <summary>
    /// Specifies the period of the trend line for a moving average trend line. It is ignored for other trend
    /// line variants. Value must be between 2 and 255.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_Period() = 0;
    /// <summary>
    /// Specifies the period of the trend line for a moving average trend line. It is ignored for other trend
    /// line variants. Value must be between 2 and 255.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Period(uint8_t value) = 0;
    /// <summary>
    /// Specifies that the R-squared value of the trendline is displayed on the chart (in the same label as the equation).
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DisplayRSquaredValue() = 0;
    /// <summary>
    /// Specifies that the R-squared value of the trendline is displayed on the chart (in the same label as the equation).
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DisplayRSquaredValue(bool value) = 0;
    /// <summary>
    /// Represents legend entry related with this trendline
    /// Read-only <see cref="Aspose::Slides::Charts::ILegendEntryProperties">ILegendEntryProperties</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILegendEntryProperties> get_RelatedLegendEntry() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


