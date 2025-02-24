#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IEffectEffectiveData;
} // namespace Effects
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

class ASPOSE_SLIDES_SHARED_CLASS IVisualEffect : public virtual System::Object
{
    typedef IVisualEffect ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
public:

    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IEffectEffectiveData> GetEffective_() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


