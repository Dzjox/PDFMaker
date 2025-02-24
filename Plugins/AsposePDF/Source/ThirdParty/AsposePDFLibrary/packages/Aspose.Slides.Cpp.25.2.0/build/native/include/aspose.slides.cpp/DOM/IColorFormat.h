#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IFillParamSource.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class ColorStringFormat;
enum class ColorType;
class IColorOperation;
class IColorOperationCollection;
enum class PresetColor;
enum class SchemeColor;
enum class SystemColor;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a color used in a presentation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColorFormat : public Aspose::Slides::IFillParamSource
{
    typedef IColorFormat ThisType;
    typedef Aspose::Slides::IFillParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the color definition method.
    /// Read <see cref="Slides::ColorType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::ColorType get_ColorType() = 0;
    /// <summary>
    /// Sets the color definition method.
    /// Write <see cref="Slides::ColorType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ColorType(Aspose::Slides::ColorType value) = 0;
    /// <summary>
    /// Returns resulting color (with all color transformations applied).
    /// Sets RGB colors and clears all color transformations.
    /// Read <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_Color() = 0;
    /// <summary>
    /// Returns resulting color (with all color transformations applied).
    /// Sets RGB colors and clears all color transformations.
    /// Write <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Color(System::Drawing::Color value) = 0;
    /// <summary>
    /// Returns the color preset.
    /// Read <see cref="Slides::PresetColor"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::PresetColor get_PresetColor() = 0;
    /// <summary>
    /// Sets the color preset.
    /// Write <see cref="Slides::PresetColor"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PresetColor(Aspose::Slides::PresetColor value) = 0;
    /// <summary>
    /// Returns the color identified by the system color table.
    /// Read <see cref="Slides::SystemColor"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::SystemColor get_SystemColor() = 0;
    /// <summary>
    /// Sets the color identified by the system color table.
    /// Write <see cref="Slides::SystemColor"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SystemColor(Aspose::Slides::SystemColor value) = 0;
    /// <summary>
    /// Returns the color identified by a color scheme.
    /// Read <see cref="Slides::SchemeColor"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::SchemeColor get_SchemeColor() = 0;
    /// <summary>
    /// Sets the color identified by a color scheme.
    /// Write <see cref="Slides::SchemeColor"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SchemeColor(Aspose::Slides::SchemeColor value) = 0;
    /// <summary>
    /// Returns the red component of a color. All color transformations are ignored.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_R() = 0;
    /// <summary>
    /// Sets the red component of a color. All color transformations are ignored.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_R(uint8_t value) = 0;
    /// <summary>
    /// Returns the green component of a color. All color transformations are ignored.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_G() = 0;
    /// <summary>
    /// Sets the green component of a color. All color transformations are ignored.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_G(uint8_t value) = 0;
    /// <summary>
    /// Returns the blue component of a color. All color transformations are ignored.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_B() = 0;
    /// <summary>
    /// Sets the blue component of a color. All color transformations are ignored.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_B(uint8_t value) = 0;
    /// <summary>
    /// Returns the red component of a color. All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_FloatR() = 0;
    /// <summary>
    /// Sets the red component of a color. All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FloatR(float value) = 0;
    /// <summary>
    /// Returns the green component of a color. All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_FloatG() = 0;
    /// <summary>
    /// Sets the green component of a color. All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FloatG(float value) = 0;
    /// <summary>
    /// Returns the blue component of a color. All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_FloatB() = 0;
    /// <summary>
    /// Sets the blue component of a color. All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FloatB(float value) = 0;
    /// <summary>
    /// Returns the hue component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Hue() = 0;
    /// <summary>
    /// Sets the hue component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Hue(float value) = 0;
    /// <summary>
    /// Returns the saturation component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Saturation() = 0;
    /// <summary>
    /// Sets the saturation component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Saturation(float value) = 0;
    /// <summary>
    /// Returns the luminance component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Luminance() = 0;
    /// <summary>
    /// Sets the luminance component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Luminance(float value) = 0;
    /// <summary>
    /// Returns the collection of color transformations applied to a color.
    /// Read-only <see cref="Aspose::Slides::IColorOperationCollection">IColorOperationCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorOperationCollection> get_ColorTransform() = 0;
    
    /// <summary>
    /// Returns a <see cref="System::String"></see> that represents the current color format.
    /// </summary>
    /// <param name="format">A type of color string format.</param>
    /// <returns>A string that represents the current color format.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String ToString(ColorStringFormat format) = 0;
    /// <summary>
    /// Copy color format from "color".
    /// </summary>
    /// <param name="color">Color <see cref="Aspose::Slides::IColorFormat">IColorFormat</see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void CopyFrom(System::SharedPtr<IColorFormat> color) = 0;
    /// <summary>
    /// Returns color transformation operation applied to color at the specified index.
    /// Read/write <see cref="Aspose::Slides::IColorOperation"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorOperation> get_ColorOperation(int32_t index) = 0;
    /// <summary>
    /// Set color transformation operation applied to color at the specified index.
    /// Read/write <see cref="Aspose::Slides::IColorOperation"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ColorOperation(int32_t index, System::SharedPtr<IColorOperation> value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


