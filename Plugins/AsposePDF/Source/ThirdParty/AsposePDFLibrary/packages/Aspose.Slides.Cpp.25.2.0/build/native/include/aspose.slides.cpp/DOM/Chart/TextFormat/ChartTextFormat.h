#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartTextFormat.h>
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
class Chart;
class ChartDefaultStyle;
class ChartPortionFormat;
class ChartTitle;
class DataLabelFormat;
class DataLabelFormatImpl;
class DataTable;
class DisplayUnitLabel;
class IChartParagraphFormat;
class IChartPortionFormat;
class IChartTextBlockFormat;
class Legend;
class LegendEntryProperties;
class Trendline;
} // namespace Charts
class ITextFrame;
class ParagraphFormat;
class TextFrameFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Specifies default text formatting for chart text elements.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartTextFormat : public Aspose::Slides::Charts::IChartTextFormat, public Aspose::Slides::IDOMObject
{
    typedef ChartTextFormat ThisType;
    typedef Aspose::Slides::Charts::IChartTextFormat BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDefaultStyle;
    friend class Aspose::Slides::Charts::DataLabelFormat;
    friend class Aspose::Slides::Charts::Axis;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::Charts::ChartTitle;
    friend class Aspose::Slides::Charts::DataLabelFormatImpl;
    friend class Aspose::Slides::Charts::DataTable;
    friend class Aspose::Slides::Charts::DisplayUnitLabel;
    friend class Aspose::Slides::Charts::Legend;
    friend class Aspose::Slides::Charts::LegendEntryProperties;
    friend class Aspose::Slides::Charts::Trendline;
    /// @endcond
    
public:

    /// <summary>
    /// TextBlockFormat.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTextBlockFormat">IChartTextBlockFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartTextBlockFormat> get_TextBlockFormat() override;
    /// <summary>
    /// ParagraphFormat.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartParagraphFormat">IChartParagraphFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartParagraphFormat> get_ParagraphFormat() override;
    /// <summary>
    /// PortionFormat.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartPortionFormat">IChartPortionFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartPortionFormat> get_PortionFormat() override;
    
    /// <summary>
    /// Copies text format to specified text frame.
    /// </summary>
    /// <param name="destTextFrame">Text frame to copy text format to.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::SharedPtr<ITextFrame> destTextFrame) override;
    /// <summary>
    /// Copies text format from specified text frame.
    /// </summary>
    /// <param name="sourceTextFrame">Text frame to copy text format.</param>
    ASPOSE_SLIDES_SHARED_API void CopyFrom(System::SharedPtr<ITextFrame> sourceTextFrame) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    ASPOSE_SLIDES_LOCAL_API ChartTextFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartTextFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartTextFormat();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::SharedPtr<TextFrameFormat> m_textBlockFormat;
    System::SharedPtr<Aspose::Slides::ParagraphFormat> m_paragraphFormat;
    System::SharedPtr<ChartPortionFormat> m_portionFormat;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


