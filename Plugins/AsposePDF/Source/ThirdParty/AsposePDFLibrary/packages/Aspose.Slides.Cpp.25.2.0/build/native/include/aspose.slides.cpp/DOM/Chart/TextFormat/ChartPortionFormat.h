#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Chart/IChartPortionFormat.h>

#include "DOM/BasePortionFormat.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ChartPortionFormatEffectiveData;
namespace Charts
{
class Chart;
class ChartPortionFormatImpl;
class ChartTextFormat;
class DataLabelRenderContext;
class IChartComponent;
} // namespace Charts
class IDOMObject;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartTextFormatPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// This class contains the chart portion formatting properties used in charts.
/// Unlike <see cref="IPortionFormatEffectiveData"></see>, all properties of this class are writeable.
/// </summary>
/// <remarks>
/// <para>This class is used to return and manipulate text portion formatting
/// properties defined for the particular portion. This means that
/// no inheritance is applied when getting values so for the majority of cases
/// you will get values meaning "undefined".</para>
/// <para>In order to get the effective formatting parameter values including
/// inherited you need to use <see cref="PortionFormat::GetEffective"></see> method
/// which returns a <see cref="IPortionFormatEffectiveData"></see> instance.</para></remarks>
class ASPOSE_SLIDES_SHARED_CLASS ChartPortionFormat final : public Aspose::Slides::BasePortionFormat, public Aspose::Slides::Charts::IChartPortionFormat
{
    typedef ChartPortionFormat ThisType;
    typedef Aspose::Slides::BasePortionFormat BaseType;
    typedef Aspose::Slides::Charts::IChartPortionFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ChartPortionFormatEffectiveData;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::Charts::ChartTextFormat;
    friend class Aspose::Slides::Charts::DataLabelRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartTextFormatPPTXSerialization;
    /// @endcond
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartPortionFormatImpl> get_RealObject();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartComponent> get_ParentChartComponent();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ChartPortionFormat(System::SharedPtr<IDOMObject> parent);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartPortionFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parent));
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartPortionFormatEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API bool IsDefault();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartPortionFormat();
    
private:

    System::WeakPtr<IChartComponent> m_parentChartComponent;
    System::SharedPtr<ChartPortionFormatEffectiveData> m_effective;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


