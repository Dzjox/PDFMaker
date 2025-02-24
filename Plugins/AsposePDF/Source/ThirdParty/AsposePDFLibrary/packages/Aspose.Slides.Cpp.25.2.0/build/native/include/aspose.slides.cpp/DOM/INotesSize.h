#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
namespace Drawing
{
class SizeF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a size of notes slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS INotesSize : public virtual System::Object
{
    typedef INotesSize ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the size in points.
    /// Read <see cref="System::Drawing::SizeF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::SizeF get_Size() = 0;
    /// <summary>
    /// Sets the size in points.
    /// Write <see cref="System::Drawing::SizeF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Size(System::Drawing::SizeF value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


