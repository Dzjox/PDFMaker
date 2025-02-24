#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/ISplitTransition.h>
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
/// Split slide transition effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SplitTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::ISplitTransition
{
    typedef SplitTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::ISplitTransition BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class System::ObjectExt;
    friend class Aspose::Slides::SlideShow::SlideShowTransition;
    /// @endcond
    
public:

    /// <summary>
    /// Direction of transition split.
    /// Read <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionInOutDirectionType get_Direction() override;
    /// <summary>
    /// Direction of transition split.
    /// Write <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Direction(TransitionInOutDirectionType value) override;
    /// <summary>
    /// Orientation of transition split.
    /// Read <see cref="Slides::Orientation"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Orientation get_Orientation() override;
    /// <summary>
    /// Orientation of transition split.
    /// Write <see cref="Slides::Orientation"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Orientation(Aspose::Slides::Orientation value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API SplitTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SplitTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two SplitTransition instances are equal.
    /// </summary>
    /// <param name="transition">The SplitTransition to compare with the current SplitTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified SplitTransition is equal to the current SplitTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<ISplitTransition> transition);
    /// @endcond
    
private:

    TransitionInOutDirectionType m_dir;
    Aspose::Slides::Orientation m_orient;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


