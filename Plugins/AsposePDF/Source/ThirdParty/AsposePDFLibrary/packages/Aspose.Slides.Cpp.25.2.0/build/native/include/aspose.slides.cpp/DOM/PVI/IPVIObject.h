#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPresentationComponent;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

class ASPOSE_SLIDES_SHARED_CLASS IPVIObject : public virtual Aspose::Slides::IDOMObject
{
    typedef IPVIObject ThisType;
    typedef Aspose::Slides::IDOMObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns parent IPresentationComponent.
    /// Read-only <see cref="Aspose::Slides::IPresentationComponent">IPresentationComponent</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent() = 0;
    /// <summary>
    /// Version.
    /// Read-only <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_LOCAL_API uint32_t get_Version() = 0;
    
};

} // namespace Slides
} // namespace Aspose


