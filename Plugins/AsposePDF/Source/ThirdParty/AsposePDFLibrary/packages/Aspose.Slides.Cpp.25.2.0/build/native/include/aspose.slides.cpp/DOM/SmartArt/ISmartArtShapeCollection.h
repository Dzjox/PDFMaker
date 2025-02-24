#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace SmartArt
{
class ISmartArtShape;
} // namespace SmartArt
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SmartArt {

/// <summary>
/// Represents a collection of SmartArt shapes
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISmartArtShapeCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::SmartArt::ISmartArtShape>>
{
    typedef ISmartArtShapeCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::SmartArt::ISmartArtShape>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtShape">ISmartArtShape</see>.
    /// <param name="index">Zero-based index of the element</param>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtShape> idx_get(int32_t index) = 0;
    
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose


