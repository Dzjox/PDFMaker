#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IMasterHandoutSlide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Master handout slide manager.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMasterHandoutSlideManager : public virtual System::Object
{
    typedef IMasterHandoutSlideManager ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a master for all notes slides of this presentation if there is one, otherwise returns null.
    /// Read-only <see cref="Aspose::Slides::IMasterHandoutSlide">IMasterHandoutSlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterHandoutSlide> get_MasterHandoutSlide() = 0;
    
    /// <summary>
    /// Sets default master handout slide to related handout slide.
    /// </summary>
    /// <returns>Master handout slide <see cref="Aspose::Slides::IMasterHandoutSlide">IMasterHandoutSlide</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterHandoutSlide> SetDefaultMasterHandoutSlide() = 0;
    /// <summary>
    /// Removes master handout slide.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveMasterHandoutSlide() = 0;
    
};

} // namespace Slides
} // namespace Aspose


