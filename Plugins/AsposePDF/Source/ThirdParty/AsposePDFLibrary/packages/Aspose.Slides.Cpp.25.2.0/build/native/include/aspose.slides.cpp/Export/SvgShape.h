#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <Export/ISvgShape.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Drawing
{
class SVGCanvas;
} // namespace Drawing
namespace Export
{
class HtmlSvgRenderContext;
enum class SvgEvent;
class SvgRenderContext;
} // namespace Export
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class IDictionary;
template <typename, typename> class SortedList;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents options for SVG shape.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SvgShape final : public Aspose::Slides::Export::ISvgShape
{
    typedef SvgShape ThisType;
    typedef Aspose::Slides::Export::ISvgShape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Drawing::SVGCanvas;
    friend class Aspose::Slides::Export::HtmlSvgRenderContext;
    friend class Aspose::Slides::Export::SvgRenderContext;
    /// @endcond
    
public:

    /// <summary>
    /// Gets shape id
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Id() override;
    /// <summary>
    /// Gets shape id
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Id(System::String value) override;
    
    /// <summary>
    /// Sets event handler for the shape
    /// </summary>
    /// <param name="eventType">Type of event.</param>
    /// <param name="handler">Javascript function to handle event. Null value removes handler.</param>
    ASPOSE_SLIDES_SHARED_API void SetEventHandler(SvgEvent eventType, System::String handler) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::IDictionary<SvgEvent, System::String>> get_EventHandlers();
    ASPOSE_SLIDES_LOCAL_API bool get_NeedsSvgGroup();
    
    ASPOSE_SLIDES_LOCAL_API SvgShape();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SvgShape, CODEPORTING_ARGS());
    
private:

    System::SharedPtr<System::Collections::Generic::SortedList<SvgEvent, System::String>> m_eventHandlers;
    System::String m_id;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


