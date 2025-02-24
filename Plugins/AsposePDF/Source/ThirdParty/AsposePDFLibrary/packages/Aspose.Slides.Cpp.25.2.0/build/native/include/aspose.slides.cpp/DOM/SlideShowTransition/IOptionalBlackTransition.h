#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/SlideShowTransition/ITransitionValueBase.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Optional black slide transition effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IOptionalBlackTransition : public virtual Aspose::Slides::SlideShow::ITransitionValueBase
{
    typedef IOptionalBlackTransition ThisType;
    typedef Aspose::Slides::SlideShow::ITransitionValueBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// This attribute specifies if the transition will start from a black screen
    /// (and then transition the new slide over black).
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_FromBlack() = 0;
    /// <summary>
    /// This attribute specifies if the transition will start from a black screen
    /// (and then transition the new slide over black).
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FromBlack(bool value) = 0;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


