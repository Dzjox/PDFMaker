#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Effects/IEffectFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IGlow;
class IImageTransformOperationFactory;
class IInnerShadow;
class ImageTransformOperationFactory;
class IOuterShadow;
class IPresetShadow;
class IReflection;
class ISoftEdge;
} // namespace Effects
class PictureImpl;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Allows to create effects
/// </summary>
/// <remarks>
/// For COM compatibility.
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS EffectFactory : public Aspose::Slides::Effects::IEffectFactory
{
    typedef EffectFactory ThisType;
    typedef Aspose::Slides::Effects::IEffectFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PictureImpl;
    /// @endcond
    
public:

    /// <summary>
    /// Returns ImageTransformOperationFactory.
    /// Read-only <see cref="Aspose::Slides::Effects::IImageTransformOperationFactory">IImageTransformOperationFactory</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImageTransformOperationFactory> get_ImageTransformOperationFactory() override;
    
    /// <summary>
    /// Creates Glow effect.
    /// </summary>
    /// <returns>Glow effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGlow> CreateGlow() override;
    /// <summary>
    /// Creates Inner shafow effect.
    /// </summary>
    /// <returns>Inner shafow effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IInnerShadow> CreateInnerShadow() override;
    /// <summary>
    /// Creates Outer shadow effect.
    /// </summary>
    /// <returns>Outer shadow effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IOuterShadow> CreateOuterShadow() override;
    /// <summary>
    /// Creates Preset shadow effect.
    /// </summary>
    /// <returns>Preset shadow effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresetShadow> CreatePresetShadow() override;
    /// <summary>
    /// Creates Reflection effect.
    /// </summary>
    /// <returns>Reflection effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IReflection> CreateReflection() override;
    /// <summary>
    /// Creates Soft Edge effect.
    /// </summary>
    /// <returns>Soft Edge effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISoftEdge> CreateSoftEdge() override;
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Effects::ImageTransformOperationFactory> get_ImageTransformOperationFactoryInternal();
    /// @endcond
    
private:

    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Effects::ImageTransformOperationFactory> m_imageTransformOperationFactory;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


