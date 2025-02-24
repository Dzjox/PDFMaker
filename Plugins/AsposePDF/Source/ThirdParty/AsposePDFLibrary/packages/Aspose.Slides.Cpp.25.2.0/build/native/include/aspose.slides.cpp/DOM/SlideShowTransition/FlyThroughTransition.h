#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/IFlyThroughTransition.h>

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
enum class TransitionInOutDirectionType;
enum class TransitionType;
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
class ASPOSE_SLIDES_SHARED_CLASS FlyThroughTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::IFlyThroughTransition
{
    typedef FlyThroughTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::IFlyThroughTransition BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class System::ObjectExt;
    friend class Aspose::Slides::SlideShow::SlideShowTransition;
    /// @endcond
    
public:

    /// <summary>
    /// Direction of transition.
    /// Read <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionInOutDirectionType get_Direction() override;
    /// <summary>
    /// Direction of transition.
    /// Write <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Direction(TransitionInOutDirectionType value) override;
    /// <summary>
    /// Specifies that the movement of the presentation slides during the transition includes a bounce.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasBounce() override;
    /// <summary>
    /// Specifies that the movement of the presentation slides during the transition includes a bounce.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasBounce(bool value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API FlyThroughTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FlyThroughTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two FlyThroughTransition instances are equal.
    /// </summary>
    /// <param name="transition">The FlyThroughTransition to compare with the current FlyThroughTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified FlyThroughTransition is equal to the current FlyThroughTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<IFlyThroughTransition> transition);
    /// @endcond
    
private:

    TransitionInOutDirectionType m_dir;
    bool m_hasBounce;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


