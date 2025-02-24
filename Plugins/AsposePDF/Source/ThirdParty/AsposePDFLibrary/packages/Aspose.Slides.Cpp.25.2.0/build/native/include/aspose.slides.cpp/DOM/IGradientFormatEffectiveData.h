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
enum class GradientDirection;
enum class GradientShape : int8_t;
class IGradientStopCollectionEffectiveData;
class IGradientStopEffectiveData;
enum class TileFlip;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Imutable object which contains effective gradient filling properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::IFillFormatEffectiveData">IFillFormatEffectiveData</see> and <see cref="Aspose::Slides::ILineFillFormatEffectiveData">ILineFillFormatEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IGradientFormatEffectiveData : public Aspose::Slides::IFillParamSource
{
    typedef IGradientFormatEffectiveData ThisType;
    typedef Aspose::Slides::IFillParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the flipping mode for a gradient.
    /// Read-only <see cref="Slides::TileFlip"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::TileFlip get_TileFlip() = 0;
    /// <summary>
    /// Returns the style of a gradient.
    /// Read-only <see cref="Slides::GradientDirection"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::GradientDirection get_GradientDirection() = 0;
    /// <summary>
    /// Returns the angle of a gradient.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_LinearGradientAngle() = 0;
    /// <summary>
    /// Determines whether a gradient is scaled.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_LinearGradientScaled() = 0;
    /// <summary>
    /// Returns the shape of a gradient.
    /// Read-only <see cref="Slides::GradientShape"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::GradientShape get_GradientShape() = 0;
    /// <summary>
    /// Returns the collection of gradient stops.
    /// Read-only <see cref="Aspose::Slides::IGradientStopCollectionEffectiveData">IGradientStopCollectionEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGradientStopCollectionEffectiveData> get_GradientStops() = 0;
    
    /// <summary>
    /// Returns a gradient stop at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGradientStopEffectiveData> get_GradientStop(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


