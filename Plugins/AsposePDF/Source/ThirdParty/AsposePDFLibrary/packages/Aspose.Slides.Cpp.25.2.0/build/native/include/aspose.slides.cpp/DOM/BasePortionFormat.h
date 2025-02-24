#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IBasePortionFormat.h>
#include <cstdint>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
template <typename, typename> class BasePortionFormatEffectiveData;
class BasePortionFormatImpl;
class BulletFormat;
class BulletFormatImpl;
namespace Charts
{
class ChartPortionFormat;
class ChartTextFormat;
} // namespace Charts
class ColorFormat;
class Column;
class EffectFormat;
class FillFormat;
namespace HtmlIO
{
class HtmlToPptxTextConverter;
class TextPropertiesConverter;
} // namespace HtmlIO
class IColorFormat;
class IDOMObject;
class IEffectFormat;
class IFillFormat;
class IFontData;
class ILineFormat;
class IPortionFormatEffectiveData;
namespace Layout
{
namespace MathMixed
{
class MathBlocksSplitter;
} // namespace MathMixed
} // namespace Layout
class LayoutTemplatesContext;
class LineFormat;
enum class NullableBool : int8_t;
namespace OdpSerialization
{
namespace PartParser
{
class StyleTextPropertiesOdpSerialization;
class TableOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
class Paragraph;
class ParagraphCollection;
class ParagraphFormatImpl;
class Portion;
class PortionFormat;
class PortionFormatEffectiveData;
class PortionFormatImpl;
namespace PptSerialization
{
class TextFormatPPTSerialization;
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartTextFormatPPTXSerialization;
} // namespace Chart
class DrsShapePartParser;
class ParagraphCollectionPPTXSerialization;
class PortionFormatPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Row;
namespace SmartArt
{
class DiagramPoint;
} // namespace SmartArt
class Table;
enum class TextCapType : int8_t;
enum class TextStrikethroughType : int8_t;
enum class TextUnderlineType : int8_t;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class PortionFormatPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
namespace Util
{
class PortionTextReplacements;
} // namespace Util
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
/// Common text portion formatting properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BasePortionFormat : public Aspose::Slides::PVIObject, public virtual Aspose::Slides::IBasePortionFormat
{
    typedef BasePortionFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IBasePortionFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::Layout::MathMixed::MathBlocksSplitter;
    friend class Aspose::Slides::Util::PortionTextReplacements;
    template<typename FT0, typename FT1> friend class Aspose::Slides::BasePortionFormatEffectiveData;
    friend class Aspose::Slides::Portion;
    friend class Aspose::Slides::PortionFormatEffectiveData;
    friend class Aspose::Slides::BasePortionFormatImpl;
    friend class Aspose::Slides::BulletFormatImpl;
    friend class Aspose::Slides::ParagraphFormatImpl;
    friend class Aspose::Slides::PortionFormatImpl;
    friend class Aspose::Slides::Charts::ChartPortionFormat;
    friend class Aspose::Slides::Charts::ChartTextFormat;
    friend class Aspose::Slides::HtmlIO::HtmlToPptxTextConverter;
    friend class Aspose::Slides::HtmlIO::HtmlToPptxTextConverter;
    friend class Aspose::Slides::HtmlIO::TextPropertiesConverter;
    friend class Aspose::Slides::Column;
    friend class Aspose::Slides::Row;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::LayoutTemplatesContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::StyleTextPropertiesOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TableOdpDeserialization;
    friend class Aspose::Slides::Paragraph;
    friend class Aspose::Slides::ParagraphCollection;
    friend class Aspose::Slides::PortionFormat;
    friend class Aspose::Slides::PptSerialization::TextFormatPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartTextFormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphCollectionPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PortionFormatPPTXSerialization;
    friend class Aspose::Slides::BulletFormat;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the LineFormat properties for text outlining. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_LineFormat() override;
    /// <summary>
    /// Returns the text FillFormat properties. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_FillFormat() override;
    /// <summary>
    /// Returns the text EffectFormat properties. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IEffectFormat">IEffectFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectFormat> get_EffectFormat() override;
    /// <summary>
    /// Returns the color used to highlight a text. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_HighlightColor() override;
    /// <summary>
    /// Returns the LineFormat properties used to outline underline line. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_UnderlineLineFormat() override;
    /// <summary>
    /// Returns the underline line FillFormat properties. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_UnderlineFillFormat() override;
    /// <summary>
    /// Determines whether the font is bold. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_FontBold() override;
    /// <summary>
    /// Determines whether the font is bold. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FontBold(NullableBool value) override;
    /// <summary>
    /// Determines whether the font is itallic. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_FontItalic() override;
    /// <summary>
    /// Determines whether the font is itallic. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FontItalic(NullableBool value) override;
    /// <summary>
    /// Determines whether the numbers should ignore text eastern language-specific vertical text layout. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_Kumimoji() override;
    /// <summary>
    /// Determines whether the numbers should ignore text eastern language-specific vertical text layout. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Kumimoji(NullableBool value) override;
    /// <summary>
    /// Determines whether the height of a text should be normalized. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_NormaliseHeight() override;
    /// <summary>
    /// Determines whether the height of a text should be normalized. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NormaliseHeight(NullableBool value) override;
    /// <summary>
    /// Determines whether the text shouldn't be proofed. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_ProofDisabled() override;
    /// <summary>
    /// Determines whether the text shouldn't be proofed. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ProofDisabled(NullableBool value) override;
    /// <summary>
    /// Returns the text underline type. No inheritance applied.
    /// Read <see cref="TextUnderlineType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TextUnderlineType get_FontUnderline() override;
    /// <summary>
    /// Sets the text underline type. No inheritance applied.
    /// Write <see cref="TextUnderlineType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FontUnderline(TextUnderlineType value) override;
    /// <summary>
    /// Returns the type of text capitalization. No inheritance applied.
    /// Read <see cref="Slides::TextCapType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::TextCapType get_TextCapType() override;
    /// <summary>
    /// Sets the type of text capitalization. No inheritance applied.
    /// Write <see cref="Slides::TextCapType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TextCapType(Aspose::Slides::TextCapType value) override;
    /// <summary>
    /// Returns the strikethrough type of a text. No inheritance applied.
    /// Read <see cref="TextStrikethroughType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TextStrikethroughType get_StrikethroughType() override;
    /// <summary>
    /// Sets the strikethrough type of a text. No inheritance applied.
    /// Write <see cref="TextStrikethroughType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StrikethroughType(TextStrikethroughType value) override;
    /// <summary>
    /// Determines whether the underline style has own LineFormat properties or inherits it
    /// from the LineFormat properties of the text.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_IsHardUnderlineLine() override;
    /// <summary>
    /// Determines whether the underline style has own LineFormat properties or inherits it
    /// from the LineFormat properties of the text.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsHardUnderlineLine(NullableBool value) override;
    /// <summary>
    /// Determines whether the underline style has own FillFormat properties or inherits it
    /// from the FillFormat properties of the text.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_IsHardUnderlineFill() override;
    /// <summary>
    /// Determines whether the underline style has own FillFormat properties or inherits it
    /// from the FillFormat properties of the text.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsHardUnderlineFill(NullableBool value) override;
    /// <summary>
    /// Returns the font height of a portion.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means height is undefined and should be inherited from the Master.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_FontHeight() override;
    /// <summary>
    /// Sets the font height of a portion.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means height is undefined and should be inherited from the Master.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FontHeight(float value) override;
    /// <summary>
    /// Returns the Latin font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontData> get_LatinFont() override;
    /// <summary>
    /// Sets the Latin font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LatinFont(System::SharedPtr<IFontData> value) override;
    /// <summary>
    /// Returns the East Asian font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontData> get_EastAsianFont() override;
    /// <summary>
    /// Sets the East Asian font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EastAsianFont(System::SharedPtr<IFontData> value) override;
    /// <summary>
    /// Returns the complex script font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontData> get_ComplexScriptFont() override;
    /// <summary>
    /// Sets the complex script font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ComplexScriptFont(System::SharedPtr<IFontData> value) override;
    /// <summary>
    /// Returns the symbolic font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontData> get_SymbolFont() override;
    /// <summary>
    /// Sets the symbolic font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SymbolFont(System::SharedPtr<IFontData> value) override;
    /// <summary>
    /// Returns the superscript or subscript text.
    /// Value from -100% (subscript) to 100% (superscript).
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Escapement() override;
    /// <summary>
    /// Sets the superscript or subscript text.
    /// Value from -100% (subscript) to 100% (superscript).
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Escapement(float value) override;
    /// <summary>
    /// Returns the minimal font size, for which kerning should be switched on.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_KerningMinimalSize() override;
    /// <summary>
    /// Sets the minimal font size, for which kerning should be switched on.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_KerningMinimalSize(float value) override;
    /// <summary>
    /// Returns the Id of a proofing language. Used for checking spelling and grammar.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_LanguageId() override;
    /// <summary>
    /// Sets the Id of a proofing language. Used for checking spelling and grammar.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LanguageId(System::String value) override;
    /// <summary>
    /// Returns the Id of an alternative language.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_AlternativeLanguageId() override;
    /// <summary>
    /// Sets the Id of an alternative language.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AlternativeLanguageId(System::String value) override;
    /// <summary>
    /// Returns the intercharacter spacing increment.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Spacing() override;
    /// <summary>
    /// Sets the intercharacter spacing increment.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Spacing(float value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BasePortionFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::LineFormat> get_LineFormatInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::FillFormat> get_FillFormatInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::EffectFormat> get_EffectFormatInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ColorFormat> get_HighlightColorInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::LineFormat> get_UnderlineLineFormatInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::FillFormat> get_UnderlineFillFormatInternal();
    
    static const ASPOSE_SLIDES_LOCAL_API int32_t AttributesDefault;
    
    ASPOSE_SLIDES_LOCAL_API int32_t get_Attributes();
    ASPOSE_SLIDES_LOCAL_API void set_Attributes(int32_t value);
    ASPOSE_SLIDES_LOCAL_API bool get_Err();
    ASPOSE_SLIDES_LOCAL_API void set_Err(bool value);
    ASPOSE_SLIDES_LOCAL_API bool get_MetroBlobRequired();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PortionFormatPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API BasePortionFormat(System::SharedPtr<IDOMObject> parent);
    /// @endcond
    
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void ResetToDefault();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<BasePortionFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDefinedDataFrom(System::SharedPtr<BasePortionFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CombineTo(System::SharedPtr<PortionFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CombineFrom(System::SharedPtr<PortionFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CombineFrom(System::SharedPtr<IPortionFormatEffectiveData> source);
    static ASPOSE_SLIDES_LOCAL_API bool IsNotDefined(System::SharedPtr<PortionFormat> format);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~BasePortionFormat();
    
private:

    System::SharedPtr<Aspose::Slides::FillFormat> m_fillFormat;
    System::SharedPtr<Aspose::Slides::FillFormat> m_underlineFillFormat;
    System::SharedPtr<Aspose::Slides::LineFormat> m_lineFormat;
    System::SharedPtr<Aspose::Slides::LineFormat> m_underlineLineFormat;
    System::SharedPtr<Aspose::Slides::EffectFormat> m_effectFormat;
    System::SharedPtr<ColorFormat> m_highlightColor;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PortionFormatPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
    static ASPOSE_SLIDES_LOCAL_API bool IsHighlightColorNotDefined(System::SharedPtr<ColorFormat> colorFormat);
    static ASPOSE_SLIDES_LOCAL_API bool IsEffectFormatNotDefined(System::SharedPtr<Aspose::Slides::EffectFormat> effectFormat);
    static ASPOSE_SLIDES_LOCAL_API bool IsLineFormatNotDefined(System::SharedPtr<Aspose::Slides::LineFormat> lineFormat);
    
};

} // namespace Slides
} // namespace Aspose


