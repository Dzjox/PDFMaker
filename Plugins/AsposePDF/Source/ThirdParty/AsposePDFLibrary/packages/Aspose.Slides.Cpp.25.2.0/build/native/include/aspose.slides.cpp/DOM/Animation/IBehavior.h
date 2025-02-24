#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class BehaviorAdditiveType;
class IBehaviorPropertyCollection;
class ITiming;
} // namespace Animation
enum class NullableBool : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent base class behavior of effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBehavior : public virtual System::Object
{
    typedef IBehavior ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents whether animation behaviors are accumulated.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_Accumulate() = 0;
    /// <summary>
    /// Represents whether animation behaviors are accumulated.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Accumulate(NullableBool value) = 0;
    /// <summary>
    /// Represents whether the current animation behavior is combined with other running animations.
    /// Read <see cref="BehaviorAdditiveType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API BehaviorAdditiveType get_Additive() = 0;
    /// <summary>
    /// Represents whether the current animation behavior is combined with other running animations.
    /// Write <see cref="BehaviorAdditiveType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Additive(BehaviorAdditiveType value) = 0;
    /// <summary>
    /// Represents properties of behavior.
    /// Read-only <see cref="Aspose::Slides::Animation::IBehaviorPropertyCollection">IBehaviorPropertyCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBehaviorPropertyCollection> get_Properties() = 0;
    /// <summary>
    /// Represents timing properties for the effect behavior.
    /// Read <see cref="Aspose::Slides::Animation::ITiming">ITiming</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITiming> get_Timing() = 0;
    /// <summary>
    /// Represents timing properties for the effect behavior.
    /// Write <see cref="Aspose::Slides::Animation::ITiming">ITiming</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Timing(System::SharedPtr<ITiming> value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


