#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Animation/ICommandEffect.h>

#include "DOM/Animation/Behavior.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class CommandEffectType : int8_t;
} // namespace Animation
class IShape;
namespace PptxSerialization
{
namespace PartParser
{
class CommandEffectPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Shape;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace TimeLine
{
class CommandEffectPPTXUnsupportedProps;
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
/// Represents a command effect for an animation behavior.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS CommandEffect : public Aspose::Slides::Animation::Behavior, public Aspose::Slides::Animation::ICommandEffect
{
    typedef CommandEffect ThisType;
    typedef Aspose::Slides::Animation::Behavior BaseType;
    typedef Aspose::Slides::Animation::ICommandEffect BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptxSerialization::PartParser::CommandEffectPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Defines command effect type of behavior.
    /// Read <see cref="CommandEffectType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API CommandEffectType get_Type() override;
    /// <summary>
    /// Defines command effect type of behavior.
    /// Write <see cref="CommandEffectType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Type(CommandEffectType value) override;
    /// <summary>
    /// Defines command string.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_CommandString() override;
    /// <summary>
    /// Defines command string.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CommandString(System::String value) override;
    /// <summary>
    /// Defines shape target of command effect.
    /// Read <see cref="IShape"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> get_ShapeTarget() override;
    /// <summary>
    /// Defines shape target of command effect.
    /// Write <see cref="IShape"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShapeTarget(System::SharedPtr<IShape> value) override;
    
    /// <summary>
    /// Creates new instance.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API CommandEffect();
    
protected:

    /// @cond
    CommandEffectType m_typeEffectCmd;
    System::String m_strCmd;
    System::SharedPtr<Shape> m_shapeTarget;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::CommandEffectPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    /// @endcond
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


