#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathNaryOperator.h>
#include <cstdint>

#include "DOM/MathText/MathElementBase.h"
#include "DOM/MathText/IHasControlCharacterProperties.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace DOM
{
namespace Serialization
{
namespace PptxSerialization
{
namespace PartParsers
{
namespace DOMObjectsSerialization
{
namespace Omml
{
namespace Mappers
{
class NaryOperatorMapper;
} // namespace Mappers
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
namespace MathText
{
class IMathElement;
class IMathNaryOperatorProperties;
class MathArgument;
enum class MathLimitLocations;
class MathVisitor;
class NaryOperatorProperties;
} // namespace MathText
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class OmmlControlCharacterPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

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
class ASPOSE_SLIDES_SHARED_CLASS MathNaryOperator final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathNaryOperator, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathNaryOperator ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathNaryOperator BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::NaryOperatorMapper;
    /// @endcond
    
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    /// <summary>
    /// Specifies a subscript argument that, for example, in the case of an integral, sets the lower limit
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// auto subscriptArg = naryOperator->get_Subscript();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Subscript() override;
    /// <summary>
    /// Specifies a supersript argument that, for example, in the case of an integral, sets the upper limit
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// auto superscriptArg = naryOperator->get_Superscript();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Superscript() override;
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
    ASPOSE_SLIDES_SHARED_API char16_t get_Operator() override;
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
    ASPOSE_SLIDES_SHARED_API void set_Operator(char16_t value) override;
    /// <summary>
    /// The location of limits (subscript and superscript)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_LimitLocation(MathLimitLocations::SubscriptSuperscript);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathLimitLocations get_LimitLocation() override;
    /// <summary>
    /// The location of limits (subscript and superscript)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_LimitLocation(MathLimitLocations::SubscriptSuperscript);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_LimitLocation(MathLimitLocations value) override;
    /// <summary>
    /// Operator Character grows vertically to match its operand height
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_GrowToMatchOperandHeight(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_GrowToMatchOperandHeight() override;
    /// <summary>
    /// Operator Character grows vertically to match its operand height
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_GrowToMatchOperandHeight(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_GrowToMatchOperandHeight(bool value) override;
    /// <summary>
    /// Hide Subscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_HideSubscript(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_HideSubscript() override;
    /// <summary>
    /// Hide Subscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_HideSubscript(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_HideSubscript(bool value) override;
    /// <summary>
    /// Hide Superscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_HideSuperscript(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_HideSuperscript() override;
    /// <summary>
    /// Hide Superscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// naryOperator->set_HideSuperscript(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_HideSuperscript(bool value) override;
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
    /// <summary>
    /// Initializes a new instance of the MathNaryOperator class.
    /// </summary>
    /// <param name="operatorSymbol">Nary operator symbol</param>
    /// <param name="baseArgument">Base argument</param>
    /// <param name="lowerLimit">Lower limit</param>
    /// <param name="upperLimit">Upper limit</param>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathNaryOperator>(u'?', System::MakeObject<MathematicalText>(u"i"), System::MakeObject<MathematicalText>(u"i=0"), System::MakeObject<MathematicalText>(u"\U0001d465"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathNaryOperator(char16_t operatorSymbol, System::SharedPtr<IMathElement> baseArgument, System::SharedPtr<IMathElement> lowerLimit, System::SharedPtr<IMathElement> upperLimit);
    /// <summary>
    /// Initializes a new instance of the MathNaryOperator class.
    /// </summary>
    /// <param name="operatorSymbol">Nary operator symbol</param>
    /// <param name="baseArgument">Base argument</param>
    /// <param name="lowerLimit">Lower limit</param>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathNaryOperator>(u'?', System::MakeObject<MathematicalText>(u"i"), System::MakeObject<MathematicalText>(u"i"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathNaryOperator(char16_t operatorSymbol, System::SharedPtr<IMathElement> baseArgument, System::SharedPtr<IMathElement> lowerLimit);
    /// <summary>
    /// Initializes a new instance of the MathNaryOperator class.
    /// </summary>
    /// <param name="operatorSymbol">Nary operator symbol</param>
    /// <param name="baseArgument">Base argument</param>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathNaryOperator>(u'?', System::MakeObject<MathematicalText>(u"i"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathNaryOperator(char16_t operatorSymbol, System::SharedPtr<IMathElement> baseArgument);
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_AreFormattingPropertiesDefault();
    /// @endcond
    
    static const ASPOSE_SLIDES_SHARED_API int8_t c_DefaultArgumentSize;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API MathNaryOperator(System::SharedPtr<IMathElement> baseArgument, System::SharedPtr<IMathElement> lowerLimit, System::SharedPtr<IMathElement> upperLimit, System::SharedPtr<IMathNaryOperatorProperties> properties);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MathNaryOperator, CODEPORTING_ARGS(System::SharedPtr<IMathElement> baseArgument, System::SharedPtr<IMathElement> lowerLimit, System::SharedPtr<IMathElement> upperLimit, System::SharedPtr<IMathNaryOperatorProperties> properties));
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathNaryOperator> CreateIntegral(System::SharedPtr<IMathElement> baseArgument, char16_t integrationElement);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathNaryOperator();
    
private:

    System::SharedPtr<IMathElement> pr_Base;
    
    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"x")->Nary(MathNaryOperatorTypes::Summation, u"x=1", u"100");
    /// auto baseArg = naryOperator->get_Base();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Base(System::SharedPtr<IMathElement> value);
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
    System::SharedPtr<NaryOperatorProperties> m_properties;
    System::SharedPtr<MathArgument> m_subscript;
    System::SharedPtr<MathArgument> m_superscript;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


