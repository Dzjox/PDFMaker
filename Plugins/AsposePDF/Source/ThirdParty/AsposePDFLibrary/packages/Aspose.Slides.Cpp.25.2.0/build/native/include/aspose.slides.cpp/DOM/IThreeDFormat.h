#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IThreeDParamSource.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICamera;
class IColorFormat;
class ILightRig;
class IShapeBevel;
class IThreeDFormatEffectiveData;
enum class MaterialPresetType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents 3-D properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IThreeDFormat : public Aspose::Slides::IThreeDParamSource
{
    typedef IThreeDFormat ThisType;
    typedef Aspose::Slides::IThreeDParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the width of a 3D contour.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ContourWidth() = 0;
    /// <summary>
    /// Sets the width of a 3D contour.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ContourWidth(double value) = 0;
    /// <summary>
    /// Returns the height of an extrusion effect.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ExtrusionHeight() = 0;
    /// <summary>
    /// Sets the height of an extrusion effect.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ExtrusionHeight(double value) = 0;
    /// <summary>
    /// Returns the depth of a 3D shape.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Depth() = 0;
    /// <summary>
    /// Sets the depth of a 3D shape.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Depth(double value) = 0;
    /// <summary>
    /// Returns the type of a top 3D bevel.
    /// Read-only <see cref="Aspose::Slides::IShapeBevel">IShapeBevel</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShapeBevel> get_BevelTop() = 0;
    /// <summary>
    /// Returns the type of a bottom 3D bevel.
    /// Read-only <see cref="Aspose::Slides::IShapeBevel">IShapeBevel</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShapeBevel> get_BevelBottom() = 0;
    /// <summary>
    /// Returns the color of a contour.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_ContourColor() = 0;
    /// <summary>
    /// Returns the color of an extrusion.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_ExtrusionColor() = 0;
    /// <summary>
    /// Returns the settings of a camera.
    /// Read-only <see cref="Aspose::Slides::ICamera">ICamera</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICamera> get_Camera() = 0;
    /// <summary>
    /// Returns the type of a light.
    /// Read-only <see cref="Aspose::Slides::ILightRig">ILightRig</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILightRig> get_LightRig() = 0;
    /// <summary>
    /// Returns the type of a material.
    /// Read <see cref="MaterialPresetType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API MaterialPresetType get_Material() = 0;
    /// <summary>
    /// Sets the type of a material.
    /// Write <see cref="MaterialPresetType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Material(MaterialPresetType value) = 0;
    
    /// <summary>
    /// Gets effective 3-D formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IThreeDFormatEffectiveData">IThreeDFormatEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IThreeDFormatEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


