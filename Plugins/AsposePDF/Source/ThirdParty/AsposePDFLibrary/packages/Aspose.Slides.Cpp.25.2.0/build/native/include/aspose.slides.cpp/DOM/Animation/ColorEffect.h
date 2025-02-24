#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Animation/IColorEffect.h>

#include "DOM/Animation/Behavior.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class ColorDirection;
class ColorOffset;
enum class ColorSpace;
class IColorOffset;
} // namespace Animation
class ColorFormat;
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
class ASPOSE_SLIDES_SHARED_CLASS ColorEffect : public Aspose::Slides::Animation::Behavior, public Aspose::Slides::Animation::IColorEffect
{
    typedef ColorEffect ThisType;
    typedef Aspose::Slides::Animation::Behavior BaseType;
    typedef Aspose::Slides::Animation::IColorEffect BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// This value is used to specify the starting color of behavior.
    /// Read <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_From() override;
    /// <summary>
    /// This value is used to specify the starting color of behavior.
    /// Write <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_From(System::SharedPtr<IColorFormat> value) override;
    /// <summary>
    /// Describes resulting color for the animation color change.
    /// Read <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_To() override;
    /// <summary>
    /// Describes resulting color for the animation color change.
    /// Write <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_To(System::SharedPtr<IColorFormat> value) override;
    /// <summary>
    /// Describes the relative offset value for the color animation.
    /// Read <see cref="Aspose::Slides::Animation::IColorOffset">IColorOffset</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorOffset> get_By() override;
    /// <summary>
    /// Describes the relative offset value for the color animation.
    /// Write <see cref="Aspose::Slides::Animation::IColorOffset">IColorOffset</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_By(System::SharedPtr<IColorOffset> value) override;
    /// <summary>
    /// Represent color space of behavior.
    /// Read <see cref="Animation::ColorSpace"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Animation::ColorSpace get_ColorSpace() override;
    /// <summary>
    /// Represent color space of behavior.
    /// Write <see cref="Animation::ColorSpace"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ColorSpace(Aspose::Slides::Animation::ColorSpace value) override;
    /// <summary>
    /// Specifies which direction to cycle the hue around the color wheel.
    /// Read <see cref="ColorDirection"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ColorDirection get_Direction() override;
    /// <summary>
    /// Specifies which direction to cycle the hue around the color wheel.
    /// Write <see cref="ColorDirection"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Direction(ColorDirection value) override;
    
    /// <summary>
    /// Creates new instance.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ColorEffect();
    
protected:

    /// @cond
    System::SharedPtr<ColorFormat> m_clrFrom;
    System::SharedPtr<ColorFormat> m_clrTo;
    ColorDirection m_clrDir;
    Aspose::Slides::Animation::ColorSpace m_clrSpace;
    System::SharedPtr<ColorOffset> m_by;
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ColorEffect();
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


