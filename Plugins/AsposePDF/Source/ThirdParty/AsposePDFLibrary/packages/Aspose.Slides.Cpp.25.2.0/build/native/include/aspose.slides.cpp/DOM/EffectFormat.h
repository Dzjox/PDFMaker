#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/IEffectFormat.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Background;
class BackgroundEffectiveData;
class BackgroundImpl;
class BasePortionFormat;
template <typename, typename> class BasePortionFormatEffectiveData;
class BasePortionFormatImpl;
namespace Charts
{
class AggregatedDataPoint;
class AxisFormat;
class ChartDataPointDefaultStyle;
class ChartLinesFormat;
class DataLabelTextBase;
class DataPointRenderContext;
class Format;
class FormatImpl;
} // namespace Charts
class EffectFormatEffectiveData;
class EffectFormatImpl;
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
class IDOMObject;
class IEffectFormatEffectiveData;
class MasterSlideTemplate;
class NotesTemplate;
class PortionFormatEffectiveData;
class PortionFormatImpl;
namespace PptSerialization
{
class EffectFormatPPTSerialization;
class GroupShapeMetroBlobSerialization;
class PptShapeSerializationContext;
class TextFormatPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class EffectFormatPPTXSerialization;
class ShapePPTXSerialization;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
class Shape;
class ShapeLayout;
class SlideTemplateCreator;
namespace SmartArt
{
class DiagramPoint;
} // namespace SmartArt
namespace Theme
{
class EffectStyle;
} // namespace Theme
class ThemeableEffectFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents effect properties of shape.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS EffectFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::IEffectFormat
{
    typedef EffectFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IEffectFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::BackgroundEffectiveData;
    template<typename FT0, typename FT1> friend class Aspose::Slides::BasePortionFormatEffectiveData;
    friend class Aspose::Slides::ShapeLayout;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::EffectFormatEffectiveData;
    friend class Aspose::Slides::PortionFormatEffectiveData;
    friend class Aspose::Slides::BackgroundImpl;
    friend class Aspose::Slides::Charts::AggregatedDataPoint;
    friend class Aspose::Slides::Charts::ChartDataPointDefaultStyle;
    friend class Aspose::Slides::BasePortionFormat;
    friend class Aspose::Slides::BasePortionFormatImpl;
    friend class Aspose::Slides::Charts::Format;
    friend class Aspose::Slides::EffectFormatImpl;
    friend class Aspose::Slides::PortionFormatImpl;
    friend class Aspose::Slides::Charts::AxisFormat;
    friend class Aspose::Slides::Charts::ChartLinesFormat;
    friend class Aspose::Slides::Charts::FormatImpl;
    friend class Aspose::Slides::ThemeableEffectFormat;
    friend class Aspose::Slides::Theme::EffectStyle;
    friend class Aspose::Slides::PptSerialization::PptShapeSerializationContext;
    friend class Aspose::Slides::PptSerialization::GroupShapeMetroBlobSerialization;
    friend class Aspose::Slides::Background;
    friend class Aspose::Slides::Charts::DataLabelTextBase;
    friend class Aspose::Slides::Charts::DataPointRenderContext;
    friend class Aspose::Slides::PptSerialization::TextFormatPPTSerialization;
    friend class Aspose::Slides::PptSerialization::EffectFormatPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::EffectFormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    friend class Aspose::Slides::NotesTemplate;
    friend class Aspose::Slides::MasterSlideTemplate;
    friend class Aspose::Slides::SlideTemplateCreator;
    /// @endcond
    
public:

