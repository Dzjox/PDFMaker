#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathDelimiter.h>
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
class DelimiterMapper;
class DelimiterShapeConverter;
} // namespace Mappers
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
namespace HtmlIO
{
class MathMLToMathBlockConverter;
} // namespace HtmlIO
namespace MathText
{
class IMathElement;
class IMathElementCollection;
class MathBlock;
class MathDelimiterFactory;
enum class MathDelimiterShape;
class MathVisitor;
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
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerable;
} // namespace Generic
} // namespace Collections
} // namespace System
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
/// auto delimiter = System::MakeObject<MathDelimiter>(element);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathDelimiter final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathDelimiter, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathDelimiter ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathDelimiter BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::MathText::MathElementBase;
    friend class Aspose::Slides::MathText::MathDelimiterFactory;
    friend class Aspose::Slides::MathText::MathBlock;
    friend class Aspose::Slides::HtmlIO::MathMLToMathBlockConverter;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::DelimiterMapper;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::DelimiterShapeConverter;
    /// @endcond
    
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElementCollection> get_Arguments() override;
    /// <summary>
    /// Delimiter Beginning Character specifies the beginning, or opening, delimiter character. 
    /// Mathematical delimiters are enclosing characters such as parentheses, brackets, and braces.
    /// The default: '('.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::ExplicitCast<IMathElement>(System::MakeObject<MathematicalText>(u"x")->Join(u"y"))->Enclose();
    /// delimiter->set_BeginningCharacter(u'[');
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API char16_t get_BeginningCharacter() override;
    /// <summary>
    /// Delimiter Beginning Character specifies the beginning, or opening, delimiter character. 
    /// Mathematical delimiters are enclosing characters such as parentheses, brackets, and braces.
    /// The default: '('.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto delimiter = System::ExplicitCast<IMathElement>(System::MakeObject<MathematicalText>(u"x")->Join(u"y"))->Enclose();
    /// delimiter->set_BeginningCharacter(u'[');
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_BeginningCharacter(char16_t value) override;
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
    ASPOSE_SLIDES_SHARED_API char16_t get_SeparatorCharacter() override;
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
    ASPOSE_SLIDES_SHARED_API void set_SeparatorCharacter(char16_t value) override;
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
    ASPOSE_SLIDES_SHARED_API char16_t get_EndingCharacter() override;
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
    ASPOSE_SLIDES_SHARED_API void set_EndingCharacter(char16_t value) override;
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
    ASPOSE_SLIDES_SHARED_API bool get_GrowToMatchOperandHeight() override;
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
    ASPOSE_SLIDES_SHARED_API void set_GrowToMatchOperandHeight(bool value) override;
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
    ASPOSE_SLIDES_SHARED_API MathDelimiterShape get_DelimiterShape() override;
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
    ASPOSE_SLIDES_SHARED_API void set_DelimiterShape(MathDelimiterShape value) override;
    
    /// <summary>
    /// Initializes MathDelimiter with the specified element as single base argument
    /// </summary>
    /// <param name="element">The base element to which the delimiter is applied. Can be null.</param>
    /// <exception cref="T:System::InvalidOperationException">
    /// Throws then <paramref name="element"></paramref> is a container for another elements, such as MathBlock. In this case, you need to call a different constructor with IEnumerable argument.
    /// </exception>
    /// <example>Example:
    /// <code>
    /// auto element = System::MakeObject<MathematicalText>(u"x");
    /// auto delimiter = System::MakeObject<MathDelimiter>(element);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathDelimiter(System::SharedPtr<IMathElement> element);
    
    /// <summary>
    /// Delimits arguments using the specified delimiter character
    /// </summary>
    /// <param name="separatorCharacter">delimiter character</param>
    /// <returns>This object after applying the delimiter character</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathDelimiter> Delimit(char16_t separatorCharacter) override;
    /// <summary>
    /// Encloses a math element in specified characters such as parenthesis or another characters as framing
    /// </summary>
    /// <param name="beginningCharacter">Beginning character (usually left bracket)</param>
    /// <param name="endingCharacter">Ending character (usually right bracket)</param>
    /// <returns>
    /// If <paramref name="beginningCharacter"></paramref> and <paramref name="endingCharacter"></paramref> are null, 
    /// corresponding properties are assigned values only and no new object is created (returns this instance).
    /// Otherwise, returns new math element of type Delimiter which includes specified characters as framing 
    /// and this instance of <see cref="Aspose::Slides::MathText::MathDelimiter">MathDelimiter</see> framed inside.
    /// </returns>
    /// <example>Example:
    /// <code>
    /// auto innerDelimiter = System::ExplicitCast<IMathElement>(System::MakeObject<MathematicalText>(u"x")->Join(u",y"))->Enclose(u'{', u'}');
    /// auto outerDelimiter = innerDelimiter->Enclose(u'[', u']');
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathDelimiter> Enclose(char16_t beginningCharacter, char16_t endingCharacter) override;
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    /// <summary>
    /// Returns mathematical element at the specified index of the array.
    /// Read-only <see cref="Aspose::Slides::MathText::IMathElement"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Argument(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_AreFormattingPropertiesDefault();
    
    static const ASPOSE_SLIDES_LOCAL_API char16_t DefaultBeginningCharacter;
    static const ASPOSE_SLIDES_LOCAL_API char16_t DefaultSeparatorCharacter;
    static const ASPOSE_SLIDES_LOCAL_API char16_t DefaultEndingCharacter;
    static const ASPOSE_SLIDES_LOCAL_API MathDelimiterShape DefaultDelimiterShape;
    static const ASPOSE_SLIDES_LOCAL_API bool DefaultGrowToMatchOperandHeight;
    static const ASPOSE_SLIDES_LOCAL_API char16_t NullCharacter;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> ControlCharactersPropertiesInternal;
    
    ASPOSE_SLIDES_LOCAL_API MathDelimiter(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<IMathElement>>> mathElements, System::SharedPtr<System::Object> dummy);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MathDelimiter, CODEPORTING_ARGS(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<IMathElement>>> mathElements, System::SharedPtr<System::Object> dummy));
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathDelimiter();
    
private:

    char16_t pr_BeginningCharacter;
    char16_t pr_SeparatorCharacter;
    char16_t pr_EndingCharacter;
    bool pr_GrowToMatchOperandHeight;
    MathDelimiterShape pr_DelimiterShape;
    
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
    System::SharedPtr<IMathElementCollection> m_arguments;
    
    ASPOSE_SLIDES_LOCAL_API MathDelimiter();
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MathDelimiter, CODEPORTING_ARGS());
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


