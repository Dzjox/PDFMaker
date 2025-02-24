#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Specifies the sizing of the slide region ((width when a child of restoredTop, height when a
/// child of restoredLeft) of the normal view, when the region is of a variable restored size(neither minimized nor maximized).
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS INormalViewRestoredProperties : public virtual System::Object
{
    typedef INormalViewRestoredProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the size of the slide region (width when a child of RestoredTop, height when a
    /// child of RestoredLeft).
    /// Read <see cref="float"></see>.
    /// <exception cref="System::ArgumentOutOfRangeException">Throws when value less than 0 ar greater than 100.</exception>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_DimensionSize() = 0;
    /// <summary>
    /// Specifies the size of the slide region (width when a child of RestoredTop, height when a
    /// child of RestoredLeft).
    /// Write <see cref="float"></see>.
    /// <exception cref="System::ArgumentOutOfRangeException">Throws when value less than 0 ar greater than 100.</exception>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DimensionSize(float value) = 0;
    /// <summary>
    /// Specifies whether the size of the side content region should compensate for the new size
    /// when resizing the window containing the view within the application
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AutoAdjust() = 0;
    /// <summary>
    /// Specifies whether the size of the side content region should compensate for the new size
    /// when resizing the window containing the view within the application
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AutoAdjust(bool value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


