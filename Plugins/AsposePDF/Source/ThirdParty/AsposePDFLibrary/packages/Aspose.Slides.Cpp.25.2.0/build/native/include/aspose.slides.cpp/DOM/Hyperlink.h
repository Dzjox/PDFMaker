#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/IHyperlink.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace EqualityComparers
{
class HyperlinkEqualityComparer;
} // namespace EqualityComparers
namespace Export
{
class ApsPptxCanvas;
} // namespace Export
enum class HyperlinkActionType;
enum class HyperlinkColorSource;
class HyperlinkImpl;
class HyperlinkManager;
class IAudio;
class IDOMObject;
class IHyperlinkContainer;
class ISlide;
namespace OdpSerialization
{
class OdpDeserializator;
namespace PartParser
{
class PortionOdpDeserialization;
class PortionOdpSerialization;
class SlideOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
class Paragraph;
class PortionFormat;
class PortionFormatImpl;
namespace PptSerialization
{
class HyperlinkPPTSerialization;
class PptDeserializator;
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class HyperlinkPPTXSerialization;
} // namespace PartParser
class PptxDeserializationContext;
} // namespace PptxSerialization
class Shape;
class SlideCollection;
class TextLayout;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class HyperlinkPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a hyperlink.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Hyperlink final : public Aspose::Slides::PVIObject, public Aspose::Slides::IHyperlink
{
    typedef Hyperlink ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IHyperlink BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::PortionFormatImpl;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::Export::ApsPptxCanvas;
    friend class Aspose::Slides::OdpSerialization::OdpDeserializator;
    friend class Aspose::Slides::OdpSerialization::PartParser::PortionOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::PortionOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::SlideOdpDeserialization;
    friend class Aspose::Slides::EqualityComparers::HyperlinkEqualityComparer;
    friend class Aspose::Slides::Paragraph;
    friend class Aspose::Slides::PortionFormat;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::HyperlinkPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializationContext;
    friend class Aspose::Slides::PptSerialization::HyperlinkPPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::HyperlinkManager;
    friend ASPOSE_SLIDES_SHARED_API bool operator ==(System::SharedPtr<Hyperlink> hlink1, System::SharedPtr<Hyperlink> hlink2);
    friend ASPOSE_SLIDES_SHARED_API bool operator !=(System::SharedPtr<Hyperlink> hlink1, System::SharedPtr<Hyperlink> hlink2);
    /// @endcond
    
public:

