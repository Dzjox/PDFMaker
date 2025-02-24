#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/IOptionalBlackTransition.h>

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
/// Optional black slide transition effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS OptionalBlackTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::IOptionalBlackTransition
{
    typedef OptionalBlackTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::IOptionalBlackTransition BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class System::ObjectExt;
    friend class Aspose::Slides::SlideShow::SlideShowTransition;
    /// @endcond
    
public:

    /// <summary>
    /// This attribute specifies if the transition will start from a black screen
    /// (and then transition the new slide over black).
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_FromBlack() override;
    /// <summary>
    /// This attribute specifies if the transition will start from a black screen
    /// (and then transition the new slide over black).
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FromBlack(bool value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API OptionalBlackTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OptionalBlackTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two OptionalBlackTransition instances are equal.
    /// </summary>
    /// <param name="transition">The OptionalBlackTransition to compare with the current OptionalBlackTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified OptionalBlackTransition is equal to the current OptionalBlackTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<IOptionalBlackTransition> transition);
    /// @endcond
    
private:

    bool m_thruBlk;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


