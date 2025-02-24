#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <system/array.h>
#include <DOM/Effects/IGlow.h>

#include "DOM/PVI/IPVIObject.h"
#include "DOM/Effects/IVisualEffect.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlide;
class ColorFormat;
namespace Drawing
{
class Canvas;
} // namespace Drawing
class EffectFormat;
class EffectFormatImpl;
namespace Effects
{
class EffectFactory;
class GlowEffectiveData;
class IEffectEffectiveData;
class IGlowEffectiveData;
} // namespace Effects
class FillParam;
class IColorFormat;
class IDOMObject;
class IPresentationComponent;
class LineParam;
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
/// Represents a Glow effect, in which a color blurred outline 
/// is added outside the edges of the object.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Glow final : public Aspose::Slides::Effects::IGlow, public Aspose::Slides::Effects::IVisualEffect, public Aspose::Slides::IPVIObject
{
    typedef Glow ThisType;
    typedef Aspose::Slides::Effects::IGlow BaseType;
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
    /// Radius.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Radius() override;
    /// <summary>
    /// Radius.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Radius(double value) override;
    /// <summary>
    /// Color format.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Color() override;
    
    /// <summary>
    /// Gets effective Glow effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::IGlowEffectiveData">IGlowEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGlowEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::Glow">Glow</see> is equal to the current <see cref="Aspose::Slides::Effects::Glow">Glow</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::Glow">Glow</see> to compare.</param>
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
    
    ASPOSE_SLIDES_LOCAL_API Glow(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Glow, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GlowEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API void Apply(System::SharedPtr<Aspose::Slides::Drawing::Canvas> canvas, System::SharedPtr<BaseSlide> slide, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> graphicsPath, System::SharedPtr<FillParam> fp, System::SharedPtr<LineParam> lp, System::Drawing::RectangleF rect);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Glow> Clone();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Glow();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    double m_radius;
    System::SharedPtr<ColorFormat> m_colorFormat;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    uint32_t m_version;
    System::SharedPtr<GlowEffectiveData> m_effective;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnEffectChanged();
    ASPOSE_SLIDES_LOCAL_API float gauss(float s, float x);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<float> MakeConvMatrix();
    ASPOSE_SLIDES_LOCAL_API uint8_t CalcConvValV(System::ArrayPtr<float> convM, System::ArrayPtr<uint8_t> m, int32_t i, int32_t h, int32_t w);
    ASPOSE_SLIDES_LOCAL_API uint8_t CalcConvValH(System::ArrayPtr<float> convM, System::ArrayPtr<uint8_t> m, int32_t i, int32_t w);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> applyConvMatrix(System::ArrayPtr<float> convM, System::SharedPtr<System::Drawing::Bitmap> bmp);
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


