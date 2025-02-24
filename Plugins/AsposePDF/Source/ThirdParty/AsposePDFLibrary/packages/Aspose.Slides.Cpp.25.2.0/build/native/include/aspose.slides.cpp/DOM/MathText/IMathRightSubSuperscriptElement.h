#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies the Sub-Superscript object, which consists of a base 
/// and a subscript and superscript placed to the right of the base.
/// </summary>
/// <example>Example:
/// <code>
/// auto subsuperscript = System::MakeObject<MathematicalText>(u"N")->SetSubSuperscriptOnTheRight(u"i", u"j");
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathRightSubSuperscriptElement : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathRightSubSuperscriptElement ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto subsuperscript = System::MakeObject<MathRightSubSuperscriptElement>(baseElement, subscript, superscript);
    /// auto baseElem = subsuperscript->get_Base();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
    /// <summary>
    /// Subscript argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto subsuperscript = System::MakeObject<MathRightSubSuperscriptElement>(baseElement, subscript, superscript);
    /// auto sub = subsuperscript->get_Subscript();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Subscript() = 0;
    /// <summary>
    /// Superscript argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto subsuperscript = System::MakeObject<MathRightSubSuperscriptElement>(baseElement, subscript, superscript);
    /// auto sup = subsuperscript->get_Superscript();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Superscript() = 0;
    /// <summary>
    /// Specifies the alignment of subscript/superscript. 
    /// When true, subscript and superscript are aligned horizontally to each other.
    /// When false, they are kerned to the shape of the base.
    /// Default value is false.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto subsuperscript = System::MakeObject<MathRightSubSuperscriptElement>(baseElement, subscript, superscript);
    /// subsuperscript->set_AlignScripts(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AlignScripts() = 0;
    /// <summary>
    /// Specifies the alignment of subscript/superscript. 
    /// When true, subscript and superscript are aligned horizontally to each other.
    /// When false, they are kerned to the shape of the base.
    /// Default value is false.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto subsuperscript = System::MakeObject<MathRightSubSuperscriptElement>(baseElement, subscript, superscript);
    /// subsuperscript->set_AlignScripts(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AlignScripts(bool value) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


