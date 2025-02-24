#pragma once

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IAlphaBiLevel;
class IAlphaCeiling;
class IAlphaFloor;
class IAlphaInverse;
class IAlphaModulate;
class IAlphaModulateFixed;
class IAlphaReplace;
class IBiLevel;
class IBlur;
class IColorChange;
class IColorReplace;
class IDuotone;
class IFillOverlay;
class IGrayScale;
class IHSL;
class ILuminance;
class ITint;
} // namespace Effects
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Allows to create image effects' instances
/// </summary>
/// <remarks>
/// For COM interface.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IImageTransformOperationFactory : public virtual System::Object
{
    typedef IImageTransformOperationFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates Alpha BiLevel effect.
    /// </summary>
    /// <param name="threshold">Threshold.</param>
    /// <returns>Alpha BiLevel effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaBiLevel> CreateAlphaBiLevel(float threshold) = 0;
    /// <summary>
    /// Creates Alpha Ceiling effect.
    /// </summary>
    /// <returns>Alpha Ceiling effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaCeiling> CreateAlphCeiling() = 0;
    /// <summary>
    /// Creates Alpha floor effect.
    /// </summary>
    /// <returns>Alpha floor effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaFloor> CreateAlphaFloor() = 0;
    /// <summary>
    /// Creates Alpha inverse effect.
    /// </summary>
    /// <returns>Alpha inverst effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaInverse> CreateAlphaInverse() = 0;
    /// <summary>
    /// Creates Alpha modulate effect.
    /// </summary>
    /// <returns>Alpha modulate effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaModulate> CreateAlphaModulate() = 0;
    /// <summary>
    /// Creates Alpha modulate fixed effect.
    /// </summary>
    /// <param name="amount">Amount.</param>
    /// <returns>Alpha modulate fixed effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaModulateFixed> CreateAlphaModulateFixed(float amount) = 0;
    /// <summary>
    /// Creates Alpha replace effect.
    /// </summary>
    /// <param name="alpha">Alpha</param>
    /// <returns>Alpha replace effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaReplace> CreateAlphaReplace(float alpha) = 0;
    /// <summary>
    /// Creates BiLevel effect.
    /// </summary>
    /// <param name="threshold">Threshold.</param>
    /// <returns>BiLevel effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBiLevel> CreateBiLevel(float threshold) = 0;
    /// <summary>
    /// Creates Blur effect.
    /// </summary>
    /// <param name="radius">Radius.</param>
    /// <param name="grow">Grow.</param>
    /// <returns>Blur effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBlur> CreateBlur(double radius, bool grow) = 0;
    /// <summary>
    /// Creates Color change effect.
    /// </summary>
    /// <returns>Color change effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorChange> CreateColorChange() = 0;
    /// <summary>
    /// Creates Color replace effect.
    /// </summary>
    /// <returns>Color replace effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorReplace> CreateColorReplace() = 0;
    /// <summary>
    /// Creates Duotone effect.
    /// </summary>
    /// <returns>Duotone effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDuotone> CreateDuotone() = 0;
    /// <summary>
    /// Creates Fill overlay effect.
    /// </summary>
    /// <returns>Fill overlay effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillOverlay> CreateFillOverlay() = 0;
    /// <summary>
    /// Creates Gray scale effect.
    /// </summary>
    /// <returns>Returns gray scale effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGrayScale> CreateGrayScale() = 0;
    /// <summary>
    /// Creates Hue Saturation Luminance effect.
    /// </summary>
    /// <param name="hue">Hue.</param>
    /// <param name="saturation">Saturation.</param>
    /// <param name="luminance">Luminance.</param>
    /// <returns>HSL effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHSL> CreateHSL(float hue, float saturation, float luminance) = 0;
    /// <summary>
    /// Createtes Luminance effect.
    /// </summary>
    /// <param name="brightness">Brightness.</param>
    /// <param name="contrast">Contrast.</param>
    /// <returns>Luminance effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILuminance> CreateLuminance(float brightness, float contrast) = 0;
    /// <summary>
    /// Creates Tint effect.
    /// </summary>
    /// <param name="hue">Hue.</param>
    /// <param name="amount">Amount.</param>
    /// <returns>Tint effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITint> CreateTint(float hue, float amount) = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


