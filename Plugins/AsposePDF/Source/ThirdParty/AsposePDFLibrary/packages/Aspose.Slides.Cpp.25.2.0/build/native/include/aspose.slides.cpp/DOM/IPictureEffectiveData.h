#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IEffectEffectiveData;
class IImageTransformOCollectionEffectiveData;
} // namespace Effects
class IPPImage;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective picture properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::IPictureFillFormatEffectiveData">IPictureFillFormatEffectiveData</see> and <see cref="Aspose::Slides::IBulletFormatEffectiveData">IBulletFormatEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IPictureEffectiveData : public virtual System::Object
{
    typedef IPictureEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the embedded image.
    /// Read-only <see cref="Aspose::Slides::IPPImage">IPPImage</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> get_Image() = 0;
    /// <summary>
    /// Returns linked image's URL.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LinkPathLong() = 0;
    /// <summary>
    /// Returns the collection of image transform effects.
    /// Read-only <see cref="Aspose::Slides::Effects::IImageTransformOCollectionEffectiveData">Effects::IImageTransformOCollectionEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IImageTransformOCollectionEffectiveData> get_ImageTransform() = 0;
    
    /// <summary>
    /// Returns the image transform effect specified at the index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IEffectEffectiveData> get_ImageTransformEffect(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


