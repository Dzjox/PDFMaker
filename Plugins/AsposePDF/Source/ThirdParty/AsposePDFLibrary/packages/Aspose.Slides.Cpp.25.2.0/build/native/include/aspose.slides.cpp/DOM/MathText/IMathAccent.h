#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies the accent function, consisting of a base and a combining diacritical mark
/// Example: 𝑎́
/// </summary>
/// <example>Example:
/// <code>
/// auto accent = System::MakeObject<MathematicalText>(u"x")->Accent(u'~');
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathAccent : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathAccent ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The argument to which the accent was applied
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto accent = System::MakeObject<MathematicalText>(u"x")->Accent(u'~');
    /// auto baseArg = accent->get_Base();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
    /// <summary>
    /// Accent Character
    /// The value should be within the range of (U+0300–U+036F) or(U+20D0–U+20EF)
    /// Default value: Combining Circumflex Accent (U+0302)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto accent = System::MakeObject<MathematicalText>(u"x")->Accent(u'~');
    /// char16_t ch = accent->get_Character();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API char16_t get_Character() = 0;
    /// <summary>
    /// Accent Character
    /// The value should be within the range of (U+0300–U+036F) or(U+20D0–U+20EF)
    /// Default value: Combining Circumflex Accent (U+0302)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto accent = System::MakeObject<MathematicalText>(u"x")->Accent(u'~');
    /// char16_t ch = accent->get_Character();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Character(char16_t value) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


