#pragma once

#include <system/array.h>
#include <DOM/IVideo.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Foundation
{
namespace Blob
{
class IBlobHandler;
} // namespace Blob
} // namespace Foundation
namespace Slides
{
namespace Export
{
class PptxExporter;
} // namespace Export
class IPresentation;
namespace OdpSerialization
{
class OdpSerializationContext;
} // namespace OdpSerialization
namespace PptxSerialization
{
class PptxDeserializationContext;
class PptxSerializationContext;
} // namespace PptxSerialization
class Presentation;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class VideoPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
class VideoCollection;
class VideoFrame;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an image embedded into a presentation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Video : public Aspose::Slides::IVideo, public Aspose::Slides::IDOMObject
{
    typedef Video ThisType;
    typedef Aspose::Slides::IVideo BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::PptxExporter;
    friend class Aspose::Slides::OdpSerialization::OdpSerializationContext;
    friend class Aspose::Slides::VideoCollection;
    friend class Aspose::Slides::VideoFrame;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializationContext;
    friend class Aspose::Slides::PptxSerialization::PptxSerializationContext;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a MIME type of an video, encoded in <see cref="Video::get_BinaryData"></see>.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ContentType() override;
    /// <summary>
    /// Returns the copy of an audio's data. In case of large amount of data consider using of 
    /// <see cref="Video::GetStream"></see> method to prevent unnecessary loading of video's data into memory 
    /// or even OutOfMemoryException.
    /// Read-only <see cref="uint8_t"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<uint8_t> get_BinaryData() override;
    
    /// <summary>
    /// Returns Stream stream for reading.
    /// Use 'using' or close stream after using.
    /// </summary>
    /// <returns>Stream for reading.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::IO::Stream> GetStream() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API uint32_t get_CRC();
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> get_data();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentation> get_Presentation();
    ASPOSE_SLIDES_LOCAL_API System::String get_Extension();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> get_BlobHandler();
    
    ASPOSE_SLIDES_LOCAL_API Video(System::SharedPtr<VideoCollection> parentImmediate, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, System::String contentType, System::String extension);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Video, CODEPORTING_ARGS(System::SharedPtr<VideoCollection> parentImmediate, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, System::String contentType, System::String extension));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Video(System::SharedPtr<VideoCollection> parentImmediate, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Video, CODEPORTING_ARGS(System::SharedPtr<VideoCollection> parentImmediate, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler));
    
private:

    static const ASPOSE_SLIDES_LOCAL_API System::String DefaultExtension;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<Aspose::Slides::Presentation> m_presentation;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::VideoPPTXUnsupportedProps> m_pptxUnsupportedProps;
    uint32_t m_CRC;
    System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> m_blobHandler;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::VideoPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API bool get_VideoInfoInitialized();
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    ASPOSE_SLIDES_LOCAL_API void ComputeVideoInfo();
    
};

} // namespace Slides
} // namespace Aspose


