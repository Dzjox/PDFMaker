#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/IPortionCollection.h>

#include "DOM/Paragraph.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPortion;
class IPortionData;
namespace MathText
{
class MathPortion;
} // namespace MathText
class ParagraphAsIParagraphData;
class Portion;
namespace PptSerialization
{
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class ParagraphCollectionPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
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
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of portions.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PortionCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Paragraph>>, public Aspose::Slides::IPortionCollection
{
    typedef PortionCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Paragraph>> BaseType;
    typedef Aspose::Slides::IPortionCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ParagraphAsIParagraphData;
    friend class Aspose::Slides::MathText::MathPortion;
    friend class Aspose::Slides::Portion;
    friend class Aspose::Slides::Paragraph;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphCollectionPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IPortion>>;
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortion> idx_get(int32_t index) override;
    /// <summary>
    /// Gets the element at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void idx_set(int32_t index, System::SharedPtr<IPortion> value);
    
    /// <summary>
    /// Adds a Portion to the end of collection.
    /// </summary>
    /// <param name="value">The Portion to be added to the end of the collection.</param>
    ASPOSE_SLIDES_SHARED_API void Add(System::SharedPtr<IPortion> value) override;
    /// <summary>
    /// Determines the index of a specific item in the <see cref="System::Collections::Generic::IList">IList</see>.
    /// </summary>
    /// <returns>
    /// The index of <paramref name="item"></paramref> if found in the list; otherwise, -1.
    /// </returns>
    /// <param name="item">The object to locate in the <see cref="System::Collections::Generic::IList">IList</see>.</param>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<IPortion> item) override;
    /// <summary>
    /// Inserts a Portion into the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which Portion should be inserted.</param>
    /// <param name="value">The Portion to insert.</param>
    ASPOSE_SLIDES_SHARED_API void Insert(int32_t index, System::SharedPtr<IPortion> value) override;
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
    ASPOSE_SLIDES_SHARED_API bool Contains(System::SharedPtr<IPortion> item) override;
    /// <summary>
    /// Copies the elements of the <see cref="System::Collections::Generic::ICollection">ICollection</see> to an <see cref="System::Array"></see>, starting at a particular <see cref="System::Array"></see> index.
    /// </summary>
    /// <param name="array">The one-dimensional <see cref="System::Array"></see> that is the destination of the elements copied from <see cref="System::Collections::Generic::ICollection">ICollection</see>. The <see cref="System::Array"></see> must have zero-based indexing.</param><param name="arrayIndex">The zero-based index in <paramref name="array"></paramref> at which copying begins.</param><exception cref="System::ArgumentNullException"><paramref name="array"></paramref> is null.</exception><exception cref="System::ArgumentOutOfRangeException"><paramref name="arrayIndex"></paramref> is less than 0.</exception><exception cref="System::ArgumentException">The number of elements in the source <see cref="System::Collections::Generic::ICollection">ICollection</see> is greater than the available space from <paramref name="arrayIndex"></paramref> to the end of the destination <paramref name="array"></paramref>.</exception>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IPortion>> array, int32_t arrayIndex);
    /// <summary>
    /// Removes the first occurrence of a specific object from the <see cref="System::Collections::Generic::ICollection">ICollection</see>.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> was successfully removed from the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false. This method also returns false if <paramref name="item"></paramref> is not found in the original <see cref="System::Collections::Generic::ICollection">ICollection</see>.
    /// </returns>
    /// <param name="item">The object to remove from the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param><exception cref="System::NotSupportedException">The <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only.</exception>
    ASPOSE_SLIDES_SHARED_API bool Remove(System::SharedPtr<IPortion> item) override;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IPortion>>> GetEnumerator() override;
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
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Paragraph> get_ParentParagraph();
    
    ASPOSE_SLIDES_LOCAL_API PortionCollection(System::SharedPtr<Paragraph> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PortionCollection, CODEPORTING_ARGS(System::SharedPtr<Paragraph> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPortion> Add();
    ASPOSE_SLIDES_LOCAL_API void AddInternal(System::SharedPtr<Portion> value);
    ASPOSE_SLIDES_LOCAL_API void RemoveLast();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<IPortionData>>> AsIPortionDatas();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~PortionCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IPortion>>> m_ports;
    
    ASPOSE_SLIDES_LOCAL_API void Changed(System::SharedPtr<IPortion> port);
    
};

} // namespace Slides
} // namespace Aspose


