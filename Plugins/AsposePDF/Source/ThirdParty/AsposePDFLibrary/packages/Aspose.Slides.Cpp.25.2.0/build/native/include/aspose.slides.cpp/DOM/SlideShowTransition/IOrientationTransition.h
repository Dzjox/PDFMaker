#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/SlideShowTransition/ITransitionValueBase.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class Orientation : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Orientation slide transition effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IOrientationTransition : public virtual Aspose::Slides::SlideShow::ITransitionValueBase
{
    typedef IOrientationTransition ThisType;
    typedef Aspose::Slides::SlideShow::ITransitionValueBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Direction of transition.
    /// Read <see cref="Orientation"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Orientation get_Direction() = 0;
    /// <summary>
    /// Direction of transition.
    /// Write <see cref="Orientation"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Direction(Orientation value) = 0;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


