#pragma once
//Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/INotesSlide.h>

#include "DOM/BaseSlide.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class ExportNotesSlides;
class PptxExporter;
} // namespace Export
class INotesSlideHeaderFooterManager;
class IPlaceholder;
class ISlide;
class ITextFrame;
class NotesSlideHeaderFooterManager;
class NotesSlideManager;
namespace PptSerialization
{
class NotesSlidePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class NotesSlidePartParser;
} // namespace PartParser
} // namespace PptxSerialization
class Shape;
class Slide;
namespace Theme
{
class IOverrideThemeManager;
class NotesSlideThemeManager;
} // namespace Theme
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class BaseSlidePPTUnsupportedProps;
class NotesOrMasterNotesPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class BaseSlidePPTXUnsupportedProps;
class NotesSlidePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
namespace View
{
class NotesSlideView;
} // namespace View
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a notes slide in a presentation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS NotesSlide : public Aspose::Slides::BaseSlide, public Aspose::Slides::INotesSlide
{
    typedef NotesSlide ThisType;
    typedef Aspose::Slides::BaseSlide BaseType;
    typedef Aspose::Slides::INotesSlide BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::View::NotesSlideView;
    friend class Aspose::Slides::NotesSlideManager;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::Export::PptxExporter;
    friend class Aspose::Slides::PptxSerialization::PartParser::NotesSlidePartParser;
    friend class Aspose::Slides::PptSerialization::NotesSlidePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns HeaderFooter manager of the notes slide.
    /// Read-only <see cref="Aspose::Slides::INotesSlideHeaderFooterManager">INotesSlideHeaderFooterManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<INotesSlideHeaderFooterManager> get_HeaderFooterManager() override;
    /// <summary>
    /// Returns a TextFrame with notes' text if there is one.
    /// Read-only <see cref="Aspose::Slides::ITextFrame">ITextFrame</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrame> get_NotesTextFrame() override;
    /// <summary>
    /// Returns the overriding theme manager.
    /// Read-only <see cref="Aspose::Slides::Theme::IOverrideThemeManager">Theme::IOverrideThemeManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Theme::IOverrideThemeManager> get_ThemeManager() override;
    /// <summary>
    /// Returns the parent slide.
    /// Read-only <see cref="Aspose::Slides::ISlide">ISlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> get_ParentSlide() override;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowMasterShapes() override;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowMasterShapes(bool value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<View::NotesSlideView> get_View();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::BaseSlidePPTXUnsupportedProps> get_BaseSlidePPTXUnsupportedProps() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::BaseSlidePPTUnsupportedProps> get_BaseSlidePPTUnsupportedProps() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::NotesSlidePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::NotesOrMasterNotesPPTUnsupportedProps> get_PPTUnsupportedProps();
    
    System::WeakPtr<Aspose::Slides::Slide> m_slide;
    
    ASPOSE_SLIDES_LOCAL_API NotesSlide(System::SharedPtr<NotesSlideManager> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NotesSlide, CODEPORTING_ARGS(System::SharedPtr<NotesSlideManager> parentImmediate));
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<Shape>> GetPlaceholders(System::SharedPtr<IPlaceholder> placeholder) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~NotesSlide();
    
private:

    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::NotesSlidePPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::NotesOrMasterNotesPPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<NotesSlideHeaderFooterManager> m_headerFooterManager;
    System::SharedPtr<Theme::NotesSlideThemeManager> m_themeManager;
    bool m_showMasterShapes;
    
};

} // namespace Slides
} // namespace Aspose


