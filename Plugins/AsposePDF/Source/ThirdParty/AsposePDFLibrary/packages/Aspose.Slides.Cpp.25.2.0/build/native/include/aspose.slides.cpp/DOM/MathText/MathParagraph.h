#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <DOM/MathText/IMathParagraph.h>
#include <cstdint>

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
class EnumConverter;
} // namespace Mappers
class MathParagraphPPTXSerialization;
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
namespace Layout
{
namespace MathMixed
{
class MathBlocksSplitter;
class MathLayoutBlock;
} // namespace MathMixed
} // namespace Layout
namespace MathText
{
class IMathBlock;
class MathBlock;
enum class MathJustification;
class MathPortion;
namespace Rendering
{
class DelimiterDrawing;
class FractionDrawing;
class MathParagraphDrawing;
class MathRenderContext;
class RadicalDrawing;
} // namespace Rendering
} // namespace MathText
namespace PptxSerialization
{
namespace PartParser
{
class ParagraphCollectionPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class ShapeCollection;
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
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Mathematical paragraph that is a container for mathematical blocks (IMathBlock)
/// </summary>
/// <example>Example:
/// <code>
/// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
/// auto mathParagraph = (System::AsCast<Aspose::Slides::MathText::MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathParagraph : public Aspose::Slides::MathText::IMathParagraph, public Aspose::Slides::IDOMObject
{
    typedef MathParagraph ThisType;
    typedef Aspose::Slides::MathText::IMathParagraph BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Layout::MathMixed::MathBlocksSplitter;
    friend class Aspose::Slides::Layout::MathMixed::MathLayoutBlock;
    friend class Aspose::Slides::MathText::Rendering::DelimiterDrawing;
    friend class Aspose::Slides::MathText::Rendering::RadicalDrawing;
    friend class Aspose::Slides::MathText::MathPortion;
    friend class Aspose::Slides::MathText::Rendering::FractionDrawing;
    friend class Aspose::Slides::MathText::Rendering::MathParagraphDrawing;
    friend class Aspose::Slides::MathText::Rendering::MathRenderContext;
    friend class Aspose::Slides::MathText::MathBlock;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::EnumConverter;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::MathParagraphPPTXSerialization;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphCollectionPPTXSerialization;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IMathBlock>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// Paragraph Justification 
    /// Default value: CenteredAsGroup
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// mathParagraph->set_Justification(MathJustification::LeftJustified);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathJustification get_Justification() override;
    /// <summary>
    /// Paragraph Justification 
    /// Default value: CenteredAsGroup
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// mathParagraph->set_Justification(MathJustification::LeftJustified);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Justification(MathJustification value) override;
    /// <summary>
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathParagraph = System::MakeObject<MathParagraph>();
    /// int32_t blocksCount = mathParagraph->get_Count();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    
    /// <summary>
    /// Gets the item at the specified index.
    /// Read-only <see cref="Aspose::Slides::MathText::IMathBlock">IMathBlock</see>.
    /// </summary>
    /// <param name="index">The zero-based index of the item to get</param>
    /// <returns>The block of a mathematical text.</returns>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// mathParagraph->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block1")));
    /// mathParagraph->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block2")));
    /// auto block = mathParagraph->idx_get(1);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBlock> idx_get(int32_t index) override;
    /// <summary>
    /// Gets the item at the specified index.
    /// Read-only <see cref="Aspose::Slides::MathText::IMathBlock">IMathBlock</see>.
    /// </summary>
    /// <param name="index">The zero-based index of the item to get</param>
    /// <param name="value">The block of a mathematical text.</param>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// mathParagraph->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block1")));
    /// mathParagraph->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block2")));
    /// auto block = mathParagraph->idx_get(1);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void idx_set(int32_t index, System::SharedPtr<IMathBlock> value) override;
    
    /// <summary>
    /// Initializes a new instance of the MathParagraph class.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathParagraph = System::MakeObject<MathParagraph>();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathParagraph();
    /// <summary>
    /// Initializes a new instance of the MathParagraph class.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathParagraph = System::MakeObject<MathParagraph>(System::MakeObject<MathBlock>());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathParagraph(System::SharedPtr<IMathBlock> mathBlock);
    
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// mathParagraph->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block1")));
    /// mathParagraph->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block2")));
    /// mathParagraph->Clear();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Adds IMathBlock to the end of collection.
    /// </summary>
    /// <param name="mathBlock">A mathematical block that will be added to the end of the collection</param>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// mathParagraph->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x")));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void Add(System::SharedPtr<IMathBlock> mathBlock) override;
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection/>.
    /// </summary>
    /// <param name="mathBlock">The object to remove from the collection.</param>
    /// <returns>
    /// true if <paramref name="mathBlock"></paramref> was successfully removed from the collection; otherwise, false. 
    /// This method also returns false if <paramref name="mathBlock"></paramref> is not found in the original collection/>.
    /// </returns>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<Aspose::Slides::MathText::MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// mathParagraph->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x")));
    /// auto block = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"y"));
    /// mathParagraph->Add(block);
    /// mathParagraph->Remove(block);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool Remove(System::SharedPtr<IMathBlock> mathBlock) override;
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="mathBlock">The object to locate in the collection.</param>
    /// <returns>
    /// true if <paramref name="mathBlock"></paramref> is found in the collection; otherwise, false.
    /// </returns>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// auto block = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"y"));
    /// mathParagraph->Add(block);
    /// bool contains = mathParagraph->Contains(block);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool Contains(System::SharedPtr<IMathBlock> mathBlock) override;
    /// <summary>
    /// Determines the index of a specific IMathBlock in collection.
    /// </summary>
    /// <param name="mathBlock">The item to locate in the collection.</param>
    /// <returns>
    /// The index of <paramref name="mathBlock"></paramref> if found in the collection; otherwise, -1.
    /// </returns>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// auto block = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"y"));
    /// mathParagraph->Add(block);
    /// int32_t index = mathParagraph->IndexOf(block);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<IMathBlock> mathBlock) override;
    /// <summary>
    /// Inserts IMathBlock into the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which an item should be inserted.</param>
    /// <param name="mathBlock">The IMathBlock to insert.</param>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// auto block = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"y"));
    /// mathParagraph->Insert(0, block);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void Insert(int32_t index, System::SharedPtr<IMathBlock> mathBlock) override;
    /// <summary>
    /// Removes an item at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the item to remove.</param>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// auto block = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"y"));
    /// mathParagraph->Add(block);
    /// mathParagraph->RemoveAt(0);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Saves content of this <see cref="Aspose::Slides::MathText::MathParagraph">MathParagraph</see> as MathML
    /// </summary>
    /// <param name="stream">Target stream</param>
    ASPOSE_SLIDES_SHARED_API void WriteAsMathMl(System::SharedPtr<System::IO::Stream> stream) override;
    /// <summary>
    /// Gets mathematical equation in LaTeX format
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<IAutoShape> shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// System::SharedPtr<IMathParagraph> mathParagraph = (System::AsCast<Aspose::Slides::MathText::MathPortion>(shape->get_TextFrame()->get_Paragraph(0)->get_Portion(0)))->get_MathParagraph();
    /// mathParagraph->Add(System::MakeObject<MathematicalText>(u"a")->Join(u"+")->Join(System::MakeObject<MathematicalText>(u"b")->Join(u"=")->Join(System::MakeObject<MathematicalText>(u"c"))));
    /// System::String mathLatex = mathParagraph->ToLatex();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::String ToLatex() override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_OMathPara() const;
    ASPOSE_SLIDES_LOCAL_API void set_OMathPara(bool value);
    
    static const ASPOSE_SLIDES_LOCAL_API MathJustification c_defaultJustification;
    
    ASPOSE_SLIDES_LOCAL_API MathParagraph(System::SharedPtr<MathPortion> parent);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MathParagraph, CODEPORTING_ARGS(System::SharedPtr<MathPortion> parent));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API MathParagraph(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<IMathBlock>>> mathBlocks);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MathParagraph, CODEPORTING_ARGS(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<IMathBlock>>> mathBlocks));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<MathPortion> parentImmediate);
    ASPOSE_SLIDES_LOCAL_API void NotifyParentOfChanges();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathParagraph();
    
private:

    MathJustification pr_Justification;
    
    /// <summary>
    /// Returns Parent_Immediate object.
    /// Read-only <see cref="IDOMObject"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    bool pr_OMathPara;
    System::WeakPtr<MathPortion> m_parentImmediate;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IMathBlock>>> m_items;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IMathBlock>>> GetEnumerator() override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


