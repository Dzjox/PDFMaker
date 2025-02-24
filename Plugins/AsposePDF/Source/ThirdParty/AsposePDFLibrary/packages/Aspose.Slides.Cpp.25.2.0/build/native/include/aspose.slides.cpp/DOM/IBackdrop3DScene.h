#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Defines a plane in which effects, such as glow and shadow, are applied in relation to the shape they are being applied to.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBackdrop3DScene : public virtual System::Object
{
    typedef IBackdrop3DScene ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a normal vector. To be more precise, this attribute defines a vector
    /// normal to the face of the backdrop plane. Vector represented by array of 3 float values
    /// which define X, Y and Z coordinates.
    /// Read <see cref="float"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<float> get_NormalVector() = 0;
    /// <summary>
    /// Sets a normal vector. To be more precise, this attribute defines a vector
    /// normal to the face of the backdrop plane. Vector represented by array of 3 float values
    /// which define X, Y and Z coordinates.
    /// Write <see cref="float"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NormalVector(System::ArrayPtr<float> value) = 0;
    /// <summary>
    /// Returns a point in 3D space. This point is the point in space that anchors the backdrop plane.
    /// 3D point represented by array of 3 float values which define X, Y and Z coordinates.
    /// Read <see cref="float"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<float> get_AnchorPoint() = 0;
    /// <summary>
    /// Sets a point in 3D space. This point is the point in space that anchors the backdrop plane.
    /// 3D point represented by array of 3 float values which define X, Y and Z coordinates.
    /// Write <see cref="float"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AnchorPoint(System::ArrayPtr<float> value) = 0;
    /// <summary>
    /// Returns a vector representing up. To be more precise, this attribute defines a vector
    /// representing up in relation to the face of the backdrop plane. Vector represented by array
    /// of 3 float values which define X, Y and Z coordinates.
    /// Read <see cref="float"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<float> get_UpVector() = 0;
    /// <summary>
    /// Sets a vector representing up. To be more precise, this attribute defines a vector
    /// representing up in relation to the face of the backdrop plane. Vector represented by array
    /// of 3 float values which define X, Y and Z coordinates.
    /// Write <see cref="float"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_UpVector(System::ArrayPtr<float> value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


