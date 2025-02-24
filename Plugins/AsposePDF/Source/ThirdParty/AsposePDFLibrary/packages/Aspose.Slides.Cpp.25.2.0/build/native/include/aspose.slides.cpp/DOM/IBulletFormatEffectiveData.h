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
class IFillFormatEffectiveData;
class IFontData;
class IPictureEffectiveData;
enum class NumberedBulletStyle : int8_t;
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
/// Immutable object which contains effective paragraph bullet formatting properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::IParagraphFormatEffectiveData">IParagraphFormatEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IBulletFormatEffectiveData : public virtual System::Object
{
    typedef IBulletFormatEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the bullet type of a paragraph.
    /// Read-only <see cref="BulletType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API BulletType get_Type() = 0;
    /// <summary>
    /// Returns the bullet char of a paragraph.
    /// Read-only <see cref="wchar_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API char16_t get_Char() = 0;
    /// <summary>
    /// Returns actual bullet value for parent paragraph.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_ActualBulletValue() = 0;
    /// <summary>
    /// Returns the bullet font of a paragraph.
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_Font() = 0;
    /// <summary>
    /// Returns the bullet height of a paragraph.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Height() = 0;
    /// <summary>
    /// Returns the first number which is used for group of numbered bullets.
    /// Read-only <see cref="int16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int16_t get_NumberedBulletStartWith() = 0;
    /// <summary>
    /// Returns the style of a numbered bullet.
    /// Read-only <see cref="Slides::NumberedBulletStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::NumberedBulletStyle get_NumberedBulletStyle() = 0;
    /// <summary>
    /// Determines whether the bullet has own color or inherits it from the first portion in the paragraph.
    /// Returns <b>true</b> if bullet has own color and <b>false</b> if bullet inherits color from the first portion in the paragraph.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsBulletHardColor() = 0;
    /// <summary>
    /// Determines whether the bullet has own font or inherits it from the first portion in the paragraph.
    /// Returns <b>true</b> if bullet has own font and <b>true</b> if bullet inherits font from the first portion in the paragraph.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsBulletHardFont() = 0;
    /// @deprecated Use IBulletFormatEffectiveData.FillFormat.PictureFillFormat instead. The property will be removed after release of version 21.9.
    /// <summary>
    /// Returns the picture used as a bullet in the paragraph.
    /// Read-only <see cref="Aspose::Slides::IPictureEffectiveData">IPictureEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPictureEffectiveData> get_Picture() = 0;
    /// <summary>
    /// Returns the bullet fill format of a paragraph.
    /// Read-only <see cref="Aspose::Slides::IFillFormatEffectiveData">IFillFormatEffectiveData</see>.
    /// </summary>
    /// <example>
    /// This example demonstrates retrieving bullet's fill effective data.
    /// <code>
    /// using namespace System;
    /// using namespace Aspose::Slides;
    /// 
    /// auto pres = MakeObject<Presentation>(u"SomePresentation.pptx");
    /// // Assume that the first shape on the first slide is AutoShape with some text...
    /// // Output information about text paragraphs' bullets
    /// auto autoShape = ExplicitCast<Aspose::Slides::AutoShape>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// for (auto para : IterateOver(autoShape->get_TextFrame()->get_Paragraphs()))
    /// {
    ///     auto bulletFormatEffective = para->get_ParagraphFormat()->get_Bullet()->GetEffective();
    ///     Console::WriteLine(String(u"Bullet type: ") + ObjectExt::ToString(bulletFormatEffective->get_Type()));
    ///     if (bulletFormatEffective->get_Type() != Aspose::Slides::BulletType::None)
    ///     {
    ///         Console::WriteLine(String(u"Bullet fill type: ") + ObjectExt::ToString(bulletFormatEffective->get_FillFormat()->get_FillType()));
    ///         switch (bulletFormatEffective->get_FillFormat()->get_FillType())
    ///         {
    ///             case Aspose::Slides::FillType::Solid:
    ///                 Console::WriteLine(String(u"Solid fill color: ") + bulletFormatEffective->get_FillFormat()->get_SolidFillColor());
    ///                 break;
    /// 
    ///             case Aspose::Slides::FillType::Gradient:
    ///             {
    ///                 Console::WriteLine(String(u"Gradient stops count: ") + bulletFormatEffective->get_FillFormat()->get_GradientFormat()->get_GradientStops()->get_Count());
    ///                 for (auto gradStop : IterateOver(bulletFormatEffective->get_FillFormat()->get_GradientFormat()->get_GradientStops()))
    ///                 {
    ///                     Console::WriteLine(Convert::ToString(gradStop->get_Position()) + u": " + gradStop->get_Color());
    ///                 }
    ///                 break;
    ///             }
    /// 
    ///             case Aspose::Slides::FillType::Pattern:
    ///                 Console::WriteLine(String(u"Pattern style: ") + ObjectExt::ToString(bulletFormatEffective->get_FillFormat()->get_PatternFormat()->get_PatternStyle()));
    ///                 Console::WriteLine(String(u"Fore color: ") + bulletFormatEffective->get_FillFormat()->get_PatternFormat()->get_ForeColor());
    ///                 Console::WriteLine(String(u"Back color: ") + bulletFormatEffective->get_FillFormat()->get_PatternFormat()->get_BackColor());
    ///                 break;
    /// 
    ///             default:
    ///                 break;
    ///         }
    ///     }
    ///     Console::WriteLine();
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormatEffectiveData> get_FillFormat() = 0;
    
};

} // namespace Slides
} // namespace Aspose


