#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/ITransitionValueBase.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace SlideShow
{
class CornerDirectionTransition;
class EightDirectionTransition;
class EmptyTransition;
class FlyThroughTransition;
class GlitterTransition;
class InOutTransition;
class LeftRightDirectionTransition;
class MorphTransition;
class OptionalBlackTransition;
class OrientationTransition;
class RevealTransition;
class RippleTransition;
class ShredTransition;
class SideDirectionTransition;
class SlideShowTransition;
class SplitTransition;
enum class TransitionType;
class WheelTransition;
} // namespace SlideShow
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Base class for slide transition effects.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS TransitionValueBase : public virtual Aspose::Slides::SlideShow::ITransitionValueBase
{
    typedef TransitionValueBase ThisType;
    typedef Aspose::Slides::SlideShow::ITransitionValueBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class System::ObjectExt;
    friend class Aspose::Slides::SlideShow::MorphTransition;
    friend class Aspose::Slides::SlideShow::RevealTransition;
    friend class Aspose::Slides::SlideShow::ShredTransition;
    friend class Aspose::Slides::SlideShow::FlyThroughTransition;
    friend class Aspose::Slides::SlideShow::GlitterTransition;
    friend class Aspose::Slides::SlideShow::RippleTransition;
    friend class Aspose::Slides::SlideShow::LeftRightDirectionTransition;
    friend class Aspose::Slides::SlideShow::CornerDirectionTransition;
    friend class Aspose::Slides::SlideShow::EightDirectionTransition;
    friend class Aspose::Slides::SlideShow::EmptyTransition;
    friend class Aspose::Slides::SlideShow::InOutTransition;
    friend class Aspose::Slides::SlideShow::OptionalBlackTransition;
    friend class Aspose::Slides::SlideShow::OrientationTransition;
    friend class Aspose::Slides::SlideShow::SideDirectionTransition;
    friend class Aspose::Slides::SlideShow::SplitTransition;
    friend class Aspose::Slides::SlideShow::SlideShowTransition;
    friend class Aspose::Slides::SlideShow::WheelTransition;
    /// @endcond
    
public:

    /// <summary>
    /// Determines whether the two TransitionValueBase instances are equal.
    /// </summary>
    /// <param name="obj">The TransitionValueBase to compare with the current TransitionValueBase.</param>
    /// <returns><b>true</b> if the specified TransitionValueBase is equal to the current TransitionValueBase; otherwise, <b>false</b>.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type, suitable for use
    /// in hashing algorithms and data structures like a hash table.
    /// </summary>
    /// <remarks>
    /// Overriden to make compiler happy. Always returns constant because object is mutable.
    /// </remarks>
    /// <returns>23454</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    TransitionType m_type;
    
    ASPOSE_SLIDES_LOCAL_API TransitionValueBase(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TransitionValueBase, CODEPORTING_ARGS(TransitionType type));
    /// @cond
    virtual ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition);
    /// @endcond
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


