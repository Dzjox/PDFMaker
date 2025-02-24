#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class HyperlinkActionType;
enum class HyperlinkColorSource;
class IAudio;
class ISlide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a hyperlink.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IHyperlink : public virtual System::Object
{
    typedef IHyperlink ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class System::ObjectExt;
    /// @endcond
    
public:

    /// <summary>
    /// Returns type of HyperLinkEx's action.
    /// Read-only <see cref="HyperlinkActionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API HyperlinkActionType get_ActionType() = 0;
    /// <summary>
    /// Specifies the external URL
    /// If this property become not null then property TargetSlide become null.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_ExternalUrl() = 0;
    /// <summary>
    /// Represents a hyperlink that is set for this portion without regard to the actual content of the portion.
    /// <remarks>
    /// PowerPoint behaves specifically for links and their corresponding text in a portion. It allows to create text for the hyperlink in
    /// the form of a valid URL, different from the real address of the link. In this case, when you view the link in the edit window, it will be
    /// changed to match the text portion. This property represents the original value of the hyperlink.
    /// </remarks>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_ExternalUrlOriginal() = 0;
    /// <summary>
    /// If the HyperlinkEx targets specific slide returns this slide.
    /// If the property become not null then property ExternalUrl become null.
    /// Read-only <see cref="Aspose::Slides::ISlide">ISlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> get_TargetSlide() = 0;
    /// <summary>
    /// Returns the frame within the parent HTML frameset for the target
    /// of the parent hyperlink when one exists.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_TargetFrame() = 0;
    /// <summary>
    /// Returns the frame within the parent HTML frameset for the target
    /// of the parent hyperlink when one exists.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TargetFrame(System::String value) = 0;
    /// <summary>
    /// Returns the string which may be surfaced in a user interface
    /// as associated with the parent hyperlink.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Tooltip() = 0;
    /// <summary>
    /// Returns the string which may be surfaced in a user interface
    /// as associated with the parent hyperlink.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Tooltip(System::String value) = 0;
    /// <summary>
    /// Determines whether the target of the parent hyperlink shall be added
    /// to a list of viewed hyperlinks when it is invoked.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_History() = 0;
    /// <summary>
    /// Determines whether the target of the parent hyperlink shall be added
    /// to a list of viewed hyperlinks when it is invoked.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_History(bool value) = 0;
    /// <summary>
    /// Determines whether the hyperlink should be highlighted on click.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HighlightClick() = 0;
    /// <summary>
    /// Determines whether the hyperlink should be highlighted on click.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HighlightClick(bool value) = 0;
    /// <summary>
    /// Determines whether the sound should be stopped on hyperlink click.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_StopSoundOnClick() = 0;
    /// <summary>
    /// Determines whether the sound should be stopped on hyperlink click.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StopSoundOnClick(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAudio> get_Sound() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Sound(System::SharedPtr<IAudio> value) = 0;
    /// <summary>
    /// Represents the source of hyperlink color - either styles or portion format.
    /// Read <see cref="HyperlinkColorSource"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API HyperlinkColorSource get_ColorSource() = 0;
    /// <summary>
    /// Represents the source of hyperlink color - either styles or portion format.
    /// Write <see cref="HyperlinkColorSource"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ColorSource(HyperlinkColorSource value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


