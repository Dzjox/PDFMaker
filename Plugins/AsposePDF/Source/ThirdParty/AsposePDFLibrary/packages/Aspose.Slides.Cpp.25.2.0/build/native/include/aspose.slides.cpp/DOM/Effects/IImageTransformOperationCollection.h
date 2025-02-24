#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/icollection.h>
#include <cstdint>

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
class IImageTransformOperation;
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
/// Represents a collection of effects apllied to an image.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IImageTransformOperationCollection : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Slides::Effects::IImageTransformOperation>>
{
    typedef IImageTransformOperationCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Slides::Effects::IImageTransformOperation>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns an <see cref="Aspose::Slides::Effects::IImageTransformOperation">IImageTransformOperation</see> from the collection by it's index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImageTransformOperation> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Removes an image effect from a collection at the specified index.
    /// </summary>
    /// <param name="index">Index of an image effect that should be deleted.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Adds the new Alpha Bi-Level effect to the end of a collection.
    /// </summary>
    /// <param name="threshold">The threshold value for the alpha bi-level effect.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaBiLevel> AddAlphaBiLevelEffect(float threshold) = 0;
    /// <summary>
    /// Adds the new Alpha Ceiling effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaCeiling> AddAlphaCeilingEffect() = 0;
    /// <summary>
    /// Adds the new Alpha Floor effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaFloor> AddAlphaFloorEffect() = 0;
    /// <summary>
    /// Adds the new Alpha Inverse effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaInverse> AddAlphaInverseEffect() = 0;
    /// <summary>
    /// Adds the new Alpha Modulate effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaModulate> AddAlphaModulateEffect() = 0;
    /// <summary>
    /// Adds the new Alpha Modulate Fixed effect to the end of a collection.
    /// </summary>
    /// <param name="amount">The percentage amount to scale the alpha.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaModulateFixed> AddAlphaModulateFixedEffect(float amount) = 0;
    /// <summary>
    /// Adds the new Alpha Replace effect to the end of a collection.
    /// </summary>
    /// <param name="alpha">The new opacity value.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAlphaReplace> AddAlphaReplaceEffect(float alpha) = 0;
    /// <summary>
    /// Adds the new Bi-Level (black/white) effect to the end of a collection.
    /// </summary>
    /// <param name="threshold">the luminance threshold for the Bi-Level effect.
    /// Values greater than or equal to the threshold are set to white.
    /// Values lesser than the threshold are set to black.
    /// </param>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBiLevel> AddBiLevelEffect(float threshold) = 0;
    /// <summary>
    /// Adds the new Blur effect to the end of a collection.
    /// </summary>
    /// <param name="radius">The radius of blur.</param>
    /// <param name="grow">
    /// Specifies whether the bounds of the object should be grown as a result of the blurring.
    /// True indicates the bounds are grown while false indicates that they are not.
    /// </param>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBlur> AddBlurEffect(double radius, bool grow) = 0;
    /// <summary>
    /// Adds the new Color Change effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorChange> AddColorChangeEffect() = 0;
    /// <summary>
    /// Adds the new Color Replacement effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorReplace> AddColorReplaceEffect() = 0;
    /// <summary>
    /// Adds the new Duotone effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDuotone> AddDuotoneEffect() = 0;
    /// <summary>
    /// Adds the new Fill Overlay effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillOverlay> AddFillOverlayEffect() = 0;
    /// <summary>
    /// Adds the new Gray Scale effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGrayScale> AddGrayScaleEffect() = 0;
    /// <summary>
    /// Adds the new Hue/Saturation/Luminance effect to the end of a collection.
    /// </summary>
    /// <param name="hue">The number of degrees by which the hue is adjusted.</param>
    /// <param name="saturation">The percentage by which the saturation is adjusted.</param>
    /// <param name="luminance">The percentage by which the luminance is adjusted.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHSL> AddHSLEffect(float hue, float saturation, float luminance) = 0;
    /// <summary>
    /// Adds the new Luminance effect to the end of a collection.
    /// </summary>
    /// <param name="brightness">The percent to change the brightness.</param>
    /// <param name="contrast">The percent to change the contrast.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILuminance> AddLuminanceEffect(float brightness, float contrast) = 0;
    /// <summary>
    /// Adds the new Tint effect to the end of a collection.
    /// </summary>
    /// <param name="hue">The hue towards which to tint.</param>
    /// <param name="amount">Specifies by how much the color value is shifted.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITint> AddTintEffect(float hue, float amount) = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