    /// <summary>
    /// Returns true if all effects are disabled (as just created, default EffectFormat object).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsNoEffects() override;
    /// <summary>
    /// Blur effect.
    /// Read <see cref="Aspose::Slides::Effects::IBlur">Effects::IBlur</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Effects::IBlur> get_BlurEffect() override;
    /// <summary>
    /// Blur effect.
    /// Write <see cref="Aspose::Slides::Effects::IBlur">Effects::IBlur</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BlurEffect(System::SharedPtr<Effects::IBlur> value) override;
    /// <summary>
    /// Fill overlay effect.
    /// Read <see cref="Aspose::Slides::Effects::IFillOverlay">Effects::IFillOverlay</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Effects::IFillOverlay> get_FillOverlayEffect() override;
    /// <summary>
    /// Fill overlay effect.
    /// Write <see cref="Aspose::Slides::Effects::IFillOverlay">Effects::IFillOverlay</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FillOverlayEffect(System::SharedPtr<Effects::IFillOverlay> value) override;
    /// <summary>
    /// Glow effect.
    /// Read <see cref="Aspose::Slides::Effects::IGlow">Effects::IGlow</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Effects::IGlow> get_GlowEffect() override;
    /// <summary>
    /// Glow effect.
    /// Write <see cref="Aspose::Slides::Effects::IGlow">Effects::IGlow</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_GlowEffect(System::SharedPtr<Effects::IGlow> value) override;
    /// <summary>
    /// Inner shadow.
    /// Read <see cref="Aspose::Slides::Effects::IInnerShadow">Effects::IInnerShadow</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Effects::IInnerShadow> get_InnerShadowEffect() override;
    /// <summary>
    /// Inner shadow.
    /// Write <see cref="Aspose::Slides::Effects::IInnerShadow">Effects::IInnerShadow</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_InnerShadowEffect(System::SharedPtr<Effects::IInnerShadow> value) override;
    /// <summary>
    /// Outer shadow.
    /// Read <see cref="Aspose::Slides::Effects::IOuterShadow">Effects::IOuterShadow</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Effects::IOuterShadow> get_OuterShadowEffect() override;
    /// <summary>
    /// Outer shadow.
    /// Write <see cref="Aspose::Slides::Effects::IOuterShadow">Effects::IOuterShadow</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_OuterShadowEffect(System::SharedPtr<Effects::IOuterShadow> value) override;
    /// <summary>
    /// Preset shadow.
    /// Read <see cref="Aspose::Slides::Effects::IPresetShadow">Effects::IPresetShadow</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Effects::IPresetShadow> get_PresetShadowEffect() override;
    /// <summary>
    /// Preset shadow.
    /// Write <see cref="Aspose::Slides::Effects::IPresetShadow">Effects::IPresetShadow</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PresetShadowEffect(System::SharedPtr<Effects::IPresetShadow> value) override;
    /// <summary>
    /// Reflection. 
    /// Read <see cref="Aspose::Slides::Effects::IReflection">Effects::IReflection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Effects::IReflection> get_ReflectionEffect() override;
    /// <summary>
    /// Reflection. 
    /// Write <see cref="Aspose::Slides::Effects::IReflection">Effects::IReflection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ReflectionEffect(System::SharedPtr<Effects::IReflection> value) override;
    /// <summary>
    /// Soft edge.
    /// Read <see cref="Aspose::Slides::Effects::ISoftEdge">Effects::ISoftEdge</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Effects::ISoftEdge> get_SoftEdgeEffect() override;
    /// <summary>
    /// Soft edge.
    /// Write <see cref="Aspose::Slides::Effects::ISoftEdge">Effects::ISoftEdge</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SoftEdgeEffect(System::SharedPtr<Effects::ISoftEdge> value) override;
    
