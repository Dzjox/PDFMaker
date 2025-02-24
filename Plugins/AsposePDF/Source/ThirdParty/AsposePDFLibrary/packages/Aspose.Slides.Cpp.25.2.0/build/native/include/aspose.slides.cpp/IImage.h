#pragma once

#include <system/idisposable.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class ImageFormat;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Size;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the raster or vector image.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IImage : public System::IDisposable
{
    typedef IImage ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets an image size.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Size get_Size() = 0;
    /// <summary>
    /// Gets the width of the image.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Width() = 0;
    /// <summary>
    /// Gets the height of the image.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Height() = 0;
    
    /// <summary>
    /// Save the image to the file. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::String filename) = 0;
    /// <summary>
    /// Save the image to the file.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::String filename, ImageFormat format) = 0;
    /// <summary>
    /// Save the image to the stream. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::SharedPtr<System::IO::Stream> stream, ImageFormat format) = 0;
    
};

} // namespace Slides
} // namespace Aspose


