#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IEffectFormat;
class IThreeDFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents an effect style.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IEffectStyle : public virtual System::Object
{
    typedef IEffectStyle ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns an effect format.
    /// Read-only <see cref="IEffectFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectFormat> get_EffectFormat() = 0;
    /// <summary>
    /// Returns an 3d format.
    /// Read-only <see cref="IThreeDFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IThreeDFormat> get_ThreeDFormat() = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


