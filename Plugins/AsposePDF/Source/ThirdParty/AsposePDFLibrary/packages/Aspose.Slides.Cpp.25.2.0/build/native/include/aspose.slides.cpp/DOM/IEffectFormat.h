#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IEffectParamSource.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IBlur;
class IFillOverlay;
class IGlow;
class IInnerShadow;
class IOuterShadow;
class IPresetShadow;
class IReflection;
class ISoftEdge;
} // namespace Effects
class IEffectFormatEffectiveData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents effect properties of shape.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IEffectFormat : public Aspose::Slides::IEffectParamSource
{
    typedef IEffectFormat ThisType;
    typedef Aspose::Slides::IEffectParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns true if all effects are disabled (as just created, default EffectFormat object).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsNoEffects() = 0;
    /// <summary>
    /// Blur effect.
    /// Read <see cref="Aspose::Slides::Effects::IBlur">Effects::IBlur</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IBlur> get_BlurEffect() = 0;
    /// <summary>
    /// Blur effect.
    /// Write <see cref="Aspose::Slides::Effects::IBlur">Effects::IBlur</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BlurEffect(System::SharedPtr<Effects::IBlur> value) = 0;
    /// <summary>
    /// Fill overlay effect.
    /// Read <see cref="Aspose::Slides::Effects::IFillOverlay">Effects::IFillOverlay</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IFillOverlay> get_FillOverlayEffect() = 0;
    /// <summary>
    /// Fill overlay effect.
    /// Write <see cref="Aspose::Slides::Effects::IFillOverlay">Effects::IFillOverlay</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FillOverlayEffect(System::SharedPtr<Effects::IFillOverlay> value) = 0;
    /// <summary>
    /// Glow effect.
    /// Read <see cref="Aspose::Slides::Effects::IGlow">Effects::IGlow</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IGlow> get_GlowEffect() = 0;
    /// <summary>
    /// Glow effect.
    /// Write <see cref="Aspose::Slides::Effects::IGlow">Effects::IGlow</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_GlowEffect(System::SharedPtr<Effects::IGlow> value) = 0;
    /// <summary>
    /// Inner shadow.
    /// Read <see cref="Aspose::Slides::Effects::IInnerShadow">Effects::IInnerShadow</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IInnerShadow> get_InnerShadowEffect() = 0;
    /// <summary>
    /// Inner shadow.
    /// Write <see cref="Aspose::Slides::Effects::IInnerShadow">Effects::IInnerShadow</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_InnerShadowEffect(System::SharedPtr<Effects::IInnerShadow> value) = 0;
    /// <summary>
    /// Outer shadow.
    /// Read <see cref="Aspose::Slides::Effects::IOuterShadow">Effects::IOuterShadow</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IOuterShadow> get_OuterShadowEffect() = 0;
    /// <summary>
    /// Outer shadow.
    /// Write <see cref="Aspose::Slides::Effects::IOuterShadow">Effects::IOuterShadow</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_OuterShadowEffect(System::SharedPtr<Effects::IOuterShadow> value) = 0;
    /// <summary>
    /// Preset shadow.
    /// Read <see cref="Aspose::Slides::Effects::IPresetShadow">Effects::IPresetShadow</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IPresetShadow> get_PresetShadowEffect() = 0;
    /// <summary>
    /// Preset shadow.
    /// Write <see cref="Aspose::Slides::Effects::IPresetShadow">Effects::IPresetShadow</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PresetShadowEffect(System::SharedPtr<Effects::IPresetShadow> value) = 0;
    /// <summary>
    /// Reflection. 
    /// Read <see cref="Aspose::Slides::Effects::IReflection">Effects::IReflection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IReflection> get_ReflectionEffect() = 0;
    /// <summary>
    /// Reflection. 
    /// Write <see cref="Aspose::Slides::Effects::IReflection">Effects::IReflection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ReflectionEffect(System::SharedPtr<Effects::IReflection> value) = 0;
    /// <summary>
    /// Soft edge.
    /// Read <see cref="Aspose::Slides::Effects::ISoftEdge">Effects::ISoftEdge</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::ISoftEdge> get_SoftEdgeEffect() = 0;
    /// <summary>
    /// Soft edge.
    /// Write <see cref="Aspose::Slides::Effects::ISoftEdge">Effects::ISoftEdge</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SoftEdgeEffect(System::SharedPtr<Effects::ISoftEdge> value) = 0;
    
    /// <summary>
    /// Sets blur effect.
    /// </summary>
    /// <param name="radius">Radius.</param>
    /// <param name="grow">Grow.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetBlurEffect(double radius, bool grow) = 0;
    /// <summary>
    /// Enables fill overlay effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void EnableFillOverlayEffect() = 0;
    /// <summary>
    /// Enables glow effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void EnableGlowEffect() = 0;
    /// <summary>
    /// Enables inner shadow effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void EnableInnerShadowEffect() = 0;
    /// <summary>
    /// Enables outer shadow effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void EnableOuterShadowEffect() = 0;
    /// <summary>
    /// Enables preset shadows effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void EnablePresetShadowEffect() = 0;
    /// <summary>
    /// Enables reflection effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void EnableReflectionEffect() = 0;
    /// <summary>
    /// Enables soft edge effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void EnableSoftEdgeEffect() = 0;
    /// <summary>
    /// Disables blur effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void DisableBlurEffect() = 0;
    /// <summary>
    /// Disables fill overlay effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void DisableFillOverlayEffect() = 0;
    /// <summary>
    /// Disable glow effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void DisableGlowEffect() = 0;
    /// <summary>
    /// Disables inner shadow effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void DisableInnerShadowEffect() = 0;
    /// <summary>
    /// Disables outer shadow effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void DisableOuterShadowEffect() = 0;
    /// <summary>
    /// Disables preset shadow effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void DisablePresetShadowEffect() = 0;
    /// <summary>
    /// Disables reflection effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void DisableReflectionEffect() = 0;
    /// <summary>
    /// Disables soft edge effect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void DisableSoftEdgeEffect() = 0;
    /// <summary>
    /// Gets effective effect formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IEffectFormatEffectiveData">IEffectFormatEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectFormatEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


