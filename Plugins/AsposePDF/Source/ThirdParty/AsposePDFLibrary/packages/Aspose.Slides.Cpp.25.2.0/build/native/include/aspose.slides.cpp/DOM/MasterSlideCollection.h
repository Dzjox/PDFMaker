#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/IMasterSlideCollection.h>

#include "DOM/Presentation.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class ExportNotesSlides;
} // namespace Export
class GlobalLayoutSlideCollection;
class IMasterSlide;
class MasterSlide;
namespace PptSerialization
{
class PptSlideDeserializationContext;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class PresentationPartParser;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
class PresentationTemplate;
class SlideCollection;
namespace ThmxSerialization
{
class ThmxDeserializator;
} // namespace ThmxSerialization
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
/// Represents a collection of master slides.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MasterSlideCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>>, public Aspose::Slides::IMasterSlideCollection
{
    typedef MasterSlideCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>> BaseType;
    typedef Aspose::Slides::IMasterSlideCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::GlobalLayoutSlideCollection;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::PptSerialization::PptSlideDeserializationContext;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::PresentationPartParser;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PresentationTemplate;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IMasterSlide>>;
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
    /// Read-only <see cref="Aspose::Slides::MasterSlide">MasterSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterSlide> idx_get(int32_t index) override;
    
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection.
    /// </summary>
    /// <param name="value">The master slide to remove from the collection.</param>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<IMasterSlide> value) override;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    /// <exception cref="PptxEditException">
    /// Thrown if the master to remove is used in presentation (its HasDependingSlides property is true).
    /// </exception>
    /// <remarks>
    /// To avoid throwing of the PptxEditException check master's HasDependingSlides property before.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes unused master slides.
    /// </summary>
    /// <param name="ignorePreserveField">Determines, whether this method should remove unused master even if its <see cref="Aspose::Slides::MasterSlide::set_Preserve">MasterSlide::set_Preserve()</see> property is set to true.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveUnused(bool ignorePreserveField) override;
    /// <summary>
    /// Adds a copy of a specified master slide to the end of the collection.
    /// Linked layout slides will be copied too.
    /// </summary>
    /// <param name="sourceMaster">Slide to clone.</param>
    /// <returns>Added slide.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterSlide> AddClone(System::SharedPtr<IMasterSlide> sourceMaster) override;
    /// <summary>
    /// Inserts a copy of a specified master slide to specified position of the collection.
    /// Linked layout slides will be copied too.
    /// </summary>
    /// <param name="index">Index of new slide.</param>
    /// <param name="sourceMaster">Slide to clone.</param>
    /// <returns>Inserted master slide.</returns>
    /// <example>
    /// The following example shows how to clone master slide in another PowerPoint Presentation.
    /// <code>
    /// // Instantiate Presentation class to load the source presentation file
    /// auto srcPres = System::MakeObject<Presentation>(u"CloneToAnotherPresentationWithMaster.pptx");
    /// 
    /// // Instantiate Presentation class for destination presentation (where slide is to be cloned)
    /// auto destPres = System::MakeObject<Presentation>();
    /// 
    /// // Instantiate ISlide from the collection of slides in source presentation along with
    /// // Master slide
    /// auto sourceSlide = srcPres->get_Slides()->idx_get(0);
    /// auto sourceMaster = sourceSlide->get_LayoutSlide()->get_MasterSlide();
    /// // Get Master Slides of destination presentation
    /// auto masters = destPres->get_Masters();
    /// // Clone the desired master slide from the source presentation to the collection of masters in the
    /// // Destination presentation
    /// System::SharedPtr<IMasterSlide> iSlide = masters->AddClone(sourceMaster);
    /// // Collection of slides in the destination presentation
    /// auto slides = destPres->get_Slides();
    /// // Clone source slide to destination slides collection.
    /// slides->AddClone(sourceSlide, iSlide, true);
    /// // Save the destination presentation to disk
    /// destPres->Save(u"CloneToAnotherPresentationWithMaster_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterSlide> InsertClone(int32_t index, System::SharedPtr<IMasterSlide> sourceMaster) override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IMasterSlide>> array, int32_t index) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IMasterSlide>>> GetEnumerator() override;
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
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IMasterSlide>>> m_slides;
    
    ASPOSE_SLIDES_LOCAL_API MasterSlideCollection(System::SharedPtr<Presentation> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MasterSlideCollection, CODEPORTING_ARGS(System::SharedPtr<Presentation> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void Add(System::SharedPtr<IMasterSlide> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IMasterSlide> AddEmptyMasterSlide();
    ASPOSE_SLIDES_LOCAL_API int32_t IndexOf(System::SharedPtr<IMasterSlide> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MasterSlide> CreateClone(System::SharedPtr<MasterSlide> sourceMaster, bool cloneLinkedLayouts);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IMasterSlide> CreateCloneOrGetCached(System::SharedPtr<IMasterSlide> sourceMaster, bool cloneLinkedLayouts);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~MasterSlideCollection();
    
};

} // namespace Slides
} // namespace Aspose


