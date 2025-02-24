#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class INotesSlide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Notes slide manager.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS INotesSlideManager : public virtual System::Object
{
    typedef INotesSlideManager ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the notes slide for the current slide. Returns null if slide doesn't have notes slide.
    /// Read-only <see cref="Aspose::Slides::INotesSlide">INotesSlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<INotesSlide> get_NotesSlide() = 0;
    
    /// <summary>
    /// Returns the notes slide for the current slide, creating one if there isn't.
    /// </summary>
    /// <returns><see cref="Aspose::Slides::INotesSlide">INotesSlide</see> for this slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<INotesSlide> AddNotesSlide() = 0;
    /// <summary>
    /// Removes notes slide of the current slide.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveNotesSlide() = 0;
    
};

} // namespace Slides
} // namespace Aspose


