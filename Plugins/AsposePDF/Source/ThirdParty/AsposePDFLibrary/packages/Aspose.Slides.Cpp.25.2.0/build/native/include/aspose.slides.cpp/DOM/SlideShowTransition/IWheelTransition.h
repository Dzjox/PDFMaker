#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/SlideShowTransition/ITransitionValueBase.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Wheel slide transition effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IWheelTransition : public virtual Aspose::Slides::SlideShow::ITransitionValueBase
{
    typedef IWheelTransition ThisType;
    typedef Aspose::Slides::SlideShow::ITransitionValueBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Number spokes of wheel transition.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_Spokes() = 0;
    /// <summary>
    /// Number spokes of wheel transition.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Spokes(uint32_t value) = 0;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


