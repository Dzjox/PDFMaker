#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IBaseShapeLock.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Determines which operations are disabled on the parent PictureFrameEx.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPictureFrameLock : public virtual Aspose::Slides::IBaseShapeLock
{
    typedef IPictureFrameLock ThisType;
    typedef Aspose::Slides::IBaseShapeLock BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether an adding this shape to a group is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_GroupingLocked() = 0;
    /// <summary>
    /// Determines whether an adding this shape to a group is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_GroupingLocked(bool value) = 0;
    /// <summary>
    /// Determines whether a selecting this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SelectLocked() = 0;
    /// <summary>
    /// Determines whether a selecting this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SelectLocked(bool value) = 0;
    /// <summary>
    /// Determines whether a changing rotation angle of this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RotationLocked() = 0;
    /// <summary>
    /// Determines whether a changing rotation angle of this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RotationLocked(bool value) = 0;
    /// <summary>
    /// Determines whether a shape have to preserve aspect ratio on resizing.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AspectRatioLocked() = 0;
    /// <summary>
    /// Determines whether a shape have to preserve aspect ratio on resizing.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AspectRatioLocked(bool value) = 0;
    /// <summary>
    /// Determines whether a moving this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_PositionLocked() = 0;
    /// <summary>
    /// Determines whether a moving this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PositionLocked(bool value) = 0;
    /// <summary>
    /// Determines whether a resizing this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SizeLocked() = 0;
    /// <summary>
    /// Determines whether a resizing this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SizeLocked(bool value) = 0;
    /// <summary>
    /// Determines whether a direct changing of contour of this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_EditPointsLocked() = 0;
    /// <summary>
    /// Determines whether a direct changing of contour of this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EditPointsLocked(bool value) = 0;
    /// <summary>
    /// Determines whether a changing adjust values is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AdjustHandlesLocked() = 0;
    /// <summary>
    /// Determines whether a changing adjust values is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AdjustHandlesLocked(bool value) = 0;
    /// <summary>
    /// Determines whether a changing arrowheads is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ArrowheadsLocked() = 0;
    /// <summary>
    /// Determines whether a changing arrowheads is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ArrowheadsLocked(bool value) = 0;
    /// <summary>
    /// Determines whether a changing of a shape type is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShapeTypeLocked() = 0;
    /// <summary>
    /// Determines whether a changing of a shape type is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShapeTypeLocked(bool value) = 0;
    /// <summary>
    /// Determines whether an image cropping is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_CropLocked() = 0;
    /// <summary>
    /// Determines whether an image cropping is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CropLocked(bool value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


