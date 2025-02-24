#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/Animation/IBehavior.h"
#include "aspose_slides_api_api_defs.h"

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
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents a command effect for an animation behavior.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ICommandEffect : public virtual Aspose::Slides::Animation::IBehavior
{
    typedef ICommandEffect ThisType;
    typedef Aspose::Slides::Animation::IBehavior BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Defines command effect type of behavior.
    /// Read <see cref="CommandEffectType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API CommandEffectType get_Type() = 0;
    /// <summary>
    /// Defines command effect type of behavior.
    /// Write <see cref="CommandEffectType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Type(CommandEffectType value) = 0;
    /// <summary>
    /// Defines command string.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_CommandString() = 0;
    /// <summary>
    /// Defines command string.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CommandString(System::String value) = 0;
    /// <summary>
    /// Defines shape target of command effect.
    /// Read <see cref="IShape"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShape> get_ShapeTarget() = 0;
    /// <summary>
    /// Defines shape target of command effect.
    /// Write <see cref="IShape"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShapeTarget(System::SharedPtr<IShape> value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


