#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/SlideShowTransition/ITransitionValueBase.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace SlideShow
{
enum class TransitionMorphType;
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
class ASPOSE_SLIDES_API_SHARED_CLASS IMorphTransition : public virtual Aspose::Slides::SlideShow::ITransitionValueBase
{
    typedef IMorphTransition ThisType;
    typedef Aspose::Slides::SlideShow::ITransitionValueBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Type of morph transition.
    /// Read <see cref="TransitionMorphType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TransitionMorphType get_MorphType() = 0;
    /// <summary>
    /// Type of morph transition.
    /// Write <see cref="TransitionMorphType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MorphType(TransitionMorphType value) = 0;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


