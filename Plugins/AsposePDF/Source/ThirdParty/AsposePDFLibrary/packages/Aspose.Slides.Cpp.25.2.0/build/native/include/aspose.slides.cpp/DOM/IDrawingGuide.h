#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class Orientation : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an adjustable drawing guide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IDrawingGuide : public virtual System::Object
{
    typedef IDrawingGuide ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns orientation of the drawing guide.
    /// Read <see cref="Slides::Orientation"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Orientation get_Orientation() = 0;
    /// <summary>
    /// Sets orientation of the drawing guide.
    /// Write <see cref="Slides::Orientation"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Orientation(Aspose::Slides::Orientation value) = 0;
    /// <summary>
    /// Returns position of the drawing guide in points from the top, left corner of the slide.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// The typical value range is from zero to slide height for a horizontal guide and from zero to slide width for a vertical guide.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Position() = 0;
    /// <summary>
    /// Sets position of the drawing guide in points from the top, left corner of the slide.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// The typical value range is from zero to slide height for a horizontal guide and from zero to slide width for a vertical guide.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Position(float value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


