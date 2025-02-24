#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IPictureFrame.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class AudioVolumeMode;
class IVideo;
enum class VideoPlayModePreset;
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
/// Represents a video clip on a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IVideoFrame : public virtual Aspose::Slides::IPictureFrame
{
    typedef IVideoFrame ThisType;
    typedef Aspose::Slides::IPictureFrame BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether a video is automatically rewinded to start
    /// as soon as the movie has finished playing.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RewindVideo() = 0;
    /// <summary>
    /// Determines whether a video is automatically rewinded to start
    /// as soon as the movie has finished playing.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RewindVideo(bool value) = 0;
    /// <summary>
    /// Determines whether a video is looped.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_PlayLoopMode() = 0;
    /// <summary>
    /// Determines whether a video is looped.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PlayLoopMode(bool value) = 0;
    /// <summary>
    /// Determines whether a VideoFrame is hidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HideAtShowing() = 0;
    /// <summary>
    /// Determines whether a VideoFrame is hidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HideAtShowing(bool value) = 0;
    /// <summary>
    /// Returns the audio volume.
    /// Read <see cref="AudioVolumeMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API AudioVolumeMode get_Volume() = 0;
    /// <summary>
    /// Sets the audio volume.
    /// Write <see cref="AudioVolumeMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Volume(AudioVolumeMode value) = 0;
    /// <summary>
    /// Returns the video play mode.
    /// Read <see cref="VideoPlayModePreset"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API VideoPlayModePreset get_PlayMode() = 0;
    /// <summary>
    /// Sets the video play mode.
    /// Write <see cref="VideoPlayModePreset"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PlayMode(VideoPlayModePreset value) = 0;
    /// <summary>
    /// Determines whether a video is shown in full screen mode.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_FullScreenMode() = 0;
    /// <summary>
    /// Determines whether a video is shown in full screen mode.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FullScreenMode(bool value) = 0;
    /// <summary>
    /// Returns the name of an video file which is linked to a VideoFrame.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LinkPathLong() = 0;
    /// <summary>
    /// Sets the name of an video file which is linked to a VideoFrame.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LinkPathLong(System::String value) = 0;
    /// <summary>
    /// Returns embedded video object.
    /// Read <see cref="Aspose::Slides::IVideo">IVideo</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVideo> get_EmbeddedVideo() = 0;
    /// <summary>
    /// Sets embedded video object.
    /// Write <see cref="Aspose::Slides::IVideo">IVideo</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EmbeddedVideo(System::SharedPtr<IVideo> value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_TrimFromStart() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TrimFromStart(float value) = 0;
    /// <summary>
    /// Trim end [ms]
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_TrimFromEnd() = 0;
    /// <summary>
    /// Trim end [ms]
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TrimFromEnd(float value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


