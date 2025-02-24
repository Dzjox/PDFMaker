#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/IShredTransition.h>

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
enum class TransitionShredPattern;
enum class TransitionType;
} // namespace SlideShow
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Shred slide transition effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ShredTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::IShredTransition
{
    typedef ShredTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::IShredTransition BaseType1;
    
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
    /// Specifies the shape of the visuals used during the transition.
    /// Read <see cref="TransitionShredPattern"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionShredPattern get_Pattern() override;
    /// <summary>
    /// Specifies the shape of the visuals used during the transition.
    /// Write <see cref="TransitionShredPattern"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Pattern(TransitionShredPattern value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API ShredTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ShredTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two ShredTransition instances are equal.
    /// </summary>
    /// <param name="transition">The ShredTransition to compare with the current ShredTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified ShredTransition is equal to the current ShredTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<IShredTransition> transition);
    /// @endcond
    
private:

    TransitionInOutDirectionType m_dir;
    TransitionShredPattern m_pattern;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


