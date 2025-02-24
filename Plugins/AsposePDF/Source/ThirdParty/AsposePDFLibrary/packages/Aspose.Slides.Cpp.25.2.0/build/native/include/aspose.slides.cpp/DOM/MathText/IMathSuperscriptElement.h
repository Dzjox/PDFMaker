#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies the superscript object, which consists of a base 
/// and a reduced-size superscript placed above and to the right
/// </summary>
/// <example>Example:
/// <code>
/// auto baseElement = System::MakeObject<MathematicalText>(u"X");
/// auto superscript = System::MakeObject<MathematicalText>(u"i");
/// auto superscriptElement = System::MakeObject<MathSuperscriptElement>(baseElement, superscript);
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathSuperscriptElement : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathSuperscriptElement ThisType;
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
    /// auto superscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscriptElement = System::MakeObject<MathSuperscriptElement>(baseElement, superscript);
    /// auto baseElem = superscriptElement->get_Base();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
    /// <summary>
    /// Superscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto superscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscriptElement = System::MakeObject<MathSuperscriptElement>(baseElement, superscript);
    /// auto super = superscriptElement->get_Superscript();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Superscript() = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


