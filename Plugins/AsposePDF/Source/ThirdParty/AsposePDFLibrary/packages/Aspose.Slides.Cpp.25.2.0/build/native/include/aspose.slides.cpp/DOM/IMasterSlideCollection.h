#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IMasterSlide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of master slides.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMasterSlideCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IMasterSlide>>
{
    typedef IMasterSlideCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IMasterSlide>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::IMasterSlide">IMasterSlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterSlide> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection.
    /// </summary>
    /// <param name="value">The master slide to remove from the collection.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<IMasterSlide> value) = 0;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes unused master slides.
    /// </summary>
    /// <param name="ignorePreserveField">Determines, whether this method should remove unused 
    /// master even if its <see cref="Aspose::Slides::IMasterSlide::set_Preserve">IMasterSlide::set_Preserve()</see> property is set to true.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveUnused(bool ignorePreserveField) = 0;
    /// <summary>
    /// Adds a copy of a specified master slide to the end of the collection.
    /// Linked layout slides will be copied too.
    /// </summary>
    /// <param name="sourceMaster">Slide to clone.</param>
    /// <returns>Added slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterSlide> AddClone(System::SharedPtr<IMasterSlide> sourceMaster) = 0;
    /// <summary>
    /// Inserts a copy of a specified master slide to specified position of the collection.
    /// Linked layout slides will be copied too.
    /// </summary>
    /// <param name="index">Index of new slide.</param>
    /// <param name="sourceMaster">Slide to clone.</param>
    /// <returns>Inserted master slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterSlide> InsertClone(int32_t index, System::SharedPtr<IMasterSlide> sourceMaster) = 0;
    
};

} // namespace Slides
} // namespace Aspose


