#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/ISideDirectionTransition.h>

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
/// Side direction slide transition effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SideDirectionTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::ISideDirectionTransition
{
    typedef SideDirectionTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::ISideDirectionTransition BaseType1;
    
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
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API SideDirectionTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SideDirectionTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two SideDirectionTransition instances are equal.
    /// </summary>
    /// <param name="transition">The SideDirectionTransition to compare with the current SideDirectionTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified SideDirectionTransition is equal to the current SideDirectionTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<ISideDirectionTransition> transition);
    /// @endcond
    
private:

    TransitionSideDirectionType m_dir;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


