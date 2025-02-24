#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IAudio.h>

#include "DOM/DomObject.h"
#include "DOM/AudioCollection.h"
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
class AudioFrame;
class IPresentation;
class IPresentationComponent;
namespace OdpSerialization
{
class OdpDeserializationContext;
class OdpSerializationContext;
} // namespace OdpSerialization
namespace PptSerialization
{
class HyperlinkPPTSerialization;
class PptDeserializationContext;
class SoundPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class HyperlinkPPTXSerialization;
} // namespace PartParser
class PptxDeserializationContext;
class PptxSerializationContext;
} // namespace PptxSerialization
namespace SlideShow
{
class SlideShowTransition;
} // namespace SlideShow
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class AudioPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class AudioPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
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
/// Represents an embedded audio file.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Audio : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::AudioCollection>>, public Aspose::Slides::IAudio
{
    typedef Audio ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::AudioCollection>> BaseType;
    typedef Aspose::Slides::IAudio BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::OdpDeserializationContext;
    friend class Aspose::Slides::OdpSerialization::OdpSerializationContext;
    friend class Aspose::Slides::PptSerialization::SoundPPTSerialization;
    friend class Aspose::Slides::AudioCollection;
    friend class Aspose::Slides::AudioFrame;
    friend class Aspose::Slides::SlideShow::SlideShowTransition;
    friend class Aspose::Slides::PptSerialization::PptDeserializationContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::HyperlinkPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializationContext;
    friend class Aspose::Slides::PptxSerialization::PptxSerializationContext;
    friend class Aspose::Slides::PptSerialization::HyperlinkPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a MIME type of an audio, encoded in <see cref="Audio::get_BinaryData"></see>.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ContentType() override;
    /// <summary>
    /// Returns a MIME type of an audio, encoded in <see cref="Audio::get_BinaryData"></see>.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ContentType(System::String value);
    /// <summary>
    /// Returns the copy of an audio's data. In case of large amount of data consider 
    /// using of <see cref="Audio::GetStream"></see> method to prevent unnecessary  loading of audio's
    /// data into memory or even OutOfMemoryException.
    /// Read-only <see cref="uint8_t"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<uint8_t> get_BinaryData() override;
    
    /// <summary>
    /// Returns Stream stream for reading.
    /// Use 'using' or close stream after using.
    /// </summary>
    /// <returns>Stream for reading.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::IO::Stream> GetStream() override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::AudioPPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_CRC();
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> get_data();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentation> get_Presentation();
    ASPOSE_SLIDES_LOCAL_API System::String get_Extension();
    ASPOSE_SLIDES_LOCAL_API void set_Extension(System::String value);
    
    ASPOSE_SLIDES_LOCAL_API Audio(System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, System::String contentType, System::String extension, System::SharedPtr<AudioCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Audio, CODEPORTING_ARGS(System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, System::String contentType, System::String extension, System::SharedPtr<AudioCollection> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Audio(System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, System::SharedPtr<AudioCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Audio, CODEPORTING_ARGS(System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, System::SharedPtr<AudioCollection> parentImmediate));
    
private:

    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    uint32_t m_CRC;
    System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> m_blobHandler;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::AudioPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::AudioPPTUnsupportedProps> m_pptUnsupportedProps;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::AudioPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API bool get_AudioInfoInitialized();
    
    ASPOSE_SLIDES_LOCAL_API void ComputeAudioInfo();
    
};

} // namespace Slides
} // namespace Aspose


