#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class TrueColorBitmap;
} // namespace Effects
class IBaseSlide;
class StyleColorEffectiveData;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

class ASPOSE_SLIDES_SHARED_CLASS IApplicableEffect : public virtual System::Object
{
    typedef IApplicableEffect ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
public:

    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TrueColorBitmap> Apply(System::SharedPtr<TrueColorBitmap> img) = 0;
    virtual ASPOSE_SLIDES_LOCAL_API System::String GetStringData() = 0;
    virtual ASPOSE_SLIDES_LOCAL_API void ResolveStyledColors(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<StyleColorEffectiveData> styleColor) = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


