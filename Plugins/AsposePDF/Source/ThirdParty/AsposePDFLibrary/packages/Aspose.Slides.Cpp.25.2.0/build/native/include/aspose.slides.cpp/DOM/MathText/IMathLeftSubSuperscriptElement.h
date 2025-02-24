#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies the Sub-Superscript object, which consists of a base 
/// and a subscript and superscript placed to the left of the base.
/// </summary>
/// <example>Example:
/// <code>
/// auto leftSubsuperscript = System::MakeObject<MathematicalText>(u"N")->SetSubSuperscriptOnTheLeft(u"i", u"j");
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathLeftSubSuperscriptElement : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathLeftSubSuperscriptElement ThisType;
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
    /// auto leftSubSuperscript = System::MakeObject<MathLeftSubSuperscriptElement>(baseElement, subscript, superscript);
    /// auto baseElem = leftSubSuperscript->get_Base();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
    /// <summary>
    /// Subscript 
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto leftSubSuperscript = System::MakeObject<MathLeftSubSuperscriptElement>(baseElement, subscript, superscript);
    /// auto sub = leftSubSuperscript->get_Subscript();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Subscript() = 0;
    /// <summary>
    /// Superscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto leftSubSuperscript = System::MakeObject<MathLeftSubSuperscriptElement>(baseElement, subscript, superscript);
    /// auto sup = leftSubSuperscript->get_Superscript();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Superscript() = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


