#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
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
enum class MathFractionTypes;
enum class MathFunctionsOfOneArgument;
enum class MathFunctionsOfTwoArguments;
enum class MathIntegralTypes;
enum class MathLimitLocations;
enum class MathNaryOperatorTypes;
enum class MathTopBotPositions;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Base interface of any mathematical element: 
/// fraction, mathmatical text, function, expression with multiple elements etc
/// </summary>
/// <example>Example:
/// <code>
/// auto element1 = System::MakeObject<MathematicalText>(u"x");
/// auto element2 = System::MakeObject<MathematicalText>(u"y");
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathElement : public virtual System::Object
{
    typedef IMathElement ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Get children elements
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBlock> Join(System::SharedPtr<IMathElement> mathElement) = 0;
    /// <summary>
    /// Joins a mathematical text and forms a mathematical block
    /// </summary>
    /// <param name="mathText">Mathematical text to be joined</param>
    /// <returns>A new IMathBlock containing this instance and specified argument</returns>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<IMathElement> element = System::MakeObject<MathematicalText>(u"x");
    /// auto block = element->Join(u"+y");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBlock> Join(System::String mathText) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFraction> Divide(System::SharedPtr<IMathElement> denominator) = 0;
    /// <summary>
    /// Creates a fraction with this numerator and specified denominator
    /// </summary>
    /// <param name="denominator">Denominator</param>
    /// <returns>new fraction</returns>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<IMathElement> numerator = System::MakeObject<MathematicalText>(u"x");
    /// auto fraction = numerator->Divide(u"y");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFraction> Divide(System::String denominator) = 0;
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
    /// auto fraction = numerator->Divide(denumerator, MathFractionTypes::Linear);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFraction> Divide(System::SharedPtr<IMathElement> denominator, MathFractionTypes fractionType) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFraction> Divide(System::String denominator, MathFractionTypes fractionType) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathDelimiter> Enclose() = 0;
    /// <summary>
    /// Encloses this element in specified characters such as parenthesis or another characters as framing
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathDelimiter> Enclose(char16_t beginningCharacter, char16_t endingCharacter) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFunction> Function(System::SharedPtr<IMathElement> functionArgument) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFunction> Function(System::String functionArgument) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFunction> AsArgumentOfFunction(System::SharedPtr<IMathElement> functionName) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFunction> AsArgumentOfFunction(System::String functionName) = 0;
    /// <summary>
    /// Takes specified function using this instance as the argument
    /// </summary>
    /// <param name="functionType">One of the common function type of one argument</param>
    /// <returns>New math element of type <see cref="Aspose::Slides::MathText::IMathFunction">IMathFunction</see></returns>
    /// <example>Example:
    /// <code>
    /// auto functionArg = System::MakeObject<MathematicalText>(u"x");
    /// auto func = functionArg->AsArgumentOfFunction(Aspose::Slides::MathText::MathFunctionsOfOneArgument::ArcSin);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFunction> AsArgumentOfFunction(MathFunctionsOfOneArgument functionType) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFunction> AsArgumentOfFunction(MathFunctionsOfTwoArguments functionType, System::SharedPtr<IMathElement> additionalArgument) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFunction> AsArgumentOfFunction(MathFunctionsOfTwoArguments functionType, System::String additionalArgument) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathSubscriptElement> SetSubscript(System::SharedPtr<IMathElement> subscript) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathSubscriptElement> SetSubscript(System::String subscript) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathSuperscriptElement> SetSuperscript(System::SharedPtr<IMathElement> superscript) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathSuperscriptElement> SetSuperscript(System::String superscript) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathRightSubSuperscriptElement> SetSubSuperscriptOnTheRight(System::SharedPtr<IMathElement> subscript, System::SharedPtr<IMathElement> superscript) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathRightSubSuperscriptElement> SetSubSuperscriptOnTheRight(System::String subscript, System::String superscript) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathLeftSubSuperscriptElement> SetSubSuperscriptOnTheLeft(System::SharedPtr<IMathElement> subscript, System::SharedPtr<IMathElement> superscript) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathLeftSubSuperscriptElement> SetSubSuperscriptOnTheLeft(System::String subscript, System::String superscript) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathRadical> Radical(System::SharedPtr<IMathElement> degree) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathRadical> Radical(System::String degree) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathLimit> SetUpperLimit(System::SharedPtr<IMathElement> limit) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathLimit> SetUpperLimit(System::String limit) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathLimit> SetLowerLimit(System::SharedPtr<IMathElement> limit) = 0;
    /// <summary>
    /// Takes lower limit
    /// </summary>
    /// <param name="limit">limit</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathLimit">IMathLimit</see></returns>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<IMathElement> baseElement = System::MakeObject<MathematicalText>(u"lim");
    /// auto limitElement = baseElement->SetLowerLimit(u"\U0001d45b→∞");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathLimit> SetLowerLimit(System::String limit) = 0;
    /// <summary>
    /// Creates a N-ary operator
    /// </summary>
    /// <param name="type">The N-ary operator type</param>
    /// <param name="lowerLimit">The lower limit</param>
    /// <param name="upperLimit">The upper limit</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathNaryOperator">IMathNaryOperator</see></returns>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<IMathElement> baseElement = System::MakeObject<MathematicalText>(u"i-1");
    /// System::SharedPtr<IMathElement> lowerLimit = System::MakeObject<MathematicalText>(u"i=0");
    /// System::SharedPtr<IMathElement> upperLimit = System::MakeObject<MathematicalText>(u"\U0001d45b");
    /// auto naryOperator = baseElement->Nary(Aspose::Slides::MathText::MathNaryOperatorTypes::Summation, lowerLimit, upperLimit);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathNaryOperator> Nary(MathNaryOperatorTypes type, System::SharedPtr<IMathElement> lowerLimit, System::SharedPtr<IMathElement> upperLimit) = 0;
    /// <summary>
    /// Creates a N-ary operator
    /// </summary>
    /// <param name="type">The N-ary operator type</param>
    /// <param name="lowerLimit">The lower limit</param>
    /// <param name="upperLimit">The upper limit</param>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathNaryOperator">IMathNaryOperator</see></returns>
    /// <example>Example:
    /// <code>
    /// auto naryOperator = System::MakeObject<MathematicalText>(u"i")->Nary(Aspose::Slides::MathText::MathNaryOperatorTypes::Summation, u"i=0", u"\U0001d45b");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathNaryOperator> Nary(MathNaryOperatorTypes type, System::String lowerLimit, System::String upperLimit) = 0;
    /// <summary>
    /// Puts in a vertical array 
    /// </summary>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathArray">IMathArray</see></returns>
    /// <example>Example:
    /// <code>
    /// auto array = System::MakeObject<MathematicalText>(u"x1")->Join(u"x2")->Join(u"x3")->ToMathArray();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathArray> ToMathArray() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathNaryOperator> Integral(MathIntegralTypes integralType, System::SharedPtr<IMathElement> lowerLimit, System::SharedPtr<IMathElement> upperLimit, MathLimitLocations limitLocations) = 0;
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
    /// auto lowerLimit = System::MakeObject<MathematicalText>(u"1");
    /// auto upperLimit = System::MakeObject<MathematicalText>(u"2");
    /// auto integral = baseElement->Integral(Aspose::Slides::MathText::MathIntegralTypes::Simple, lowerLimit, upperLimit, Aspose::Slides::MathText::MathLimitLocations::UnderOver);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathNaryOperator> Integral(MathIntegralTypes integralType, System::SharedPtr<IMathElement> lowerLimit, System::SharedPtr<IMathElement> upperLimit) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathNaryOperator> Integral(MathIntegralTypes integralType) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathNaryOperator> Integral(MathIntegralTypes integralType, System::String lowerLimit, System::String upperLimit, MathLimitLocations limitLocations) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathNaryOperator> Integral(MathIntegralTypes integralType, System::String lowerLimit, System::String upperLimit) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathAccent> Accent(char16_t accentCharacter) = 0;
    /// <summary>
    /// Sets a bar on the top of this element
    /// </summary>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathBar">IMathBar</see></returns>
    /// <example>Example:
    /// <code>
    /// auto bar = System::MakeObject<MathematicalText>(u"x")->Overbar();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBar> Overbar() = 0;
    /// <summary>
    /// Sets a bar on the bottom of this element
    /// </summary>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathBar">IMathBar</see></returns>
    /// <example>Example:
    /// <code>
    /// auto bar = System::MakeObject<MathematicalText>(u"x")->Underbar();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBar> Underbar() = 0;
    /// <summary>
    /// Places this element in a group using a bottom curly bracket
    /// </summary>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathGroupingCharacter">IMathGroupingCharacter</see></returns>
    /// <example>Example:
    /// <code>
    /// auto groupingElement = System::MakeObject<MathematicalText>(u"x;y;z")->Group();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathGroupingCharacter> Group() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathGroupingCharacter> Group(char16_t character, MathTopBotPositions position, MathTopBotPositions verticalJustification) = 0;
    /// <summary>
    /// Places this element in a border-box
    /// </summary>
    /// <returns>Border-box with this element placed inside</returns>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBorderBox> ToBorderBox() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBorderBox> ToBorderBox(bool hideTop, bool hideBottom, bool hideLeft, bool hideRight, bool strikethroughHorizontal, bool strikethroughVertical, bool strikethroughBottomLeftToTopRight, bool strikethroughTopLeftToBottomRight) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBox> ToBox() = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


