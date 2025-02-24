#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IErrorBarsFormat.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/ChartSeries.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class ErrorBarType;
enum class ErrorBarValueType;
class Format;
class IChart;
class IFormat;
} // namespace Charts
class IBaseSlide;
class IPresentation;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ErrorBarsPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class ErrorBarsFormatPPTXUnsupportedProps;
} // namespace Charts
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
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
class ASPOSE_SLIDES_SHARED_CLASS ErrorBarsFormat : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartSeries>>, public Aspose::Slides::Charts::IErrorBarsFormat
{
    typedef ErrorBarsFormat ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartSeries>> BaseType;
    typedef Aspose::Slides::Charts::IErrorBarsFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartSeries;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ErrorBarsPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Gets type of error bars. 
    /// Read <see cref="ErrorBarType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ErrorBarType get_Type() override;
    /// <summary>
    /// Sets type of error bars. 
    /// Write <see cref="ErrorBarType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Type(ErrorBarType value) override;
    /// <summary>
    /// Represents possible ways to determine the length of the error bars. 
    /// In case of custom value type to specify value use <see cref="Aspose::Slides::Charts::IChartDataPoint::get_ErrorBarsCustomValues">IChartDataPoint::get_ErrorBarsCustomValues()</see> property of specific data point in DataPoints collection of series.
    /// In case of Fixed, Percentage or StandardDeviation value type use Value property to specify value.  
    /// Read <see cref="ErrorBarValueType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ErrorBarValueType get_ValueType() override;
    /// <summary>
    /// Represents possible ways to determine the length of the error bars. 
    /// In case of custom value type to specify value use <see cref="Aspose::Slides::Charts::IChartDataPoint::get_ErrorBarsCustomValues">IChartDataPoint::get_ErrorBarsCustomValues()</see> property of specific data point in DataPoints collection of series.
    /// In case of Fixed, Percentage or StandardDeviation value type use Value property to specify value.  
    /// Write <see cref="ErrorBarValueType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ValueType(ErrorBarValueType value) override;
    /// <summary>
    /// Specifies an end cap is not drawn on the error bars.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasEndCap() override;
    /// <summary>
    /// Specifies an end cap is not drawn on the error bars.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasEndCap(bool value) override;
    /// <summary>
    /// Gets value which is used with Fixed, Percentage and StandardDeviation value types to determine the length of the error bars. 
    /// In any other case will return NaN.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Value() override;
    /// <summary>
    /// Sets value which is used with Fixed, Percentage and StandardDeviation value types to determine the length of the error bars. 
    /// In any other case will return NaN.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Value(float value) override;
    /// <summary>
    /// Represents the format of the error bars.
    /// Read <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// Represents the format of the error bars.
    /// Write <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    ASPOSE_SLIDES_SHARED_API void set_Format(System::SharedPtr<IFormat> value) override;
    /// <summary>
    /// Returns the parent chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    /// <summary>
    /// Gets Error Bars visibility .
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsVisible() override;
    /// <summary>
    /// Sets Error Bars visibility .
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsVisible(bool value) override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ErrorBarsFormatPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API ErrorBarsFormat(System::SharedPtr<ChartSeries> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ErrorBarsFormat, CODEPORTING_ARGS(System::SharedPtr<ChartSeries> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~ErrorBarsFormat();
    
private:

    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ErrorBarsFormatPPTXUnsupportedProps> m_pptxUnsupportedProps;
    ErrorBarType m_type;
    ErrorBarValueType m_valueType;
    bool m_hasEndCap;
    float m_value;
    System::SharedPtr<Aspose::Slides::Charts::Format> m_format;
    bool m_isVisible;
    
    /// <summary>
    /// Returns the parent slide of a FillFormat.
    /// Read-only <see cref="BaseSlide"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a FillFormat.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


