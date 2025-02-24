#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class SlideOrientation;
enum class SlideSizeScaleType;
enum class SlideSizeType;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class SizeF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a size of slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISlideSize : public virtual System::Object
{
    typedef ISlideSize ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the size in points.
    /// Assigning any value will reset <see cref="ISlideSize::get_Type"></see> value to <see cref="SlideSizeType::Custom"></see> and set <see cref="ISlideSize::get_Orientation"></see>.
    /// Read <see cref="System::Drawing::SizeF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::SizeF get_Size() = 0;
    /// <summary>
    /// Returns the type of slide size.
    /// Assigning any value except <see cref="SlideSizeType::Custom"></see> will change <see cref="ISlideSize::get_Size"></see> accordingly, but will keep <see cref="ISlideSize::get_Orientation"></see> intact.
    /// Read <see cref="Aspose::Slides::SlideSizeType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API SlideSizeType get_Type() = 0;
    /// <summary>
    /// Returns the slide orientation.
    /// <remarks>Changing this value will swap slide's dimensions.</remarks>
    /// Read <see cref="SlideOrientation"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API SlideOrientation get_Orientation() = 0;
    /// <summary>
    /// Sets the slide orientation.
    /// <remarks>Changing this value will swap slide's dimensions.</remarks>
    /// Write <see cref="SlideOrientation"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Orientation(SlideOrientation value) = 0;
    
    /// <summary>
    /// Sets the type of slide size and scales content using scale type.
    /// Assigning any value except <see cref="SlideSizeType::Custom"></see> will change <see cref="ISlideSize::get_Size"></see> accordingly, but will keep <see cref="ISlideSize::get_Orientation"></see> intact.
    /// </summary>
    /// <param name="type">Slide size type.</param>
    /// <param name="scaleType">Scale type of slide content.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetSize(SlideSizeType type, SlideSizeScaleType scaleType) = 0;
    /// <summary>
    /// Sets the size in points and scales content using scale type.
    /// Assigning any value will reset <see cref="ISlideSize::get_Type"></see> value to <see cref="SlideSizeType::Custom"></see> and set <see cref="ISlideSize::get_Orientation"></see>.
    /// </summary>
    /// <param name="width">Width.</param>
    /// <param name="height">Height.</param>
    /// <param name="scaleType">Scale type of slide content.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetSize(float width, float height, SlideSizeScaleType scaleType) = 0;
    
};

} // namespace Slides
} // namespace Aspose


