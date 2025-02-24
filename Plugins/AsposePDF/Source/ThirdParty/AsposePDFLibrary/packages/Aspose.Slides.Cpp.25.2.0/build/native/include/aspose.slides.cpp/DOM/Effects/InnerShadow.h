#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/Effects/IInnerShadow.h>

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
class IInnerShadowEffectiveData;
class InnerShadowEffectiveData;
} // namespace Effects
class IColorFormat;
class IDOMObject;
class IPresentationComponent;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Inner Shadow effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS InnerShadow final : public Aspose::Slides::Effects::IInnerShadow, public Aspose::Slides::Effects::IVisualEffect, public Aspose::Slides::IPVIObject
{
    typedef InnerShadow ThisType;
    typedef Aspose::Slides::Effects::IInnerShadow BaseType;
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
    /// Blur radius.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_BlurRadius() override;
    /// <summary>
    /// Blur radius.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BlurRadius(double value) override;
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
    /// Gets effective Inner Shadow effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::IInnerShadowEffectiveData">IInnerShadowEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IInnerShadowEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::InnerShadow">InnerShadow</see> is equal to the current <see cref="Aspose::Slides::Effects::InnerShadow">InnerShadow</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::InnerShadow">InnerShadow</see> to compare.</param>
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
    
    ASPOSE_SLIDES_LOCAL_API InnerShadow(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(InnerShadow, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<InnerShadowEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<InnerShadow> Clone();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~InnerShadow();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    double m_blurRad;
    float m_dir;
    double m_dist;
    System::SharedPtr<ColorFormat> m_colorFormat;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    uint32_t m_version;
    System::SharedPtr<InnerShadowEffectiveData> m_effective;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnEffectChanged();
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


