#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Export/ISaveOptions.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class INotesCommentsLayoutingOptions;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation is saved in SWF format.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISwfOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef ISwfOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies whether the generated SWF document should be compressed or not.
    /// Default is <c>true</c>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Compressed() = 0;
    /// <summary>
    /// Specifies whether the generated SWF document should be compressed or not.
    /// Default is <c>true</c>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Compressed(bool value) = 0;
    /// <summary>
    /// Specifies whether the generated SWF document should include the integrated document viewer or not.
    /// Default is <c>true</c>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ViewerIncluded() = 0;
    /// <summary>
    /// Specifies whether the generated SWF document should include the integrated document viewer or not.
    /// Default is <c>true</c>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ViewerIncluded(bool value) = 0;
    /// <summary>
    /// Specifies whether border around pages should be shown. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowPageBorder() = 0;
    /// <summary>
    /// Specifies whether border around pages should be shown. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowPageBorder(bool value) = 0;
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowHiddenSlides() = 0;
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowHiddenSlides(bool value) = 0;
    /// <summary>
    /// Show/hide fullscreen button. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowFullScreen() = 0;
    /// <summary>
    /// Show/hide fullscreen button. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowFullScreen(bool value) = 0;
    /// <summary>
    /// Show/hide page stepper. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowPageStepper() = 0;
    /// <summary>
    /// Show/hide page stepper. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowPageStepper(bool value) = 0;
    /// <summary>
    /// Show/hide search section. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowSearch() = 0;
    /// <summary>
    /// Show/hide search section. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowSearch(bool value) = 0;
    /// <summary>
    /// Show/hide whole top pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowTopPane() = 0;
    /// <summary>
    /// Show/hide whole top pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowTopPane(bool value) = 0;
    /// <summary>
    /// Show/hide bottom pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowBottomPane() = 0;
    /// <summary>
    /// Show/hide bottom pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowBottomPane(bool value) = 0;
    /// <summary>
    /// Show/hide left pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowLeftPane() = 0;
    /// <summary>
    /// Show/hide left pane. Can be overridden in flashvars. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowLeftPane(bool value) = 0;
    /// <summary>
    /// Start with opened left pane. Can be overridden in flashvars. Default is false. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_StartOpenLeftPane() = 0;
    /// <summary>
    /// Start with opened left pane. Can be overridden in flashvars. Default is false. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StartOpenLeftPane(bool value) = 0;
    /// <summary>
    /// Enable/disable context menu. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_EnableContextMenu() = 0;
    /// <summary>
    /// Enable/disable context menu. Default is true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EnableContextMenu(bool value) = 0;
    /// <summary>
    /// Image that will be displayed as logo in the top right corner of the viewer.             
    /// Image should be 32x64 pixels PNG image, otherwise logo can be displayed improperly. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<uint8_t> get_LogoImageBytes() = 0;
    /// <summary>
    /// Image that will be displayed as logo in the top right corner of the viewer.             
    /// Image should be 32x64 pixels PNG image, otherwise logo can be displayed improperly. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LogoImageBytes(System::ArrayPtr<uint8_t> value) = 0;
    /// <summary>
    /// Gets the full hyperlink address for a logo.
    /// Has an effect only if a <see cref="Aspose::Slides::Export::SwfOptions::set_LogoImageBytes">set_LogoImageBytes()</see> is specified. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LogoLink() = 0;
    /// <summary>
    /// Sets the full hyperlink address for a logo.
    /// Has an effect only if a <see cref="Aspose::Slides::Export::SwfOptions::set_LogoImageBytes">set_LogoImageBytes()</see> is specified. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LogoLink(System::String value) = 0;
    /// <summary>
    /// Specifies the quality of JPEG images.             
    /// Default is 95. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_JpegQuality() = 0;
    /// <summary>
    /// Specifies the quality of JPEG images.             
    /// Default is 95. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_JpegQuality(int32_t value) = 0;
    /// <summary>
    /// Provides options that control how notes and comments is placed in exported document.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<INotesCommentsLayoutingOptions> get_NotesCommentsLayouting() = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


