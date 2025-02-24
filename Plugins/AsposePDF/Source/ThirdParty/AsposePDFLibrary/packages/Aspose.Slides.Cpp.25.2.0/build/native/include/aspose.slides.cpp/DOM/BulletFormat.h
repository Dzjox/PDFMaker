#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IBulletFormat.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BulletFormatAsIBulletFormatData;
class BulletFormatEffectiveData;
class BulletFormatImpl;
enum class BulletType : int8_t;
class ColorFormat;
namespace HtmlIO
{
class HtmlToPptxTextConverter;
} // namespace HtmlIO
class IBulletFormatEffectiveData;
class IColorFormat;
class IDOMObject;
class IFontData;
class ISlidesPicture;
enum class NullableBool : int8_t;
enum class NumberedBulletStyle : int8_t;
namespace OdpSerialization
{
namespace PartParser
{
class TextFrameOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class Paragraph;
class ParagraphFormat;
class ParagraphFormatImpl;
class Picture;
class Portion;
namespace PptSerialization
{
class TextFormatPPTSerialization;
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class ParagraphFormatPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class BulletFormatPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class BulletFormatPPTXUnsupportedProps;
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
/// Represents paragraph bullet formatting properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BulletFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::IBulletFormat
{
    typedef BulletFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IBulletFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::BulletFormatAsIBulletFormatData;
    friend class Aspose::Slides::BulletFormatEffectiveData;
    friend class Aspose::Slides::BulletFormatImpl;
    friend class Aspose::Slides::ParagraphFormatImpl;
    friend class Aspose::Slides::HtmlIO::HtmlToPptxTextConverter;
    friend class Aspose::Slides::OdpSerialization::PartParser::TextFrameOdpSerialization;
    friend class Aspose::Slides::ParagraphFormat;
    friend class Aspose::Slides::PptSerialization::TextFormatPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphFormatPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the bullet type of a paragraph with no inheritance.
    /// Read <see cref="BulletType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API BulletType get_Type() override;
    /// <summary>
    /// Sets the bullet type of a paragraph with no inheritance.
    /// Write <see cref="BulletType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Type(BulletType value) override;
    /// <summary>
    /// Returns the bullet char of a paragraph with no inheritance.
    /// Read <see cref="wchar_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API char16_t get_Char() override;
    /// <summary>
    /// Sets the bullet char of a paragraph with no inheritance.
    /// Write <see cref="wchar_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Char(char16_t value) override;
    /// <summary>
    /// Returns the bullet font of a paragraph with no inheritance.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontData> get_Font() override;
    /// <summary>
    /// Sets the bullet font of a paragraph with no inheritance.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Font(System::SharedPtr<IFontData> value) override;
    /// <summary>
    /// Returns the bullet height of a paragraph with no inheritance.
    /// Value std::numeric_limits<float>::quiet_NaN() determines that bullet inherits height from the first portion in the paragraph.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// A negative height value means that the height is given in points and
    /// a positive value means the height is a percentage of the surrounding text.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API float get_Height() override;
    /// <summary>
    /// Sets the bullet height of a paragraph with no inheritance.
    /// Value std::numeric_limits<float>::quiet_NaN() determines that bullet inherits height from the first portion in the paragraph.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// A negative height value means that the height is given in points and
    /// a positive value means the height is a percentage of the surrounding text.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_Height(float value) override;
    /// <summary>
    /// Returns the color format of a bullet of a paragraph with no inheritance.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Color() override;
    /// <summary>
    /// Returns the first number which is used for group of numbered bullets with no inheritance.
    /// Read <see cref="int16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int16_t get_NumberedBulletStartWith() override;
    /// <summary>
    /// Sets the first number which is used for group of numbered bullets with no inheritance.
    /// Write <see cref="int16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NumberedBulletStartWith(int16_t value) override;
    /// <summary>
    /// Returns the style of a numbered bullet with no inheritance.
    /// Read <see cref="Slides::NumberedBulletStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::NumberedBulletStyle get_NumberedBulletStyle() override;
    /// <summary>
    /// Sets the style of a numbered bullet with no inheritance.
    /// Write <see cref="Slides::NumberedBulletStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NumberedBulletStyle(Aspose::Slides::NumberedBulletStyle value) override;
    /// <summary>
    /// Determines whether the bullet has own color or inherits it from the first portion in the paragraph.
    /// <b>NullableBool::True</b> if bullet has own color and <b>NullableBool::False</b> if bullet
    /// inherits color from the first portion in the paragraph.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_IsBulletHardColor() override;
    /// <summary>
    /// Determines whether the bullet has own color or inherits it from the first portion in the paragraph.
    /// <b>NullableBool::True</b> if bullet has own color and <b>NullableBool::False</b> if bullet
    /// inherits color from the first portion in the paragraph.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsBulletHardColor(NullableBool value) override;
    /// <summary>
    /// Determines whether the bullet has own font or inherits it from the first portion in the paragraph.
    /// <b>NullableBool::True</b> if bullet has own font and <b>NullableBool::False</b> if bullet
    /// inherits font from the first portion in the paragraph.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_IsBulletHardFont() override;
    /// <summary>
    /// Determines whether the bullet has own font or inherits it from the first portion in the paragraph.
    /// <b>NullableBool::True</b> if bullet has own font and <b>NullableBool::False</b> if bullet
    /// inherits font from the first portion in the paragraph.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsBulletHardFont(NullableBool value) override;
    /// <summary>
    /// Returns the picture used as a bullet in a paragraph with no inheritance.
    /// Read-only <see cref="Aspose::Slides::ISlidesPicture">ISlidesPicture</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlidesPicture> get_Picture() override;
    
    /// <summary>
    /// Sets default non-zero shifts for effective paragraph Indent and MarginLeft when bullets is enabled (like PowerPoint do if enable paragraph bullets/numbering in it). If bullets is disabled then just reset paragraph Indent and MarginLeft (like PowerPoint do if disable paragraph bullets/numbering in it). Indents shifts are applied in regard to current bullet context - IBulletFormat::get(set)_Type, .NumberedBulletStyle and FontHeight of first portion. Non-zero indents shifts are applied to effective Indent and MarginLeft of current paragraph (make result values to be local values).
    /// </summary>
    /// <exception cref="System::InvalidOperationException">
    /// Calling this method doesn't matter and throw <see cref="System::InvalidOperationException"></see> in following cases:
    /// if parent formatted object is not a paragraph (for example calling ITextStyle->get_DefaultParagraphFormat()->get_Bullet()->ApplyDefaultParagraphIndentsShifts() will throw exception);
    /// or if paragraph wasn't added to any ITextFrame->get_Paragraphs() collection (add it first);
    /// </exception>
    ASPOSE_SLIDES_SHARED_API void ApplyDefaultParagraphIndentsShifts() override;
    /// <summary>
    /// Gets effective bullet formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IBulletFormatEffectiveData">IBulletFormatEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates getting some effective bullet format properties.
    /// <code>
    /// using namespace System;
    /// using namespace Aspose::Slides;
    /// 
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto shape = AsCast<Aspose::Slides::IAutoShape>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// auto effectiveBulletFormat = shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_ParagraphFormat()->get_Bullet()->GetEffective();
    /// 
    /// Console::WriteLine(String(u"Bullet type: ") + ObjectExt::ToString(effectiveBulletFormat->get_Type()));
    /// if (effectiveBulletFormat->get_Type() == Aspose::Slides::BulletType::Numbered)
    /// {
    ///     Console::WriteLine(String(u"Numbered style: ") + ObjectExt::ToString(effectiveBulletFormat->get_NumberedBulletStyle()));
    ///     Console::WriteLine(String(u"Starting number: ") + effectiveBulletFormat->get_NumberedBulletStartWith());
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBulletFormatEffectiveData> GetEffective() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BulletFormatImpl> get_RealObject();
    ASPOSE_SLIDES_LOCAL_API System::String get_BulletChar();
    ASPOSE_SLIDES_LOCAL_API void set_BulletChar(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::BulletFormatPPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::BulletFormatPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Picture> get_PictureInternal();
    ASPOSE_SLIDES_LOCAL_API void set_PictureInternal(System::SharedPtr<Aspose::Slides::Picture> value);
    ASPOSE_SLIDES_LOCAL_API bool get_HasBullet();
    ASPOSE_SLIDES_LOCAL_API bool get_HasChar();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Portion> get_FirstPortion();
    
    ASPOSE_SLIDES_LOCAL_API BulletFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BulletFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BulletFormatEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<BulletFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDefinedDataFrom(System::SharedPtr<BulletFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<BulletFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API bool EqualFormatting(System::SharedPtr<IBulletFormat> bullet);
    ASPOSE_SLIDES_LOCAL_API void CombineTo(System::SharedPtr<IBulletFormat> props);
    ASPOSE_SLIDES_LOCAL_API void CombineFrom(System::SharedPtr<IBulletFormat> props);
    ASPOSE_SLIDES_LOCAL_API void CombineFrom(System::SharedPtr<IBulletFormatEffectiveData> source);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~BulletFormat();
    
private:

    static const ASPOSE_SLIDES_LOCAL_API char16_t CharDefault;
    bool m_firstPortionResolved;
    System::WeakPtr<Portion> m_firstPortion;
    System::WeakPtr<Paragraph> m_parentParagraph;
    System::SharedPtr<ColorFormat> m_color;
    System::SharedPtr<Aspose::Slides::Picture> m_picture;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::BulletFormatPPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::BulletFormatPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<BulletFormatEffectiveData> m_effective;
    
};

} // namespace Slides
} // namespace Aspose


