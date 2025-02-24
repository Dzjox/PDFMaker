#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/IRevealTransition.h>

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
enum class TransitionLeftRightDirectionType;
enum class TransitionType;
} // namespace SlideShow
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Reveal slide transition effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS RevealTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::IRevealTransition
{
    typedef RevealTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::IRevealTransition BaseType1;
    
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
    /// Read <see cref="TransitionLeftRightDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionLeftRightDirectionType get_Direction() override;
    /// <summary>
    /// Direction of transition.
    /// Write <see cref="TransitionLeftRightDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Direction(TransitionLeftRightDirectionType value) override;
    /// <summary>
    /// Specifies whether the transition fades through black.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ThroughBlack() override;
    /// <summary>
    /// Specifies whether the transition fades through black.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ThroughBlack(bool value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API RevealTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RevealTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two RevealTransition instances are equal.
    /// </summary>
    /// <param name="transition">The RevealTransition to compare with the current RevealTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified RevealTransition is equal to the current RevealTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<IRevealTransition> transition);
    /// @endcond
    
private:

    TransitionLeftRightDirectionType m_dir;
    bool m_throughBlack;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


