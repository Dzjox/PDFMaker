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
class IFillFormatEffectiveData;
class IGradientFormat;
class IPatternFormat;
class IPictureFillFormat;
enum class NullableBool : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a fill formatting options.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFillFormat : public Aspose::Slides::IFillParamSource
{
    typedef IFillFormat ThisType;
    typedef Aspose::Slides::IFillParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the type of filling.
    /// Read <see cref="Slides::FillType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::FillType get_FillType() = 0;
    /// <summary>
    /// Sets the type of filling.
    /// Write <see cref="Slides::FillType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FillType(Aspose::Slides::FillType value) = 0;
    /// <summary>
    /// Returns the fill color.
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
    /// Returns the picture fill format.
    /// Read-only <see cref="Aspose::Slides::IPictureFillFormat">IPictureFillFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPictureFillFormat> get_PictureFillFormat() = 0;
    /// <summary>
    /// Determines whether the fill should be rotated with shape.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_RotateWithShape() = 0;
    /// <summary>
    /// Determines whether the fill should be rotated with shape.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RotateWithShape(NullableBool value) = 0;
    
    /// <summary>
    /// Gets effective fill formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IFillFormatEffectiveData">IFillFormatEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormatEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


