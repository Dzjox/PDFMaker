#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/IGlitterTransition.h>

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
enum class TransitionPattern;
enum class TransitionSideDirectionType;
enum class TransitionType;
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
class ASPOSE_SLIDES_SHARED_CLASS GlitterTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::IGlitterTransition
{
    typedef GlitterTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::IGlitterTransition BaseType1;
    
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
    /// Read <see cref="TransitionSideDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionSideDirectionType get_Direction() override;
    /// <summary>
    /// Direction of transition.
    /// Write <see cref="TransitionSideDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Direction(TransitionSideDirectionType value) override;
    /// <summary>
    /// Specifies the shape of the visuals used during the transition.
    /// Read <see cref="TransitionPattern"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionPattern get_Pattern() override;
    /// <summary>
    /// Specifies the shape of the visuals used during the transition.
    /// Write <see cref="TransitionPattern"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Pattern(TransitionPattern value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API GlitterTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GlitterTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two GlitterTransition instances are equal.
    /// </summary>
    /// <param name="transition">The GlitterTransition to compare with the current GlitterTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified GlitterTransition is equal to the current GlitterTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<IGlitterTransition> transition);
    /// @endcond
    
private:

    TransitionSideDirectionType m_dir;
    TransitionPattern m_pattern;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


