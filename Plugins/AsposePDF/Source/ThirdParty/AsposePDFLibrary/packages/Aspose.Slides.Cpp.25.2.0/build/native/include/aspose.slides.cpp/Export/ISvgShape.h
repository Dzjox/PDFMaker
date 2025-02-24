#pragma once
//Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
enum class SvgEvent;
} // namespace Export
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents options for SVG shape.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISvgShape : public virtual System::Object
{
    typedef ISvgShape ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Sets or gets id for the shape
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Id() = 0;
    /// <summary>
    /// Sets or gets id for the shape
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Id(System::String value) = 0;
    
    /// <summary>
    /// Sets event handler for the shape
    /// </summary>
    /// <param name="eventType">Type of event.</param>
    /// <param name="handler">Javascript function to handle event. Null value removes handler.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetEventHandler(SvgEvent eventType, System::String handler) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


