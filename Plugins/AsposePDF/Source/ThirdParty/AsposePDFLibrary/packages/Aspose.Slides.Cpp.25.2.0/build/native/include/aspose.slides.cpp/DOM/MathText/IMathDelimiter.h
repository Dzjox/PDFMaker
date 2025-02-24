#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathElementCollection;
enum class MathDelimiterShape;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies the delimiter object, consisting of opening and closing characters (such as parentheses, 
/// braces, brackets, and vertical bars), and one or more mathematical elements inside, separated by a specified character.
/// Examples: (𝑥2); [𝑥2|𝑦2]
/// </summary>
/// <example>Example:
/// <code>
/// auto element = System::MakeObject<MathematicalText>(u"x");
/// auto delimiter = element->Enclose();
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathDelimiter : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathDelimiter ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// One or more mathematical elements separated by delimiter characters
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::ExplicitCast<IMathElement>(System::MakeObject<MathematicalText>(u"x")->Join(u"y"))->Enclose();
    /// auto arguments = delimiter->get_Arguments();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElementCollection> get_Arguments() = 0;
    /// <summary>
    /// Delimiter Beginning Character specifies the beginning, or opening, delimiter character. 
    /// Mathematical delimiters are enclosing characters such as parentheses, brackets, and braces.
    /// The default value: '('.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::ExplicitCast<IMathElement>(System::MakeObject<MathematicalText>(u"x")->Join(u"y"))->Enclose();
    /// delimiter->set_BeginningCharacter(u'[');
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API char16_t get_BeginningCharacter() = 0;
    /// <summary>
    /// Delimiter Beginning Character specifies the beginning, or opening, delimiter character. 
    /// Mathematical delimiters are enclosing characters such as parentheses, brackets, and braces.
    /// The default value: '('.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::ExplicitCast<IMathElement>(System::MakeObject<MathematicalText>(u"x")->Join(u"y"))->Enclose();
    /// delimiter->set_BeginningCharacter(u'[');
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BeginningCharacter(char16_t value) = 0;
    /// <summary>
    /// Delimiter Separator Character specifies the character that separates arguments in the delimiter object. 
    /// The default: '|'.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::ExplicitCast<IMathElement>(System::MakeObject<MathematicalText>(u"x")->Join(u"y"))->Enclose();
    /// delimiter->set_SeparatorCharacter(u'$');
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API char16_t get_SeparatorCharacter() = 0;
    /// <summary>
    /// Delimiter Separator Character specifies the character that separates arguments in the delimiter object. 
    /// The default: '|'.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::ExplicitCast<IMathElement>(System::MakeObject<MathematicalText>(u"x")->Join(u"y"))->Enclose();
    /// delimiter->set_SeparatorCharacter(u'$');
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SeparatorCharacter(char16_t value) = 0;
    /// <summary>
    /// Delimiter Ending Character specifies the ending, or closing, delimiter character. 
    /// Mathematical delimiters are enclosing characters such as parentheses, brackets, and braces.
    /// The default: ')'.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::ExplicitCast<IMathElement>(System::MakeObject<MathematicalText>(u"x")->Join(u"y"))->Enclose();
    /// delimiter->set_EndingCharacter(u']');
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API char16_t get_EndingCharacter() = 0;
    /// <summary>
    /// Delimiter Ending Character specifies the ending, or closing, delimiter character. 
    /// Mathematical delimiters are enclosing characters such as parentheses, brackets, and braces.
    /// The default: ')'.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::ExplicitCast<IMathElement>(System::MakeObject<MathematicalText>(u"x")->Join(u"y"))->Enclose();
    /// delimiter->set_EndingCharacter(u']');
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EndingCharacter(char16_t value) = 0;
    /// <summary>
    /// Specifies the growth of BeginningCharacter, SeparatorCharacter, EndingCharacter
    /// When true, the delimiters grows vertically to match its operand height.
    /// The default value is true
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::MakeObject<MathematicalText>(u"x")->Divide(u"y")->Enclose();
    /// delimiter->set_GrowToMatchOperandHeight(false);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_GrowToMatchOperandHeight() = 0;
    /// <summary>
    /// Specifies the growth of BeginningCharacter, SeparatorCharacter, EndingCharacter
    /// When true, the delimiters grows vertically to match its operand height.
    /// The default value is true
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::MakeObject<MathematicalText>(u"x")->Divide(u"y")->Enclose();
    /// delimiter->set_GrowToMatchOperandHeight(false);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_GrowToMatchOperandHeight(bool value) = 0;
    /// <summary>
    /// Specifies the shape of delimiters in the delimiter object. 
    /// When is MathDelimiterShape::Centered, delimiters are centered around the math axis of the mathematical text 
    /// and still be made to fit the entire height of their contents.
    /// When is MathDelimiterShape::Match, their height and shape are altered to exactly match their contents.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::MakeObject<MathematicalText>(u"x")->Divide(u"y")->Enclose();
    /// delimiter->set_DelimiterShape(MathDelimiterShape::Match);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API MathDelimiterShape get_DelimiterShape() = 0;
    /// <summary>
    /// Specifies the shape of delimiters in the delimiter object. 
    /// When is MathDelimiterShape::Centered, delimiters are centered around the math axis of the mathematical text 
    /// and still be made to fit the entire height of their contents.
    /// When is MathDelimiterShape::Match, their height and shape are altered to exactly match their contents.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::MakeObject<MathematicalText>(u"x")->Divide(u"y")->Enclose();
    /// delimiter->set_DelimiterShape(MathDelimiterShape::Match);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DelimiterShape(MathDelimiterShape value) = 0;
    
    /// <summary>
    /// Delimits arguments using the specified delimiter character
    /// </summary>
    /// <param name="separatorCharacter">delimiter character</param>
    /// <returns>This object after applying the delimiter character</returns>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::ExplicitCast<IMathElement>(System::MakeObject<MathematicalText>(u"x")->Join(u"y"))->Enclose();
    /// delimiter->Delimit(u'|');
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathDelimiter> Delimit(char16_t separatorCharacter) = 0;
    /// <summary>
    /// Returns mathematical element at the specified index of the array.
    /// Read-only <see cref="Aspose::Slides::MathText::IMathElement"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Argument(int32_t index) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


