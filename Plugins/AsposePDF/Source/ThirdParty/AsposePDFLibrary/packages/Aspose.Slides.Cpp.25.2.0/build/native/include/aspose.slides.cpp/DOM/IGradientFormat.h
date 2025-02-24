﻿#pragma once
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
class IGradientStop;
class IGradientStopCollection;
enum class NullableBool : int8_t;
enum class TileFlip;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represent a gradient format.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGradientFormat : public Aspose::Slides::IFillParamSource
{
    typedef IGradientFormat ThisType;
    typedef Aspose::Slides::IFillParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the flipping mode for a gradient.
    /// Read <see cref="Slides::TileFlip"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::TileFlip get_TileFlip() = 0;
    /// <summary>
    /// Sets the flipping mode for a gradient.
    /// Write <see cref="Slides::TileFlip"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TileFlip(Aspose::Slides::TileFlip value) = 0;
    /// <summary>
    /// Returns the style of a gradient.
    /// Read <see cref="Slides::GradientDirection"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::GradientDirection get_GradientDirection() = 0;
    /// <summary>
    /// Sets the style of a gradient.
    /// Write <see cref="Slides::GradientDirection"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_GradientDirection(Aspose::Slides::GradientDirection value) = 0;
    /// <summary>
    /// Returns the angle of a gradient.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_LinearGradientAngle() = 0;
    /// <summary>
    /// Sets the angle of a gradient.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LinearGradientAngle(float value) = 0;
    /// <summary>
    /// Determines whether a gradient is scaled.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_LinearGradientScaled() = 0;
    /// <summary>
    /// Determines whether a gradient is scaled.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LinearGradientScaled(NullableBool value) = 0;
    /// <summary>
    /// Returns the shape of a gradient.
    /// Read <see cref="Slides::GradientShape"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::GradientShape get_GradientShape() = 0;
    /// <summary>
    /// Sets the shape of a gradient.
    /// Write <see cref="Slides::GradientShape"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_GradientShape(Aspose::Slides::GradientShape value) = 0;
    /// <summary>
    /// Returns the collection of gradient stops.
    /// Read-only <see cref="Aspose::Slides::IGradientStopCollection">IGradientStopCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGradientStopCollection> get_GradientStops() = 0;
    
    /// <summary>
    /// Returns a gradient stop at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGradientStop> get_GradientStop(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


