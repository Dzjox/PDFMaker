#pragma once
//Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <drawing/color.h>
#include <DOM/SystemColor.h>
#include <DOM/SchemeColor.h>
#include <DOM/PresetColor.h>
#include <DOM/IColorFormat.h>
#include <DOM/ColorType.h>

#include "DOM/PVI/MemoryAwareness/PVIProperty.h"
#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
template <typename, typename> class AccessibleEffectiveData;
namespace Animation
{
class ColorEffect;
class Effect;
} // namespace Animation
class Background;
class BackgroundImpl;
class BasePortionFormat;
class BasePortionFormatImpl;
class BulletFormat;
class BulletFormatEffectiveData;
class BulletFormatImpl;
namespace Charts
{
class ChartDefaultStyles;
class ChartSeries;
class RenderingHelper;
} // namespace Charts
class ColorEffectiveData;
class ColorFormatImpl;
class ColorOperation;
enum class ColorStringFormat;
namespace DOM
{
namespace Xlsx
{
namespace Charts
{
namespace Chart3DNew
{
namespace Surface3D
{
class SurfaceColorMap;
} // namespace Surface3D
} // namespace Chart3DNew
} // namespace Charts
} // namespace Xlsx
} // namespace DOM
class EffectFormatImpl;
namespace Effects
{
class AlphaInverse;
class ColorChange;
class ColorReplace;
class Duotone;
template <typename, typename> class EffectEffectiveData;
class Glow;
class HSL;
class InnerShadow;
class OuterShadow;
class PresetShadow;
class Tint;
} // namespace Effects
namespace Export
{
namespace FramesStream
{
namespace AnimationPlaying
{
namespace Players
{
class BaseColorEffectPlayer;
} // namespace Players
} // namespace AnimationPlaying
} // namespace FramesStream
} // namespace Export
class FillFormat;
class FillFormatImpl;
class FillParam;
class FloatColor;
class GradientFillParam;
class GradientFormatImpl;
class GradientStop;
class GradientStopImpl;
namespace HtmlIO
{
class TextPropertiesConverter;
} // namespace HtmlIO
class IBaseSlide;
class IColorOperation;
class IColorOperationCollection;
class IDOMObject;
class IPresentationComponent;
class ISlideComponent;
class IStyleColorOwner;
class LineFillFormat;
class LineFillFormatImpl;
class MasterThemeTemplate;
class ParagraphCollection;
class PatternFormat;
class PatternFormatImpl;
class PortionFormatImpl;
namespace PptSerialization
{
class ColorFormatPPTSerialization;
class FillFormatPPTSerialization;
class GradientFormatPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class ColorFormatPPTXSerialization;
class ImageDataVmlSerialization;
class p_CT_TLAnimVariantPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class ShapeStyle;
class SlideShowSettings;
namespace SmartArt
{
class LayoutTree;
} // namespace SmartArt
class SvgFillFormat;
class TableCellTextStyle;
class TextFrame;
class TextLayout;
namespace Theme
{
class ColorScheme;
class ThemeEffectiveData;
} // namespace Theme
class ThemeableEffectFormat;
class ThemeableFillFormat;
class ThemeableLineFormat;
class ThreeDFormat;
class ThreeDFormatImpl;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class ColorFormatPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a color used in a presentation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ColorFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::IColorFormat
{
    typedef ColorFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IColorFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::GradientFillParam;
    friend class Aspose::Slides::FillParam;
    friend class Aspose::Slides::SlideShowSettings;
    friend class Aspose::Slides::Export::FramesStream::AnimationPlaying::Players::BaseColorEffectPlayer;
    template<typename FT0, typename FT1> friend class Aspose::Slides::AccessibleEffectiveData;
    friend class Aspose::Slides::BulletFormatEffectiveData;
    template<typename FT0, typename FT1> friend class Aspose::Slides::Effects::EffectEffectiveData;
    friend class Aspose::Slides::SvgFillFormat;
    friend class Aspose::Slides::BackgroundImpl;
    friend class Aspose::Slides::Charts::ChartDefaultStyles;
    friend class Aspose::Slides::BasePortionFormat;
    friend class Aspose::Slides::BasePortionFormatImpl;
    friend class Aspose::Slides::BulletFormatImpl;
    friend class Aspose::Slides::ColorFormatImpl;
    friend class Aspose::Slides::EffectFormatImpl;
    friend class Aspose::Slides::FillFormatImpl;
    friend class Aspose::Slides::GradientFormatImpl;
    friend class Aspose::Slides::GradientStopImpl;
    friend class Aspose::Slides::LineFillFormat;
    friend class Aspose::Slides::PatternFormatImpl;
    friend class Aspose::Slides::PortionFormatImpl;
    friend class Aspose::Slides::Theme::ThemeEffectiveData;
    friend class Aspose::Slides::ThreeDFormatImpl;
    friend class Aspose::Slides::Charts::ChartSeries;
    friend class Aspose::Slides::HtmlIO::TextPropertiesConverter;
    friend class Aspose::Slides::ColorEffectiveData;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::TableCellTextStyle;
    friend class Aspose::Slides::ThemeableEffectFormat;
    friend class Aspose::Slides::ThemeableFillFormat;
    friend class Aspose::Slides::ThemeableLineFormat;
    friend class Aspose::Slides::Theme::ColorScheme;
    friend class Aspose::Slides::Effects::AlphaInverse;
    friend class Aspose::Slides::Effects::ColorChange;
    friend class Aspose::Slides::Effects::ColorReplace;
    friend class Aspose::Slides::Effects::Duotone;
    friend class Aspose::Slides::Effects::Glow;
    friend class Aspose::Slides::Effects::HSL;
    friend class Aspose::Slides::Effects::InnerShadow;
    friend class Aspose::Slides::Effects::OuterShadow;
    friend class Aspose::Slides::Effects::PresetShadow;
    friend class Aspose::Slides::Effects::Tint;
    friend class Aspose::Slides::PptxSerialization::PartParser::ImageDataVmlSerialization;
    friend class Aspose::Slides::Animation::ColorEffect;
    friend class Aspose::Slides::Animation::Effect;
    friend class Aspose::Slides::Background;
    friend class Aspose::Slides::ColorOperation;
    friend class Aspose::Slides::FillFormat;
    friend class Aspose::Slides::GradientStop;
    friend class Aspose::Slides::LineFillFormatImpl;
    friend class Aspose::Slides::ParagraphCollection;
    friend class Aspose::Slides::PatternFormat;
    friend class Aspose::Slides::ShapeStyle;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::ThreeDFormat;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Surface3D::SurfaceColorMap;
    friend class Aspose::Slides::Charts::RenderingHelper;
    friend class Aspose::Slides::SmartArt::LayoutTree;
    friend class Aspose::Slides::PptxSerialization::PartParser::ColorFormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::p_CT_TLAnimVariantPPTXSerialization;
    friend class Aspose::Slides::BulletFormat;
    friend class Aspose::Slides::PptSerialization::ColorFormatPPTSerialization;
    friend class Aspose::Slides::PptSerialization::FillFormatPPTSerialization;
    friend class Aspose::Slides::PptSerialization::GradientFormatPPTSerialization;
    friend class Aspose::Slides::MasterThemeTemplate;
    /// @endcond
    
public:
    using Aspose::Slides::PVIObject::ToString;
    
public:

