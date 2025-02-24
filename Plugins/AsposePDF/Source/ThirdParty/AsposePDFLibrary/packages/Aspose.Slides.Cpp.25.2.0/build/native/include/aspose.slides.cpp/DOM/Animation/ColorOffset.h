#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Animation/IColorOffset.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent color offset.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ColorOffset : public Aspose::Slides::Animation::IColorOffset
{
    typedef ColorOffset ThisType;
    typedef Aspose::Slides::Animation::IColorOffset BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Defines first value of offset.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Value0() override;
    /// <summary>
    /// Defines first value of offset.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Value0(float value) override;
    /// <summary>
    /// Defines second value of offset.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Value1() override;
    /// <summary>
    /// Defines second value of offset.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Value1(float value) override;
    /// <summary>
    /// Defines third value of offset.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Value2() override;
    /// <summary>
    /// Defines third value of offset.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Value2(float value) override;
    
    ASPOSE_SLIDES_SHARED_API ColorOffset();
    
protected:

    /// @cond
    float m_val0;
    float m_val1;
    float m_val2;
    /// @endcond
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


