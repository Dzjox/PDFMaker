﻿#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IAccessiblePVIObject.h"
#include "DOM/Effects/IImageTransformOperation.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class ITintEffectiveData;
} // namespace Effects
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Tint effect.
/// Shifts effect color values towards/away from hue by the specified amount.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITint : public virtual Aspose::Slides::Effects::IImageTransformOperation, public Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::ITintEffectiveData>>
{
    typedef ITint ThisType;
    typedef Aspose::Slides::Effects::IImageTransformOperation BaseType;
    typedef Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::ITintEffectiveData>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