    /// <summary>
    /// Returns the color definition method.
    /// Read <see cref="Slides::ColorType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::ColorType get_ColorType() override;
    /// <summary>
    /// Sets the color definition method.
    /// Write <see cref="Slides::ColorType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ColorType(Aspose::Slides::ColorType value) override;
    /// <summary>
    /// Returns resulting color (with all color transformations applied).
    /// Sets RGB colors and clears all color transformations.
    /// Read <see cref="System::Drawing::Color"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::Color get_Color() override;
    /// <summary>
    /// Returns resulting color (with all color transformations applied).
    /// Sets RGB colors and clears all color transformations.
    /// Write <see cref="System::Drawing::Color"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Color(System::Drawing::Color value) override;
    /// <summary>
    /// Returns the color preset.
    /// Read <see cref="Slides::PresetColor"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::PresetColor get_PresetColor() override;
    /// <summary>
    /// Sets the color preset.
    /// Write <see cref="Slides::PresetColor"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PresetColor(Aspose::Slides::PresetColor value) override;
    /// <summary>
    /// Returns the color identified by the system color table.
    /// Read <see cref="Slides::SystemColor"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::SystemColor get_SystemColor() override;
    /// <summary>
    /// Sets the color identified by the system color table.
    /// Write <see cref="Slides::SystemColor"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SystemColor(Aspose::Slides::SystemColor value) override;
    /// <summary>
    /// Returns the color identified by a color scheme.
    /// Read <see cref="Slides::SchemeColor"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::SchemeColor get_SchemeColor() override;
    /// <summary>
    /// Sets the color identified by a color scheme.
    /// Write <see cref="Slides::SchemeColor"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SchemeColor(Aspose::Slides::SchemeColor value) override;
    /// <summary>
    /// Returns the red component of a color. All color transformations are ignored.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint8_t get_R() override;
    /// <summary>
    /// Sets the red component of a color. All color transformations are ignored.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_R(uint8_t value) override;
    /// <summary>
    /// Returns the green component of a color. All color transformations are ignored.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint8_t get_G() override;
    /// <summary>
    /// Sets the green component of a color. All color transformations are ignored.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_G(uint8_t value) override;
    /// <summary>
    /// Returns the blue component of a color. All color transformations are ignored.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint8_t get_B() override;
    /// <summary>
    /// Sets the blue component of a color. All color transformations are ignored.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_B(uint8_t value) override;
    /// <summary>
    /// Returns the red component of a color. All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_FloatR() override;
    /// <summary>
    /// Sets the red component of a color. All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FloatR(float value) override;
    /// <summary>
    /// Returns the green component of a color. All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_FloatG() override;
    /// <summary>
    /// Sets the green component of a color. All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FloatG(float value) override;
    /// <summary>
    /// Returns the blue component of a color. All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_FloatB() override;
    /// <summary>
    /// Sets the blue component of a color. All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FloatB(float value) override;
    /// <summary>
    /// Returns the hue component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Hue() override;
    /// <summary>
    /// Sets the hue component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Hue(float value) override;
    /// <summary>
    /// Returns the saturation component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Saturation() override;
    /// <summary>
    /// Sets the saturation component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Saturation(float value) override;
    /// <summary>
    /// Returns the luminance component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Luminance() override;
    /// <summary>
    /// Sets the luminance component of a color in HSL representation.
    /// All color transformations are ignored.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Luminance(float value) override;
    /// <summary>
    /// Returns the collection of color transformations applied to a color.
    /// Read-only <see cref="Aspose::Slides::IColorOperationCollection">IColorOperationCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorOperationCollection> get_ColorTransform() override;
    
