#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IPictureFrame.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class AudioPlayModePreset;
enum class AudioVolumeMode;
class IAudio;
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
/// Represents an audio clip on a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAudioFrame : public virtual Aspose::Slides::IPictureFrame
{
    typedef IAudioFrame ThisType;
    typedef Aspose::Slides::IPictureFrame BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a start track index.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_AudioCdStartTrack() = 0;
    /// <summary>
    /// Sets a start track index.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AudioCdStartTrack(int32_t value) = 0;
    /// <summary>
    /// Returns a start track time.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_AudioCdStartTrackTime() = 0;
    /// <summary>
    /// Sets a start track time.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AudioCdStartTrackTime(int32_t value) = 0;
    /// <summary>
    /// Returns a last track index
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_AudioCdEndTrack() = 0;
    /// <summary>
    /// Sets a last track index
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AudioCdEndTrack(int32_t value) = 0;
    /// <summary>
    /// Returns a last track time.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_AudioCdEndTrackTime() = 0;
    /// <summary>
    /// Sets a last track time.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AudioCdEndTrackTime(int32_t value) = 0;
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
    /// Returns the audio play mode.
    /// Read <see cref="AudioPlayModePreset"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API AudioPlayModePreset get_PlayMode() = 0;
    /// <summary>
    /// Sets the audio play mode.
    /// Write <see cref="AudioPlayModePreset"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PlayMode(AudioPlayModePreset value) = 0;
    /// <summary>
    /// Determines whether an AudioFrame is hidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HideAtShowing() = 0;
    /// <summary>
    /// Determines whether an AudioFrame is hidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HideAtShowing(bool value) = 0;
    /// <summary>
    /// Determines whether an audio is looped.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_PlayLoopMode() = 0;
    /// <summary>
    /// Determines whether an audio is looped.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PlayLoopMode(bool value) = 0;
    /// <summary>
    /// Determines whether an audio is playing across the slides.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    ///         
    /// System::SharedPtr<ISlide> slide = pres->get_Slides()->idx_get(0);
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudioFrame> audioFrame = slide->get_Shapes()->AddAudioFrameLinked(50.0f, 50.0f, 100.0f, 100.0f, u"sampleaudio.wav");
    /// 
    /// // Set Audio to play across the slides
    /// audioFrame->set_PlayAcrossSlides(true);
    /// 
    /// // Set Audio to automatically rewind to start after playing
    /// audioFrame->set_RewindAudio(true);
    /// 
    /// pres->Save(u"AudioFrame_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_PlayAcrossSlides() = 0;
    /// <summary>
    /// Determines whether an audio is playing across the slides.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    ///         
    /// System::SharedPtr<ISlide> slide = pres->get_Slides()->idx_get(0);
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudioFrame> audioFrame = slide->get_Shapes()->AddAudioFrameLinked(50.0f, 50.0f, 100.0f, 100.0f, u"sampleaudio.wav");
    /// 
    /// // Set Audio to play across the slides
    /// audioFrame->set_PlayAcrossSlides(true);
    /// 
    /// // Set Audio to automatically rewind to start after playing
    /// audioFrame->set_RewindAudio(true);
    /// 
    /// pres->Save(u"AudioFrame_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PlayAcrossSlides(bool value) = 0;
    /// <summary>
    /// Determines whether an audio is automatically rewinded to start after playing.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    ///         
    /// System::SharedPtr<ISlide> slide = pres->get_Slides()->idx_get(0);
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudioFrame> audioFrame = slide->get_Shapes()->AddAudioFrameLinked(50.0f, 50.0f, 100.0f, 100.0f, u"sampleaudio.wav");
    /// 
    /// // Set Audio to play across the slides
    /// audioFrame->set_PlayAcrossSlides(true);
    /// 
    /// // Set Audio to automatically rewind to start after playing
    /// audioFrame->set_RewindAudio(true);
    /// 
    /// pres->Save(u"AudioFrame_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RewindAudio() = 0;
    /// <summary>
    /// Determines whether an audio is automatically rewinded to start after playing.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    ///         
    /// System::SharedPtr<ISlide> slide = pres->get_Slides()->idx_get(0);
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudioFrame> audioFrame = slide->get_Shapes()->AddAudioFrameLinked(50.0f, 50.0f, 100.0f, 100.0f, u"sampleaudio.wav");
    /// 
    /// // Set Audio to play across the slides
    /// audioFrame->set_PlayAcrossSlides(true);
    /// 
    /// // Set Audio to automatically rewind to start after playing
    /// audioFrame->set_RewindAudio(true);
    /// 
    /// pres->Save(u"AudioFrame_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RewindAudio(bool value) = 0;
    /// <summary>
    /// Determines whether a sound is embedded to a presentation.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Embedded() = 0;
    /// <summary>
    /// Returns the name of an audio file which is linked to an AudioFrame.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LinkPathLong() = 0;
    /// <summary>
    /// Sets the name of an audio file which is linked to an AudioFrame.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LinkPathLong(System::String value) = 0;
    /// <summary>
    /// Returns embedded audio object.
    /// Read <see cref="Aspose::Slides::IAudio">IAudio</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAudio> get_EmbeddedAudio() = 0;
    /// <summary>
    /// Sets embedded audio object.
    /// Write <see cref="Aspose::Slides::IAudio">IAudio</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EmbeddedAudio(System::SharedPtr<IAudio> value) = 0;
    /// <summary>
    /// Specifies the time duration for the initial fade-in of the media in milliseconds.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudio> audio = pres->get_Audios()->AddAudio(System::IO::File::ReadAllBytes(u"sampleaudio.mp3"));
    /// System::SharedPtr<IAudioFrame> audioFrame = pres->get_Slide(0)->get_Shapes()->AddAudioFrameEmbedded(50.0f, 50.0f, 100.0f, 100.0f, audio);
    /// 
    /// // Set the duration of the starting fade for 200ms
    /// audioFrame->set_FadeInDuration(200.0f);
    /// 
    /// pres->Save(u"AudioFrameFade_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_FadeInDuration() = 0;
    /// <summary>
    /// Specifies the time duration for the initial fade-in of the media in milliseconds.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudio> audio = pres->get_Audios()->AddAudio(System::IO::File::ReadAllBytes(u"sampleaudio.mp3"));
    /// System::SharedPtr<IAudioFrame> audioFrame = pres->get_Slide(0)->get_Shapes()->AddAudioFrameEmbedded(50.0f, 50.0f, 100.0f, 100.0f, audio);
    /// 
    /// // Set the duration of the starting fade for 200ms
    /// audioFrame->set_FadeInDuration(200.0f);
    /// 
    /// pres->Save(u"AudioFrameFade_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FadeInDuration(float value) = 0;
    /// <summary>
    /// Specifies the time duration for the ending fade-out of the media in milliseconds.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudio> audio = pres->get_Audios()->AddAudio(System::IO::File::ReadAllBytes(u"sampleaudio.mp3"));
    /// System::SharedPtr<IAudioFrame> audioFrame = pres->get_Slide(0)->get_Shapes()->AddAudioFrameEmbedded(50.0f, 50.0f, 100.0f, 100.0f, audio);
    /// 
    /// // Set the duration of the ending fade for 500ms
    /// audioFrame->set_FadeOutDuration(500.0f);
    /// 
    /// pres->Save(u"AudioFrameFade_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_FadeOutDuration() = 0;
    /// <summary>
    /// Specifies the time duration for the ending fade-out of the media in milliseconds.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudio> audio = pres->get_Audios()->AddAudio(System::IO::File::ReadAllBytes(u"sampleaudio.mp3"));
    /// System::SharedPtr<IAudioFrame> audioFrame = pres->get_Slide(0)->get_Shapes()->AddAudioFrameEmbedded(50.0f, 50.0f, 100.0f, 100.0f, audio);
    /// 
    /// // Set the duration of the ending fade for 500ms
    /// audioFrame->set_FadeOutDuration(500.0f);
    /// 
    /// pres->Save(u"AudioFrameFade_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FadeOutDuration(float value) = 0;
    /// <summary>
    /// Returns the audio volume in percents.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudio> audio = pres->get_Audios()->AddAudio(System::IO::File::ReadAllBytes(u"sampleaudio.mp3"));
    /// System::SharedPtr<IAudioFrame> audioFrame = pres->get_Slide(0)->get_Shapes()->AddAudioFrameEmbedded(50.0f, 50.0f, 100.0f, 100.0f, audio);
    /// 
    /// // Set the duration of the starting fade for 200ms
    /// audioFrame->set_VolumeValue(85.0f);
    /// 
    /// pres->Save(u"AudioFrameValue_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_VolumeValue() = 0;
    /// <summary>
    /// Sets the audio volume in percents.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudio> audio = pres->get_Audios()->AddAudio(System::IO::File::ReadAllBytes(u"sampleaudio.mp3"));
    /// System::SharedPtr<IAudioFrame> audioFrame = pres->get_Slide(0)->get_Shapes()->AddAudioFrameEmbedded(50.0f, 50.0f, 100.0f, 100.0f, audio);
    /// 
    /// // Set the duration of the starting fade for 200ms
    /// audioFrame->set_VolumeValue(85.0f);
    /// 
    /// pres->Save(u"AudioFrameValue_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_VolumeValue(float value) = 0;
    /// <summary>
    /// Specifies the time duration to be removed from the beginning of the media during playback, in milliseconds.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudio> audio = pres->get_Audios()->AddAudio(System::IO::File::ReadAllBytes(u"sampleaudio.mp3"));
    /// System::SharedPtr<IAudioFrame> audioFrame = pres->get_Slide(0)->get_Shapes()->AddAudioFrameEmbedded(50.0f, 50.0f, 100.0f, 100.0f, audio);
    /// 
    /// // Set the start trimming time 1.5 seconds
    /// audioFrame->set_TrimFromStart(1500.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_TrimFromStart() = 0;
    /// <summary>
    /// Specifies the time duration to be removed from the beginning of the media during playback, in milliseconds.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudio> audio = pres->get_Audios()->AddAudio(System::IO::File::ReadAllBytes(u"sampleaudio.mp3"));
    /// System::SharedPtr<IAudioFrame> audioFrame = pres->get_Slide(0)->get_Shapes()->AddAudioFrameEmbedded(50.0f, 50.0f, 100.0f, 100.0f, audio);
    /// 
    /// // Set the start trimming time 1.5 seconds
    /// audioFrame->set_TrimFromStart(1500.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TrimFromStart(float value) = 0;
    /// <summary>
    /// Specifies the time duration to be removed from the end of the media during playback, in milliseconds.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudio> audio = pres->get_Audios()->AddAudio(System::IO::File::ReadAllBytes(u"sampleaudio.mp3"));
    /// System::SharedPtr<IAudioFrame> audioFrame = pres->get_Slide(0)->get_Shapes()->AddAudioFrameEmbedded(50.0f, 50.0f, 100.0f, 100.0f, audio);
    /// 
    /// // Set the end trimming time 2 seconds
    /// audioFrame->set_TrimFromEnd(2000.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_TrimFromEnd() = 0;
    /// <summary>
    /// Specifies the time duration to be removed from the end of the media during playback, in milliseconds.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// // Add Audio Frame
    /// System::SharedPtr<IAudio> audio = pres->get_Audios()->AddAudio(System::IO::File::ReadAllBytes(u"sampleaudio.mp3"));
    /// System::SharedPtr<IAudioFrame> audioFrame = pres->get_Slide(0)->get_Shapes()->AddAudioFrameEmbedded(50.0f, 50.0f, 100.0f, 100.0f, audio);
    /// 
    /// // Set the end trimming time 2 seconds
    /// audioFrame->set_TrimFromEnd(2000.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TrimFromEnd(float value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


