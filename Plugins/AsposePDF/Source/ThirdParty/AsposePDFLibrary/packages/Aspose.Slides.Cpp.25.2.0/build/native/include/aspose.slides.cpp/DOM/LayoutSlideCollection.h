#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/ILayoutSlideCollection.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class GlobalLayoutSlideCollection;
class ILayoutSlide;
class IPresentationComponent;
class LayoutSlide;
class MasterLayoutSlideCollection;
class Presentation;
enum class SlideLayoutType : int8_t;
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
/// Represents a base class for collection of a layout slides.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS LayoutSlideCollection : public virtual Aspose::Slides::ILayoutSlideCollection, public Aspose::Slides::IDOMObject
{
    typedef LayoutSlideCollection ThisType;
    typedef Aspose::Slides::ILayoutSlideCollection BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::MasterLayoutSlideCollection;
    friend class Aspose::Slides::GlobalLayoutSlideCollection;
    friend class Aspose::Slides::LayoutSlide;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<ILayoutSlide>>;
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
    /// Returns the number of layout slides in a collection.
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
    /// Returns the layout slide by index.
    /// Read-only <see cref="Aspose::Slides::LayoutSlide">LayoutSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILayoutSlide> idx_get(int32_t index) override;
    
    /// <summary>
    /// Returns the first layout slide of specified type.
    /// <param name="type">A type of layout slide to find.</param>
    /// <returns><see cref="Aspose::Slides::LayoutSlide">LayoutSlide</see> with specified type or null if no layouts found.</returns>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILayoutSlide> GetByType(SlideLayoutType type) override;
    /// <summary>
    /// Removes a layout from the collection.
    /// </summary>
    /// <param name="value">The layout slide to remove from the collection.</param>
    /// <exception cref="PptxEditException">
    /// Thrown if layout is used in presentation (its HasDependingSlides property is true).
    /// </exception>
    /// <remarks>
    /// 1) To avoid throwing of the PptxEditException check layout's HasDependingSlides property before.
    /// 2) You can use also <see cref="ILayoutSlide::Remove"></see> method to simplify code.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<ILayoutSlide> value) override;
    /// <summary>
    /// Removes unused layout slides (layout slides whose HasDependingSlides is false).
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void RemoveUnused() override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ILayoutSlide>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<ILayoutSlide>> array, int32_t index) override;
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
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Presentation> get_PresentationInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ILayoutSlide>>> m_slides;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    
    ASPOSE_SLIDES_LOCAL_API LayoutSlideCollection(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LayoutSlideCollection, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<LayoutSlide> GetById(uint32_t id);
    ASPOSE_SLIDES_LOCAL_API int32_t IndexOf(System::SharedPtr<ILayoutSlide> value);
    virtual ASPOSE_SLIDES_SHARED_API void Add(System::SharedPtr<ILayoutSlide> value);
    ASPOSE_SLIDES_LOCAL_API void Insert(int32_t index, System::SharedPtr<ILayoutSlide> value);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~LayoutSlideCollection();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    
};

} // namespace Slides
} // namespace Aspose


