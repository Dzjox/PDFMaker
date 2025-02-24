#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/IOrientationTransition.h>
#include <cstdint>

#include "DOM/SlideShowTransition/TransitionValueBase.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class Orientation : int8_t;
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
/// Orientation slide transition effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS OrientationTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::IOrientationTransition
{
    typedef OrientationTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::IOrientationTransition BaseType1;
    
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
    /// Read <see cref="Orientation"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Orientation get_Direction() override;
    /// <summary>
    /// Direction of transition.
    /// Write <see cref="Orientation"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Direction(Orientation value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API OrientationTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OrientationTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two OrientationTransition instances are equal.
    /// </summary>
    /// <param name="transition">The OrientationTransition to compare with the current OrientationTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified OrientationTransition is equal to the current OrientationTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<IOrientationTransition> transition);
    /// @endcond
    
private:

    Orientation m_dir;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


