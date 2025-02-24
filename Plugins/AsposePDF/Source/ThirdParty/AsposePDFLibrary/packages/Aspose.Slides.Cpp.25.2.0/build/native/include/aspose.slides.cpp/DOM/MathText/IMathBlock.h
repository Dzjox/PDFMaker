#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElementCollection.h"
#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathDelimiter;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies an instance of mathematical text that contained within a MathParagraph and starts on its own line.
/// All math zones, including equations, expressions, arrays of equations or expressions, and formulas are represented by math block.
/// </summary>
/// <example>Example:
/// <code>
/// auto mathBlock = System::MakeObject<MathBlock>();
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathBlock : public Aspose::Slides::MathText::IMathElementCollection, public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathBlock ThisType;
    typedef Aspose::Slides::MathText::IMathElementCollection BaseType;
    typedef Aspose::Slides::MathText::IMathElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Delimits all child elements with separator character (without the brackets)
    /// </summary>
    /// <param name="separatorCharacter">Character used as a separator</param>
    /// <returns>Instance of IMathDelimiter element</returns>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathematicalText>(u"x")->Join(u"y");
    /// auto delimiterElement = mathBlock->Delimit(u'|');
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathDelimiter> Delimit(char16_t separatorCharacter) = 0;
    /// <summary>
    /// Encloses child elements of this block in specified characters such as parenthesis or another as framing
    /// and delimit with a separator character
    /// </summary>
    /// <param name="beginningCharacter">Beginning character (usually left bracket)</param>
    /// <param name="endingCharacter">Ending character (usually right bracket)</param>
    /// <param name="separatorCharacter">Separator character</param>
    /// <returns>The math element of type <see cref="Aspose::Slides::MathText::IMathDelimiter">IMathDelimiter</see> which includes specified characters as framing and delimiter</returns>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathematicalText>(u"x")->Join(u"y");
    /// auto delimiterElement = mathBlock->Enclose(u'{', u'}', u'%');
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathDelimiter> Enclose(char16_t beginningCharacter, char16_t endingCharacter, char16_t separatorCharacter) = 0;
    /// <summary>
    /// Joins another mathematical block with this one 
    /// </summary>
    /// <param name="other">The joining block</param>
    /// <returns>this mathematical block after joining</returns>
    /// <example>Example:
    /// <code>
    /// auto block1 = System::MakeObject<MathSuperscriptElement>(
    ///     System::MakeObject<MathematicalText>(u"c"),
    ///     System::MakeObject<MathematicalText>(u"2")
    /// )->Join(System::MakeObject<MathematicalText>(u"="));
    /// auto block2 = System::MakeObject<MathSuperscriptElement>(
    ///     System::MakeObject<MathematicalText>(u"a"),
    ///     System::MakeObject<MathematicalText>(u"2")
    /// )->Join(System::MakeObject<MathematicalText>(u"+"))->Join(System::MakeObject<MathSuperscriptElement>(System::MakeObject<MathematicalText>(u"b"), System::MakeObject<MathematicalText>(u"2")));
    /// auto block3 = block1->JoinBlock(block2);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBlock> JoinBlock(System::SharedPtr<IMathBlock> other) = 0;
    /// <summary>
    /// Saves content of this <see cref="Aspose::Slides::MathText::IMathBlock">IMathBlock</see> as MathML
    /// </summary>
    /// <param name="stream">Target stream</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteAsMathMl(System::SharedPtr<System::IO::Stream> stream) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


