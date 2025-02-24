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
class IVbaReference;
} // namespace Vba
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Vba {

/// <summary>
/// Represents a collection of a VBA Project references.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IVbaReferenceCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Vba::IVbaReference>>
{
    typedef IVbaReferenceCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Vba::IVbaReference>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVbaReference> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds the new reference to references collection
    /// </summary>
    /// <param name="value">VBA project reference <see cref="Aspose::Slides::Vba::IVbaReference">IVbaReference</see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::SharedPtr<IVbaReference> value) = 0;
    
};

} // namespace Vba
} // namespace Slides
} // namespace Aspose


