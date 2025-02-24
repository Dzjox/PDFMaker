#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IThreeDParamSource.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICameraEffectiveData;
class ILightRigEffectiveData;
class IShapeBevelEffectiveData;
enum class MaterialPresetType;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which represents effective 3-D formatting properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::IThreeDFormat">IThreeDFormat</see> interface to return effective formatting values with inheritance applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IThreeDFormatEffectiveData : public Aspose::Slides::IThreeDParamSource
{
    typedef IThreeDFormatEffectiveData ThisType;
    typedef Aspose::Slides::IThreeDParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the width of a 3D contour.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ContourWidth() = 0;
    /// <summary>
    /// Returns the height of an extrusion effect.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ExtrusionHeight() = 0;
    /// <summary>
    /// Returns the depth of a 3D shape.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Depth() = 0;
    /// <summary>
    /// Returns the type of a top 3D bevel.
    /// Read-only <see cref="Aspose::Slides::IShapeBevelEffectiveData">IShapeBevelEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShapeBevelEffectiveData> get_BevelTop() = 0;
    /// <summary>
    /// Returns the type of a bottom 3D bevel.
    /// Read-only <see cref="Aspose::Slides::IShapeBevelEffectiveData">IShapeBevelEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShapeBevelEffectiveData> get_BevelBottom() = 0;
    /// <summary>
    /// Returns the color of a contour.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_ContourColor() = 0;
    /// <summary>
    /// Returns the color of an extrusion.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_ExtrusionColor() = 0;
    /// <summary>
    /// Returns the settings of a camera.
    /// Read-only <see cref="Aspose::Slides::ICameraEffectiveData">ICameraEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICameraEffectiveData> get_Camera() = 0;
    /// <summary>
    /// Returns the type of a light.
    /// Read-only <see cref="Aspose::Slides::ILightRigEffectiveData">ILightRigEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILightRigEffectiveData> get_LightRig() = 0;
    /// <summary>
    /// Returns the type of a material.
    /// Read-only <see cref="MaterialPresetType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API MaterialPresetType get_Material() = 0;
    
};

} // namespace Slides
} // namespace Aspose


