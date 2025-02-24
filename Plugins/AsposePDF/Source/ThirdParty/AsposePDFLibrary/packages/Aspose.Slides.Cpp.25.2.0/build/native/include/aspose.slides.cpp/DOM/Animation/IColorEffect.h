#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Animation/IBehavior.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class ColorDirection;
enum class ColorSpace;
class IColorOffset;
} // namespace Animation
class IColorFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents a color effect for an animation behavior.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColorEffect : public virtual Aspose::Slides::Animation::IBehavior
{
    typedef IColorEffect ThisType;
    typedef Aspose::Slides::Animation::IBehavior BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// This value is used to specify the starting color of behavior.
    /// Read <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_From() = 0;
    /// <summary>
    /// This value is used to specify the starting color of behavior.
    /// Write <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_From(System::SharedPtr<IColorFormat> value) = 0;
    /// <summary>
    /// Describes resulting color for the animation color change.
    /// Read <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_To() = 0;
    /// <summary>
    /// Describes resulting color for the animation color change.
    /// Write <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_To(System::SharedPtr<IColorFormat> value) = 0;
    /// <summary>
    /// Describes the relative offset value for the color animation.
    /// Read <see cref="Aspose::Slides::Animation::IColorOffset">IColorOffset</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorOffset> get_By() = 0;
    /// <summary>
    /// Describes the relative offset value for the color animation.
    /// Write <see cref="Aspose::Slides::Animation::IColorOffset">IColorOffset</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_By(System::SharedPtr<IColorOffset> value) = 0;
    /// <summary>
    /// Represent color space of behavior.
    /// Read <see cref="ColorSpace"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Animation::ColorSpace get_ColorSpace() = 0;
    /// <summary>
    /// Represent color space of behavior.
    /// Write <see cref="ColorSpace"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ColorSpace(Aspose::Slides::Animation::ColorSpace value) = 0;
    /// <summary>
    /// Specifies which direction to cycle the hue around the color wheel.
    /// Read <see cref="ColorDirection"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ColorDirection get_Direction() = 0;
    /// <summary>
    /// Specifies which direction to cycle the hue around the color wheel.
    /// Write <see cref="ColorDirection"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Direction(ColorDirection value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


