#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
enum class MathLimitLocations;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies properties of IMathNaryOperator
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathNaryOperatorProperties : public virtual System::Object
{
    typedef IMathNaryOperatorProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Nary Operator Character
    /// For example: '∑', '∫'
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// char16_t operatorSymbol = naryOperator->get_Operator();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API char16_t get_Operator() = 0;
    /// <summary>
    /// Nary Operator Character
    /// For example: '∑', '∫'
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// char16_t operatorSymbol = naryOperator->get_Operator();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Operator(char16_t value) = 0;
    /// <summary>
    /// The location of limits (subscript and superscript)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_LimitLocation(MathLimitLocations::SubscriptSuperscript);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API MathLimitLocations get_LimitLocation() = 0;
    /// <summary>
    /// The location of limits (subscript and superscript)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_LimitLocation(MathLimitLocations::SubscriptSuperscript);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LimitLocation(MathLimitLocations value) = 0;
    /// <summary>
    /// Operator Character grows vertically to match its operand height
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_GrowToMatchOperandHeight(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_GrowToMatchOperandHeight() = 0;
    /// <summary>
    /// Operator Character grows vertically to match its operand height
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_GrowToMatchOperandHeight(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_GrowToMatchOperandHeight(bool value) = 0;
    /// <summary>
    /// Hide Subscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_HideSubscript(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HideSubscript() = 0;
    /// <summary>
    /// Hide Subscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_HideSubscript(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HideSubscript(bool value) = 0;
    /// <summary>
    /// Hide Superscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_HideSuperscript(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HideSuperscript() = 0;
    /// <summary>
    /// Hide Superscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_HideSuperscript(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HideSuperscript(bool value) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


