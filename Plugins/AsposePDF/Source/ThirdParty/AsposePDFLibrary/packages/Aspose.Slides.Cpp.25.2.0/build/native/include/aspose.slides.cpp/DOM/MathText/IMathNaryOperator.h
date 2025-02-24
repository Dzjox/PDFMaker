#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathNaryOperatorProperties.h"
#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies an N-ary mathematical object, such as Summation and Integral.
/// It consists of an operator, a base (or operand), and optional upper and lower limits. 
/// Examples of N-ary operators are: Summation, Union, Intersection, Integral 
/// </summary>
/// <example>Example:
/// <code>
/// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(Aspose::Slides::MathText::MathNaryOperatorTypes::Summation, u"x=1", u"100");
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathNaryOperator : public virtual Aspose::Slides::MathText::IMathElement, public Aspose::Slides::MathText::IMathNaryOperatorProperties
{
    typedef IMathNaryOperator ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    typedef Aspose::Slides::MathText::IMathNaryOperatorProperties BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// auto baseArg = naryOperator->get_Base();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
    /// <summary>
    /// Specifies a subscript argument that, for example, in the case of an integral, sets the lower limit
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// auto subscriptArg = naryOperator->get_Subscript();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Subscript() = 0;
    /// <summary>
    /// Specifies a supersript argument that, for example, in the case of an integral, sets the upper limit
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// auto superscriptArg = naryOperator->get_Superscript();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Superscript() = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


