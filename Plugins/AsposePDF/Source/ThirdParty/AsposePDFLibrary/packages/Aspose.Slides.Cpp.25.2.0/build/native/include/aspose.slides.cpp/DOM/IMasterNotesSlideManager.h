#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IMasterNotesSlide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Master notes slide manager.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMasterNotesSlideManager : public virtual System::Object
{
    typedef IMasterNotesSlideManager ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a master for all notes slides of this presentation if there is one, otherwise returns null.
    /// Read-only <see cref="Aspose::Slides::IMasterNotesSlide">IMasterNotesSlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterNotesSlide> get_MasterNotesSlide() = 0;
    
    /// <summary>
    /// Sets defalut master notes slide for related notes slide.
    /// </summary>
    /// <returns>Defalut master notes slide <see cref="Aspose::Slides::IMasterNotesSlide">IMasterNotesSlide</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterNotesSlide> SetDefaultMasterNotesSlide() = 0;
    /// <summary>
    /// Removes master notes slide.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveMasterNotesSlide() = 0;
    
};

} // namespace Slides
} // namespace Aspose


