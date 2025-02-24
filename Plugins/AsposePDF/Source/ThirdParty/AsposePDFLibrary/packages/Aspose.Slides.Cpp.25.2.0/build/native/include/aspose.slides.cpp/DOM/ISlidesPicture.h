#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/ISlideComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IImageTransformOperation;
class IImageTransformOperationCollection;
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
/// Represents a picture in a presentation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISlidesPicture : public Aspose::Slides::ISlideComponent
{
    typedef ISlidesPicture ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the embedded image.
    /// Read <see cref="Aspose::Slides::IPPImage">IPPImage</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> get_Image() = 0;
    /// <summary>
    /// Sets the embedded image.
    /// Write <see cref="Aspose::Slides::IPPImage">IPPImage</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Image(System::SharedPtr<IPPImage> value) = 0;
    /// <summary>
    /// Returns of sets linked image's URL.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LinkPathLong() = 0;
    /// <summary>
    /// Returns of sets linked image's URL.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LinkPathLong(System::String value) = 0;
    /// <summary>
    /// Returns the collection of image transform effects.
    /// Read-only <see cref="Aspose::Slides::Effects::IImageTransformOperationCollection">IImageTransformOperationCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IImageTransformOperationCollection> get_ImageTransform() = 0;
    
    /// <summary>
    /// Returns image transform operation at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Effects::IImageTransformOperation> get_ImageTransformOperation(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


