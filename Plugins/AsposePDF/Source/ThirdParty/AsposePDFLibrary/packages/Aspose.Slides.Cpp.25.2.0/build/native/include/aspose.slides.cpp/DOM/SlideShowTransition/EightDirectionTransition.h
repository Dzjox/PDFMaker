#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/IEightDirectionTransition.h>

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
enum class TransitionEightDirectionType;
enum class TransitionType;
} // namespace SlideShow
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Eight direction slide transition effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS EightDirectionTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::IEightDirectionTransition
{
    typedef EightDirectionTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::IEightDirectionTransition BaseType1;
    
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
    /// Read <see cref="TransitionEightDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionEightDirectionType get_Direction() override;
    /// <summary>
    /// Direction of transition.
    /// Write <see cref="TransitionEightDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Direction(TransitionEightDirectionType value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API EightDirectionTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EightDirectionTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two EightDirectionTransition instances are equal.
    /// </summary>
    /// <param name="transition">The EightDirectionTransition to compare with the current EightDirectionTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified EightDirectionTransition is equal to the current EightDirectionTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<IEightDirectionTransition> transition);
    /// @endcond
    
private:

    TransitionEightDirectionType m_dir;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


