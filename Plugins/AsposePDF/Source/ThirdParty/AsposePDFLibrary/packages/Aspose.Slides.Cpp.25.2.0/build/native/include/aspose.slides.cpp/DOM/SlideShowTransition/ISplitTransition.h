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
/// Split slide transition effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISplitTransition : public virtual Aspose::Slides::SlideShow::ITransitionValueBase
{
    typedef ISplitTransition ThisType;
    typedef Aspose::Slides::SlideShow::ITransitionValueBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Direction of transition split.
    /// Read <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TransitionInOutDirectionType get_Direction() = 0;
    /// <summary>
    /// Direction of transition split.
    /// Write <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Direction(TransitionInOutDirectionType value) = 0;
    /// <summary>
    /// Orientation of transition split.
    /// Read <see cref="Slides::Orientation"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Orientation get_Orientation() = 0;
    /// <summary>
    /// Orientation of transition split.
    /// Write <see cref="Slides::Orientation"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Orientation(Aspose::Slides::Orientation value) = 0;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


