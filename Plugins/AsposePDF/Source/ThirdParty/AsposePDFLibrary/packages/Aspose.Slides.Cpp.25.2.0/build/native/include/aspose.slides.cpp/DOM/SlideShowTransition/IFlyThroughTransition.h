#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/SlideShowTransition/ITransitionValueBase.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace SlideShow
{
enum class TransitionInOutDirectionType;
} // namespace SlideShow
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Fly-through slide transition effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFlyThroughTransition : public virtual Aspose::Slides::SlideShow::ITransitionValueBase
{
    typedef IFlyThroughTransition ThisType;
    typedef Aspose::Slides::SlideShow::ITransitionValueBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Direction of transition.
    /// Read <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TransitionInOutDirectionType get_Direction() = 0;
    /// <summary>
    /// Direction of transition.
    /// Write <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Direction(TransitionInOutDirectionType value) = 0;
    /// <summary>
    /// Specifies that the movement of the presentation slides during the transition includes a bounce.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasBounce() = 0;
    /// <summary>
    /// Specifies that the movement of the presentation slides during the transition includes a bounce.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HasBounce(bool value) = 0;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


