#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/IEmptyTransition.h>

#include "DOM/SlideShowTransition/TransitionValueBase.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace SlideShow
{
class ITransitionValueBase;
class SlideShowTransition;
enum class TransitionType;
} // namespace SlideShow
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Empty slide transition effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS EmptyTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::IEmptyTransition
{
    typedef EmptyTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::IEmptyTransition BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class System::ObjectExt;
    friend class Aspose::Slides::SlideShow::SlideShowTransition;
    /// @endcond
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API EmptyTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EmptyTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two EmptyTransition instances are equal.
    /// </summary>
    /// <param name="transition">The EmptyTransition to compare with the current EmptyTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified EmptyTransition is equal to the current EmptyTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<IEmptyTransition> transition);
    /// @endcond
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


