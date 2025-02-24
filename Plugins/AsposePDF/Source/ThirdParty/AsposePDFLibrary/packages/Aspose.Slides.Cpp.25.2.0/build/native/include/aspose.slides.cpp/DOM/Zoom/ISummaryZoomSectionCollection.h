#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISection;
class ISummaryZoomSection;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of Summary Zoom Section objects.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISummaryZoomSectionCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ISummaryZoomSection>>
{
    typedef ISummaryZoomSectionCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ISummaryZoomSection>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISummaryZoomSection> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Creates new Summary Zoom Section object and add it to the collection
    /// </summary>
    /// <param name="section">Section for a new Summary Zoom Section element <see cref="Aspose::Slides::ISection">ISection</see></param>
    /// <returns>Added <see cref="Aspose::Slides::ISummaryZoomFrame">ISummaryZoomFrame</see> element</returns>
    /// <remarks>
    /// If an element for this section already exists in the collection, the existing element is returned.
    /// </remarks>
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISummaryZoomSection> AddSummaryZoomSection(System::SharedPtr<ISection> section) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISummaryZoomSection> GetSummarySection(System::SharedPtr<ISection> section) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveSummaryZoomSection(System::SharedPtr<ISection> section) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(System::SharedPtr<ISummaryZoomSection> summaryZoomSection) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Slides
} // namespace Aspose


