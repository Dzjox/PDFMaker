#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathBlock.h>
#include <cstdint>

#include "DOM/MathText/MathElementBase.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IDOMObject;
namespace Layout
{
namespace MathMixed
{
class MathBlocksSplitter;
} // namespace MathMixed
} // namespace Layout
namespace MathText
{
class IMathArray;
class IMathDelimiter;
class IMathElement;
class MathElementCollection;
class MathParagraph;
class MathVisitor;
} // namespace MathText
class TextLayout;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerable;
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
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
/// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
/// auto plusElement = System::MakeObject<MathematicalText>(u"+");
/// mathBlock->Add(plusElement);
/// mathBlock->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathBlock final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathBlock
{
    typedef MathBlock ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathBlock BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Layout::MathMixed::MathBlocksSplitter;
    friend class Aspose::Slides::MathText::MathElementBase;
    friend class Aspose::Slides::MathText::MathParagraph;
    friend class Aspose::Slides::TextLayout;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the number of child math elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// int32_t count = mathBlock->get_Count();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns false because child elements collection can be modified.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsReadOnly();
    
    /// <summary>
    /// Gets IMathElement at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index of the item</param>
    /// <returns>The mathematical element.</returns>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto firstElem = mathBlock->idx_get(0);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> idx_get(int32_t index) override;
    /// <summary>
    /// Sets IMathElement at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index of the item</param>
    /// <param name="value">The mathematical element.</param>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto firstElem = mathBlock->idx_get(0);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void idx_set(int32_t index, System::SharedPtr<IMathElement> value);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
    /// <summary>
    /// Initializes a new instance of the MathBlock class.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathBlock();
    /// <summary>
    /// Creates a new mathematical block and puts specified element in it
    /// </summary>
    /// <param name="mathElement">The mathematical element to put in the block</param>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathBlock(System::SharedPtr<IMathElement> mathElement);
    /// <summary>
    /// Creates a new mathematical block and puts specified elements in it
    /// </summary>
    /// <param name="mathElements">Mathematical elements to put in the block</param>
    /// <example>Example:
    /// <code>
    /// auto elems = System::MakeArray<System::SharedPtr<Aspose::Slides::MathText::IMathElement>>({System::MakeObject<MathematicalText>(u"item1"), System::MakeObject<MathematicalText>(u"item2")});
    /// auto mathBlock = System::MakeObject<MathBlock>(elems);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathBlock(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<IMathElement>>> mathElements);
    
    /// <summary>
    /// Adds a math element to the end of the collection.
    /// </summary>
    /// <param name="item">The IMathElement to be added to the end of the collection.</param>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// mathBlock->Add(System::MakeObject<MathematicalText>(u"+"));
    /// mathBlock->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void Add(System::SharedPtr<IMathElement> item) override;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// mathBlock->Clear();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection.</param>
    /// <returns>
    /// true if <paramref name="item"></paramref> is found in the collection; otherwise, false.
    /// </returns>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// mathBlock->Add(plusElement);
    /// mathBlock->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// bool contains = mathBlock->Contains(plusElement);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool Contains(System::SharedPtr<IMathElement> item) override;
    /// <summary>
    /// Copy to specified array.
    /// </summary>
    /// <param name="array">Array to copy to.</param>
    /// <param name="arrayIndex">Index to begin copying.</param>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// mathBlock->Add(plusElement);
    /// mathBlock->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// auto destinationArray = System::MakeArray<System::SharedPtr<Aspose::Slides::MathText::IMathElement>>(mathBlock->get_Count());
    /// mathBlock->CopyTo(destinationArray, 0);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IMathElement>> array, int32_t arrayIndex) override;
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> was successfully removed from the collection; otherwise, false. This method also returns false if <paramref name="item"></paramref> is not found in the original collection.
    /// </returns>
    /// <param name="item">The object to remove from the collection.</param>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// mathBlock->Add(plusElement);
    /// mathBlock->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// mathBlock->Remove(plusElement);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool Remove(System::SharedPtr<IMathElement> item) override;
    /// <summary>
    /// Determines the index of a specific math element in collection.
    /// </summary>
    /// <returns>
    /// The index of <paramref name="item"></paramref> if found in the collection; otherwise, -1.
    /// </returns>
    /// <param name="item">The element to locate in the collection.</param>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// mathBlock->Add(plusElement);
    /// mathBlock->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// int32_t index = mathBlock->IndexOf(plusElement);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<IMathElement> item) override;
    /// <summary>
    /// Inserts a MathElement into the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which MathElement should be inserted.</param>
    /// <param name="item">The MathElement to insert.</param>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// mathBlock->Add(plusElement);
    /// mathBlock->Insert(0, System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void Insert(int32_t index, System::SharedPtr<IMathElement> item) override;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// mathBlock->Add(plusElement);
    /// mathBlock->Insert(0, System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// mathBlock->RemoveAt(2);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Joins a mathematical element with this mathematical block
    /// </summary>
    /// <param name="mathElement">The element to be joined</param>
    /// <returns>The current instance of IMathBlock</returns>
    /// <example>Example:
    /// <code>
    /// auto element1 = System::MakeObject<MathematicalText>(u"x");
    /// auto element2 = System::MakeObject<MathematicalText>(u"y");
    /// auto block = element1->Join(element2);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBlock> Join(System::SharedPtr<IMathElement> mathElement) override;
    /// <summary>
    /// Joins a mathematical text with this mathematical block
    /// </summary>
    /// <param name="mathText">Mathematical text to be joined</param>
    /// <returns>A new IMathBlock containing this instance and specified argument</returns>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<IMathElement> element = System::MakeObject<MathematicalText>(u"x");
    /// auto block = element->Join(u"+y");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBlock> Join(System::String mathText) override;
    /// <summary>
    /// Joins another mathematical block with this one 
    /// </summary>
    /// <param name="other">The joining block</param>
    /// <returns>this mathematical block after joining</returns>
    /// <example>Example:
    /// <code>
    /// auto block1 = System::MakeObject<MathSuperscriptElement>(System::MakeObject<MathematicalText>(u"c"), System::MakeObject<MathematicalText>(u"2"))->Join(System::MakeObject<MathematicalText>(u"="));
    /// auto block2 = System::MakeObject<MathSuperscriptElement>(System::MakeObject<MathematicalText>(u"a"), System::MakeObject<MathematicalText>(u"2"))->Join(System::MakeObject<MathematicalText>(u"+"))->Join(System::MakeObject<MathSuperscriptElement>(System::MakeObject<MathematicalText>(u"b"), System::MakeObject<MathematicalText>(u"2")));
    /// auto block3 = block1->JoinBlock(block2);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBlock> JoinBlock(System::SharedPtr<IMathBlock> other) override;
    /// <summary>
    /// Delimits child elements with separator character (without the brackets)
    /// </summary>
    /// <param name="separatorCharacter">Separator character</param>
    /// <returns>The math element of type <see cref="Aspose::Slides::MathText::IMathDelimiter">IMathDelimiter</see></returns>
    /// <example>Example:
    /// <code>
    /// auto mathBlock = System::MakeObject<MathematicalText>(u"x")->Join(u"y");
    /// auto delimiterElement = mathBlock->Delimit(u'|');
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathDelimiter> Delimit(char16_t separatorCharacter) override;
    /// <summary>
    /// Encloses child elements of this block in specified characters such as parenthesis or another characters as framing
    /// </summary>
    /// <param name="beginningCharacter">Beginning character (usually left bracket)</param>
    /// <param name="endingCharacter">Ending character (usually right bracket)</param>
    /// <returns>The math element of type <see cref="Aspose::Slides::MathText::IMathDelimiter">IMathDelimiter</see> which includes specified characters as framing</returns>
    /// <example>Example:
    /// <code>
    /// auto block = System::MakeObject<MathematicalText>(u"x")->Join(u"+y");
    /// auto delimiter = System::ExplicitCast<IMathElement>(block)->Enclose(u'[', u']');
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathDelimiter> Enclose(char16_t beginningCharacter, char16_t endingCharacter) override;
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathDelimiter> Enclose(char16_t beginningCharacter, char16_t endingCharacter, char16_t separatorCharacter) override;
    /// <summary>
    /// Puts child elements in a vertical array 
    /// </summary>
    /// <returns>New instance of type <see cref="Aspose::Slides::MathText::IMathArray">IMathArray</see></returns>
    /// <example>Example:
    /// <code>
    /// auto array = System::MakeObject<MathematicalText>(u"x1")->Join(u"x2")->Join(u"x3")->ToMathArray();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathArray> ToMathArray() override;
    /// <summary>
    /// Saves content of this <see cref="Aspose::Slides::MathText::MathBlock">MathBlock</see> as MathML
    /// </summary>
    /// <param name="stream">Target stream</param>
    ASPOSE_SLIDES_SHARED_API void WriteAsMathMl(System::SharedPtr<System::IO::Stream> stream) override;
    
protected:

    /// <summary>
    /// Returns true if this instance is a container to store other items
    /// MathBlock instance always returns true
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsContainer() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API MathBlock(int32_t capacity);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MathBlock, CODEPORTING_ARGS(int32_t capacity));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API MathBlock(System::SharedPtr<IMathElement> mathElement, bool dummy);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MathBlock, CODEPORTING_ARGS(System::SharedPtr<IMathElement> mathElement, bool dummy));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<MathParagraph> parentImmediate);
    ASPOSE_SLIDES_LOCAL_API void ResetParent();
    ASPOSE_SLIDES_LOCAL_API void NotifyParentOfChanges();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathBlock();
    
private:

    /// <summary>
    /// Returns Parent_Immediate object.
    /// Read-only <see cref="IDOMObject"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<MathElementCollection> m_mathElements;
    System::WeakPtr<MathParagraph> m_parentImmediate;
    
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IMathElement>>> GetEnumerator() override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


