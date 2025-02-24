#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/Zoom/ISummaryZoomSectionCollection.h>

#include "DOM/Zoom/SummaryZoomFrame.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISection;
class ISummaryZoomSection;
namespace PptxSerialization
{
namespace PartParser
{
class SummaryZoomPPTXSerialization;
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
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of Summary Zoom Section objects.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SummaryZoomSectionCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::SummaryZoomFrame>>, public Aspose::Slides::ISummaryZoomSectionCollection
{
    typedef SummaryZoomSectionCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::SummaryZoomFrame>> BaseType;
    typedef Aspose::Slides::ISummaryZoomSectionCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::SummaryZoomFrame;
    friend class Aspose::Slides::PptxSerialization::PartParser::SummaryZoomPPTXSerialization;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<ISummaryZoomSection>>;
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
    /// Read-only <see cref="Aspose::Slides::ISummaryZoomSection">ISummaryZoomSection</see>.
    /// </summary>
    /// <example>The example demonstrates getting Summary Zoom Section element by index:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::ExplicitCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// auto collection = zoomFrame->get_SummaryZoomCollection();
    /// auto zoomSection = collection->idx_get(1);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISummaryZoomSection> idx_get(int32_t index) override;
    
    /// <summary>
    /// Creates new Summary Zoom Section object and add it to the collection
    /// </summary>
    /// <param name="section">Section for a new Summary Zoom Section element <see cref="Aspose::Slides::ISection">ISection</see></param>
    /// <returns>Added <see cref="Aspose::Slides::ISummaryZoomFrame">ISummaryZoomFrame</see> element</returns>
    /// <remarks>
    /// If an element for this section already exists in the collection, the existing element is returned.
    /// </remarks>
    /// <exception cref="System::ArgumentException ">Referenced section does not belong to the current presentation or does not contains any slides.</exception>
    /// <example>The example demonstrates getting Summary Zoom Section element by index:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::ExplicitCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// auto collection = zoomFrame->get_SummaryZoomCollection();
    /// auto newZoomSection = collection->AddSummaryZoomSection(pres->get_Sections()->idx_get(3));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISummaryZoomSection> AddSummaryZoomSection(System::SharedPtr<ISection> section) override;
    /// <summary>
    /// Returns an index of the specified SummaryZoomSection object.
    /// </summary>
    /// <param name="summaryZoomSection">SummaryZoomSection object to find <see cref="Aspose::Slides::ISummaryZoomSection">ISummaryZoomSection</see>.</param>
    /// <returns>Index of a SummaryZoomSection object or -1 if SummaryZoomSection object not from this collection.</returns>
    /// <example>The example demonstrates getting Summary Zoom Section element by index:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::ExplicitCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// auto collection = zoomFrame->get_SummaryZoomCollection();
    /// auto selectedObject = collection->GetSummarySection(pres->get_Sections()->idx_get(2));
    /// int32_t idx = collection->IndexOf(selectedObject);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<ISummaryZoomSection> summaryZoomSection) override;
    /// <summary>
    /// Remove Summary Zoom Section object from the collection.
    /// </summary>
    /// <param name="section">Section for which the Summary Zoom Section element is to be removed <see cref="Aspose::Slides::ISection">ISection</see>.</param>
    /// <example>The example demonstrates getting Summary Zoom Section element by index:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::ExplicitCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// auto collection = zoomFrame->get_SummaryZoomCollection();
    /// collection->RemoveSummaryZoomSection(pres->get_Sections()->idx_get(1));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void RemoveSummaryZoomSection(System::SharedPtr<ISection> section) override;
    /// <summary>
    /// Returns Summary Zoom Section element for the given section.
    /// </summary>
    /// <param name="section">Section to find <see cref="Aspose::Slides::ISection">ISection</see></param>
    /// <returns><see cref="Aspose::Slides::ISummaryZoomSection">ISummaryZoomSection</see> or null if collection does not contains element for the section.</returns>
    /// <example>The example demonstrates getting Summary Zoom Section element by index:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::ExplicitCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// auto collection = zoomFrame->get_SummaryZoomCollection();
    /// auto selectedObject = collection->GetSummarySection(pres->get_Sections()->idx_get(2));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISummaryZoomSection> GetSummarySection(System::SharedPtr<ISection> section) override;
    /// <summary>
    /// Removes all SummaryZoomSection objects from the collection.
    /// </summary>
    /// <example>The example demonstrates getting Summary Zoom Section element by index:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::ExplicitCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// auto collection = zoomFrame->get_SummaryZoomCollection();
    /// collection->Clear();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Copies the entire collection to the specified array.
    /// </summary>
    /// <param name="array">Target array</param>
    /// <param name="index">Index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<ISummaryZoomSection>> array, int32_t index) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ISummaryZoomSection>>> GetEnumerator() override;
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
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ISummaryZoomSection>>> m_zoomObjects;
    
    ASPOSE_SLIDES_LOCAL_API SummaryZoomSectionCollection(System::SharedPtr<SummaryZoomFrame> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SummaryZoomSectionCollection, CODEPORTING_ARGS(System::SharedPtr<SummaryZoomFrame> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISummaryZoomSection> AddSummaryZoomSection(System::SharedPtr<ISummaryZoomSection> summaryZoomObject);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~SummaryZoomSectionCollection();
    
private:

    ASPOSE_SLIDES_LOCAL_API void RemoveSummaryZoomSection(System::SharedPtr<ISummaryZoomSection> summaryZoomSection);
    ASPOSE_SLIDES_LOCAL_API void ResetObjectPositions();
    
};

} // namespace Slides
} // namespace Aspose


