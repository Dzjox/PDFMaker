#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IMarker.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class BoxAndWhiskerPointElement;
class BoxAndWhiskerSeriesElement;
class ChartDataPoint;
class ChartSeries;
class Format;
class IFormat;
enum class MarkerStyleType;
} // namespace Charts
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class MarkerPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class MarkerPPTXUnsupportedProps;
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
/// Represents marker of a chert.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Marker : public Aspose::Slides::Charts::IMarker, public Aspose::Slides::IDOMObject
{
    typedef Marker ThisType;
    typedef Aspose::Slides::Charts::IMarker BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPoint;
    friend class Aspose::Slides::Charts::ChartSeries;
    friend class Aspose::Slides::Charts::BoxAndWhiskerPointElement;
    friend class Aspose::Slides::Charts::BoxAndWhiskerSeriesElement;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::MarkerPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Represents the marker style in a line chart, scatter chart, or radar chart.
    /// Read <see cref="MarkerStyleType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API MarkerStyleType get_Symbol() override;
    /// <summary>
    /// Represents the marker style in a line chart, scatter chart, or radar chart.
    /// Write <see cref="MarkerStyleType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Symbol(MarkerStyleType value) override;
    /// <summary>
    /// Gets the marker fill.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// Represents the marker size in a line chart, scatter chart, or radar chart.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Size() override;
    /// <summary>
    /// Represents the marker size in a line chart, scatter chart, or radar chart.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Size(int32_t value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::MarkerPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    int32_t m_size;
    MarkerStyleType m_symbol;
    System::SharedPtr<Aspose::Slides::Charts::Format> m_format;
    
    ASPOSE_SLIDES_LOCAL_API Marker(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<ChartSeries> parentSeries);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Marker, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<ChartSeries> parentSeries));
    
    virtual ASPOSE_SLIDES_SHARED_API ~Marker();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<ChartSeries> m_parentSeries;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::MarkerPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


