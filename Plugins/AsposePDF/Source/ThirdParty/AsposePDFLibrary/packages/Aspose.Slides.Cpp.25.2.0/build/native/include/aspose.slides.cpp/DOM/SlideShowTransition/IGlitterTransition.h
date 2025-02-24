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
enum class TransitionPattern;
enum class TransitionSideDirectionType;
} // namespace SlideShow
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Glitter slide transition effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGlitterTransition : public virtual Aspose::Slides::SlideShow::ITransitionValueBase
{
    typedef IGlitterTransition ThisType;
    typedef Aspose::Slides::SlideShow::ITransitionValueBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Direction of transition.
    /// Read <see cref="TransitionSideDirectionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TransitionSideDirectionType get_Direction() = 0;
    /// <summary>
    /// Direction of transition.
    /// Write <see cref="TransitionSideDirectionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Direction(TransitionSideDirectionType value) = 0;
    /// <summary>
    /// Specifies the shape of the visuals used during the transition.
    /// Read <see cref="TransitionPattern"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TransitionPattern get_Pattern() = 0;
    /// <summary>
    /// Specifies the shape of the visuals used during the transition.
    /// Write <see cref="TransitionPattern"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Pattern(TransitionPattern value) = 0;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


