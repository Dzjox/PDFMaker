#pragma once
//Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Chart/ITrendline.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/TrendlineCollection.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class Chart;
class ChartTextFormat;
class EquationTextElement;
class Format;
class IChart;
class IChartTextFormat;
class IFormat;
class ILegendEntryProperties;
class LegendEntryProperties;
class RSquaredValueTextElement;
class TrendlineElement;
enum class TrendlineType;
} // namespace Charts
class IBaseSlide;
class IPresentation;
class ITextFrame;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class TrendlinePPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
class TextFrame;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class TrendlinePPTXUnsupportedProps;
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
/// Class represents trend line of chart series
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Trendline : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::TrendlineCollection>>, public Aspose::Slides::Charts::ITrendline
{
    typedef Trendline ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::TrendlineCollection>> BaseType;
    typedef Aspose::Slides::Charts::ITrendline BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::TrendlineCollection;
    friend class Aspose::Slides::Charts::EquationTextElement;
    friend class Aspose::Slides::Charts::RSquaredValueTextElement;
    friend class Aspose::Slides::Charts::TrendlineElement;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::TrendlinePPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Gets  name of the trendline.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_TrendlineName() override;
    /// <summary>
    /// Sets  name of the trendline.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TrendlineName(System::String value) override;
    /// <summary>
    /// Gets type of trend line.
    /// Read <see cref="Charts::TrendlineType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Charts::TrendlineType get_TrendlineType() override;
    /// <summary>
    /// Sets type of trend line.
    /// Write <see cref="Charts::TrendlineType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TrendlineType(Aspose::Slides::Charts::TrendlineType value) override;
    /// <summary>
    /// Represents the format of the trend line.
    /// Read <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// Represents the format of the trend line.
    /// Write <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    ASPOSE_SLIDES_SHARED_API void set_Format(System::SharedPtr<IFormat> value) override;
    /// <summary>
    /// Specifies the number of categories (or units on a scatter chart) that the trend line extends before
    /// the data for the series that is being trended. On scatter and non-scatter charts, the value shall be any nonnegative
    /// value.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Backward() override;
    /// <summary>
    /// Specifies the number of categories (or units on a scatter chart) that the trend line extends before
    /// the data for the series that is being trended. On scatter and non-scatter charts, the value shall be any nonnegative
    /// value.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Backward(double value) override;
    /// <summary>
    /// Specifies the number of categories (or units on a scatter chart) that the trendline extends after the
    /// data for the series that is being trended. On scatter and non-scatter charts, the value shall be any non-negative
    /// value.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Forward() override;
    /// <summary>
    /// Specifies the number of categories (or units on a scatter chart) that the trendline extends after the
    /// data for the series that is being trended. On scatter and non-scatter charts, the value shall be any non-negative
    /// value.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Forward(double value) override;
    /// <summary>
    /// Specifies the value where the trendline shall cross the y axis. This property shall be supported only
    /// when the trendline type is exp, linear, or poly.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Intercept() override;
    /// <summary>
    /// Specifies the value where the trendline shall cross the y axis. This property shall be supported only
    /// when the trendline type is exp, linear, or poly.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Intercept(double value) override;
    /// <summary>
    /// Specifies that the equation for the trendline is displayed on the chart (in the same label as the Rsquaredvalue).
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_DisplayEquation() override;
    /// <summary>
    /// Specifies that the equation for the trendline is displayed on the chart (in the same label as the Rsquaredvalue).
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DisplayEquation(bool value) override;
    /// <summary>
    /// Specifies the order of the polynomial trend line. It is ignored for other trend line types. Value must be between 2 and 6.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint8_t get_Order() override;
    /// <summary>
    /// Specifies the order of the polynomial trend line. It is ignored for other trend line types. Value must be between 2 and 6.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Order(uint8_t value) override;
    /// <summary>
    /// Specifies the period of the trend line for a moving average trend line. It is ignored for other trend
    /// line variants. Value must be between 2 and 255.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint8_t get_Period() override;
    /// <summary>
    /// Specifies the period of the trend line for a moving average trend line. It is ignored for other trend
    /// line variants. Value must be between 2 and 255.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Period(uint8_t value) override;
    /// <summary>
    /// Specifies that the R-squared value of the trendline is displayed on the chart (in the same label as the equation).
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_DisplayRSquaredValue() override;
    /// <summary>
    /// Specifies that the R-squared value of the trendline is displayed on the chart (in the same label as the equation).
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DisplayRSquaredValue(bool value) override;
    /// <summary>
    /// Represents legend entry related with this trendline
    /// Read-only <see cref="Aspose::Slides::Charts::ILegendEntryProperties">ILegendEntryProperties</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILegendEntryProperties> get_RelatedLegendEntry() override;
    /// <summary>
    /// Can contain a rich formatted text. If this property is not null then this 
    /// formatted text value overrides auto-generated text of data label.
    /// Auto-generated text of data label means text that is managed by ShowSeriesName, 
    /// ShowValue, ... properties and is formatted with the TextFormatManager.TextFormat property.
    /// Read-only <see cref="ITextFrame"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrame> get_TextFrameForOverriding() override;
    /// <summary>
    /// Returns text format.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTextFormat">IChartTextFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartTextFormat> get_TextFormat() override;
    /// <summary>
    /// Returns the parent chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    
    /// <summary>
    /// Initialize TextFrameForOverriding with the text in paramener "text".
    /// If TextFrameForOverriding is already initialized then simply changes its text.
    /// </summary>
    /// <param name="text">Text for a new TextFrameForOverriding.</param>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrame> AddTextFrameForOverriding(System::String text) override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::TrendlinePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API Trendline(System::SharedPtr<TrendlineCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Trendline, CODEPORTING_ARGS(System::SharedPtr<TrendlineCollection> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~Trendline();
    
private:

    System::WeakPtr<Aspose::Slides::Charts::Chart> m_parentChart;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::TrendlinePPTXUnsupportedProps> m_pptxUnsupportedProps;
    double m_backward;
    bool m_dispEq;
    bool m_dispRSqr;
    double m_forward;
    double m_intercept;
    System::String m_trendlineName;
    uint8_t m_order;
    uint8_t m_period;
    Aspose::Slides::Charts::TrendlineType m_trendlineType;
    System::SharedPtr<ChartTextFormat> m_textFormatOfAutoText;
    System::SharedPtr<TextFrame> m_txrich;
    System::SharedPtr<Aspose::Slides::Charts::Format> m_format;
    System::SharedPtr<LegendEntryProperties> m_legendEntryProperties;
    
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


