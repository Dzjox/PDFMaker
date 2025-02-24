#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IFormat.h>
#include <cstdint>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class AggregatedDataPoint;
class ChartDataPoint;
class ChartDataPointDefaultStyle;
class ChartDataPointLevel;
class ChartDefaultStyle;
class ChartPlotArea;
class ChartSeries;
class ChartSeriesRenderContext;
class ChartTitle;
class ChartWall;
class DataLabel;
class DataLabelFormat;
class DataLabelFormatImpl;
class DataTable;
class DisplayUnitLabel;
class ErrorBarsFormat;
class FormatImpl;
class Legend;
class Marker;
class Trendline;
class UpDownBarsManager;
} // namespace Charts
class EffectFormat;
class FillFormat;
class IDOMObject;
class IEffectFormat;
class IFillFormat;
class ILineFormat;
class IThreeDFormat;
class LineFormat;
namespace OdpSerialization
{
namespace PartParser
{
class ChartOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartDataPointPPTXSerialization;
class FormatOverridePPTXSerialization;
class FormatPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
class ThreeDFormat;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class FormatPPTXUnsupportedProps;
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
/// Represents chart format properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Format final : public Aspose::Slides::PVIObject, public Aspose::Slides::Charts::IFormat
{
    typedef Format ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::Charts::IFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::ChartOdpDeserialization;
    friend class Aspose::Slides::Charts::ChartDataPointLevel;
    friend class Aspose::Slides::Charts::ChartDefaultStyle;
    friend class Aspose::Slides::Charts::AggregatedDataPoint;
    friend class Aspose::Slides::Charts::ChartDataPointDefaultStyle;
    friend class Aspose::Slides::Charts::DataLabelFormat;
    friend class Aspose::Slides::Charts::ChartDataPoint;
    friend class Aspose::Slides::Charts::ChartPlotArea;
    friend class Aspose::Slides::Charts::ChartSeries;
    friend class Aspose::Slides::Charts::ChartTitle;
    friend class Aspose::Slides::Charts::ChartWall;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::Charts::DataLabelFormatImpl;
    friend class Aspose::Slides::Charts::DataTable;
    friend class Aspose::Slides::Charts::DisplayUnitLabel;
    friend class Aspose::Slides::Charts::ErrorBarsFormat;
    friend class Aspose::Slides::Charts::FormatImpl;
    friend class Aspose::Slides::Charts::Legend;
    friend class Aspose::Slides::Charts::Marker;
    friend class Aspose::Slides::Charts::Trendline;
    friend class Aspose::Slides::Charts::UpDownBarsManager;
    friend class Aspose::Slides::Charts::ChartSeriesRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPointPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::FormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::FormatOverridePPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns fill style properties of a chart.
    /// Read-only <see cref="IFillFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_Fill() override;
    /// <summary>
    /// Returns line style properties of a chart.
    /// Read-only <see cref="ILineFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_Line() override;
    /// <summary>
    /// Returns effects used for a chart.
    /// Read-only <see cref="IEffectFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectFormat> get_Effect() override;
    /// <summary>
    /// Returns 3D format of a chart.
    /// Read-only <see cref="IThreeDFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IThreeDFormat> get_Effect3D() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::FormatPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API Format(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Format, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IFormat> source);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Format();
    
private:

    System::SharedPtr<FillFormat> m_fillFormat;
    System::SharedPtr<LineFormat> m_lineFormat;
    System::SharedPtr<EffectFormat> m_effectFormat;
    System::SharedPtr<ThreeDFormat> m_threeDFormat;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::FormatPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


