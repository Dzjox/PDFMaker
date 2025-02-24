#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/Effects/IPresetShadow.h>

#include "DOM/PVI/IPVIObject.h"
#include "DOM/Effects/IVisualEffect.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ColorFormat;
class EffectFormat;
class EffectFormatImpl;
namespace Effects
{
class EffectFactory;
class IEffectEffectiveData;
class IPresetShadowEffectiveData;
class PresetShadowEffectiveData;
} // namespace Effects
class IColorFormat;
class IDOMObject;
class IPresentationComponent;
enum class PresetShadowType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Preset Shadow effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PresetShadow final : public Aspose::Slides::Effects::IPresetShadow, public Aspose::Slides::Effects::IVisualEffect, public Aspose::Slides::IPVIObject
{
    typedef PresetShadow ThisType;
    typedef Aspose::Slides::Effects::IPresetShadow BaseType;
    typedef Aspose::Slides::Effects::IVisualEffect BaseType1;
    typedef Aspose::Slides::IPVIObject BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::EffectFormatImpl;
    friend class Aspose::Slides::EffectFormat;
    friend class Aspose::Slides::Effects::EffectFactory;
    /// @endcond
    
public:

    /// <summary>
    /// Direction of shadow.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Direction() override;
    /// <summary>
    /// Direction of shadow.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Direction(float value) override;
    /// <summary>
    /// Distance of shadow.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Distance() override;
    /// <summary>
    /// Distance of shadow.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Distance(double value) override;
    /// <summary>
    /// Color of shadow.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_ShadowColor() override;
    /// <summary>
    /// Preset.
    /// Read <see cref="PresetShadowType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API PresetShadowType get_Preset() override;
    /// <summary>
    /// Preset.
    /// Write <see cref="PresetShadowType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Preset(PresetShadowType value) override;
    
    /// <summary>
    /// Gets effective Preset Shadow effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::IPresetShadowEffectiveData">IPresetShadowEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresetShadowEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::PresetShadow">PresetShadow</see> is equal to the current <see cref="Aspose::Slides::Effects::PresetShadow">PresetShadow</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::PresetShadow">PresetShadow</see> to compare.</param>
    /// <returns>true if objects are equal; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type.
    /// </summary>
    /// <returns>A hash code for the current object.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version() override;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent() override;
    
    System::Event<void()> EffectChanged;
    
    ASPOSE_SLIDES_LOCAL_API PresetShadow(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PresetShadow, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PresetShadowEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PresetShadow> Clone();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~PresetShadow();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    float m_dir;
    double m_dist;
    System::SharedPtr<ColorFormat> m_colorFormat;
    PresetShadowType m_prst;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    uint32_t m_version;
    System::SharedPtr<PresetShadowEffectiveData> m_effective;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnEffectChanged();
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


