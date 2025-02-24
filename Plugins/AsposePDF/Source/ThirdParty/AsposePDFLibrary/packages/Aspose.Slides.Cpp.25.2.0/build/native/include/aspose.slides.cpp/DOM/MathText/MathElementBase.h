#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathElement.h>

#include "DOM/IDOMObject.h"
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
namespace LaTeXSerialization
{
class LatexMathVisitor;
} // namespace LaTeXSerialization
namespace MathMLSerialization
{
class MathMLSerializerVisitor;
} // namespace MathMLSerialization
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
class MathArgumentMapper;
} // namespace Mappers
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
class IPortionFormat;
namespace MathText
{
class IMathAccent;
class IMathArray;
class IMathBar;
class IMathBlock;
class IMathBorderBox;
class IMathBox;
class IMathDelimiter;
class IMathFraction;
class IMathFunction;
class IMathGroupingCharacter;
class IMathLeftSubSuperscriptElement;
class IMathLimit;
class IMathNaryOperator;
class IMathRadical;
class IMathRightSubSuperscriptElement;
class IMathSubscriptElement;
class IMathSuperscriptElement;
class MathArray;
class MathBar;
class MathBlock;
class MathDelimiter;
class MathematicalText;
class MathFraction;
enum class MathFractionTypes;
class MathFunction;
enum class MathFunctionsOfOneArgument;
enum class MathFunctionsOfTwoArguments;
class MathGroupingCharacter;
enum class MathIntegralTypes;
class MathLeftSubSuperscriptElement;
class MathLimit;
enum class MathLimitLocations;
class MathNaryOperator;
enum class MathNaryOperatorTypes;
class MathRadical;
class MathRightSubSuperscriptElement;
class MathSubscriptElement;
class MathSuperscriptElement;
enum class MathTopBotPositions;
class MathVisitor;
namespace Rendering
{
class ArrayDrawing;
} // namespace Rendering
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Base class for IMathElement with the implementation of some methods that are common to all inherited classes
/// For internal use only. Inherited class must be IMathElement.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MathElementBase : public virtual Aspose::Slides::MathText::IMathElement, public Aspose::Slides::IDOMObject
{
    typedef MathElementBase ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::LaTeXSerialization::LatexMathVisitor;
    friend class Aspose::Slides::MathText::Rendering::ArrayDrawing;
    friend class Aspose::Slides::MathText::MathLeftSubSuperscriptElement;
    friend class Aspose::Slides::MathText::MathRightSubSuperscriptElement;
    friend class Aspose::Slides::MathText::MathSubscriptElement;
    friend class Aspose::Slides::MathText::MathSuperscriptElement;
    friend class Aspose::Slides::MathText::MathArray;
    friend class Aspose::Slides::MathText::MathBar;
    friend class Aspose::Slides::MathText::MathLimit;
    friend class Aspose::Slides::MathText::MathGroupingCharacter;
    friend class Aspose::Slides::MathText::MathDelimiter;
    friend class Aspose::Slides::MathText::MathFraction;
    friend class Aspose::Slides::MathText::MathFunction;
    friend class Aspose::Slides::MathText::MathBlock;
    friend class Aspose::Slides::MathText::MathNaryOperator;
    friend class Aspose::Slides::MathText::MathRadical;
    friend class Aspose::Slides::DOM::Serialization::MathMLSerialization::MathMLSerializerVisitor;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::MathArgumentMapper;
    /// @endcond
    
public:

    /// <summary>
    /// Joins a mathematical element and forms a mathematical block
    /// </summary>
    /// <param name="mathElement">The element to be joined</param>
    /// <returns>A new IMathBlock containing this instance and specified argument</returns>
    /// <example>Example:
    /// <code>
    /// auto element1 = System::MakeObject<MathematicalText>(u"x");
    /// auto element2 = System::MakeObject<MathematicalText>(u"y");
    /// auto block = element1->Join(element2);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBlock> Join(System::SharedPtr<IMathElement> mathElement) override;
    /// <summary>
    /// Joins a mathematical text and forms a mathematical block
    /// </summary>
    /// <param name="mathText">Mathematical text to be joined</param>
    /// <returns>A new IMathBlock containing this instance and specified argument</returns>
    /// <example>Example:
    /// <code>
    /// auto element = System::MakeObject<MathematicalText>(u"x");
    /// auto block = element->Join(u"+y");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBlock> Join(System::String mathText) override;
    /// <summary>
    /// Creates a fraction with this numerator and specified denominator
    /// </summary>
    /// <param name="denominator">Denominator</param>
    /// <returns>new fraction</returns>
    /// <example>Example:
    /// <code>
    /// auto numerator = System::MakeObject<MathematicalText>(u"x");
    /// auto denumerator = System::MakeObject<MathematicalText>(u"y");
    /// auto fraction = numerator->Divide(denumerator);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFraction> Divide(System::SharedPtr<IMathElement> denominator) override;
    /// <summary>
    /// Creates a fraction with this numerator and specified denominator
    /// </summary>
    /// <param name="denominator">Denominator</param>
    /// <returns>new fraction</returns>
    /// <example>Example:
    /// <code>
    /// auto numerator = System::MakeObject<MathematicalText>(u"x");
    /// auto fraction = numerator->Divide(u"y");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFraction> Divide(System::String denominator) override;
    /// <summary>
    /// Creates a fraction of the specified type with this numerator and specified denominator 
    /// </summary>
    /// <param name="denominator">Denominator</param>
    /// <param name="fractionType">Fraction type: Bar, NoBar, Skewed, Linear</param>
    /// <returns>new fraction</returns>
    /// <example>Example:
    /// <code>
    /// auto numerator = System::MakeObject<MathematicalText>(u"x");
    /// auto denumerator = System::MakeObject<MathematicalText>(u"y");
    /// auto fraction = numerator->Divide(denumerator, Aspose::Slides::MathText::MathFractionTypes::Linear);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFraction> Divide(System::SharedPtr<IMathElement> denominator, MathFractionTypes fractionType) override;
    /// <summary>
    /// Creates a fraction of the specified type with this numerator and specified denominator 
    /// </summary>
    /// <param name="denominator">Denominator</param>
    /// <param name="fractionType">Fraction type: Bar, NoBar, Skewed, Linear</param>
    /// <returns>new fraction</returns>
    /// <example>Example:
    /// <code>
    /// auto numerator = System::MakeObject<MathematicalText>(u"x");
    /// auto fraction = numerator->Divide(u"y", Aspose::Slides::MathText::MathFractionTypes::Linear);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFraction> Divide(System::String denominator, MathFractionTypes fractionType) override;
    /// <summary>
    /// Encloses a math element in parenthesis
    /// </summary>
    /// <returns>The math element of type <see cref="Aspose::Slides::MathText::IMathDelimiter">IMathDelimiter</see> which includes the parenthesis</returns>
    /// <example>Example:
    /// <code>
    /// auto element = System::MakeObject<MathematicalText>(u"x");
    /// auto delimiter = element->Enclose();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathDelimiter> Enclose() override;
    /// <summary>
    /// Encloses a math element in specified characters such as parenthesis or another characters as framing
    /// </summary>
    /// <param name="beginningCharacter">Beginning character (usually left bracket)</param>
    /// <param name="endingCharacter">Ending character (usually right bracket)</param>
    /// <returns>The math element of type <see cref="Aspose::Slides::MathText::IMathDelimiter">IMathDelimiter</see> which includes specified characters as framing</returns>
    /// <example>Example:
    /// <code>
    /// auto element = System::MakeObject<MathematicalText>(u"x");
    /// auto delimiter = element->Enclose(u'[', u']');
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathDelimiter> Enclose(char16_t beginningCharacter, char16_t endingCharacter) override;
    /// <summary>
    /// Takes a function of an argument using this instance as the function name
    /// </summary>
    /// <param name="functionArgument">An argument of the function</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathFunction">IMathFunction</see></returns>
    /// <example>Example:
    /// <code>
    /// auto functionName = System::MakeObject<MathematicalText>(u"sin");
    /// auto functionArg = System::MakeObject<MathematicalText>(u"x");
    /// auto func = functionName->Function(functionArg);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFunction> Function(System::SharedPtr<IMathElement> functionArgument) override;
    /// <summary>
    /// Takes a function of an argument using this instance as the function name
    /// </summary>
    /// <param name="functionArgument">An argument of the function</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathFunction">IMathFunction</see></returns>
    /// <example>Example:
    /// <code>
    /// auto functionName = System::MakeObject<MathematicalText>(u"sin");
    /// auto func = functionName->Function(u"x");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFunction> Function(System::String functionArgument) override;
    /// <summary>
    /// Takes specified function using this instance as the argument
    /// </summary>
    /// <param name="functionName">Function name</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathFunction">IMathFunction</see></returns>
    /// <example>Example:
    /// <code>
    /// auto functionName = System::MakeObject<MathematicalText>(u"sin");
    /// auto functionArg = System::MakeObject<MathematicalText>(u"x");
    /// auto func = functionArg->AsArgumentOfFunction(functionName);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFunction> AsArgumentOfFunction(System::SharedPtr<IMathElement> functionName) override;
    /// <summary>
    /// Takes specified function using this instance as the argument
    /// </summary>
    /// <param name="functionName">Function name</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathFunction">IMathFunction</see></returns>
    /// <example>Example:
    /// <code>
    /// auto functionArg = System::MakeObject<MathematicalText>(u"x");
    /// auto func = functionArg->AsArgumentOfFunction(u"cos");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFunction> AsArgumentOfFunction(System::String functionName) override;
    /// <summary>
    /// Takes specified function using this instance as the argument
    /// </summary>
    /// <param name="functionType">One of the common function type of one argument</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathFunction">IMathFunction</see></returns>
    /// <example>Example:
    /// <code>
    /// auto functionName = System::MakeObject<MathematicalText>(u"sin");
    /// auto functionArg = System::MakeObject<MathematicalText>(u"x");
    /// auto func = functionArg->AsArgumentOfFunction(functionName);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFunction> AsArgumentOfFunction(MathFunctionsOfOneArgument functionType) override;
    /// <summary>
    /// Takes specified function using this instance as the argument and specified additional argument
    /// </summary>
    /// <param name="functionType">One of the common function type of two arguments: Log, Lim, Min, Max</param>
    /// <param name="additionalArgument">Additional argument depending on the type of function</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathFunction">IMathFunction</see></returns>
    /// <example>Example:
    /// <code>
    /// auto functionArg = System::MakeObject<MathematicalText>(u"x");
    /// auto logarithmBase = System::MakeObject<MathematicalText>(u"5");
    /// auto func = functionArg->AsArgumentOfFunction(Aspose::Slides::MathText::MathFunctionsOfTwoArguments::Log, logarithmBase);
    /// // Returns the logarithm of 'x' to the base '5'
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFunction> AsArgumentOfFunction(MathFunctionsOfTwoArguments functionType, System::SharedPtr<IMathElement> additionalArgument) override;
    /// <summary>
    /// Takes specified function using this instance as the argument and specified additional argument
    /// </summary>
    /// <param name="functionType">One of the common function type of two arguments: Log, Lim, Min, Max</param>
    /// <param name="additionalArgument">Additional argument depending on the type of function</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathFunction">IMathFunction</see></returns>
    /// <example>Example:
    /// <code>
    /// auto functionArg = System::MakeObject<MathematicalText>(u"x");
    /// auto func = functionArg->AsArgumentOfFunction(Aspose::Slides::MathText::MathFunctionsOfTwoArguments::Log, u"5");
    /// // Returns the logarithm of 'x' to the base '5'
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFunction> AsArgumentOfFunction(MathFunctionsOfTwoArguments functionType, System::String additionalArgument) override;
    /// <summary>
    /// Creates subscript
    /// </summary>
    /// <param name="subscript">Subscript (lower index on the right)</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathSubscriptElement">IMathSubscriptElement</see></returns>
    /// <example>Example:
    /// <code>
    /// auto element = System::MakeObject<MathematicalText>(u"N");
    /// auto index = System::MakeObject<MathematicalText>(u"i");
    /// auto subscript = element->SetSubscript(index);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathSubscriptElement> SetSubscript(System::SharedPtr<IMathElement> subscript) override;
    /// <summary>
    /// Creates subscript
    /// </summary>
    /// <param name="subscript">Subscript (lower index on the right)</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathSubscriptElement">IMathSubscriptElement</see></returns>
    /// <example>Example:
    /// <code>
    /// auto element = System::MakeObject<MathematicalText>(u"N");
    /// auto subscript = element->SetSubscript(u"i");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathSubscriptElement> SetSubscript(System::String subscript) override;
    /// <summary>
    /// Creates superscript
    /// </summary>
    /// <param name="superscript">Superscript (upper index on the right)</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathSuperscriptElement">IMathSuperscriptElement</see></returns>
    /// <example>Example:
    /// <code>
    /// auto element = System::MakeObject<MathematicalText>(u"N");
    /// auto index = System::MakeObject<MathematicalText>(u"4");
    /// auto superscript = element->SetSuperscript(index);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathSuperscriptElement> SetSuperscript(System::SharedPtr<IMathElement> superscript) override;
    /// <summary>
    /// Creates superscript
    /// </summary>
    /// <param name="superscript">Superscript (upper index on the right)</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathSuperscriptElement">IMathSuperscriptElement</see></returns>
    /// <example>Example:
    /// <code>
    /// auto element = System::MakeObject<MathematicalText>(u"N");
    /// auto superscript = element->SetSuperscript(u"4");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathSuperscriptElement> SetSuperscript(System::String superscript) override;
    /// <summary>
    /// Creates subscript and superscript on the right
    /// </summary>
    /// <param name="subscript">Subscript (lower index on the right)</param>
    /// <param name="superscript">Superscript (upper index on the right)</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathRightSubSuperscriptElement">IMathRightSubSuperscriptElement</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"N");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto subsuperscript = baseElement->SetSubSuperscriptOnTheRight(subscript, superscript);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathRightSubSuperscriptElement> SetSubSuperscriptOnTheRight(System::SharedPtr<IMathElement> subscript, System::SharedPtr<IMathElement> superscript) override;
    /// <summary>
    /// Creates subscript and superscript on the right
    /// </summary>
    /// <param name="subscript">Subscript (lower index on the right)</param>
    /// <param name="superscript">Superscript (upper index on the right)</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathRightSubSuperscriptElement">IMathRightSubSuperscriptElement</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"N");
    /// auto subsuperscript = baseElement->SetSubSuperscriptOnTheRight(u"i", u"j");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathRightSubSuperscriptElement> SetSubSuperscriptOnTheRight(System::String subscript, System::String superscript) override;
    /// <summary>
    /// Creates subscript and superscript on the left
    /// </summary>
    /// <param name="subscript">Subscript (lower index on the left)</param>
    /// <param name="superscript">Superscript (upper index on the left)</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathLeftSubSuperscriptElement">IMathLeftSubSuperscriptElement</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"N");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto leftSubsuperscript = baseElement->SetSubSuperscriptOnTheLeft(subscript, superscript);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathLeftSubSuperscriptElement> SetSubSuperscriptOnTheLeft(System::SharedPtr<IMathElement> subscript, System::SharedPtr<IMathElement> superscript) override;
    /// <summary>
    /// Creates subscript and superscript on the left
    /// </summary>
    /// <param name="subscript">Subscript (lower index on the left)</param>
    /// <param name="superscript">Superscript (upper index on the left)</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathLeftSubSuperscriptElement">IMathLeftSubSuperscriptElement</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"N");
    /// auto leftSubsuperscript = baseElement->SetSubSuperscriptOnTheLeft(u"i", u"j");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathLeftSubSuperscriptElement> SetSubSuperscriptOnTheLeft(System::String subscript, System::String superscript) override;
    /// <summary>
    /// Specifies the mathematical root of the given degree from the specified argument.
    /// </summary>
    /// <param name="degree">Argument of Radical</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathRadical">IMathRadical</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"2px");
    /// auto degree = System::MakeObject<MathematicalText>(u"y");
    /// auto radical = baseElement->Radical(degree);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathRadical> Radical(System::SharedPtr<IMathElement> degree) override;
    /// <summary>
    /// Specifies the mathematical root of the given degree from the specified argument.
    /// </summary>
    /// <param name="degree">Argument of Radical</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathRadical">IMathRadical</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"2px");
    /// auto radical = baseElement->Radical(u"3");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathRadical> Radical(System::String degree) override;
    /// <summary>
    /// Takes upper limit
    /// </summary>
    /// <param name="limit">limit</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathLimit">IMathLimit</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"y");
    /// auto limitValue = System::MakeObject<MathematicalText>(u"y?>1");
    /// auto limitElement = baseElement->SetUpperLimit(limitValue);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathLimit> SetUpperLimit(System::SharedPtr<IMathElement> limit) override;
    /// <summary>
    /// Takes upper limit
    /// </summary>
    /// <param name="limit">limit</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathLimit">IMathLimit</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"y");
    /// auto limitElement = baseElement->SetUpperLimit(u"y?>1");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathLimit> SetUpperLimit(System::String limit) override;
    /// <summary>
    /// Takes lower limit
    /// </summary>
    /// <param name="limit">limit</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathLimit">IMathLimit</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"lim");
    /// auto limitValue = System::MakeObject<MathematicalText>(u"\U0001d45b→∞");
    /// auto limitElement = baseElement->SetLowerLimit(limitValue);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathLimit> SetLowerLimit(System::SharedPtr<IMathElement> limit) override;
    /// <summary>
    /// Takes lower limit
    /// </summary>
    /// <param name="limit">limit</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathLimit">IMathLimit</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"lim");
    /// auto limitElement = baseElement->SetLowerLimit(u"\U0001d45b→∞");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathLimit> SetLowerLimit(System::String limit) override;
    /// <summary>
    /// Creates a N-ary operator
    /// </summary>
    /// <param name="type">The N-ary operator type</param>
    /// <param name="lowerLimit">The lower limit</param>
    /// <param name="upperLimit">The upper limit</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathNaryOperator">IMathNaryOperator</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"i-1");
    /// auto lowerLimit = System::MakeObject<MathematicalText>(u"i=0");
    /// auto upperLimit = System::MakeObject<MathematicalText>(u"\U0001d465");
    /// auto naryOperator = baseElement->Nary(Aspose::Slides::MathText::MathNaryOperatorTypes::Summation, lowerLimit, upperLimit);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathNaryOperator> Nary(MathNaryOperatorTypes type, System::SharedPtr<IMathElement> lowerLimit, System::SharedPtr<IMathElement> upperLimit) override;
    /// <summary>
    /// Creates a N-ary operator
    /// </summary>
    /// <param name="type">The N-ary operator type</param>
    /// <param name="lowerLimit">The lower limit</param>
    /// <param name="upperLimit">The upper limit</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathNaryOperator">IMathNaryOperator</see></returns>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"i")->Nary(Aspose::Slides::MathText::MathNaryOperatorTypes::Summation, u"i=0", u"\U0001d465");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathNaryOperator> Nary(MathNaryOperatorTypes type, System::String lowerLimit, System::String upperLimit) override;
    /// <summary>
    /// Puts in a vertical array 
    /// </summary>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathArray">IMathArray</see></returns>
    /// <example>Example:
    /// <code>
    /// auto array = System::MakeObject<MathematicalText>(u"x1")->Join(u"x2")->Join(u"x3")->ToMathArray();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathArray> ToMathArray() override;
    /// <summary>
    /// Takes the integral
    /// </summary>
    /// <param name="integralType">Integral type</param>
    /// <param name="lowerLimit">Lower limit of integral</param>
    /// <param name="upperLimit">Upper limit of integral</param>
    /// <param name="limitLocations">location of limits</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathNaryOperator">IMathNaryOperator</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"\U0001d465");
    /// auto lowerLimit = System::MakeObject<MathematicalText>(u"1");
    /// auto upperLimit = System::MakeObject<MathematicalText>(u"2");
    /// auto integral = baseElement->Integral(Aspose::Slides::MathText::MathIntegralTypes::Simple, lowerLimit, upperLimit, Aspose::Slides::MathText::MathLimitLocations::UnderOver);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathNaryOperator> Integral(MathIntegralTypes integralType, System::SharedPtr<IMathElement> lowerLimit, System::SharedPtr<IMathElement> upperLimit, MathLimitLocations limitLocations) override;
    /// <summary>
    /// Takes the integral
    /// </summary>
    /// <param name="integralType">Integral type</param>
    /// <param name="lowerLimit">Lower limit of integral</param>
    /// <param name="upperLimit">Upper limit of integral</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathNaryOperator">IMathNaryOperator</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"?\?");
    /// auto lowerLimit = System::MakeObject<MathematicalText>(u"1");
    /// auto upperLimit = System::MakeObject<MathematicalText>(u"2");
    /// auto integral = baseElement->Integral(MathIntegralTypes::Simple, lowerLimit, upperLimit, MathLimitLocations::UnderOver);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathNaryOperator> Integral(MathIntegralTypes integralType, System::SharedPtr<IMathElement> lowerLimit, System::SharedPtr<IMathElement> upperLimit) override;
    /// <summary>
    /// Takes the integral without limits
    /// </summary>
    /// <param name="integralType">Integral type</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathNaryOperator">IMathNaryOperator</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"\U0001d465");
    /// auto integral = baseElement->Integral(Aspose::Slides::MathText::MathIntegralTypes::Contour);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathNaryOperator> Integral(MathIntegralTypes integralType) override;
    /// <summary>
    /// Takes the integral
    /// </summary>
    /// <param name="integralType">Integral type</param>
    /// <param name="lowerLimit">Lower limit of integral</param>
    /// <param name="upperLimit">Upper limit of integral</param>
    /// <param name="limitLocations">location of limits</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathNaryOperator">IMathNaryOperator</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"\U0001d465");
    /// auto integral = baseElement->Integral(Aspose::Slides::MathText::MathIntegralTypes::Simple, u"1", u"5", Aspose::Slides::MathText::MathLimitLocations::UnderOver);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathNaryOperator> Integral(MathIntegralTypes integralType, System::String lowerLimit, System::String upperLimit, MathLimitLocations limitLocations) override;
    /// <summary>
    /// Takes the integral
    /// </summary>
    /// <param name="integralType">Integral type</param>
    /// <param name="lowerLimit">Lower limit of integral</param>
    /// <param name="upperLimit">Upper limit of integral</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathNaryOperator">IMathNaryOperator</see></returns>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"\U0001d465");
    /// auto integral = baseElement->Integral(Aspose::Slides::MathText::MathIntegralTypes::Simple, u"1", u"5");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathNaryOperator> Integral(MathIntegralTypes integralType, System::String lowerLimit, System::String upperLimit) override;
    /// <summary>
    /// Sets an accent mark (a character on the top of this element)
    /// </summary>
    /// <param name="accentCharacter">Accent character. The value should be within the range of (U+0300–U+036F) or (U+20D0–U+20EF)</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathAccent">IMathAccent</see></returns>
    /// <example>Example:
    /// <code>
    /// auto accent = System::MakeObject<MathematicalText>(u"x")->Accent(u'~');
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathAccent> Accent(char16_t accentCharacter) override;
    /// <summary>
    /// Sets a bar on the top of this element
    /// </summary>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathBar">IMathBar</see></returns>
    /// <example>Example:
    /// <code>
    /// auto bar = System::MakeObject<MathematicalText>(u"x")->Overbar();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBar> Overbar() override;
    /// <summary>
    /// Sets a bar on the bottom of this element
    /// </summary>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathBar">IMathBar</see></returns>
    /// <example>Example:
    /// <code>
    /// auto bar = System::MakeObject<MathematicalText>(u"x")->Underbar();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBar> Underbar() override;
    /// <summary>
    /// Places this element in a group using a bottom curly bracket
    /// </summary>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathGroupingCharacter">IMathGroupingCharacter</see></returns>
    /// <example>Example:
    /// <code>
    /// auto groupingElement = System::MakeObject<MathematicalText>(u"x;y;z")->Group();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathGroupingCharacter> Group() override;
    /// <summary>
    /// Places this element in a group using a grouping character such as bottom curly bracket or another
    /// </summary>
    /// <param name="character">Grouping Character such as BOTTOM CURLY BRACKET (U+23DF) or any other</param>
    /// <param name="position">Position of grouping character</param>
    /// <param name="verticalJustification">
    /// Vertical justification of group character.
    /// Specifies the alignment of the object with respect to the baseline.
    /// For example, when the group character is above the object, 
    /// VerticalJustification of Top signifies that the top of the object falls on the baseline;
    /// when VerticalJustification is set to Bottom, the bottom of the object is on the baseline
    /// </param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathGroupingCharacter">IMathGroupingCharacter</see></returns>
    /// <example>Example:
    /// <code>
    /// auto groupingElement = System::MakeObject<MathematicalText>(u"x;y;z")->Group(u'\u23E1', Aspose::Slides::MathText::MathTopBotPositions::Bottom, Aspose::Slides::MathText::MathTopBotPositions::Top);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathGroupingCharacter> Group(char16_t character, MathTopBotPositions position, MathTopBotPositions verticalJustification) override;
    /// <summary>
    /// Places this element in a border-box
    /// </summary>
    /// <returns>Border-box with this element placed inside</returns>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBorderBox> ToBorderBox() override;
    /// <summary>
    /// Places this element in a border-box
    /// </summary>
    /// <param name="hideTop">Hide Top Edge </param>
    /// <param name="hideBottom">Hide Bottom Edge</param>
    /// <param name="hideLeft">Hide Left Edge</param>
    /// <param name="hideRight">Hide Right Edge</param>
    /// <param name="strikethroughHorizontal">Border Box Strikethrough Horizontal</param>
    /// <param name="strikethroughVertical">Border Box Strikethrough Vertical</param>
    /// <param name="strikethroughBottomLeftToTopRight">Border Box Strikethrough Bottom-Left to Top-Right</param>
    /// <param name="strikethroughTopLeftToBottomRight">Border Box Strikethrough Top-Left to Bottom-Right</param>
    /// <returns>Border-box with this element placed inside</returns>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox(false, false, true, true, false, false, false, false);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBorderBox> ToBorderBox(bool hideTop, bool hideBottom, bool hideLeft, bool hideRight, bool strikethroughHorizontal, bool strikethroughVertical, bool strikethroughBottomLeftToTopRight, bool strikethroughTopLeftToBottomRight) override;
    /// <summary>
    /// Places this element in a non-visual box (logical grouping) 
    /// which is used to group components of an equation or other instance of mathematical text.
    /// A boxed object can (for example) serve as an operator emulator with or without an alignment point, 
    /// serve as a line break point, or be grouped such as not to allow line breaks within.
    /// </summary>
    /// <returns>Logical box with this element placed inside</returns>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathematicalText>(u"x:=y")->ToBox();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBox> ToBox() override;
    
protected:

    /// @cond
    virtual ASPOSE_SLIDES_SHARED_API bool get_IsContainer();
    /// @endcond
    
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<MathematicalText> s_SuperscriptOfMinusOne;
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<IMathElement>> EmptyChildren;
    
    virtual ASPOSE_SLIDES_LOCAL_API void Accept(System::SharedPtr<MathVisitor> visitor) = 0;
    /// @endcond
    
    /// <summary>
    /// Default constructor
    /// </summary>
    ASPOSE_SLIDES_SHARED_API MathElementBase();
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<MathElementBase> parentImmediate);
    ASPOSE_SLIDES_LOCAL_API void ResetParent();
    ASPOSE_SLIDES_LOCAL_API void NotifyParentOfChanges();
    virtual ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortionFormat> GetFormat();
    /// @endcond
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren(System::SharedPtr<IMathElement> child1, System::SharedPtr<IMathElement> child2, System::SharedPtr<IMathElement> child3);
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren(System::SharedPtr<IMathElement> child1, System::SharedPtr<IMathElement> child2);
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren(System::SharedPtr<IMathElement> child);
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathElementBase();
    
private:

    /// <summary>
    /// Returns Parent_Immediate object.
    /// Read-only <see cref="IDOMObject"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<MathElementBase> m_parentImmediate;
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
    /// <summary>
    /// Get children elements
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    static ASPOSE_SLIDES_LOCAL_API char16_t GetIntegralCharacterByType(MathIntegralTypes integralType);
    static ASPOSE_SLIDES_LOCAL_API char16_t GetNaryCharacterByType(MathNaryOperatorTypes naryType);
    static ASPOSE_SLIDES_LOCAL_API System::String GetFunctionNameByType(MathFunctionsOfOneArgument functionType);
    static ASPOSE_SLIDES_LOCAL_API System::String GetFunctionNameByType(MathFunctionsOfTwoArguments functionType);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathSuperscriptElement> CreateArcFunctionName(System::String baseFuncName);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathSubscriptElement> CreateSubscriptFuncName(System::String funcName, System::SharedPtr<IMathElement> subScript);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathLimit> CreateLimitFuncName(System::String funcName, System::SharedPtr<IMathElement> limit);
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


