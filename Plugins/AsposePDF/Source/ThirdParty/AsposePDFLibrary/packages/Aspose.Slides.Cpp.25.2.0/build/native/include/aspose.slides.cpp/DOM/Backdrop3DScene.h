#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IBackdrop3DScene.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Backdrop3DSceneEffectiveData;
class Backdrop3DSceneImpl;
class IDOMObject;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class ThreeDFormatPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Defines a plane in which effects, such as glow and shadow, are applied in relation to the shape they are being applied to.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Backdrop3DScene final : public Aspose::Slides::PVIObject, public Aspose::Slides::IBackdrop3DScene
{
    typedef Backdrop3DScene ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IBackdrop3DScene BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::ThreeDFormatPPTXUnsupportedProps;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a normal vector. To be more precise, this attribute defines a vector
    /// normal to the face of the backdrop plane. Vector represented by array of 3 float values
    /// which define X, Y and Z coordinates.
    /// Read <see cref="float"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<float> get_NormalVector() override;
    /// <summary>
    /// Sets a normal vector. To be more precise, this attribute defines a vector
    /// normal to the face of the backdrop plane. Vector represented by array of 3 float values
    /// which define X, Y and Z coordinates.
    /// Write <see cref="float"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NormalVector(System::ArrayPtr<float> value) override;
    /// <summary>
    /// Returns a point in 3D space. This point is the point in space that anchors the backdrop plane.
    /// 3D point represented by array of 3 float values which define X, Y and Z coordinates.
    /// Read <see cref="float"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<float> get_AnchorPoint() override;
    /// <summary>
    /// Sets a point in 3D space. This point is the point in space that anchors the backdrop plane.
    /// 3D point represented by array of 3 float values which define X, Y and Z coordinates.
    /// Write <see cref="float"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AnchorPoint(System::ArrayPtr<float> value) override;
    /// <summary>
    /// Returns a vector representing up. To be more precise, this attribute defines a vector
    /// representing up in relation to the face of the backdrop plane. Vector represented by array
    /// of 3 float values which define X, Y and Z coordinates.
    /// Read <see cref="float"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<float> get_UpVector() override;
    /// <summary>
    /// Sets a vector representing up. To be more precise, this attribute defines a vector
    /// representing up in relation to the face of the backdrop plane. Vector represented by array
    /// of 3 float values which define X, Y and Z coordinates.
    /// Write <see cref="float"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_UpVector(System::ArrayPtr<float> value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Backdrop3DSceneImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Backdrop3DScene(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Backdrop3DScene, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Backdrop3DSceneEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<Backdrop3DScene> source);
    /// @endcond
    
private:

    System::ArrayPtr<float> ZeroVector3d;
    
};

} // namespace Slides
} // namespace Aspose