    /// <summary>
    /// Returns a special "do nothing" hyperlink.
    /// Read-only <see cref="Aspose::Slides::Hyperlink">Hyperlink</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<Hyperlink> get_NoAction();
    /// <summary>
    /// Returns a special "play mediafile" hyperlink. Used in AudioFrame and VideoFrame.
    /// Read-only <see cref="Aspose::Slides::Hyperlink">Hyperlink</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<Hyperlink> get_Media();
    /// <summary>
    /// Returns a hyperlink to the next slide.
    /// Read-only <see cref="Aspose::Slides::Hyperlink">Hyperlink</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<Hyperlink> get_NextSlide();
    /// <summary>
    /// Returns a hyperlink to the previous slide.
    /// Read-only <see cref="Aspose::Slides::Hyperlink">Hyperlink</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<Hyperlink> get_PreviousSlide();
    /// <summary>
    /// Returns a hyperlink to the first slide of the presentation.
    /// Read-only <see cref="Aspose::Slides::Hyperlink">Hyperlink</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<Hyperlink> get_FirstSlide();
    /// <summary>
    /// Returns a hyperlink to the last slide of the presentation.
    /// Read-only <see cref="Aspose::Slides::Hyperlink">Hyperlink</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<Hyperlink> get_LastSlide();
    /// <summary>
    /// Returns a hyperlink to the last viewed slide.
    /// Read-only <see cref="Aspose::Slides::Hyperlink">Hyperlink</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<Hyperlink> get_LastVievedSlide();
    /// <summary>
    /// Returns a hyperlink which ends the show.
    /// Read-only <see cref="Aspose::Slides::Hyperlink">Hyperlink</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<Hyperlink> get_EndShow();
    /// <summary>
    /// Returns type of Hyperlink's action.
    /// Read-only <see cref="HyperlinkActionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API HyperlinkActionType get_ActionType() override;
    /// <summary>
    /// Specifies the external URL.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ExternalUrl() override;
    /// <summary>
    /// If the Hyperlink targets specific slide returns this slide.
    /// Read-only <see cref="Aspose::Slides::ISlide">ISlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> get_TargetSlide() override;
    /// <summary>
    /// Represents a hyperlink that is set for this portion without regard to the actual content of the portion.
    /// <remarks>
    /// PowerPoint behaves specifically for links and their corresponding text in a portion. It allows to create text for the hyperlink in
    /// the form of a valid URL, different from the real address of the link. In this case, when you view the link in the edit window, it will be
    /// changed to match the text portion. This property represents the original value of the hyperlink.
    /// </remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ExternalUrlOriginal() override;
    /// <summary>
    /// Returns the frame within the parent HTML frameset for the target
    /// of the parent hyperlink when one exists.
    /// Read/wite <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_TargetFrame() override;
    /// <summary>
    /// Returns the frame within the parent HTML frameset for the target
    /// of the parent hyperlink when one exists.
    /// Read/wite <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TargetFrame(System::String value) override;
    /// <summary>
    /// Returns the string which may be surfaced in a user interface
    /// as associated with the parent hyperlink.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Tooltip() override;
    /// <summary>
    /// Returns the string which may be surfaced in a user interface
    /// as associated with the parent hyperlink.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Tooltip(System::String value) override;
    /// <summary>
    /// Determines whether the target of the parent hyperlink shall be added
    /// to a list of viewed hyperlinks when it is invoked.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_History() override;
    /// <summary>
    /// Determines whether the target of the parent hyperlink shall be added
    /// to a list of viewed hyperlinks when it is invoked.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_History(bool value) override;
    /// <summary>
    /// Determines whether the hyperlink should be highlighted on click.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HighlightClick() override;
    /// <summary>
    /// Determines whether the hyperlink should be highlighted on click.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HighlightClick(bool value) override;
    /// <summary>
    /// Determines whether the sound should be stopped on hyperlink click.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_StopSoundOnClick() override;
    /// <summary>
    /// Determines whether the sound should be stopped on hyperlink click.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StopSoundOnClick(bool value) override;
    /// <summary>
    /// Represents the playing sound of the hyperlink.
    /// Read <see cref="Aspose::Slides::IAudio">IAudio</see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first shape hyperlink
    /// auto link = presentation->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)->get_HyperlinkClick();
    /// 
    /// if (link->get_Sound() != nullptr)
    /// {
    ///     // Extract the hyperlink sound in byte array
    ///     System::ArrayPtr<uint8_t> audioData = link->get_Sound()->get_BinaryData();
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudio> get_Sound() override;
    /// <summary>
    /// Represents the playing sound of the hyperlink.
    /// Write <see cref="Aspose::Slides::IAudio">IAudio</see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first shape hyperlink
    /// auto link = presentation->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)->get_HyperlinkClick();
    /// 
    /// if (link->get_Sound() != nullptr)
    /// {
    ///     // Extract the hyperlink sound in byte array
    ///     System::ArrayPtr<uint8_t> audioData = link->get_Sound()->get_BinaryData();
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Sound(System::SharedPtr<IAudio> value) override;
    /// <summary>
    /// Represents the source of hyperlink color - either styles or portion format.
    /// Read <see cref="HyperlinkColorSource"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API HyperlinkColorSource get_ColorSource() override;
    /// <summary>
    /// Represents the source of hyperlink color - either styles or portion format.
    /// Write <see cref="HyperlinkColorSource"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ColorSource(HyperlinkColorSource value) override;
    
    /// <summary>
    /// Creates an instance of a hyperlink.
    /// </summary>
    /// <param name="url">Hyperlink URL.</param>
    ASPOSE_SLIDES_SHARED_API Hyperlink(System::String url);
    /// <summary>
    /// Creates an instance of a hyperlink which points to specific slide.
    /// Note: created hyperlink should be assigned to some object from the same presentation, otherwise link will be saved as NoAction.
    /// </summary>
    /// <param name="slide">Target slide.</param>
    ASPOSE_SLIDES_SHARED_API Hyperlink(System::SharedPtr<ISlide> slide);
    /// <summary>
    /// Creates an instance of a hyperlink using another hyperlink as source, overriding secondary properties.
    /// </summary>
    /// <param name="source">Source hyperlink</param>
    /// <param name="targetFrame">Target frame</param>
    /// <param name="tooltip">Tooltip text</param>
    /// <param name="history"></param>
    /// <param name="stopSoundsOnClick"></param>
    /// <param name="highlightClick"></param>
    ASPOSE_SLIDES_SHARED_API Hyperlink(System::SharedPtr<Hyperlink> source, System::String targetFrame, System::String tooltip, bool history, bool stopSoundsOnClick, bool highlightClick);
    
    /// <summary>
    /// Determines whether the two Hyperlink instances are equal.
    /// </summary>
    /// <param name="obj">The Hyperlink to compare with the current Hyperlink.</param>
    /// <returns><b>true</b> if the specified Hyperlink is equal to the current Hyperlink; otherwise, <b>false</b>.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type, suitable for use
    /// in hashing algorithms and data structures like a hash table.
    /// </summary>
    /// <returns>Hash code for an URL.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<HyperlinkImpl> get_RealObject() const;
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::HyperlinkPPTXUnsupportedProps> get_PPTXUnsupportedProps() const;
    
    static const ASPOSE_SLIDES_LOCAL_API System::String NoActionActionString, HyperlinkActionString, JumpFirstSlideActionString, JumpPreviousSlideActionString, JumpNextSlideActionString, JumpLastSlideActionString, JumpEndShowActionString, JumpLastViewedSlideActionString, JumpSpecificSlideActionString, OpenFileActionString, OpenPresentationActionString, StartStopMediaActionString, StartMacroActionString, StartProgramActionString, StartCustomSlideShowActionString;
    
    ASPOSE_SLIDES_LOCAL_API System::String get_ActionString() const;
    ASPOSE_SLIDES_LOCAL_API void set_ActionString(System::String value);
    ASPOSE_SLIDES_LOCAL_API bool get_External();
    ASPOSE_SLIDES_LOCAL_API void set_External(bool value);
    ASPOSE_SLIDES_LOCAL_API System::String get_InternalUrl();
    ASPOSE_SLIDES_LOCAL_API void set_InternalUrl(System::String value);
    /// <summary>
    /// Represents a hyperlink that is set for this portion without regard to the actual content of the portion.
    /// <remarks>
    /// PowerPoint behaves specifically for links and their corresponding text in a portion. It allows to create text for the hyperlink in
    /// the form of a valid URL, different from the real address of the link. In this case, when you view the link in the edit window, it will be
    /// changed to match the text portion. This property represents the original value of the hyperlink.
    /// </remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ExternalUrlOriginal(System::String value);
    ASPOSE_SLIDES_LOCAL_API bool get_NoUnderline();
    ASPOSE_SLIDES_LOCAL_API void set_NoUnderline(bool value);
    ASPOSE_SLIDES_LOCAL_API System::String get_InvalidUrl() const;
    ASPOSE_SLIDES_LOCAL_API void set_InvalidUrl(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IHyperlinkContainer> get_ParentHyperlinkContainer();
    
    ASPOSE_SLIDES_LOCAL_API Hyperlink(bool external, System::String uri, HyperlinkActionType actionType);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Hyperlink, CODEPORTING_ARGS(bool external, System::String uri, HyperlinkActionType actionType));
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<IHyperlinkContainer> parentImmediate);
    /// @endcond
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IHyperlinkContainer> m_parentImmediate;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::HyperlinkPPTXUnsupportedProps> m_pptxUnsupportedProps;
    HyperlinkActionType m_actionType;
    System::String m_actionString;
    bool m_external;
    System::String m_url;
    
    ASPOSE_SLIDES_LOCAL_API Hyperlink(HyperlinkActionType actionType);
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Hyperlink, CODEPORTING_ARGS(HyperlinkActionType actionType));
    ASPOSE_SLIDES_LOCAL_API void Init(bool external, System::String uri, HyperlinkActionType actionType);
    ASPOSE_SLIDES_LOCAL_API bool EqualsImp(System::SharedPtr<Hyperlink> hlink);
    ASPOSE_SLIDES_LOCAL_API System::String GetEffectiveExternalUrl();
    static ASPOSE_SLIDES_LOCAL_API System::String EscapeSpecialCharacters(System::String inputString);
    ASPOSE_SLIDES_LOCAL_API HyperlinkActionType ParseLinkActionType();
    
};

ASPOSE_SLIDES_SHARED_API bool operator ==(System::SharedPtr<Hyperlink> hlink1, System::SharedPtr<Hyperlink> hlink2);
ASPOSE_SLIDES_SHARED_API bool operator !=(System::SharedPtr<Hyperlink> hlink1, System::SharedPtr<Hyperlink> hlink2);

} // namespace Slides
} // namespace Aspose


