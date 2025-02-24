#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/IInOutTransition.h>

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
/// In-Out slide transition effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS InOutTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::IInOutTransition
{
    typedef InOutTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::IInOutTransition BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class System::ObjectExt;
    friend class Aspose::Slides::SlideShow::SlideShowTransition;
    /// @endcond
    
public:

    /// <summary>
    /// Direction of a transition effect.
    /// Read <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionInOutDirectionType get_Direction() override;
    /// <summary>
    /// Direction of a transition effect.
    /// Write <see cref="TransitionInOutDirectionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Direction(TransitionInOutDirectionType value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API InOutTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(InOutTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two InOutTransition instances are equal.
    /// </summary>
    /// <param name="transition">The InOutTransition to compare with the current InOutTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified InOutTransition is equal to the current InOutTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<IInOutTransition> transition);
    /// @endcond
    
private:

    TransitionInOutDirectionType m_dir;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


