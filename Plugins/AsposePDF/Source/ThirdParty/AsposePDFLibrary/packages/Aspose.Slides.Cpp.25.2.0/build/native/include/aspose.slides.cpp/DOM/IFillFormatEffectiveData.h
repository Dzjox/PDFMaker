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
class IPictureFillFormatEffectiveData;
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
/// Immutable object which contains effective fill formatting properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::IFillFormat">IFillFormat</see> interface to return effective formatting values with inheritance applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IFillFormatEffectiveData : public Aspose::Slides::IFillParamSource
{
    typedef IFillFormatEffectiveData ThisType;
    typedef Aspose::Slides::IFillParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the type of filling.
    /// Read-only <see cref="Slides::FillType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::FillType get_FillType() = 0;
    /// <summary>
    /// Returns the fill color.
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
    /// Returns the picture fill format.
    /// Read-only <see cref="Aspose::Slides::IPictureFillFormatEffectiveData">IPictureFillFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPictureFillFormatEffectiveData> get_PictureFillFormat() = 0;
    /// <summary>
    /// Determines whether the fill should be rotated with shape.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RotateWithShape() = 0;
    
};

} // namespace Slides
} // namespace Aspose


