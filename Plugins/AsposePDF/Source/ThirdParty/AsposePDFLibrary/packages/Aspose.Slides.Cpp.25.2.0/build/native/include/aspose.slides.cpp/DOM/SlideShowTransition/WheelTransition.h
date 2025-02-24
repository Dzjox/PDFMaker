#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/SlideShowTransition/IWheelTransition.h>

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
/// Wheel slide transition effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS WheelTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::IWheelTransition
{
    typedef WheelTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::IWheelTransition BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class System::ObjectExt;
    friend class Aspose::Slides::SlideShow::SlideShowTransition;
    /// @endcond
    
public:

    /// <summary>
    /// Number spokes of wheel transition.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_Spokes() override;
    /// <summary>
    /// Number spokes of wheel transition.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Spokes(uint32_t value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API WheelTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(WheelTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two WheelTransition instances are equal.
    /// </summary>
    /// <param name="transition">The WheelTransition to compare with the current WheelTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified WheelTransition is equal to the current WheelTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<IWheelTransition> transition);
    /// @endcond
    
private:

    uint32_t m_nSpokes;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


