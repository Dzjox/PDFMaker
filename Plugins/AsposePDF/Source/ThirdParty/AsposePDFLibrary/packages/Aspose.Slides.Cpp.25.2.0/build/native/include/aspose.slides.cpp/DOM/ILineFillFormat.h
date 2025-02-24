#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IFillParamSource.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class FillType : int8_t;
class IColorFormat;
class IGradientFormat;
class IPatternFormat;
enum class NullableBool : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents properties for lines filling.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILineFillFormat : public Aspose::Slides::IFillParamSource
{
    typedef ILineFillFormat ThisType;
    typedef Aspose::Slides::IFillParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the fill type.
    /// Read <see cref="Slides::FillType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::FillType get_FillType() = 0;
    /// <summary>
    /// Sets the fill type.
    /// Write <see cref="Slides::FillType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FillType(Aspose::Slides::FillType value) = 0;
    /// <summary>
    /// Returns the color of a solid fill.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_SolidFillColor() = 0;
    /// <summary>
    /// Returns the gradient fill format.
    /// Read-only <see cref="Aspose::Slides::IGradientFormat">IGradientFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGradientFormat> get_GradientFormat() = 0;
    /// <summary>
    /// Returns the pattern fill format.
    /// Read-only <see cref="Aspose::Slides::IPatternFormat">IPatternFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPatternFormat> get_PatternFormat() = 0;
    /// <summary>
    /// Determines whether the fill should be rotated with a shape.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_RotateWithShape() = 0;
    /// <summary>
    /// Determines whether the fill should be rotated with a shape.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RotateWithShape(NullableBool value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


