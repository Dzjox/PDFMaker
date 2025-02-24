#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/Effects/IReflection.h>

#include "DOM/PVI/IPVIObject.h"
#include "DOM/Effects/IVisualEffect.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Drawing
{
class Canvas;
} // namespace Drawing
class EffectFormat;
class EffectFormatImpl;
namespace Effects
{
class EffectFactory;
class IEffectEffectiveData;
class IReflectionEffectiveData;
class ReflectionEffectiveData;
} // namespace Effects
class FillParam;
class IDOMObject;
class IPresentationComponent;
class LineParam;
enum class RectangleAlignment : int8_t;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Bitmap;
namespace Drawing2D
{
class GraphicsPath;
} // namespace Drawing2D
class RectangleF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Reflection effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Reflection final : public Aspose::Slides::Effects::IReflection, public Aspose::Slides::Effects::IVisualEffect, public Aspose::Slides::IPVIObject
{
    typedef Reflection ThisType;
    typedef Aspose::Slides::Effects::IReflection BaseType;
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
    /// Specifies the start position (along the alpha gradient ramp) of the start alpha value (percents).
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_StartPosAlpha() override;
    /// <summary>
    /// Specifies the start position (along the alpha gradient ramp) of the start alpha value (percents).
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StartPosAlpha(float value) override;
    /// <summary>
    /// Specifies the end position (along the alpha gradient ramp) of the end alpha value (percents).
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_EndPosAlpha() override;
    /// <summary>
    /// Specifies the end position (along the alpha gradient ramp) of the end alpha value (percents).
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EndPosAlpha(float value) override;
    /// <summary>
    /// Specifies the direction to offset the reflection. (angle).
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_FadeDirection() override;
    /// <summary>
    /// Specifies the direction to offset the reflection. (angle).
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FadeDirection(float value) override;
    /// <summary>
    /// Starting reflection opacity. (percents).
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_StartReflectionOpacity() override;
    /// <summary>
    /// Starting reflection opacity. (percents).
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StartReflectionOpacity(float value) override;
    /// <summary>
    /// End reflection opacity. (percents).
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_EndReflectionOpacity() override;
    /// <summary>
    /// End reflection opacity. (percents).
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EndReflectionOpacity(float value) override;
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
    /// Direction of reflection.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Direction() override;
    /// <summary>
    /// Direction of reflection.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Direction(float value) override;
    /// <summary>
    /// Distance of reflection.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Distance() override;
    /// <summary>
    /// Distance of reflection.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Distance(double value) override;
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
    /// Specifies the horizontal skew angle.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_SkewHorizontal() override;
    /// <summary>
    /// Specifies the horizontal skew angle.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SkewHorizontal(double value) override;
    /// <summary>
    /// Specifies the vertical skew angle.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_SkewVertical() override;
    /// <summary>
    /// Specifies the vertical skew angle.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SkewVertical(double value) override;
    /// <summary>
    /// Specifies whether the reflection should rotate with the shape if the shape is rotated.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_RotateShadowWithShape() override;
    /// <summary>
    /// Specifies whether the reflection should rotate with the shape if the shape is rotated.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RotateShadowWithShape(bool value) override;
    /// <summary>
    /// Specifies the horizontal scaling factor, negative scaling causes a flip. (percents)
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_ScaleHorizontal() override;
    /// <summary>
    /// Specifies the horizontal scaling factor, negative scaling causes a flip. (percents)
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ScaleHorizontal(double value) override;
    /// <summary>
    /// Specifies the vertical scaling factor, negative scaling causes a flip. (percents)
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_ScaleVertical() override;
    /// <summary>
    /// Specifies the vertical scaling factor, negative scaling causes a flip. (percents)
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ScaleVertical(double value) override;
    
    /// <summary>
    /// Gets effective Reflection effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::IReflectionEffectiveData">IReflectionEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IReflectionEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::Reflection">Reflection</see> is equal to the current <see cref="Aspose::Slides::Effects::Reflection">Reflection</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::Reflection">Reflection</see> to compare.</param>
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
    
    ASPOSE_SLIDES_LOCAL_API Reflection(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Reflection, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ReflectionEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API void Apply(System::SharedPtr<Aspose::Slides::Drawing::Canvas> canvas, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> graphicsPath, System::SharedPtr<FillParam> fp, System::SharedPtr<LineParam> lp, System::Drawing::RectangleF rect);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Reflection> Clone();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Reflection();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    RectangleAlignment m_algn;
    double m_blurRad;
    float m_dir;
    double m_dist;
    float m_stPos;
    float m_endPos;
    float m_fadeDir;
    float m_stA;
    float m_endA;
    double m_kx;
    double m_ky;
    bool m_rotWithShape;
    double m_sx;
    double m_sy;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    uint32_t m_version;
    System::SharedPtr<ReflectionEffectiveData> m_effective;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnEffectChanged();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> MakeTransparent(System::SharedPtr<System::Drawing::Bitmap> bmp, System::SharedPtr<Reflection> reflection);
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


