#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISection;
class ISlide;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of sections.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISectionCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ISection>>
{
    typedef ISectionCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ISection>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::ISection">ISection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISection> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Add new section started form specific slide.
    /// </summary>
    /// <param name="name">Name of the section</param>
    /// <param name="startedFromSlide">First slide of section</param>
    /// <returns>Added section.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISection> AddSection(System::String name, System::SharedPtr<ISlide> startedFromSlide) = 0;
    /// <summary>
    /// Add empty section to specified position of the collection.
    /// </summary>
    /// <param name="name">Name of the section</param>
    /// <param name="index">Index of new section.</param>
    /// <returns>Added section.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISection> AddEmptySection(System::String name, int32_t index) = 0;
    /// <summary>
    /// Remove section and slides contained in the section.
    /// </summary>
    /// <param name="section">The section to remove from the collection.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveSectionWithSlides(System::SharedPtr<ISection> section) = 0;
    /// <summary>
    /// Remove section. Slides contained in the section will be merged into previous section.
    /// </summary>
    /// <param name="section">The section to remove from the collection.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveSection(System::SharedPtr<ISection> section) = 0;
    /// <summary>
    /// Moves section and its slides from the collection to the specified position.
    /// </summary>
    /// <param name="index">Target index.</param>
    /// <param name="section">Section to move.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReorderSectionWithSlides(System::SharedPtr<ISection> section, int32_t index) = 0;
    /// <summary>
    /// Add empty section to the end of the collection.
    /// </summary>
    /// <param name="name">Name of the section</param>
    /// <returns>Added section.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISection> AppendEmptySection(System::String name) = 0;
    /// <summary>
    /// Returns an index of the specified section in the collection.
    /// </summary>
    /// <param name="section">Section to find.</param>
    /// <returns>Index of a section or -1 if section not from this collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(System::SharedPtr<ISection> section) = 0;
    /// <summary>
    /// Removes all sections from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Slides
} // namespace Aspose