    /// <summary>
    /// Sets blur effect.
    /// </summary>
    /// <param name="radius">Radius.</param>
    /// <param name="grow">Grow.</param>
    ASPOSE_SLIDES_SHARED_API void SetBlurEffect(double radius, bool grow) override;
    /// <summary>
    /// Enables fill overlay effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void EnableFillOverlayEffect() override;
    /// <summary>
    /// Enables glow effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void EnableGlowEffect() override;
    /// <summary>
    /// Enables inner shadow effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void EnableInnerShadowEffect() override;
    /// <summary>
    /// Enables outer shadow effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void EnableOuterShadowEffect() override;
    /// <summary>
    /// Enables preset shadows effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void EnablePresetShadowEffect() override;
    /// <summary>
    /// Enables reflection effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void EnableReflectionEffect() override;
    /// <summary>
    /// Enables soft edge effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void EnableSoftEdgeEffect() override;
    /// <summary>
    /// Disables blur effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void DisableBlurEffect() override;
    /// <summary>
    /// Disables fill overlay effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void DisableFillOverlayEffect() override;
    /// <summary>
    /// Disable glow effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void DisableGlowEffect() override;
    /// <summary>
    /// Disables inner shadow effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void DisableInnerShadowEffect() override;
    /// <summary>
    /// Disables outer shadow effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void DisableOuterShadowEffect() override;
    /// <summary>
    /// Disables preset shadow effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void DisablePresetShadowEffect() override;
    /// <summary>
    /// Disables reflection effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void DisableReflectionEffect() override;
    /// <summary>
    /// Disables soft edge effect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void DisableSoftEdgeEffect() override;
    /// <summary>
    /// Gets effective effect formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IEffectFormatEffectiveData">IEffectFormatEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates getting some of shape's effective effect properties.
    /// <code>
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto effectiveEffectFormat = pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)->get_EffectFormat()->GetEffective();
    /// 
    /// if (effectiveEffectFormat->get_IsNoEffects())
    /// {
    ///     Console::WriteLine(u"The shape has not effects applied.");
    /// }
    /// else
    /// {
    ///     if (effectiveEffectFormat->get_BlurEffect() != nullptr)
    ///     {
    ///         Console::WriteLine(String(u"Blur effect radius: ") + effectiveEffectFormat->get_BlurEffect()->get_Radius());
    ///     }
    ///     if (effectiveEffectFormat->get_FillOverlayEffect() != nullptr)
    ///     {
    ///         Console::WriteLine(String(u"Fill overlay effect fill type: ") + ObjectExt::ToString(effectiveEffectFormat->get_FillOverlayEffect()->get_FillFormat()->get_FillType()));
    ///     }
    ///     if (effectiveEffectFormat->get_GlowEffect() != nullptr)
    ///     {
    ///         Console::WriteLine(String(u"Glow effect color: ") + effectiveEffectFormat->get_GlowEffect()->get_Color());
    ///     }
    ///     if (effectiveEffectFormat->get_InnerShadowEffect() != nullptr)
    ///     {
    ///         Console::WriteLine(String(u"Inner shadow effect shadow color: ") + effectiveEffectFormat->get_InnerShadowEffect()->get_ShadowColor());
    ///     }
    ///     if (effectiveEffectFormat->get_OuterShadowEffect() != nullptr)
    ///     {
    ///         Console::WriteLine(String(u"Outer shadow effect shadow color: ") + effectiveEffectFormat->get_OuterShadowEffect()->get_ShadowColor());
    ///     }
    ///     if (effectiveEffectFormat->get_PresetShadowEffect() != nullptr)
    ///     {
    ///         Console::WriteLine(String(u"Preset shadow effect shadow color: ") + effectiveEffectFormat->get_PresetShadowEffect()->get_ShadowColor());
    ///     }
    ///     if (effectiveEffectFormat->get_ReflectionEffect() != nullptr)
    ///     {
    ///         Console::WriteLine(String(u"Reflection effect distance: ") + effectiveEffectFormat->get_ReflectionEffect()->get_Distance());
    ///     }
    ///     if (effectiveEffectFormat->get_SoftEdgeEffect() != nullptr)
    ///     {
    ///         Console::WriteLine(String(u"Soft edge effect radius: ") + effectiveEffectFormat->get_SoftEdgeEffect()->get_Radius());
    ///     }
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectFormatEffectiveData> GetEffective() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<EffectFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_IsExplicitlyDefined();
    
    System::Event<void()> EffectFormatChanged;
    
    ASPOSE_SLIDES_LOCAL_API EffectFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EffectFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IEffectFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IEffectFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API void SetExplicitlyEmpty();
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<EffectFormatEffectiveData> GetEffectiveInternal();
    static ASPOSE_SLIDES_LOCAL_API bool IsNotDefined(System::SharedPtr<EffectFormat> effect);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~EffectFormat();
    
private:

    System::SharedPtr<EffectFormatEffectiveData> m_effective;
    
    ASPOSE_SLIDES_LOCAL_API void OnEffectFormatChanged();
    
};

} // namespace Slides
} // namespace Aspose