    /// <summary>
    /// Returns a <see cref="System::String"></see> that represents the current color format.
    /// </summary>
    /// <param name="format">A type of color string format.</param>
    /// <returns>A string that represents the current color format.</returns>
    ASPOSE_SLIDES_SHARED_API System::String ToString(ColorStringFormat format) override;
    /// <summary>
    /// Copy color format from "color".
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void CopyFrom(System::SharedPtr<IColorFormat> color) override;
    /// <summary>
    /// Checks for equality with specified object.
    /// </summary>
    /// <param name="obj">Object.</param>
    /// <returns>True if objects are equal, otherwise false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Returns hash code.
    /// </summary>
    /// <returns>Hash code.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Returns color transformation operation applied to color at the specified index.
    /// Read/write <see cref="Aspose::Slides::IColorOperation"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorOperation> get_ColorOperation(int32_t index) override;
    /// <summary>
    /// Set color transformation operation applied to color at the specified index.
    /// Read/write <see cref="Aspose::Slides::IColorOperation"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ColorOperation(int32_t index, System::SharedPtr<IColorOperation> value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ColorFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ColorFormatPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API bool get_IsStyleColor();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FloatColor> get_FColor();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISlideComponent> get_Parent_ISlideComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IStyleColorOwner> get_Parent_IStyleColorOwner();
    
    System::Event<void()> ColorFormatChanged;
    
