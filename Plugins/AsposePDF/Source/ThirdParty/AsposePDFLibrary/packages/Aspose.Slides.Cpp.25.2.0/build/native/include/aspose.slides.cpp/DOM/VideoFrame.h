#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/IVideoFrame.h>

#include "DOM/PictureFrame.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class AudioVolumeMode;
class IDOMObject;
class IVideo;
namespace PptSerialization
{
class ShapeCollectionPPTSerialization;
class VideoFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class MediaSequencePptxSerialization;
class VideoFramePPTXSerialization;
} // namespace PartParser
class PptxDeserializator;
} // namespace PptxSerialization
class ShapeCollection;
namespace ThmxSerialization
{
class ThmxDeserializator;
} // namespace ThmxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class VideoFramePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
class Video;
enum class VideoPlayModePreset;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a video clip on a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS VideoFrame : public Aspose::Slides::PictureFrame, public Aspose::Slides::IVideoFrame
{
    typedef VideoFrame ThisType;
    typedef Aspose::Slides::PictureFrame BaseType;
    typedef Aspose::Slides::IVideoFrame BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptxSerialization::PartParser::MediaSequencePptxSerialization;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::VideoFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    friend class Aspose::Slides::PptSerialization::ShapeCollectionPPTSerialization;
    friend class Aspose::Slides::PptSerialization::VideoFramePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Determines whether a video is automatically rewinded to start
    /// as soon as the movie has finished playing.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_RewindVideo() override;
    /// <summary>
    /// Determines whether a video is automatically rewinded to start
    /// as soon as the movie has finished playing.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RewindVideo(bool value) override;
    /// <summary>
    /// Determines whether a video is looped.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_PlayLoopMode() override;
    /// <summary>
    /// Determines whether a video is looped.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PlayLoopMode(bool value) override;
    /// <summary>
    /// Determines whether a VideoFrame is hidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HideAtShowing() override;
    /// <summary>
    /// Determines whether a VideoFrame is hidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HideAtShowing(bool value) override;
    /// <summary>
    /// Returns the audio volume.
    /// Read <see cref="AudioVolumeMode"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API AudioVolumeMode get_Volume() override;
    /// <summary>
    /// Sets the audio volume.
    /// Write <see cref="AudioVolumeMode"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Volume(AudioVolumeMode value) override;
    /// <summary>
    /// Returns the video play mode.
    /// Read <see cref="VideoPlayModePreset"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API VideoPlayModePreset get_PlayMode() override;
    /// <summary>
    /// Sets the video play mode.
    /// Write <see cref="VideoPlayModePreset"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PlayMode(VideoPlayModePreset value) override;
    /// <summary>
    /// Determines whether a video is shown in full screen mode.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_FullScreenMode() override;
    /// <summary>
    /// Determines whether a video is shown in full screen mode.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FullScreenMode(bool value) override;
    /// <summary>
    /// Returns the name of an video file which is linked to a VideoFrame.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_LinkPathLong() override;
    /// <summary>
    /// Sets the name of an video file which is linked to a VideoFrame.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LinkPathLong(System::String value) override;
    /// <summary>
    /// Returns embedded video object.
    /// Read <see cref="Aspose::Slides::IVideo">IVideo</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVideo> get_EmbeddedVideo() override;
    /// <summary>
    /// Sets embedded video object.
    /// Write <see cref="Aspose::Slides::IVideo">IVideo</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EmbeddedVideo(System::SharedPtr<IVideo> value) override;
    /// <summary>
    /// Trim start [ms]
    /// </summary>
    /// <example>
    /// Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ISlide> slide = pres->get_Slide(0);
    /// System::ArrayPtr<uint8_t> content = System::IO::File::ReadAllBytes(u"video.mp4");
    /// System::SharedPtr<IVideo> video = pres->get_Videos()->AddVideo(content);
    /// System::SharedPtr<IVideoFrame> videoFrame = slide->get_Shapes()->AddVideoFrame(0.0f, 0.0f, 100.0f, 100.0f, video);
    /// 
    /// //set triming start time 1sec
    /// videoFrame->set_TrimFromStart(1000.0f);
    /// 
    /// //set triming end time 2sec
    /// videoFrame->set_TrimFromEnd(2000.0f);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API float get_TrimFromStart() override;
    /// <summary>
    /// Trim start [ms]
    /// </summary>
    /// <example>
    /// Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ISlide> slide = pres->get_Slide(0);
    /// System::ArrayPtr<uint8_t> content = System::IO::File::ReadAllBytes(u"video.mp4");
    /// System::SharedPtr<IVideo> video = pres->get_Videos()->AddVideo(content);
    /// System::SharedPtr<IVideoFrame> videoFrame = slide->get_Shapes()->AddVideoFrame(0.0f, 0.0f, 100.0f, 100.0f, video);
    /// 
    /// //set triming start time 1sec
    /// videoFrame->set_TrimFromStart(1000.0f);
    /// 
    /// //set triming end time 2sec
    /// videoFrame->set_TrimFromEnd(2000.0f);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_TrimFromStart(float value) override;
    /// <summary>
    /// Trim end [ms]
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_TrimFromEnd() override;
    /// <summary>
    /// Trim end [ms]
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TrimFromEnd(float value) override;
    
protected:

    /// @cond
    System::String m_linkPathLong;
    System::String m_linkFileName;
    System::SharedPtr<Video> m_video;
    bool m_bIsFullScreen;
    AudioVolumeMode m_volumeMode;
    bool m_bHideAtShow;
    bool m_bPlayLoopMode;
    bool m_bRewindVideo;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::VideoFramePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API VideoFrame(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(VideoFrame, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetImage();
    /// @endcond
    /// <summary>
    /// Sets all formats to NotDefined state. For shapes with placeholders this will cause default state.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Reset() override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~VideoFrame();
    
private:

    float pr_TrimFromStart;
    float pr_TrimFromEnd;
    
};

} // namespace Slides
} // namespace Aspose


