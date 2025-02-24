#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IDataTable.h>

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
} // namespace Charts
class IBaseSlide;
class IPresentation;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class DataTablePPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class DataTablePPTXUnsupportedProps;
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
/// Represents data table properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS DataTable : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>>, public Aspose::Slides::Charts::IDataTable
{
    typedef DataTable ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>> BaseType;
    typedef Aspose::Slides::Charts::IDataTable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataTablePPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the line, fill, and effect styles of an object.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// True if the chart data table has horizontal cell borders.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasBorderHorizontal() override;
    /// <summary>
    /// True if the chart data table has horizontal cell borders.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasBorderHorizontal(bool value) override;
    /// <summary>
    /// True if the chart data table has outline borders.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasBorderOutline() override;
    /// <summary>
    /// True if the chart data table has outline borders.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasBorderOutline(bool value) override;
    /// <summary>
    /// True if the chart data table has vertical cell borders.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasBorderVertical() override;
    /// <summary>
    /// True if the chart data table has vertical cell borders.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasBorderVertical(bool value) override;
    /// <summary>
    /// True if the data label legend key is visible.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowLegendKey() override;
    /// <summary>
    /// True if the data label legend key is visible.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowLegendKey(bool value) override;
    /// <summary>
    /// Returns chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    /// <summary>
    /// Returns text format.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTextFormat">IChartTextFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartTextFormat> get_TextFormat() override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    bool m_hasBorderHorz;
    bool m_hasBorderVert;
    bool m_hasBorderOutline;
    bool m_showLegendKey;
    System::SharedPtr<Aspose::Slides::Charts::Format> m_format;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::DataTablePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API DataTable(System::SharedPtr<Aspose::Slides::Charts::Chart> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DataTable, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::Charts::Chart> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~DataTable();
    
private:

    System::SharedPtr<ChartTextFormat> m_textFormatOfAutoText;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::DataTablePPTXUnsupportedProps> m_pptxUnsupportedProps;
    
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