    ASPOSE_SLIDES_LOCAL_API ColorFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ColorFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ColorFormat(System::SharedPtr<IDOMObject> parentImmediate, Aspose::Slides::PresetColor preset);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ColorFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, Aspose::Slides::PresetColor preset));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ColorFormat(System::SharedPtr<IDOMObject> parentImmediate, Aspose::Slides::SchemeColor schemeColor);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ColorFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, Aspose::Slides::SchemeColor schemeColor));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ColorFormat(System::SharedPtr<IDOMObject> parentImmediate, System::Drawing::Color color);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ColorFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::Drawing::Color color));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<IDOMObject> parentImmediate);
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API void Reset2();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ColorFormat> color);
    ASPOSE_SLIDES_LOCAL_API void NoEventCopyDataFrom(System::SharedPtr<ColorFormat> color);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::Drawing::Color color);
    ASPOSE_SLIDES_LOCAL_API void Clear();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FloatColor> GetRawFloatColor(System::SharedPtr<IBaseSlide> colorMappingSlide, System::SharedPtr<FloatColor> styleColor);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FloatColor> GetFloatColor(System::SharedPtr<IBaseSlide> colorMappingSlide);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FloatColor> GetFloatColorStyled(System::SharedPtr<IBaseSlide> colorMappingSlide, System::SharedPtr<FloatColor> styleColor);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FloatColor> GetFloatColorStyled(System::SharedPtr<IBaseSlide> colorMappingSlide);
    ASPOSE_SLIDES_LOCAL_API System::Drawing::Color GetColor(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<FloatColor> styleColor);
    ASPOSE_SLIDES_LOCAL_API void SetSystemColorExtended(Aspose::Slides::SystemColor systemColor, System::Drawing::Color lastColor);
    ASPOSE_SLIDES_LOCAL_API void SetDataInternal(float data0, float data1, float data2, Aspose::Slides::ColorType colorType);
    ASPOSE_SLIDES_LOCAL_API void OnColorFormatChanged();
    static ASPOSE_SLIDES_LOCAL_API float ComputeHue(float r, float g, float b);
    static ASPOSE_SLIDES_LOCAL_API float ComputeSaturation(float r, float g, float b);
    static ASPOSE_SLIDES_LOCAL_API float ComputeLuminance(float r, float g, float b);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FloatColor> HslToRgb(float hue, float saturation, float luminance);
    static ASPOSE_SLIDES_LOCAL_API void RgbToHsl(float r, float g, float b, float& hue, float& saturation, float& luminance);
    ASPOSE_SLIDES_LOCAL_API bool IsNotDefined();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ColorFormat();
    
private:

    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<uint8_t, System::SharedPtr<ColorFormatImpl>>> RProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<uint8_t, System::SharedPtr<ColorFormatImpl>>> GProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<uint8_t, System::SharedPtr<ColorFormatImpl>>> BProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<float, System::SharedPtr<ColorFormatImpl>>> FloatRProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<float, System::SharedPtr<ColorFormatImpl>>> FloatGProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<float, System::SharedPtr<ColorFormatImpl>>> FloatBProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<Aspose::Slides::ColorType, System::SharedPtr<ColorFormatImpl>>> ColorTypeProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<Aspose::Slides::SchemeColor, System::SharedPtr<ColorFormatImpl>>> SchemeColorProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<Aspose::Slides::SystemColor, System::SharedPtr<ColorFormatImpl>>> SystemColorProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<Aspose::Slides::PresetColor, System::SharedPtr<ColorFormatImpl>>> PresetColorProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<float, System::SharedPtr<ColorFormatImpl>>> HueProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<float, System::SharedPtr<ColorFormatImpl>>> SaturationProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<float, System::SharedPtr<ColorFormatImpl>>> LuminanceProperty;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PVIProperty<System::Drawing::Color, System::SharedPtr<ColorFormatImpl>>> ColorProperty;
    System::WeakPtr<ISlideComponent> m_parentISlideComponent;
    System::WeakPtr<IStyleColorOwner> m_parentIStyleColorOwner;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ColorFormatPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
    template <typename T, typename TRealObject>
    void TrySet(System::SharedPtr<PVIProperty<T, TRealObject>> property, T value)
    {
        if (Set<T, TRealObject>(property, value))
        {
            OnColorFormatChanged();
        }
    }
    
    
};

} // namespace Slides
} // namespace Aspose


