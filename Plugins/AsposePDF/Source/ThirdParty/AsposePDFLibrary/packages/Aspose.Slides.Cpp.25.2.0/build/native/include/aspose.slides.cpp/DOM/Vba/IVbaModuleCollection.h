#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Vba
{
class IVbaModule;
} // namespace Vba
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Vba {

/// <summary>
/// Represents a collection of a VBA Project modules.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IVbaModuleCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Vba::IVbaModule>>
{
    typedef IVbaModuleCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Vba::IVbaModule>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVbaModule> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds a new empty module to the VBA Project.
    /// </summary>
    /// <param name="name">Name of the module</param>
    /// <returns>Added module.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVbaModule> AddEmptyModule(System::String name) = 0;
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection.
    /// </summary>
    /// <param name="value">The module to remove from the collection.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<IVbaModule> value) = 0;
    
};

} // namespace Vba
} // namespace Slides
} // namespace Aspose


