#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents a Color Change effect.
/// Instances of FromColor are replaced with instances of ToColor.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColorChangeEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IColorChangeEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Color which will be replaced.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_FromColor() = 0;
    /// <summary>
    /// Color which will replace.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_ToColor() = 0;
    /// <summary>
    /// Returns a boolean value which determines if alpha component should be used.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_UseAlpha() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


