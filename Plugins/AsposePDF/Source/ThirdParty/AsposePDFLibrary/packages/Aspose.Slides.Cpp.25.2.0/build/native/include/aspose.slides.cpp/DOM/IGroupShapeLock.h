﻿#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IBaseShapeLock.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Determines which operations are disabled on the parent GroupShape.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGroupShapeLock : public virtual Aspose::Slides::IBaseShapeLock
{
    typedef IGroupShapeLock ThisType;
    typedef Aspose::Slides::IBaseShapeLock BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether adding this shape to a group is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_GroupingLocked() = 0;
    /// <summary>
    /// Determines whether adding this shape to a group is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_GroupingLocked(bool value) = 0;
    /// <summary>
    /// Determines whether splitting this groupshape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_UngroupingLocked() = 0;
    /// <summary>
    /// Determines whether splitting this groupshape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_UngroupingLocked(bool value) = 0;
    /// <summary>
    /// Determines whether selecting this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SelectLocked() = 0;
    /// <summary>
    /// Determines whether selecting this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SelectLocked(bool value) = 0;
    /// <summary>
    /// Determines whether changing rotation angle of this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RotationLocked() = 0;
    /// <summary>
    /// Determines whether changing rotation angle of this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RotationLocked(bool value) = 0;
    /// <summary>
    /// Determines whether shape have to preserve aspect ratio on resizing.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AspectRatioLocked() = 0;
    /// <summary>
    /// Determines whether shape have to preserve aspect ratio on resizing.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AspectRatioLocked(bool value) = 0;
    /// <summary>
    /// Determines whether moving this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_PositionLocked() = 0;
    /// <summary>
    /// Determines whether moving this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PositionLocked(bool value) = 0;
    /// <summary>
    /// Determines whether resizing this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SizeLocked() = 0;
    /// <summary>
    /// Determines whether resizing this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SizeLocked(bool value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


