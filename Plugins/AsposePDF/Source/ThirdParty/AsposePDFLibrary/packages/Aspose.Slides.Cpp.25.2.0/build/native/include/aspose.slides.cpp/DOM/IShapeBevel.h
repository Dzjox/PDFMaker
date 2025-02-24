#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class BevelPresetType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents properties of shape's main face relief.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IShapeBevel : public virtual System::Object
{
    typedef IShapeBevel ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Bevel width.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Width() = 0;
    /// <summary>
    /// Bevel width.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Width(double value) = 0;
    /// <summary>
    /// Bevel height.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Height() = 0;
    /// <summary>
    /// Bevel height.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Height(double value) = 0;
    /// <summary>
    /// Bevel type.
    /// Read <see cref="BevelPresetType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API BevelPresetType get_BevelType() = 0;
    /// <summary>
    /// Bevel type.
    /// Write <see cref="BevelPresetType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BevelType(BevelPresetType value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


