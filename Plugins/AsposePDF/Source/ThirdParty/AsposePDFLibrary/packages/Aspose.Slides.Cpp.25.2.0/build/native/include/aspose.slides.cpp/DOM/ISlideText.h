#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the text extracted from the slide
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISlideText : public virtual System::Object
{
    typedef ISlideText ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The text on the slide's shapes
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Text() = 0;
    /// <summary>
    /// The text on the master page's shapes for this slide
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_MasterText() = 0;
    /// <summary>
    /// The text on the layout page's shapes for this slide
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LayoutText() = 0;
    /// <summary>
    /// The text on the notes page's shapes for this slide
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_NotesText() = 0;
    /// <summary>
    /// The text of the slide comments
    /// </summary>
    /// <remarks>
    /// This field is empty when the text is extracted using the Arranged mode.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_CommentsText() = 0;
    
};

} // namespace Slides
} // namespace Aspose


