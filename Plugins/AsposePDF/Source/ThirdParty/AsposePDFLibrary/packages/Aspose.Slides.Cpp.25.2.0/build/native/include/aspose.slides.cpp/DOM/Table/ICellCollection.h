#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/ISlideComponent.h"
#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICell;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of cells.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ICellCollection : public Aspose::Slides::ISlideComponent, public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ICell>>
{
    typedef ICellCollection ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ICell>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a cell by it's position.
    /// Read-only <see cref="Aspose::Slides::ICell">ICell</see>.
    /// </summary>
    /// <remarks>
    /// One CellEx object can be returned for several indexes in case cell is merged.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICell> idx_get(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


