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
class IBlurEffectiveData;
class IFillOverlayEffectiveData;
class IGlowEffectiveData;
class IInnerShadowEffectiveData;
class IOuterShadowEffectiveData;
class IPresetShadowEffectiveData;
class IReflectionEffectiveData;
class ISoftEdgeEffectiveData;
} // namespace Effects
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Imutable object which contains effective effect formatting properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::IEffectFormat">IEffectFormat</see> interface to return effective formatting values with inheritance applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IEffectFormatEffectiveData : public Aspose::Slides::IEffectParamSource
{
    typedef IEffectFormatEffectiveData ThisType;
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
    /// Read-only <see cref="Aspose::Slides::Effects::IBlurEffectiveData">Effects::IBlurEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IBlurEffectiveData> get_BlurEffect() = 0;
    /// <summary>
    /// Fill overlay effect.
    /// Read-only <see cref="Aspose::Slides::Effects::IFillOverlayEffectiveData">Effects::IFillOverlayEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IFillOverlayEffectiveData> get_FillOverlayEffect() = 0;
    /// <summary>
    /// Glow effect.
    /// Read-only <see cref="Aspose::Slides::Effects::IGlowEffectiveData">Effects::IGlowEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IGlowEffectiveData> get_GlowEffect() = 0;
    /// <summary>
    /// Inner shadow.
    /// Read-only <see cref="Aspose::Slides::Effects::IInnerShadowEffectiveData">Effects::IInnerShadowEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IInnerShadowEffectiveData> get_InnerShadowEffect() = 0;
    /// <summary>
    /// Outer shadow.
    /// Read-only <see cref="Aspose::Slides::Effects::IOuterShadowEffectiveData">Effects::IOuterShadowEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IOuterShadowEffectiveData> get_OuterShadowEffect() = 0;
    /// <summary>
    /// Preset shadow.
    /// Read-only <see cref="Aspose::Slides::Effects::IPresetShadowEffectiveData">Effects::IPresetShadowEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IPresetShadowEffectiveData> get_PresetShadowEffect() = 0;
    /// <summary>
    /// Reflection. 
    /// Read-only <see cref="Aspose::Slides::Effects::IReflectionEffectiveData">Effects::IReflectionEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IReflectionEffectiveData> get_ReflectionEffect() = 0;
    /// <summary>
    /// Soft edge.
    /// Read-only <see cref="Aspose::Slides::Effects::ISoftEdgeEffectiveData">Effects::ISoftEdgeEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::ISoftEdgeEffectiveData> get_SoftEdgeEffect() = 0;
    
};

} // namespace Slides
} // namespace Aspose


