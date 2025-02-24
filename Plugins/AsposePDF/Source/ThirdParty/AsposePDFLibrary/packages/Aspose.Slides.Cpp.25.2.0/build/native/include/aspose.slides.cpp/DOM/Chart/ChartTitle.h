#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartTitle.h>

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
class Chart;
class ChartTextFormat;
class Format;
class IChart;
class IChartTextFormat;
class IFormat;
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
class AxisTitleExPPTXSerialization;
class ChartTitleExPPTXSerialization;
class ChartTitlePPTXSerialization;
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
class ChartTitlePPTXUnsupportedProps;
} // namespace Charts
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
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
/// Represents chart title properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartTitle : public Aspose::Slides::Charts::IChartTitle, public Aspose::Slides::IDOMObject
{
    typedef ChartTitle ThisType;
    typedef Aspose::Slides::Charts::IChartTitle BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::Axis;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::AxisTitleExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartTitleExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartTitlePPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the x coordinate of a title as a fraction of the width of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_X() override;
    /// <summary>
    /// Sets the x coordinate of a title as a fraction of the width of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_X(float value) override;
    /// <summary>
    /// Returns the y coordinate of a title as a fraction of the height of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Y() override;
    /// <summary>
    /// Sets the y coordinate of a title as a fraction of the height of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Y(float value) override;
    /// <summary>
    /// Returns the width of a title as a fraction of the width of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Width() override;
    /// <summary>
    /// Sets the width of a title as a fraction of the width of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Width(float value) override;
    /// <summary>
    /// Returns the height of a title as a fraction of the height of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Height() override;
    /// <summary>
    /// Sets the height of a title as a fraction of the height of the chart.
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
    /// Determines whether other chart elements shall be allowed to overlap title.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Overlay() override;
    /// <summary>
    /// Determines whether other chart elements shall be allowed to overlap title.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Overlay(bool value) override;
    /// <summary>
    /// Returns the fill, line, effect styles of a title.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// Can contain a rich formatted text. If this property is not null then this 
    /// formatted text value overrides auto-generated text.
    /// Auto-generated text is an implicit property of the data label, the display 
    /// unit label of the value axis, the axis title, the chart title, the label of the trendline.
    /// Auto-generated text is formatted with the IFormattedTextContainer::get_TextFormat property.
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
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartTitlePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API ChartTitle(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartTitle, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool IsNeedSave();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartTitle();
    
private:

    bool m_overlay;
    System::SharedPtr<Aspose::Slides::Charts::Format> m_titleFmt;
    System::SharedPtr<TextFrame> m_txrich;
    System::SharedPtr<ChartTextFormat> m_textFormatOfAutoText;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartTitlePPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<Aspose::Slides::Charts::Chart> m_parentChart;
    
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
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


