#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/Effects/IOuterShadow.h>

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
class IOuterShadowEffectiveData;
class OuterShadowEffectiveData;
} // namespace Effects
class IColorFormat;
class IDOMObject;
class IPresentationComponent;
namespace PptSerialization
{
class TextFormatPPTSerialization;
} // namespace PptSerialization
enum class RectangleAlignment : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents an Outer Shadow effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS OuterShadow final : public Aspose::Slides::Effects::IOuterShadow, public Aspose::Slides::Effects::IVisualEffect, public Aspose::Slides::IPVIObject
{
    typedef OuterShadow ThisType;
    typedef Aspose::Slides::Effects::IOuterShadow BaseType;
    typedef Aspose::Slides::Effects::IVisualEffect BaseType1;
    typedef Aspose::Slides::IPVIObject BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::EffectFormatImpl;
    friend class Aspose::Slides::EffectFormat;
    friend class Aspose::Slides::PptSerialization::TextFormatPPTSerialization;
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
    /// Rectangle alignment.
    /// Read <see cref="RectangleAlignment"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API RectangleAlignment get_RectangleAlign() override;
    /// <summary>
    /// Rectangle alignment.
    /// Write <see cref="RectangleAlignment"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RectangleAlign(RectangleAlignment value) override;
    /// <summary>
    /// Specifies the horizontal skew angle (in degrees).
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_SkewHorizontal() override;
    /// <summary>
    /// Specifies the horizontal skew angle (in degrees).
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SkewHorizontal(double value) override;
    /// <summary>
    /// Specifies the vertical skew angle (in degrees).
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_SkewVertical() override;
    /// <summary>
    /// Specifies the vertical skew angle (in degrees).
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SkewVertical(double value) override;
    /// <summary>
    /// Specifies whether the shadow should rotate with the shape if the shape is rotated.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_RotateShadowWithShape() override;
    /// <summary>
    /// Specifies whether the shadow should rotate with the shape if the shape is rotated.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RotateShadowWithShape(bool value) override;
    /// <summary>
    /// Specifies the horizontal scaling factor, negative scaling causes a flip.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_ScaleHorizontal() override;
    /// <summary>
    /// Specifies the horizontal scaling factor, negative scaling causes a flip.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ScaleHorizontal(double value) override;
    /// <summary>
    /// Specifies the vertical scaling factor, negative scaling causes a flip.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_ScaleVertical() override;
    /// <summary>
    /// Specifies the vertical scaling factor, negative scaling causes a flip.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ScaleVertical(double value) override;
    
    /// <summary>
    /// Gets effective Outer Shadow effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::IOuterShadowEffectiveData">IOuterShadowEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IOuterShadowEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::OuterShadow">OuterShadow</see> is equal to the current <see cref="Aspose::Slides::Effects::OuterShadow">OuterShadow</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::OuterShadow">OuterShadow</see> to compare.</param>
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
    
    ASPOSE_SLIDES_LOCAL_API OuterShadow(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OuterShadow, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<OuterShadowEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<OuterShadow> Clone();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~OuterShadow();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<ColorFormat> m_colorFormat;
    RectangleAlignment m_algn;
    double m_blurRad;
    float m_dir;
    double m_dist;
    double m_kx;
    double m_ky;
    bool m_rotWithShape;
    double m_sx;
    double m_sy;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    uint32_t m_version;
    System::SharedPtr<OuterShadowEffectiveData> m_effective;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnEffectChanged();
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


