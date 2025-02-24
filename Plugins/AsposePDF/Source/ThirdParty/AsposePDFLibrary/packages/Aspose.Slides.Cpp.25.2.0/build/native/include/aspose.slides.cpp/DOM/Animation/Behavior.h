#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Animation/IBehavior.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class BehaviorAdditiveType;
class BehaviorCollection;
class BehaviorPropertyCollection;
class CommandEffect;
class FilterEffect;
class IBehaviorPropertyCollection;
class ITiming;
} // namespace Animation
enum class NullableBool : int8_t;
namespace OdpSerialization
{
namespace PartParser
{
namespace Animation
{
class AnimBehaviorOdpDeserialization;
} // namespace Animation
} // namespace PartParser
} // namespace OdpSerialization
namespace PptSerialization
{
class TimeNodeAnimateBehaviorPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class SequencePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace TimeLine
{
class BehaviorPPTXUnsupportedProps;
} // namespace TimeLine
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent base class behavior of effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Behavior : public virtual Aspose::Slides::Animation::IBehavior, public Aspose::Slides::IDOMObject
{
    typedef Behavior ThisType;
    typedef Aspose::Slides::Animation::IBehavior BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimBehaviorOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::TimeNodeAnimateBehaviorPPTSerialization;
    friend class Aspose::Slides::Animation::BehaviorCollection;
    friend class Aspose::Slides::Animation::CommandEffect;
    friend class Aspose::Slides::Animation::FilterEffect;
    friend class Aspose::Slides::PptxSerialization::PartParser::SequencePPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Represents whether animation behaviors are accumulated.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_Accumulate() override;
    /// <summary>
    /// Represents whether animation behaviors are accumulated.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Accumulate(NullableBool value) override;
    /// <summary>
    /// Represents whether the current animation behavior is combined with other running animations.
    /// Read <see cref="BehaviorAdditiveType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API BehaviorAdditiveType get_Additive() override;
    /// <summary>
    /// Represents whether the current animation behavior is combined with other running animations.
    /// Write <see cref="BehaviorAdditiveType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Additive(BehaviorAdditiveType value) override;
    /// <summary>
    /// Represents properties of behavior.
    /// Read-only <see cref="Aspose::Slides::Animation::IBehaviorPropertyCollection">IBehaviorPropertyCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBehaviorPropertyCollection> get_Properties() override;
    /// <summary>
    /// Represents timing properties for the effect behavior.
    /// Read <see cref="Aspose::Slides::Animation::ITiming">ITiming</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITiming> get_Timing() override;
    /// <summary>
    /// Represents timing properties for the effect behavior.
    /// Write <see cref="Aspose::Slides::Animation::ITiming">ITiming</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Timing(System::SharedPtr<ITiming> value) override;
    
protected:

    /// @cond
    NullableBool m_bAccum;
    BehaviorAdditiveType m_typeAdditive;
    System::SharedPtr<BehaviorPropertyCollection> m_properties;
    System::SharedPtr<ITiming> m_timing;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::BehaviorPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    /// @endcond
    
    /// <summary>
    /// Creates new instance.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Behavior();
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Behavior(System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::BehaviorPPTXUnsupportedProps> pptxUnsupportedProps);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Behavior();
    
private:

    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::BehaviorPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


