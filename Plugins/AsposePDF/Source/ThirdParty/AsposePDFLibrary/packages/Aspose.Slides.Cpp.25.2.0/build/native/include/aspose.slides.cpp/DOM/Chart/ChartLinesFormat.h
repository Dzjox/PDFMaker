#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartLinesFormat.h>
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
class Axis;
class ChartSeriesGroup;
class DataLabelCollection;
} // namespace Charts
class EffectFormat;
class IEffectFormat;
class ILineFormat;
class LineFormat;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class AxisExPPTXSerialization;
class ChartLinesFormatPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class ChartLinesFormatPPTXUnsupportedProps;
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
/// Represents gridlines format properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartLinesFormat : public Aspose::Slides::Charts::IChartLinesFormat, public Aspose::Slides::IDOMObject
{
    typedef ChartLinesFormat ThisType;
    typedef Aspose::Slides::Charts::IChartLinesFormat BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::Axis;
    friend class Aspose::Slides::Charts::ChartSeriesGroup;
    friend class Aspose::Slides::Charts::DataLabelCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::AxisExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartLinesFormatPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns line style properties of a chart line.
    /// Read-only <see cref="ILineFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_Line() override;
    /// <summary>
    /// Returns effects used for a chart line.
    /// Read-only <see cref="IEffectFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectFormat> get_Effect() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartLinesFormatPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    ASPOSE_SLIDES_LOCAL_API ChartLinesFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartLinesFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartLinesFormat();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartLinesFormatPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<LineFormat> m_lineFmt;
    System::SharedPtr<EffectFormat> m_effectFmt;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


