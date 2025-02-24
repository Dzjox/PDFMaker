#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <Export/ISvgTSpan.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class HtmlSvgRenderContext;
class SvgRenderContext;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents options for SVG text portion ("tspan").
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SvgTSpan final : public Aspose::Slides::Export::ISvgTSpan
{
    typedef SvgTSpan ThisType;
    typedef Aspose::Slides::Export::ISvgTSpan BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::HtmlSvgRenderContext;
    friend class Aspose::Slides::Export::SvgRenderContext;
    /// @endcond
    
public:

    /// <summary>
    /// Gets "tspan" element id
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Id() override;
    /// <summary>
    /// Gets "tspan" element id
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Id(System::String value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API SvgTSpan();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SvgTSpan, CODEPORTING_ARGS());
    
private:

    System::String m_id;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


