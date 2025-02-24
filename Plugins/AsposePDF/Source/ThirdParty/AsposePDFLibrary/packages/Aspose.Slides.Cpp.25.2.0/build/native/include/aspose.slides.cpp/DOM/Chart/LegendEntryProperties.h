#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/ILegendEntryProperties.h>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class Chart;
class ChartDataPoint;
class ChartSeries;
class ChartTextFormat;
class IChart;
class IChartTextFormat;
class LegendElement;
class LegendEntryPropertyRenderContext;
class Trendline;
} // namespace Charts
class IBaseSlide;
class IPresentation;
class IPresentationComponent;
class ISlideComponent;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
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
class LegendEntryPropertiesPPTXUnsupportedProps;
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
/// Represents legend properties of a chart.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS LegendEntryProperties : public Aspose::Slides::Charts::ILegendEntryProperties, public Aspose::Slides::IDOMObject
{
    typedef LegendEntryProperties ThisType;
    typedef Aspose::Slides::Charts::ILegendEntryProperties BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPoint;
    friend class Aspose::Slides::Charts::ChartSeries;
    friend class Aspose::Slides::Charts::Trendline;
    friend class Aspose::Slides::Charts::LegendElement;
    friend class Aspose::Slides::Charts::LegendEntryPropertyRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::LegendPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns text format.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTextFormat">IChartTextFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartTextFormat> get_TextFormat() override;
    /// <summary>
    /// Determines whether the legend entry is hide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Hide() override;
    /// <summary>
    /// Determines whether the legend entry is hide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Hide(bool value) override;
    /// <summary>
    /// Returns the parent chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISlideComponent> get_Parent_ISlideComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::LegendEntryPropertiesPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API LegendEntryProperties(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LegendEntryProperties, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~LegendEntryProperties();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
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
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    System::WeakPtr<ISlideComponent> m_parentISlideComponent;
    System::WeakPtr<Aspose::Slides::Charts::Chart> m_parentChart;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::LegendEntryPropertiesPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<ChartTextFormat> m_textFormatOfAutoText;
    bool m_hide;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


