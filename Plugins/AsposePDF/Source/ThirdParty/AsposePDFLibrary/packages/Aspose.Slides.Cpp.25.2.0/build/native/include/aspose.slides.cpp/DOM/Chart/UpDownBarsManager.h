#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Chart/IUpDownBarsManager.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/ChartSeriesGroup.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class Format;
class IFormat;
} // namespace Charts
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class UpDownBarsManagerPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class UpDownBarsManagerPPTXUnsupportedProps;
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
/// Provide access to up/down bars of Line- or Stock-chart.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS UpDownBarsManager : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartSeriesGroup>>, public Aspose::Slides::Charts::IUpDownBarsManager
{
    typedef UpDownBarsManager ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartSeriesGroup>> BaseType;
    typedef Aspose::Slides::Charts::IUpDownBarsManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartSeriesGroup;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::UpDownBarsManagerPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the UpBars format.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_UpBarsFormat() override;
    /// <summary>
    /// Returns the DownBars format.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_DownBarsFormat() override;
    /// <summary>
    /// HasUpDownBars.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasUpDownBars() override;
    /// <summary>
    /// HasUpDownBars.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasUpDownBars(bool value) override;
    /// <summary>
    /// GapWidth.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_GapWidth() override;
    /// <summary>
    /// GapWidth.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_GapWidth(int32_t value) override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::UpDownBarsManagerPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API UpDownBarsManager(System::SharedPtr<ChartSeriesGroup> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(UpDownBarsManager, CODEPORTING_ARGS(System::SharedPtr<ChartSeriesGroup> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~UpDownBarsManager();
    
private:

    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::UpDownBarsManagerPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<Format> m_upBars;
    System::SharedPtr<Format> m_downBars;
    bool m_hasUpDownBars;
    int32_t m_gapWidth;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


