#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <system/array.h>
#include <DOM/ICamera.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class CameraEffectiveData;
class CameraImpl;
enum class CameraPresetType;
class ICameraEffectiveData;
class IDOMObject;
namespace PptSerialization
{
class CameraPPTSerialization;
} // namespace PptSerialization
class ThreeDFormat;
class ThreeDFormatImpl;
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class CameraPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents Camera.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Camera final : public Aspose::Slides::PVIObject, public Aspose::Slides::ICamera
{
    typedef Camera ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::ICamera BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::CameraImpl;
    friend class Aspose::Slides::ThreeDFormatImpl;
    friend class Aspose::Slides::ThreeDFormat;
    friend class Aspose::Slides::PptSerialization::CameraPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Camera type.
    /// Read <see cref="CameraPresetType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API CameraPresetType get_CameraType() override;
    /// <summary>
    /// Camera type.
    /// Write <see cref="CameraPresetType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CameraType(CameraPresetType value) override;
    /// <summary>
    /// Camera FOV (0-180 deg, field of View).
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_FieldOfViewAngle() override;
    /// <summary>
    /// Camera FOV (0-180 deg, field of View).
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FieldOfViewAngle(float value) override;
    /// <summary>
    /// Camera zoom (positive value in percentage).
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Zoom() override;
    /// <summary>
    /// Camera zoom (positive value in percentage).
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Zoom(float value) override;
    
    /// <summary>
    /// A rotation is defined through the use of a latitude
    /// coordinate, a longitude coordinate, and a revolution about the axis 
    /// as the latitude and longitude coordinates.
    /// If any of coordinate value is std::numeric_limits<float>::quiet_NaN(), all rotation is undefined.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void SetRotation(float latitude, float longitude, float revolution) override;
    /// <summary>
    /// A rotation is defined through the use of a latitude
    /// coordinate, a longitude coordinate, and a revolution about the axis 
    /// as the latitude and longitude coordinates.
    /// first element in return array - latitude, second - longitude, third - revolution.
    /// Returns null if no rotation defined.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<float> GetRotation() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<CameraImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::CameraPPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<float> get_ArrRotation();
    
    System::Event<void()> CameraChanged;
    
    ASPOSE_SLIDES_LOCAL_API Camera(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Camera, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<CameraEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ICamera> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ICameraEffectiveData> source);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Camera();
    
private:

    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::CameraPPTUnsupportedProps> m_pptUnsupportedProps;
    
    ASPOSE_SLIDES_LOCAL_API void OnCameraChanged();
    
};

} // namespace Slides
} // namespace Aspose


