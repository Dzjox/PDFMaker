#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/ISectionCollection.h>

#include "DOM/Presentation.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISection;
class ISlide;
namespace PptxSerialization
{
namespace PartParser
{
class SectionListPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class ShapeCollection;
class SlideCollection;
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
class Guid;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of sections.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SectionCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>>, public Aspose::Slides::ISectionCollection
{
    typedef SectionCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>> BaseType;
    typedef Aspose::Slides::ISectionCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptxSerialization::PartParser::SectionListPPTXSerialization;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::SlideCollection;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<ISection>>;
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
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() override;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::ISection">ISection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISection> idx_get(int32_t index) override;
    
    /// <summary>
    /// Add slides section started form specific slide.
    /// </summary>
    /// <param name="name">Name of the section</param>
    /// <param name="startedFromSlide">First slide of section</param>
    /// <returns>Added section.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISection> AddSection(System::String name, System::SharedPtr<ISlide> startedFromSlide) override;
    /// <summary>
    /// Add empty section to the end of the collection.
    /// </summary>
    /// <param name="name">Name of the section</param>
    /// <returns>Added section.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISection> AppendEmptySection(System::String name) override;
    /// <summary>
    /// Add empty section to specified position of the collection.
    /// </summary>
    /// <param name="name">Name of the section</param>
    /// <param name="index">Index of new section.</param>
    /// <returns>Added section.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISection> AddEmptySection(System::String name, int32_t index) override;
    /// <summary>
    /// Returns an index of the specified section in the collection.
    /// </summary>
    /// <param name="section">Section to find.</param>
    /// <returns>Index of a section or -1 if section not from this collection.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<ISection> section) override;
    /// <summary>
    /// Remove section and slides contained in the section.
    /// </summary>
    /// <param name="section">The section to remove from the collection.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveSectionWithSlides(System::SharedPtr<ISection> section) override;
    /// <summary>
    /// Remove section. Slides contained in the section will be merged into previous section.
    /// </summary>
    /// <param name="section">The section to remove from the collection.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveSection(System::SharedPtr<ISection> section) override;
    /// <summary>
    /// Moves section and its slides from the collection to the specified position.
    /// </summary>
    /// <param name="index">Target index.</param>
    /// <param name="section">Section to move.</param>
    ASPOSE_SLIDES_SHARED_API void ReorderSectionWithSlides(System::SharedPtr<ISection> section, int32_t index) override;
    /// <summary>
    /// Removes all sections from the collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Copies the entire collection to the specified array.
    /// </summary>
    /// <param name="array">Target array</param>
    /// <param name="index">Index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<ISection>> array, int32_t index) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ISection>>> GetEnumerator() override;
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
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ISection>>> m_sections;
    
    ASPOSE_SLIDES_LOCAL_API SectionCollection(System::SharedPtr<Presentation> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SectionCollection, CODEPORTING_ARGS(System::SharedPtr<Presentation> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISection> AppendSection(System::String name, System::SharedPtr<ISlide> startedFromSlide, System::Guid id);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISection> GetSlideSection(System::SharedPtr<ISlide> slide);
    ASPOSE_SLIDES_LOCAL_API void UpdateSectionsStartedFromSlideValue(System::SharedPtr<ISlide> slide);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~SectionCollection();
    
};

} // namespace Slides
} // namespace Aspose


