#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/ILegend.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/Chart.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ChartTextFormat;
class Format;
class IChart;
class IChartTextFormat;
class IFormat;
class ILegendEntryCollection;
class ILegendEntryProperties;
class LegendEntryCollection;
enum class LegendPositionType;
} // namespace Charts
class IBaseSlide;
class IPresentation;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class LegendExPPTXSerialization;
class LegendPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class LegendPPTXUnsupportedProps;
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
/// Represents chart's legend properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Legend : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>>, public Aspose::Slides::Charts::ILegend
{
    typedef Legend ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>> BaseType;
    typedef Aspose::Slides::Charts::ILegend BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::LegendExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::LegendPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the x coordinate of a legend as a fraction of the width of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_X() override;
    /// <summary>
    /// Sets the x coordinate of a legend as a fraction of the width of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_X(float value) override;
    /// <summary>
    /// Returns the y coordinate of a legend as a fraction of the height of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Y() override;
    /// <summary>
    /// Sets the y coordinate of a legend as a fraction of the height of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Y(float value) override;
    /// <summary>
    /// Returns the width of a legend as a fraction of the width of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Width() override;
    /// <summary>
    /// Sets the width of a legend as a fraction of the width of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Width(float value) override;
    /// <summary>
    /// Returns the height of a legend as a fraction of the height of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Height() override;
    /// <summary>
    /// Sets the height of a legend as a fraction of the height of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Height(float value) override;
    /// <summary>
    /// Right.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Right() override;
    /// <summary>
    /// Bottom.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Bottom() override;
    /// <summary>
    /// Determines whether other chart elements shall be allowed to overlap legend.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Overlay() override;
    /// <summary>
    /// Determines whether other chart elements shall be allowed to overlap legend.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Overlay(bool value) override;
    /// <summary>
    /// Text format.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTextFormat">IChartTextFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartTextFormat> get_TextFormat() override;
    /// <summary>
    /// Specifies the position of the legend on a chart.
    /// Non-NaN values of X, Y, Width, Heigt properties override effect of this property.
    /// Read <see cref="LegendPositionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LegendPositionType get_Position() override;
    /// <summary>
    /// Specifies the position of the legend on a chart.
    /// Non-NaN values of X, Y, Width, Heigt properties override effect of this property.
    /// Write <see cref="LegendPositionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Position(LegendPositionType value) override;
    /// <summary>
    /// Returns the format of a legend.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// Returns the chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    /// <summary>
    /// Gets legend entries.
    /// Read-only <see cref="Aspose::Slides::Charts::ILegendEntryCollection">ILegendEntryCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILegendEntryCollection> get_Entries() override;
    
    /// <summary>
    /// Get properties of legend entry corresponding to data point in chart at the specified index.
    /// In case of chart types: bar-of-pie, exploded pie, exploded pie 3D, pie, pie 3D, pie-of-pie, data point is taken from first series.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILegendEntryProperties> get_Entry(int32_t index) override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    LegendPositionType m_typePosition;
    System::SharedPtr<Aspose::Slides::Charts::Format> m_format;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::LegendPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API Legend(System::SharedPtr<Aspose::Slides::Charts::Chart> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Legend, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::Charts::Chart> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~Legend();
    
private:

    bool _overlay;
    System::SharedPtr<ChartTextFormat> m_textFormatOfAutoText;
    System::SharedPtr<LegendEntryCollection> m_legendEntryCollection;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::LegendPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
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


