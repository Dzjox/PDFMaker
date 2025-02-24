#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/IAudioFrame.h>
#include <cstdint>

#include "DOM/PictureFrame.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Audio;
enum class AudioPlayModePreset;
enum class AudioVolumeMode;
class IAudio;
class IDOMObject;
namespace PptSerialization
{
class AudioFramePPTSerialization;
class ShapeCollectionPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class AudioFramePPTXSerialization;
class MediaSequencePptxSerialization;
class VideoFramePPTXSerialization;
} // namespace PartParser
class PptxCloner;
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
class AudioFramePPTXUnsupportedProps;
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
/// Represents an audio clip on a slide.
/// </summary>
/// <example>
/// The following examples shows how to change Audio Play Options.
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"AudioFrameEmbed_out.pptx");
/// 
/// // Gets the AudioFrame shape
/// System::SharedPtr<AudioFrame> audioFrame = System::ExplicitCast<AudioFrame>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
/// // Sets the Play mode to play on click
/// audioFrame->set_PlayMode(AudioPlayModePreset::OnClick);
/// // Sets the volume to Low
/// audioFrame->set_Volume(AudioVolumeMode::Low);
/// // Sets the audio to play across slides
/// audioFrame->set_PlayAcrossSlides(true);
/// // Disables loop for the audio
/// audioFrame->set_PlayLoopMode(false);
/// // Hides the AudioFrame during the slide show
/// audioFrame->set_HideAtShowing(true);
/// // Rewinds the audio to start after playing
/// audioFrame->set_RewindAudio(true);
/// // Saves the PowerPoint file to disk
/// pres->Save(u"AudioFrameEmbed_changed.pptx", SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS AudioFrame : public Aspose::Slides::PictureFrame, public Aspose::Slides::IAudioFrame
{
    typedef AudioFrame ThisType;
    typedef Aspose::Slides::PictureFrame BaseType;
    typedef Aspose::Slides::IAudioFrame BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptxSerialization::PartParser::MediaSequencePptxSerialization;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::AudioFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::VideoFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    friend class Aspose::Slides::PptSerialization::AudioFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::ShapeCollectionPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a start track index.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_AudioCdStartTrack() override;
    /// <summary>
    /// Sets a start track index.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AudioCdStartTrack(int32_t value) override;
    /// <summary>
    /// Returns a start track time.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_AudioCdStartTrackTime() override;
    /// <summary>
    /// Sets a start track time.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AudioCdStartTrackTime(int32_t value) override;
    /// <summary>
    /// Returns a last track index
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_AudioCdEndTrack() override;
    /// <summary>
    /// Sets a last track index
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AudioCdEndTrack(int32_t value) override;
    /// <summary>
    /// Returns a last track time.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_AudioCdEndTrackTime() override;
    /// <summary>
    /// Sets a last track time.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AudioCdEndTrackTime(int32_t value) override;
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
    /// Returns the audio play mode.
    /// Read <see cref="AudioPlayModePreset"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API AudioPlayModePreset get_PlayMode() override;
    /// <summary>
    /// Sets the audio play mode.
    /// Write <see cref="AudioPlayModePreset"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PlayMode(AudioPlayModePreset value) override;
    /// <summary>
    /// Determines whether an AudioFrame is hidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HideAtShowing() override;
    /// <summary>
    /// Determines whether an AudioFrame is hidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HideAtShowing(bool value) override;
    /// <summary>
    /// Determines whether an audio is looped.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_PlayLoopMode() override;
    /// <summary>
    /// Determines whether an audio is looped.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PlayLoopMode(bool value) override;
    /// <summary>
    /// Determines whether audio is playing across the slides.
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
    /// pres->Save(u"AudioFrame_out.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_PlayAcrossSlides() override;
    /// <summary>
    /// Determines whether audio is playing across the slides.
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
    /// pres->Save(u"AudioFrame_out.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_PlayAcrossSlides(bool value) override;
    /// <summary>
    /// Determines whether audio is automatically rewinded to start after playing. 
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
    /// pres->Save(u"AudioFrame_out.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_RewindAudio() override;
    /// <summary>
    /// Determines whether audio is automatically rewinded to start after playing. 
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
    /// pres->Save(u"AudioFrame_out.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_RewindAudio(bool value) override;
    /// <summary>
    /// Determines whether a sound is embedded to a presentation.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Embedded() override;
    /// <summary>
    /// Returns the name of an audio file which is linked to an AudioFrame.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_LinkPathLong() override;
    /// <summary>
    /// Sets the name of an audio file which is linked to an AudioFrame.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LinkPathLong(System::String value) override;
    /// <summary>
    /// Returns embedded audio object.
    /// Read <see cref="Aspose::Slides::IAudio">IAudio</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudio> get_EmbeddedAudio() override;
    /// <summary>
    /// Sets embedded audio object.
    /// Write <see cref="Aspose::Slides::IAudio">IAudio</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EmbeddedAudio(System::SharedPtr<IAudio> value) override;
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
    ASPOSE_SLIDES_SHARED_API float get_FadeInDuration() override;
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
    ASPOSE_SLIDES_SHARED_API void set_FadeInDuration(float value) override;
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
    ASPOSE_SLIDES_SHARED_API float get_FadeOutDuration() override;
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
    ASPOSE_SLIDES_SHARED_API void set_FadeOutDuration(float value) override;
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
    ASPOSE_SLIDES_SHARED_API float get_VolumeValue() override;
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
    ASPOSE_SLIDES_SHARED_API void set_VolumeValue(float value) override;
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
    ASPOSE_SLIDES_SHARED_API float get_TrimFromStart() override;
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
    ASPOSE_SLIDES_SHARED_API void set_TrimFromStart(float value) override;
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
    ASPOSE_SLIDES_SHARED_API float get_TrimFromEnd() override;
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
    ASPOSE_SLIDES_SHARED_API void set_TrimFromEnd(float value) override;
    
protected:

    /// @cond
    System::String m_linkPathLong;
    System::String m_linkFileName;
    AudioPlayModePreset m_playMode;
    bool m_bHideAtShow;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::AudioFramePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API float get_VolumeValueInternal() const;
    ASPOSE_SLIDES_LOCAL_API void set_VolumeValueInternal(float value);
    ASPOSE_SLIDES_LOCAL_API bool get_NeedForMediaExtension();
    
    ASPOSE_SLIDES_LOCAL_API AudioFrame(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AudioFrame, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetDefaultAudioImage();
    ASPOSE_SLIDES_LOCAL_API bool LoadFromStream(System::SharedPtr<System::IO::Stream> stream);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~AudioFrame();
    
private:

    System::SharedPtr<Audio> m_audio;
    bool m_bPlayLoopMode;
    AudioVolumeMode m_volumeMode;
    int32_t m_nTrackStartCd;
    int32_t m_nTrackStartCdTime;
    int32_t m_nTrackEndCd;
    int32_t m_nTrackEndCdTime;
    bool pr_PlayAcrossSlides;
    bool pr_RewindAudio;
    float pr_FadeInDuration;
    float pr_FadeOutDuration;
    float pr_TrimFromStart;
    float pr_TrimFromEnd;
    float pr_VolumeValueInternal;
    
};

} // namespace Slides
} // namespace Aspose


