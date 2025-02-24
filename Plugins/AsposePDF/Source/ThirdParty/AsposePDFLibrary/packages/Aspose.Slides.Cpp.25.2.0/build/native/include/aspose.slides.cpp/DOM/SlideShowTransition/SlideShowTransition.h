#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/ISlideShowTransition.h>

#include "DOM/DomObject.h"
#include "DOM/BaseSlide.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Audio;
namespace DOM
{
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class TransitionPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
} // namespace UnsupportedProps
} // namespace DOM
namespace Export
{
class PresentationAnimationsGenerator;
} // namespace Export
class IAudio;
class LayoutSlide;
class MasterSlide;
namespace PptSerialization
{
class PptSlideDeserializationContext;
class TransitionPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class TransitionPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Slide;
namespace SlideShow
{
class ITransitionValueBase;
enum class TransitionSoundMode;
enum class TransitionSpeed;
enum class TransitionType;
class TransitionValueBase;
} // namespace SlideShow
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class TransitionPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Represents slide show transition.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SlideShowTransition : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::BaseSlide>>, public Aspose::Slides::ISlideShowTransition
{
    typedef SlideShowTransition ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::BaseSlide>> BaseType;
    typedef Aspose::Slides::ISlideShowTransition BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class System::ObjectExt;
    friend class Aspose::Slides::Export::PresentationAnimationsGenerator;
    friend class Aspose::Slides::PptSerialization::PptSlideDeserializationContext;
    friend class Aspose::Slides::PptSerialization::TransitionPPTSerialization;
    friend class Aspose::Slides::LayoutSlide;
    friend class Aspose::Slides::MasterSlide;
    friend class Aspose::Slides::Slide;
    friend class Aspose::Slides::PptxSerialization::PartParser::TransitionPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the embedded audio data.
    /// Read <see cref="IAudio"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudio> get_Sound() override;
    /// <summary>
    /// Sets the embedded audio data.
    /// Write <see cref="IAudio"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Sound(System::SharedPtr<IAudio> value) override;
    /// <summary>
    /// Set or returns sound mode for slide transition.
    /// Read <see cref="Aspose::Slides::SlideShow::TransitionSoundMode">TransitionSoundMode</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionSoundMode get_SoundMode() override;
    /// <summary>
    /// Set or returns sound mode for slide transition.
    /// Write <see cref="Aspose::Slides::SlideShow::TransitionSoundMode">TransitionSoundMode</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SoundMode(TransitionSoundMode value) override;
    /// <summary>
    /// This attribute specifies if the sound will loop until the next sound event occurs in
    /// slideshow.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_SoundLoop() override;
    /// <summary>
    /// This attribute specifies if the sound will loop until the next sound event occurs in
    /// slideshow.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SoundLoop(bool value) override;
    /// <summary>
    /// Specifies whether a mouse click will advance the slide or not. If this attribute is not
    /// specified then a value of true is assumed.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_AdvanceOnClick() override;
    /// <summary>
    /// Specifies whether a mouse click will advance the slide or not. If this attribute is not
    /// specified then a value of true is assumed.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AdvanceOnClick(bool value) override;
    /// <summary>
    /// This attribute specifies if the slideshow will move to the next slide after a certain time.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// // Get the first slide Transition
    /// auto slideTransition = pres->get_Slides()->idx_get(0)->get_SlideShowTransition();
    /// // Check if the Advance Slide After flag is checked
    /// if (slideTransition->get_AdvanceAfter())
    /// {
    ///     // Get the Advance Slide After Time value
    ///     uint32_t advanceAfterTime = slideTransition->get_AdvanceAfterTime();
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_AdvanceAfter() override;
    /// <summary>
    /// This attribute specifies if the slideshow will move to the next slide after a certain time.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// // Get the first slide Transition
    /// auto slideTransition = pres->get_Slides()->idx_get(0)->get_SlideShowTransition();
    /// // Check if the Advance Slide After flag is checked
    /// if (slideTransition->get_AdvanceAfter())
    /// {
    ///     // Get the Advance Slide After Time value
    ///     uint32_t advanceAfterTime = slideTransition->get_AdvanceAfterTime();
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_AdvanceAfter(bool value) override;
    /// <summary>
    /// Specifies the time, in milliseconds, after which the transition should start. This setting
    /// may be used in conjunction with the advClick attribute. If this attribute is not specified
    /// then it is assumed that no auto-advance will occur.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_AdvanceAfterTime() override;
    /// <summary>
    /// Specifies the time, in milliseconds, after which the transition should start. This setting
    /// may be used in conjunction with the advClick attribute. If this attribute is not specified
    /// then it is assumed that no auto-advance will occur.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AdvanceAfterTime(uint32_t value) override;
    /// <summary>
    /// Specifies the transition speed that is to be used when transitioning from the current slide
    /// to the next.
    /// Read <see cref="Aspose::Slides::SlideShow::TransitionSpeed">TransitionSpeed</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionSpeed get_Speed() override;
    /// <summary>
    /// Specifies the transition speed that is to be used when transitioning from the current slide
    /// to the next.
    /// Write <see cref="Aspose::Slides::SlideShow::TransitionSpeed">TransitionSpeed</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Speed(TransitionSpeed value) override;
    /// <summary>
    /// Slide show transition value.
    /// Read-only <see cref="Aspose::Slides::SlideShow::ITransitionValueBase">ITransitionValueBase</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITransitionValueBase> get_Value() override;
    /// <summary>
    /// Type of transition.
    /// Read <see cref="Aspose::Slides::SlideShow::TransitionType">TransitionType</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TransitionType get_Type() override;
    /// <summary>
    /// Type of transition.
    /// Write <see cref="Aspose::Slides::SlideShow::TransitionType">TransitionType</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Type(TransitionType value) override;
    /// <summary>
    /// Specifies whether or not this sound is a built-in sound. If this attribute is set to true then
    /// the generating application is alerted to check the name attribute specified for this sound
    /// in it's list of built-in sounds and can then surface a custom name or UI as needed.
    /// Reads <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_SoundIsBuiltIn() override;
    /// <summary>
    /// Specifies whether or not this sound is a built-in sound. If this attribute is set to true then
    /// the generating application is alerted to check the name attribute specified for this sound
    /// in it's list of built-in sounds and can then surface a custom name or UI as needed.
    /// Writes <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SoundIsBuiltIn(bool value) override;
    /// <summary>
    /// Specifies a human readable name for the sound of the transition. The <see cref="ISlideShowTransition::set_Sound"></see> must be assigned to get or set the sound name.
    /// Reads <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>This name appears in the PowerPoint user interface when configuring the transition sound manually.</remarks>
    /// <exception cref="PptxException">When <see cref="ISlideShowTransition::set_Sound"></see> is not assigned.</exception>
    ASPOSE_SLIDES_SHARED_API System::String get_SoundName() override;
    /// <summary>
    /// Specifies a human readable name for the sound of the transition. The <see cref="ISlideShowTransition::set_Sound"></see> must be assigned to get or set the sound name.
    /// Writes <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>This name appears in the PowerPoint user interface when configuring the transition sound manually.</remarks>
    /// <exception cref="PptxException">When <see cref="ISlideShowTransition::set_Sound"></see> is not assigned.</exception>
    ASPOSE_SLIDES_SHARED_API void set_SoundName(System::String value) override;
    
    /// <summary>
    /// Determines whether the two SlideShowTransition instances are equal.
    /// Read/write <see cref="bool"></see>.
    /// </summary>
    /// <param name="obj">The SlideShowTransition to compare with the current SlideShowTransition.</param>
    /// <returns><b>true</b> if the specified SlideShowTransition is equal to the current SlideShowTransition; otherwise, <b>false</b>.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type, suitable for use
    /// in hashing algorithms and data structures like a hash table.
    /// </summary>
    /// <remarks>
    /// Overriden to make compiler happy. Always returns constant because object is mutable.
    /// </remarks>
    /// <returns>23454</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    System::SharedPtr<TransitionValueBase> m_transition;
    bool m_bAdvanceClick;
    TransitionSpeed m_speed;
    uint32_t m_nAdvanceAfterTime;
    System::SharedPtr<Audio> m_dataAudio;
    TransitionSoundMode m_sndMode;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TransitionPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::DOM::UnsupportedProps::PPTUnsupportedProps::TransitionPPTUnsupportedProps> get_PPTUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API SlideShowTransition(System::SharedPtr<BaseSlide> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SlideShowTransition, CODEPORTING_ARGS(System::SharedPtr<BaseSlide> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool Equals(System::SharedPtr<ISlideShowTransition> transition);
    ASPOSE_SLIDES_LOCAL_API void CopyFrom(System::SharedPtr<ISlideShowTransition> showTransition);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TransitionValueBase> CreateTransitionValue(TransitionType type);
    static ASPOSE_SLIDES_LOCAL_API bool GetDefaultDurationAndSpeed(TransitionType type, TransitionSpeed& speed, int32_t& duration);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~SlideShowTransition();
    
private:

    bool m_bBuiltInSound;
    bool m_bLoop;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TransitionPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<Aspose::Slides::DOM::UnsupportedProps::PPTUnsupportedProps::TransitionPPTUnsupportedProps> m_pptUnsupportedProps;
    bool pr_AdvanceAfter;
    static const ASPOSE_SLIDES_LOCAL_API System::String ERR_SOUND_UNASSIGNED;
    
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose


