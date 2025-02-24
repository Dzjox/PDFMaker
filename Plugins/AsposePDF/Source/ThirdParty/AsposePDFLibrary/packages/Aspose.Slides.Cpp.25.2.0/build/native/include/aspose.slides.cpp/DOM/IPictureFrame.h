#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGeometryShape.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPictureFillFormat;
class IPictureFrameLock;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a frame with a picture inside.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPictureFrame : public virtual Aspose::Slides::IGeometryShape
{
    typedef IPictureFrame ThisType;
    typedef Aspose::Slides::IGeometryShape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns PictureFrame's locks.
    /// Read-only <see cref="Aspose::Slides::IPictureFrameLock">IPictureFrameLock</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPictureFrameLock> get_PictureFrameLock() = 0;
    /// <summary>
    /// Returns the PictureFillFormat object for a picture frame.
    /// Read-only <see cref="Aspose::Slides::IPictureFillFormat">IPictureFillFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPictureFillFormat> get_PictureFormat() = 0;
    /// <summary>
    /// Returns the scale of height(relative to original picture size) of the picture frame. Value 1.0 corresponds to 100%.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_RelativeScaleHeight() = 0;
    /// <summary>
    /// Sets the scale of height(relative to original picture size) of the picture frame. Value 1.0 corresponds to 100%.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RelativeScaleHeight(float value) = 0;
    /// <summary>
    /// Returns the scale of width (relative to original picture size) of the picture frame. Value 1.0 corresponds to 100%.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_RelativeScaleWidth() = 0;
    /// <summary>
    /// Sets the scale of width (relative to original picture size) of the picture frame. Value 1.0 corresponds to 100%.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RelativeScaleWidth(float value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


