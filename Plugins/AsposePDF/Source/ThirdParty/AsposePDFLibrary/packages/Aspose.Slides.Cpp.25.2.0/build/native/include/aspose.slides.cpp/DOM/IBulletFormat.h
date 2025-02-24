#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class BulletType : int8_t;
class IBulletFormatEffectiveData;
class IColorFormat;
class IFontData;
class ISlidesPicture;
enum class NullableBool : int8_t;
enum class NumberedBulletStyle : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents paragraph bullet formatting properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBulletFormat : public virtual System::Object
{
    typedef IBulletFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the bullet type of a paragraph with no inheritance.
    /// Read <see cref="BulletType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API BulletType get_Type() = 0;
    /// <summary>
    /// Sets the bullet type of a paragraph with no inheritance.
    /// Write <see cref="BulletType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Type(BulletType value) = 0;
    /// <summary>
    /// Returns the bullet char of a paragraph with no inheritance.
    /// Read <see cref="wchar_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API char16_t get_Char() = 0;
    /// <summary>
    /// Sets the bullet char of a paragraph with no inheritance.
    /// Write <see cref="wchar_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Char(char16_t value) = 0;
    /// <summary>
    /// Returns the bullet font of a paragraph with no inheritance.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_Font() = 0;
    /// <summary>
    /// Sets the bullet font of a paragraph with no inheritance.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Font(System::SharedPtr<IFontData> value) = 0;
    /// <summary>
    /// Returns the bullet height of a paragraph with no inheritance.
    /// Value std::numeric_limits<float>::quiet_NaN() determines that bullet inherits height from the first portion in the paragraph.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Height() = 0;
    /// <summary>
    /// Sets the bullet height of a paragraph with no inheritance.
    /// Value std::numeric_limits<float>::quiet_NaN() determines that bullet inherits height from the first portion in the paragraph.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Height(float value) = 0;
    /// <summary>
    /// Returns the color format of a bullet of a paragraph with no inheritance.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Color() = 0;
    /// <summary>
    /// Returns the picture used as a bullet in a paragraph with no inheritance.
    /// Read-only <see cref="Aspose::Slides::ISlidesPicture">ISlidesPicture</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlidesPicture> get_Picture() = 0;
    /// <summary>
    /// Returns the first number which is used for group of numbered bullets with no inheritance.
    /// Read <see cref="int16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int16_t get_NumberedBulletStartWith() = 0;
    /// <summary>
    /// Sets the first number which is used for group of numbered bullets with no inheritance.
    /// Write <see cref="int16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NumberedBulletStartWith(int16_t value) = 0;
    /// <summary>
    /// Returns the style of a numbered bullet with no inheritance.
    /// Read <see cref="NumberedBulletStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::NumberedBulletStyle get_NumberedBulletStyle() = 0;
    /// <summary>
    /// Sets the style of a numbered bullet with no inheritance.
    /// Write <see cref="NumberedBulletStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NumberedBulletStyle(Aspose::Slides::NumberedBulletStyle value) = 0;
    /// <summary>
    /// Determines whether the bullet has own color or inherits it from the first portion in the paragraph.
    /// <b>NullableBool::True</b> if bullet has own color and <b>NullableBool::False</b> if bullet
    /// inherits color from the first portion in the paragraph.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_IsBulletHardColor() = 0;
    /// <summary>
    /// Determines whether the bullet has own color or inherits it from the first portion in the paragraph.
    /// <b>NullableBool::True</b> if bullet has own color and <b>NullableBool::False</b> if bullet
    /// inherits color from the first portion in the paragraph.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsBulletHardColor(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the bullet has own font or inherits it from the first portion in the paragraph.
    /// <b>NullableBool::True</b> if bullet has own font and <b>NullableBool::False</b> if bullet
    /// inherits font from the first portion in the paragraph.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_IsBulletHardFont() = 0;
    /// <summary>
    /// Determines whether the bullet has own font or inherits it from the first portion in the paragraph.
    /// <b>NullableBool::True</b> if bullet has own font and <b>NullableBool::False</b> if bullet
    /// inherits font from the first portion in the paragraph.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsBulletHardFont(NullableBool value) = 0;
    
    /// <summary>
    /// Sets default non-zero shifts for effective paragraph Indent and MarginLeft when bullets is enabled (like PowerPoint do if enable paragraph bullets/numbering in it). If bullets is disabled then just reset paragraph Indent and MarginLeft (like PowerPoint do if disable paragraph bullets/numbering in it). Indents shifts are applied in regard to current bullet context - IBulletFormat::get(set)_Type, .NumberedBulletStyle and FontHeight of first portion. Non-zero indents shifts are applied to effective Indent and MarginLeft of current paragraph (make result values to be local values).
    /// </summary>
    /// <exception cref="System::InvalidOperationException">
    /// Calling this method doesn't matter and throw <see cref="System::InvalidOperationException"></see> in following cases:
    /// if parent formatted object is not a paragraph (for example calling ITextStyle->get_DefaultParagraphFormat()->get_Bullet()->ApplyDefaultParagraphIndentsShifts() will throw exception);
    /// or if paragraph wasn't added to any ITextFrame->get_Paragraphs() collection (add it first);
    /// </exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ApplyDefaultParagraphIndentsShifts() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBulletFormatEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


