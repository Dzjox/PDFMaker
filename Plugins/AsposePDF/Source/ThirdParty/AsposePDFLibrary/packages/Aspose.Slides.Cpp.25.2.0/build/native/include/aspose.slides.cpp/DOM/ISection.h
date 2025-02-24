#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISectionSlideCollection;
class ISlide;
} // namespace Slides
} // namespace Aspose
namespace System
{
class Guid;
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents section of slides.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISection : public virtual System::Object
{
    typedef ISection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Name of the section.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    /// <summary>
    /// Name of the section.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Name(System::String value) = 0;
    /// <summary>
    /// Section Id.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Guid get_SectionId() = 0;
    /// <summary>
    /// Returns first slide of the section.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> get_StartedFromSlide() = 0;
    
    /// <summary>
    /// Returns list of slides in the section.
    /// </summary>
    /// <returns>List of slides <see cref="Aspose::Slides::ISectionSlideCollection">ISectionSlideCollection</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISectionSlideCollection> GetSlidesListOfSection() = 0;
    
};

} // namespace Slides
} // namespace Aspose


