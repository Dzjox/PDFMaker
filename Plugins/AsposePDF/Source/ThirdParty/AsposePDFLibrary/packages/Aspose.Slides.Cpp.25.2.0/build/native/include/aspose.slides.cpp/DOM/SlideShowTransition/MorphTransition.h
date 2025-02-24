#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/SlideShowTransition/IMorphTransition.h>

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
enum class TransitionMorphType;
enum class TransitionType;
} // namespace SlideShow
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Ripple slide transition effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MorphTransition : public Aspose::Slides::SlideShow::TransitionValueBase, public Aspose::Slides::SlideShow::IMorphTransition
{
    typedef MorphTransition ThisType;
    typedef Aspose::Slides::SlideShow::TransitionValueBase BaseType;
    typedef Aspose::Slides::SlideShow::IMorphTransition BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class System::ObjectExt;
    friend class Aspose::Slides::SlideShow::SlideShowTransition;
    /// @endcond
    
public:

    /// <summary>
    /// Type of morph transition.
    /// Read <see cref="TransitionMorphType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionMorphType get_MorphType() override;
    /// <summary>
    /// Type of morph transition.
    /// Write <see cref="TransitionMorphType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MorphType(TransitionMorphType value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API MorphTransition(TransitionType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MorphTransition, CODEPORTING_ARGS(TransitionType type));
    /// <summary>
    /// Determines whether the two RippleTransition instances are equal.
    /// </summary>
    /// <param name="transition">The RippleTransition to compare with the current RippleTransition.</param>
    /// <returns>
    /// <b>true</b> if the specified RippleTransition is equal to the current RippleTransition; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ITransitionValueBase> transition) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<IMorphTransition> transition);
    /// @endcond
    
private:

    TransitionMorphType m_morphType;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


