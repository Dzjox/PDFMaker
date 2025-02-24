#pragma once

#include <system/array.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IImage;
class Presentation;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Bitmap;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Methods to instantiate and work with <see cref="Aspose::Slides::IImage">IImage</see>.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Images
{
    typedef Images ThisType;
    
    /// @cond
    friend class Aspose::Slides::Presentation;
    /// @endcond
    
public:

    /// <summary>
    /// Create an image from the file .
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> FromFile(System::String filename);
    /// <summary>
    /// Create an image from the file 
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> FromFile(System::String filename, bool useEmbeddedColorManagement);
    /// <summary>
    /// Create an image from the stream.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> FromStream(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Create an image from the stream.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> FromStream(System::SharedPtr<System::IO::Stream> stream, bool useEmbeddedColorManagement);
    /// <summary>
    /// Create an image from the stream.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> FromStream(System::SharedPtr<System::IO::Stream> stream, bool useEmbeddedColorManagement, bool validateImageData);
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<IImage>> ToImageArray(System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> images);
    /// @endcond
    
public:
    Images() = delete;
};

} // namespace Slides
} // namespace Aspose


