#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IPresentationComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IBaseSlide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a component of a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISlideComponent : public Aspose::Slides::IPresentationComponent
{
    typedef ISlideComponent ThisType;
    typedef Aspose::Slides::IPresentationComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the base slide.
    /// Read-only <see cref="Aspose::Slides::IBaseSlide">IBaseSlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBaseSlide> get_Slide() = 0;
    
};

} // namespace Slides
} // namespace Aspose


