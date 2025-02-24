#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

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
/// Immutable object which contains effective shape's face relief properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::IThreeDFormatEffectiveData">IThreeDFormatEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IShapeBevelEffectiveData : public virtual System::Object
{
    typedef IShapeBevelEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Bevel width.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Width() = 0;
    /// <summary>
    /// Bevel height.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Height() = 0;
    /// <summary>
    /// Bevel type.
    /// Read-only <see cref="BevelPresetType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API BevelPresetType get_BevelType() = 0;
    
};

} // namespace Slides
} // namespace Aspose


