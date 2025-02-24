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
enum class TransitionCornerAndCenterDirectionType;
} // namespace SlideShow
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Ripple slide transition effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IRippleTransition : public virtual Aspose::Slides::SlideShow::ITransitionValueBase
{
    typedef IRippleTransition ThisType;
    typedef Aspose::Slides::SlideShow::ITransitionValueBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Direction of transition.
    /// Read <see cref="TransitionCornerAndCenterDirectionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TransitionCornerAndCenterDirectionType get_Direction() = 0;
    /// <summary>
    /// Direction of transition.
    /// Write <see cref="TransitionCornerAndCenterDirectionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Direction(TransitionCornerAndCenterDirectionType value) = 0;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


