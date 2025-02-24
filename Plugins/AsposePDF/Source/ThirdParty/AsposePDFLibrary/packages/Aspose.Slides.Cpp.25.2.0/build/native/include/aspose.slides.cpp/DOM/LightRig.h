#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <system/array.h>
#include <DOM/ILightRig.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ILightRigEffectiveData;
enum class LightingDirection;
class LightRigEffectiveData;
class LightRigImpl;
enum class LightRigPresetType;
namespace PptSerialization
{
class LightRigPPTSerialization;
} // namespace PptSerialization
class ThreeDFormat;
class ThreeDFormatImpl;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents LightRig.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS LightRig final : public Aspose::Slides::PVIObject, public Aspose::Slides::ILightRig
{
    typedef LightRig ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::ILightRig BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::LightRigEffectiveData;
    friend class Aspose::Slides::LightRigImpl;
    friend class Aspose::Slides::ThreeDFormatImpl;
    friend class Aspose::Slides::ThreeDFormat;
    friend class Aspose::Slides::PptSerialization::LightRigPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Light direction.
    /// Read <see cref="LightingDirection"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LightingDirection get_Direction() override;
    /// <summary>
    /// Light direction.
    /// Write <see cref="LightingDirection"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Direction(LightingDirection value) override;
    /// <summary>
    /// Represents a preset light right that can be applied to a shape. 
    /// The light rig represents a group of lights oriented
    /// in a specific way relative to a 3D scene.
    /// Read <see cref="LightRigPresetType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LightRigPresetType get_LightType() override;
    /// <summary>
    /// Represents a preset light right that can be applied to a shape. 
    /// The light rig represents a group of lights oriented
    /// in a specific way relative to a 3D scene.
    /// Write <see cref="LightRigPresetType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LightType(LightRigPresetType value) override;
    
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
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<LightRigImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_IsRigDirLoadedApproximately();
    ASPOSE_SLIDES_LOCAL_API void set_IsRigDirLoadedApproximately(bool value);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<float> get_ArrRotation();
    
    System::Event<void()> LightRigChanged;
    
    ASPOSE_SLIDES_LOCAL_API LightRig(System::SharedPtr<ThreeDFormat> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LightRig, CODEPORTING_ARGS(System::SharedPtr<ThreeDFormat> parentImmediate));
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<LightRigEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<LightRig> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ILightRigEffectiveData> source);
    /// @endcond
    
private:

    ASPOSE_SLIDES_LOCAL_API void OnLightRigChanged();
    
};

} // namespace Slides
} // namespace Aspose


