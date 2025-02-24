#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IFillParamSource.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPictureEffectiveData;
enum class PictureFillMode;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains the properties of picture fill.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::IFillFormatEffectiveData">IFillFormatEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IPictureFillFormatEffectiveData : public Aspose::Slides::IFillParamSource
{
    typedef IPictureFillFormatEffectiveData ThisType;
    typedef Aspose::Slides::IFillParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the dpi which is used to fill a picture.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Dpi() = 0;
    /// <summary>
    /// Returns the picture fill mode.
    /// Read-only <see cref="Slides::PictureFillMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::PictureFillMode get_PictureFillMode() = 0;
    /// <summary>
    /// Returns the picture.
    /// Read-only <see cref="Aspose::Slides::IPictureEffectiveData">IPictureEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPictureEffectiveData> get_Picture() = 0;
    /// <summary>
    /// Returns the number of percents of real image width that are cropped off
    /// the left of the picture. 
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_CropLeft() = 0;
    /// <summary>
    /// Returns the number of percents of real image height that are cropped off
    /// the top of the picture. 
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_CropTop() = 0;
    /// <summary>
    /// Returns the number of percents of real image width that are cropped off
    /// the right of the picture. 
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_CropRight() = 0;
    /// <summary>
    /// Returns the number of percents of real image height that are cropped off
    /// the bottom of the picture. 
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_CropBottom() = 0;
    
};

} // namespace Slides
} // namespace Aspose


