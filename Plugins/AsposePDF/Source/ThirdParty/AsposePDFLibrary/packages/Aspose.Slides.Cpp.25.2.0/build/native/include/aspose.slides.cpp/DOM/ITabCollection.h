#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ITab;
enum class TabAlignment;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of tabs.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITabCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ITab>>
{
    typedef ITabCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ITab>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::ITab">ITab</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITab> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds a Tab to the collection.
    /// </summary>
    /// <param name="position">Tab position.</param>
    /// <param name="align">Tab alignment.</param>
    /// <returns>Added tab.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITab> Add(double position, TabAlignment align) = 0;
    /// <summary>
    /// Adds a Tab to the collection.
    /// </summary>
    /// <param name="value">The Tab object to be added at the end of the collection.</param>
    /// <returns>The index at which the tab was added.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t Add(System::SharedPtr<ITab> value) = 0;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


