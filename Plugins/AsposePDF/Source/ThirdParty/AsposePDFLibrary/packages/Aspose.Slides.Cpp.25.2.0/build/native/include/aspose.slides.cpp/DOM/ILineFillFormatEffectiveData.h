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
class IGradientFormatEffectiveData;
class IPatternFormatEffectiveData;
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
/// Immutable object which contains effective line filling properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS ILineFillFormatEffectiveData : public Aspose::Slides::IFillParamSource
{
    typedef ILineFillFormatEffectiveData ThisType;
    typedef Aspose::Slides::IFillParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the fill type.
    /// Read-only <see cref="Slides::FillType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::FillType get_FillType() = 0;
    /// <summary>
    /// Returns the color of a solid fill.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_SolidFillColor() = 0;
    /// <summary>
    /// Returns the gradient fill format.
    /// Read-only <see cref="Aspose::Slides::IGradientFormatEffectiveData">IGradientFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGradientFormatEffectiveData> get_GradientFormat() = 0;
    /// <summary>
    /// Returns the pattern fill format.
    /// Read-only <see cref="Aspose::Slides::IPatternFormatEffectiveData">IPatternFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPatternFormatEffectiveData> get_PatternFormat() = 0;
    /// <summary>
    /// Determines whether the fill should be rotated with a shape.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RotateWithShape() = 0;
    
};

} // namespace Slides
} // namespace Aspose


