#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/eventhandler.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/IParagraphCollection.h>

#include "DOM/TextFrame.h"
#include "DOM/ParagraphEventArgs.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class Effect;
class Sequence;
} // namespace Animation
class AutoShape;
template <typename, typename> class BasePortionFormatEffectiveData;
class BulletFormatEffectiveData;
class BulletFormatImpl;
namespace Charts
{
class ChartTitle;
class DataLabel;
class DisplayUnitLabel;
class Trendline;
} // namespace Charts
namespace Export
{
class ITextToHtmlConversionOptions;
} // namespace Export
namespace HtmlIO
{
class HtmlToPptxTextConverter;
} // namespace HtmlIO
class IBaseSlide;
namespace Import
{
class IExternalResourceResolver;
} // namespace Import
class IParagraph;
class IPresentation;
namespace Layout
{
class ParagraphLayout;
class PortionLayout;
} // namespace Layout
namespace MathText
{
class MathPortion;
} // namespace MathText
namespace OdpSerialization
{
namespace PartParser
{
namespace Animation
{
class AnimBehaviorTargetOdpDeserialization;
} // namespace Animation
} // namespace PartParser
} // namespace OdpSerialization
class Paragraph;
class ParagraphFormat;
class ParagraphFormatEffectiveData;
class Portion;
class PortionFormatEffectiveData;
namespace PptSerialization
{
class HyperlinkPPTSerialization;
class PptTextFrameDeserializationContext;
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class ParagraphCollectionPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace SmartArt
{
class DiagramPoint;
} // namespace SmartArt
class StyleColorGetter;
namespace TextLayoutParts
{
class CharIterator_PPT;
} // namespace TextLayoutParts
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of a paragraphs.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ParagraphCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::TextFrame>>, public Aspose::Slides::IParagraphCollection
{
    typedef ParagraphCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::TextFrame>> BaseType;
    typedef Aspose::Slides::IParagraphCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    template<typename FT0, typename FT1> friend class Aspose::Slides::BasePortionFormatEffectiveData;
    friend class Aspose::Slides::BulletFormatEffectiveData;
    friend class Aspose::Slides::MathText::MathPortion;
    friend class Aspose::Slides::Portion;
    friend class Aspose::Slides::ParagraphFormatEffectiveData;
    friend class Aspose::Slides::PortionFormatEffectiveData;
    friend class Aspose::Slides::Layout::ParagraphLayout;
    friend class Aspose::Slides::Layout::PortionLayout;
    friend class Aspose::Slides::BulletFormatImpl;
    friend class Aspose::Slides::Charts::ChartTitle;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::Charts::DisplayUnitLabel;
    friend class Aspose::Slides::Charts::Trendline;
    friend class Aspose::Slides::HtmlIO::HtmlToPptxTextConverter;
    friend class Aspose::Slides::TextLayoutParts::CharIterator_PPT;
    friend class Aspose::Slides::StyleColorGetter;
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimBehaviorTargetOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::PptTextFrameDeserializationContext;
    friend class Aspose::Slides::Animation::Effect;
    friend class Aspose::Slides::Animation::Sequence;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::Paragraph;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphCollectionPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::HyperlinkPPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IParagraph>>;
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
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Gets a value indicating whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <returns>
    /// true if the <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only; otherwise, false.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool get_IsReadOnly();
    
    /// <summary>
    /// Gets the element at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IParagraph> idx_get(int32_t index) override;
    
    /// <summary>
    /// Adds a Paragraph to the end of collection.
    /// </summary>
    /// <param name="value">The Paragraph to be added to the end of the collection.</param>
    ASPOSE_SLIDES_SHARED_API void Add(System::SharedPtr<IParagraph> value) override;
    /// <summary>
    /// Adds a content of ParagraphCollection to the end of collection.
    /// </summary>
    /// <param name="value">The ParagraphCollection to be added to the end of the collection.</param>
    /// <returns>The index at which the Paragraph has been added or -1 if there are nothing to add.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t Add(System::SharedPtr<IParagraphCollection> value) override;
    /// <summary>
    /// Determines the index of a specific item in the <see cref="System::Collections::Generic::IList">IList</see>.
    /// </summary>
    /// <returns>
    /// The index of <paramref name="item"></paramref> if found in the list; otherwise, -1.
    /// </returns>
    /// <param name="item">The object to locate in the <see cref="System::Collections::Generic::IList">IList</see>.</param>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<IParagraph> item);
    /// <summary>
    /// Inserts a Paragraph into the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which Paragraph should be inserted.</param>
    /// <param name="value">The Paragraph to insert.</param>
    ASPOSE_SLIDES_SHARED_API void Insert(int32_t index, System::SharedPtr<IParagraph> value) override;
    /// <summary>
    /// Inserts a content of ParagraphCollection into the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which paragraphs should be inserted.</param>
    /// <param name="value">The paragraphs to insert.</param>
    ASPOSE_SLIDES_SHARED_API void Insert(int32_t index, System::SharedPtr<IParagraphCollection> value) override;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> contains a specific value.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> is found in the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false.
    /// </returns>
    /// <param name="item">The object to locate in the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param>
    ASPOSE_SLIDES_SHARED_API bool Contains(System::SharedPtr<IParagraph> item);
    /// <summary>
    /// Copies the elements of the <see cref="System::Collections::Generic::ICollection">ICollection</see> to an <see cref="System::Array"></see>, starting at a particular <see cref="System::Array"></see> index.
    /// </summary>
    /// <param name="array">The one-dimensional <see cref="System::Array"></see> that is the destination of the elements copied from <see cref="System::Collections::Generic::ICollection">ICollection</see>. The <see cref="System::Array"></see> must have zero-based indexing.</param><param name="arrayIndex">The zero-based index in <paramref name="array"></paramref> at which copying begins.</param><exception cref="System::ArgumentNullException"><paramref name="array"></paramref> is null.</exception><exception cref="System::ArgumentOutOfRangeException"><paramref name="arrayIndex"></paramref> is less than 0.</exception><exception cref="System::ArgumentException">The number of elements in the source <see cref="System::Collections::Generic::ICollection">ICollection</see> is greater than the available space from <paramref name="arrayIndex"></paramref> to the end of the destination <paramref name="array"></paramref>.</exception>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IParagraph>> array, int32_t arrayIndex);
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes the first occurrence of a specific object from the <see cref="System::Collections::Generic::ICollection">ICollection</see>.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> was successfully removed from the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false. This method also returns false if <paramref name="item"></paramref> is not found in the original <see cref="System::Collections::Generic::ICollection">ICollection</see>.
    /// </returns>
    /// <param name="item">The object to remove from the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param><exception cref="System::NotSupportedException">The <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only.</exception>
    ASPOSE_SLIDES_SHARED_API bool Remove(System::SharedPtr<IParagraph> item) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IParagraph>>> GetEnumerator() override;
    /// <summary>
    /// Adds text from specified html string to the collection.
    /// </summary>
    /// <param name="text">HTML text.</param>
    ASPOSE_SLIDES_SHARED_API void AddFromHtml(System::String text) override;
    /// <summary>
    /// Adds text from specified html string to the collection.
    /// </summary>
    /// <param name="text">HTML text.</param>
    /// <param name="resolver">Resolver callback object which resolves URIs and fetches referrenced objects.</param>
    /// <param name="uri">URI for adding HTML document. Used for resolving relative links.</param>
    /// <remarks>Specifying resolver can potentially introduce a vulnurability. Use with caution.</remarks>
    ASPOSE_SLIDES_SHARED_API void AddFromHtml(System::String text, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) override;
    /// <summary>
    /// Converts specifying paragraphs to the HTML and returns it as String object.
    /// </summary>
    /// <param name="firstParagraphIndex">First paragraph index <see cref="int32_t"></see></param>
    /// <param name="paragraphsCount">Paragraph count <see cref="int32_t"></see></param>
    /// <param name="options">Convert options <see cref="Aspose::Slides::Export::ITextToHtmlConversionOptions">Export::ITextToHtmlConversionOptions</see></param>
    /// <returns>Generated HTML.</returns>
    ASPOSE_SLIDES_SHARED_API System::String ExportToHtml(int32_t firstParagraphIndex, int32_t paragraphsCount, System::SharedPtr<Export::ITextToHtmlConversionOptions> options) override;
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
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TextFrame> get_ParentTextFrame();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version_OldMode();
    ASPOSE_SLIDES_LOCAL_API System::String get_Text();
    ASPOSE_SLIDES_LOCAL_API void set_Text(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IBaseSlide> get_Slide() override;
    
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<char16_t> NewLineChars;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IParagraph> Add();
    ASPOSE_SLIDES_LOCAL_API int32_t GetParagraphIndex(System::SharedPtr<Paragraph> paragraph);
    ASPOSE_SLIDES_LOCAL_API void Changed_OldMode();
    ASPOSE_SLIDES_LOCAL_API void Notify(System::SharedPtr<Paragraph> sender);
    
    ASPOSE_SLIDES_LOCAL_API ParagraphCollection(System::SharedPtr<TextFrame> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ParagraphCollection, CODEPORTING_ARGS(System::SharedPtr<TextFrame> parentImmediate));
    
    /// @cond
    System::EventHandler<System::SharedPtr<ParagraphEventArgs>> ParagraphRemoved;
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ParagraphCollection();
    
private:

    /// <summary>
    /// Returns the parent presentation of a paragraphs collection.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ParagraphFormat> EmptyParagraphFormat;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IParagraph>>> m_paras;
    uint32_t m_version_OldMode;
    
    ASPOSE_SLIDES_LOCAL_API void FireParagraphRemoved(System::SharedPtr<Paragraph> paragraph);
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


