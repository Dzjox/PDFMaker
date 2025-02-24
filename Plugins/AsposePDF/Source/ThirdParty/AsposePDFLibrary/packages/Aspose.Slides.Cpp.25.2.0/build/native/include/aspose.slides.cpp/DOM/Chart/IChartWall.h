#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IFormat;
enum class PictureType;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents walls on 3d charts.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartWall : public virtual System::Object
{
    typedef IChartWall ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the walls thickness as a percentage of the largest 
    /// dimension of the plot volume.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Thickness() = 0;
    /// <summary>
    /// Sets the walls thickness as a percentage of the largest 
    /// dimension of the plot volume.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Thickness(int32_t value) = 0;
    /// <summary>
    /// Returns the wall fill, line, effect, 3d styles.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
    /// <summary>
    /// Return or sets the picture type.
    /// Read <see cref="PictureType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Charts::PictureType get_PictureType() = 0;
    /// <summary>
    /// Return or sets the picture type.
    /// Write <see cref="PictureType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PictureType(Aspose::Slides::Charts::PictureType value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


