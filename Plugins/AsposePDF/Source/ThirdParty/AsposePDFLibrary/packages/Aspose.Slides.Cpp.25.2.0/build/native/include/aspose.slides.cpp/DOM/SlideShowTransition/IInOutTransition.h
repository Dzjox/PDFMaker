#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

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
/// In-Out slide transition effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IInOutTransition : public virtual Aspose::Slides::SlideShow::ITransitionValueBase
{
    typedef IInOutTransition ThisType;
    typedef Aspose::Slides::SlideShow::ITransitionValueBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Direction of a transition effect.
    /// Read <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TransitionInOutDirectionType get_Direction() = 0;
    /// <summary>
    /// Direction of a transition effect.
    /// Write <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Direction(TransitionInOutDirectionType value) = 0;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


