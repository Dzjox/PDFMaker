#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <Export/ISwfOptions.h>
#include <cstdint>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Foundation
{
namespace Rendering
{
namespace Swf
{
class SwfOptionsCore;
} // namespace Swf
} // namespace Rendering
} // namespace Foundation
namespace Slides
{
namespace Export
{
class ExportNotesSlides;
class INotesCommentsLayoutingOptions;
class NotesCommentsLayoutingOptions;
class PptxExporter;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation is saved in Swf format.
/// </summary>
/// <example>
/// The following example shows how to convert PowerPoint to SWF Flash.
/// <code>
/// auto presentation = System::MakeObject<Presentation>(u"HelloWorld.pptx");
/// auto swfOptions = System::MakeObject<SwfOptions>();
/// 
/// swfOptions->set_ViewerIncluded(false);
/// auto notesOptions = swfOptions->get_NotesCommentsLayouting();
/// notesOptions->set_NotesPosition(NotesPositions::BottomFull);
/// 
/// // Saving presentation and notes pages
/// presentation->Save(u"SaveAsSwf_out.swf", SaveFormat::Swf, swfOptions);
/// swfOptions->set_ViewerIncluded(true);
/// presentation->Save(u"SaveNotes_out.swf", SaveFormat::Swf, swfOptions);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS SwfOptions : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::ISwfOptions
{
    typedef SwfOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::ISwfOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::Export::PptxExporter;
    /// @endcond
    
public:

    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowHiddenSlides() override;
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowHiddenSlides(bool value) override;
    /// <summary>
    /// Specifies whether the generated SWF document should be compressed or not.
    /// Default is <c>true</c>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Compressed() override;
    /// <summary>
    /// Specifies whether the generated SWF document should be compressed or not.
    /// Default is <c>true</c>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Compressed(bool value) override;
    /// <summary>
    /// Specifies whether the generated SWF document should include the integrated document viewer or not.
    /// Default is <c>true</c>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ViewerIncluded() override;
    /// <summary>
    /// Specifies whether the generated SWF document should include the integrated document viewer or not.
    /// Default is <c>true</c>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ViewerIncluded(bool value) override;
    /// <summary>
    /// Specifies whether border around pages should be shown. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowPageBorder() override;
    /// <summary>
    /// Specifies whether border around pages should be shown. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowPageBorder(bool value) override;
    /// <summary>
    /// Show/hide fullscreen button. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowFullScreen() override;
    /// <summary>
    /// Show/hide fullscreen button. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowFullScreen(bool value) override;
    /// <summary>
    /// Show/hide page stepper. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowPageStepper() override;
    /// <summary>
    /// Show/hide page stepper. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowPageStepper(bool value) override;
    /// <summary>
    /// Show/hide search section. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowSearch() override;
    /// <summary>
    /// Show/hide search section. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowSearch(bool value) override;
    /// <summary>
    /// Show/hide whole top pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowTopPane() override;
    /// <summary>
    /// Show/hide whole top pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowTopPane(bool value) override;
    /// <summary>
    /// Show/hide bottom pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowBottomPane() override;
    /// <summary>
    /// Show/hide bottom pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowBottomPane(bool value) override;
    /// <summary>
    /// Show/hide left pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowLeftPane() override;
    /// <summary>
    /// Show/hide left pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowLeftPane(bool value) override;
    /// <summary>
    /// Start with opened left pane. Can be overridden in flashvars. Default is false. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_StartOpenLeftPane() override;
    /// <summary>
    /// Start with opened left pane. Can be overridden in flashvars. Default is false. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StartOpenLeftPane(bool value) override;
    /// <summary>
    /// Enable/disable context menu. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_EnableContextMenu() override;
    /// <summary>
    /// Enable/disable context menu. Default is true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EnableContextMenu(bool value) override;
    /// <summary>
    /// Image that will be displayed as logo in the top right corner of the viewer.
    /// Image should be 32x64 pixels PNG image, otherwise logo can be displayed improperly. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<uint8_t> get_LogoImageBytes() override;
    /// <summary>
    /// Image that will be displayed as logo in the top right corner of the viewer.
    /// Image should be 32x64 pixels PNG image, otherwise logo can be displayed improperly. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LogoImageBytes(System::ArrayPtr<uint8_t> value) override;
    /// <summary>
    /// Gets the full hyperlink address for a logo.
    /// Has an effect only if a <see cref="Aspose::Slides::Export::SwfOptions::set_LogoImageBytes">set_LogoImageBytes()</see> is specified. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_LogoLink() override;
    /// <summary>
    /// Sets the full hyperlink address for a logo.
    /// Has an effect only if a <see cref="Aspose::Slides::Export::SwfOptions::set_LogoImageBytes">set_LogoImageBytes()</see> is specified. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LogoLink(System::String value) override;
    /// <summary>
    /// Specifies the quality of JPEG images.
    /// Default is 95.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_JpegQuality() override;
    /// <summary>
    /// Specifies the quality of JPEG images.
    /// Default is 95.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_JpegQuality(int32_t value) override;
    /// <summary>
    /// Provides options that control how notes and comments is placed in exported document.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<INotesCommentsLayoutingOptions> get_NotesCommentsLayouting() override;
    
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API SwfOptions();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Foundation::Rendering::Swf::SwfOptionsCore> ToSwfOptionsCore();
    /// @endcond
    
private:

    System::SharedPtr<Aspose::Foundation::Rendering::Swf::SwfOptionsCore> m_swfOptionsCore;
    bool m_showHiddenSlides;
    bool m_includeComments;
    System::SharedPtr<NotesCommentsLayoutingOptions> m_notesCommentsLayouting;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


