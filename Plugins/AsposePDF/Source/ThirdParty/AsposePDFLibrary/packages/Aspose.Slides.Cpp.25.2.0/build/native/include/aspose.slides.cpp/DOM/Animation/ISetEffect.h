#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Animation/IBehavior.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents a set effect for an animation behavior.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISetEffect : public virtual Aspose::Slides::Animation::IBehavior
{
    typedef ISetEffect ThisType;
    typedef Aspose::Slides::Animation::IBehavior BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the certain attribute of a effect after an animation effect.
    /// Represents point value.
    /// Only: bool, ColorFormat, float, int, string.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Object> get_To() = 0;
    /// <summary>
    /// Specifies the certain attribute of a effect after an animation effect.
    /// Represents point value.
    /// Only: bool, ColorFormat, float, int, string.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_To(System::SharedPtr<System::Object> value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


