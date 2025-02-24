#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Animation/ISetEffect.h>

#include "DOM/Animation/Behavior.h"
#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents a set effect for an animation behavior.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SetEffect : public Aspose::Slides::Animation::Behavior, public Aspose::Slides::Animation::ISetEffect
{
    typedef SetEffect ThisType;
    typedef Aspose::Slides::Animation::Behavior BaseType;
    typedef Aspose::Slides::Animation::ISetEffect BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Specifies the certain attribute of a effect after an animation effect.
    /// Represents point value.
    /// Only: bool, ColorFormat, float, int, string.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_To() override;
    /// <summary>
    /// Specifies the certain attribute of a effect after an animation effect.
    /// Represents point value.
    /// Only: bool, ColorFormat, float, int, string.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_To(System::SharedPtr<System::Object> value) override;
    
protected:

    /// @cond
    System::SharedPtr<System::Object> m_to;
    
    ASPOSE_SLIDES_LOCAL_API bool CheckValue(System::SharedPtr<System::Object> val);
    /// @endcond
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


