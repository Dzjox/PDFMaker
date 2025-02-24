#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Effects/IImageTransformOperationFactory.h>

#include "aspose_slides_api_defs.h"

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
class IEffectEffectiveData;
class IFillOverlay;
class IGrayScale;
class IHSL;
class IImageTransformOperation;
class ILuminance;
class ITint;
} // namespace Effects
class PictureImpl;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Allows to create image transform operations
/// </summary>
/// <remarks>
/// For COM compatibility.
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS ImageTransformOperationFactory : public Aspose::Slides::Effects::IImageTransformOperationFactory
{
    typedef ImageTransformOperationFactory ThisType;
    typedef Aspose::Slides::Effects::IImageTransformOperationFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PictureImpl;
    /// @endcond
    
public:

    /// <summary>
    /// Creates Alpha BiLevel effect.
    /// </summary>
    /// <param name="threshold">Threshold.</param>
    /// <returns>Alpha BiLevel effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaBiLevel> CreateAlphaBiLevel(float threshold) override;
    /// <summary>
    /// Creates Alpha Ceiling effect.
    /// </summary>
    /// <returns>Alpha Ceiling effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaCeiling> CreateAlphCeiling() override;
    /// <summary>
    /// Creates Alpha floor effect.
    /// </summary>
    /// <returns>Alpha floor effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaFloor> CreateAlphaFloor() override;
    /// <summary>
    /// Creates Alpha inverse effect.
    /// </summary>
    /// <returns>Alpha inverst effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaInverse> CreateAlphaInverse() override;
    /// <summary>
    /// Creates Alpha modulate effect.
    /// </summary>
    /// <returns>Alpha modulate effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaModulate> CreateAlphaModulate() override;
    /// <summary>
    /// Creates Alpha modulate fixed effect.
    /// </summary>
    /// <param name="amount">Amount.</param>
    /// <returns>Alpha modulate fixed effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaModulateFixed> CreateAlphaModulateFixed(float amount) override;
    /// <summary>
    /// Creates Alpha replace effect.
    /// </summary>
    /// <param name="alpha">Alpha</param>
    /// <returns>Alpha replace effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaReplace> CreateAlphaReplace(float alpha) override;
    /// <summary>
    /// Creates BiLevel effect.
    /// </summary>
    /// <param name="threshold">Threshold.</param>
    /// <returns>BiLevel effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBiLevel> CreateBiLevel(float threshold) override;
    /// <summary>
    /// Creates Blur effect.
    /// </summary>
    /// <param name="radius">Radius.</param>
    /// <param name="grow">Grow.</param>
    /// <returns>Blur effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBlur> CreateBlur(double radius, bool grow) override;
    /// <summary>
    /// Creates Color change effect.
    /// </summary>
    /// <returns>Color change effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorChange> CreateColorChange() override;
    /// <summary>
    /// Creates Color replace effect.
    /// </summary>
    /// <returns>Color replace effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorReplace> CreateColorReplace() override;
    /// <summary>
    /// Creates Duotone effect.
    /// </summary>
    /// <returns>Duotone effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDuotone> CreateDuotone() override;
    /// <summary>
    /// Creates Fill overlay effect.
    /// </summary>
    /// <returns>Fill overlay effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillOverlay> CreateFillOverlay() override;
    /// <summary>
    /// Creates Gray scale effect.
    /// </summary>
    /// <returns>Returns gray scale effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGrayScale> CreateGrayScale() override;
    /// <summary>
    /// Creates Hue Saturation Luminance effect.
    /// </summary>
    /// <param name="hue">Hue.</param>
    /// <param name="saturation">Saturation.</param>
    /// <param name="luminance">Luminance.</param>
    /// <returns>HSL effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHSL> CreateHSL(float hue, float saturation, float luminance) override;
    /// <summary>
    /// Createtes Luminance effect.
    /// </summary>
    /// <param name="brightness">Brightness.</param>
    /// <param name="contrast">Contrast.</param>
    /// <returns>Luminance effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILuminance> CreateLuminance(float brightness, float contrast) override;
    /// <summary>
    /// Creates Tint effect.
    /// </summary>
    /// <param name="hue">Hue.</param>
    /// <param name="amount">Amount.</param>
    /// <returns>Tint effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITint> CreateTint(float hue, float amount) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IImageTransformOperation> CreateOperationFromEffective(System::SharedPtr<IEffectEffectiveData> source);
    /// @endcond
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


