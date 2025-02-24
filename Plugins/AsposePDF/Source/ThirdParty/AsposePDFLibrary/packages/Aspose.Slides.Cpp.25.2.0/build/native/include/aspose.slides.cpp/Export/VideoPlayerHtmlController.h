#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IVideoPlayerHtmlController.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IHtmlGenerator;
class ISvgShape;
enum class LinkEmbedDecision;
} // namespace Export
class IAudio;
class IPresentation;
class IShape;
class ISlide;
class IVideo;
class IVideoFrame;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
class Uri;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// This class allows export of video and audio files into a HTML
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS VideoPlayerHtmlController : public Aspose::Slides::Export::IVideoPlayerHtmlController
{
    typedef VideoPlayerHtmlController ThisType;
    typedef Aspose::Slides::Export::IVideoPlayerHtmlController BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
private:

    class ASPOSE_SLIDES_LOCAL_API Rectangle : public System::Object
    {
        typedef Rectangle ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String get_X();
        System::String get_Y();
        System::String get_Width();
        System::String get_Height();
        
        Rectangle(System::String x, System::String y, System::String width, System::String height);
        
    private:
    
        System::String m_x;
        System::String m_y;
        System::String m_width;
        System::String m_height;
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance of controller
    /// </summary>
    /// <param name="path">The path where video and audio files will be generated</param>
    /// <param name="fileName">The name of the HTML file</param>
    /// <param name="baseUri">The base URI which will be used for links generating</param>
    ASPOSE_SLIDES_SHARED_API VideoPlayerHtmlController(System::String path, System::String fileName, System::String baseUri);
    
private:

    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::String>> m_fileNamesById;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<IAudio>, System::String>> m_fileNamesByAudio;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<IVideo>, System::String>> m_fileNamesByVideo;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> m_fileNamesByHash;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IAudio>>> m_audioPlayers;
    System::SharedPtr<System::Uri> m_baseUri;
    System::String m_fileName;
    System::String m_path;
    int32_t m_zIndex;
    int32_t m_videoIndex;
    static const ASPOSE_SLIDES_LOCAL_API System::String HeaderBegin;
    static const ASPOSE_SLIDES_LOCAL_API System::String HeaderEnd;
    static const ASPOSE_SLIDES_LOCAL_API System::String SlideHeader;
    static const ASPOSE_SLIDES_LOCAL_API System::String SlideFooter;
    static const ASPOSE_SLIDES_LOCAL_API System::String Footer;
    
    ASPOSE_SLIDES_SHARED_API void WriteDocumentStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation) override;
    ASPOSE_SLIDES_SHARED_API void WriteDocumentEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation) override;
    ASPOSE_SLIDES_SHARED_API void WriteSlideStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<ISlide> slide) override;
    ASPOSE_SLIDES_SHARED_API void WriteSlideEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<ISlide> slide) override;
    ASPOSE_SLIDES_SHARED_API void WriteShapeStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IShape> shape) override;
    ASPOSE_SLIDES_SHARED_API void WriteShapeEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IShape> shape) override;
    ASPOSE_SLIDES_LOCAL_API void AddVideoAsHtmlTag(System::SharedPtr<IVideoFrame> videoFrame, System::SharedPtr<IHtmlGenerator> generator);
    ASPOSE_SLIDES_LOCAL_API void AddVideoAsFlashPlayerObject(System::SharedPtr<IVideoFrame> videoFrame, System::SharedPtr<IHtmlGenerator> generator);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<VideoPlayerHtmlController::Rectangle> GetRect(System::SharedPtr<IVideoFrame> videoFrame, System::SharedPtr<IHtmlGenerator> generator);
    ASPOSE_SLIDES_SHARED_API void FormatShape(System::SharedPtr<ISvgShape> svgShape, System::SharedPtr<IShape> shape) override;
    ASPOSE_SLIDES_SHARED_API LinkEmbedDecision GetObjectStoringLocation(int32_t id, System::ArrayPtr<uint8_t> entityData, System::String semanticName, System::String contentType, System::String recomendedExtension) override;
    ASPOSE_SLIDES_SHARED_API System::String GetUrl(int32_t id, int32_t referrer) override;
    ASPOSE_SLIDES_SHARED_API void SaveExternal(int32_t id, System::ArrayPtr<uint8_t> entityData) override;
    static ASPOSE_SLIDES_LOCAL_API bool IsVideoPlayable(System::SharedPtr<IVideo> video);
    static ASPOSE_SLIDES_LOCAL_API bool IsAudioPlayable(System::SharedPtr<IAudio> audio);
    ASPOSE_SLIDES_LOCAL_API System::String SaveFile(System::String prefix, System::String extension, System::ArrayPtr<uint8_t> data);
    ASPOSE_SLIDES_LOCAL_API System::String SaveVideo(System::SharedPtr<IVideo> video);
    ASPOSE_SLIDES_LOCAL_API System::String SaveAudio(System::SharedPtr<IAudio> audio);
    ASPOSE_SLIDES_LOCAL_API System::String AddAudioPlayer(System::SharedPtr<IAudio> audio);
    ASPOSE_SLIDES_LOCAL_API System::String CreateFileName(System::String prefix, System::String extension);
    ASPOSE_SLIDES_LOCAL_API System::String GetAbsolutePath(System::String fileName);
    static ASPOSE_SLIDES_LOCAL_API System::String GetExtensionByContentType(System::String contentType);
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


