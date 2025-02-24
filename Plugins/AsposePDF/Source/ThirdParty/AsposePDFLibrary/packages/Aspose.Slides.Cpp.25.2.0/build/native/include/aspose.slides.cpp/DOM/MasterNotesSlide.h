#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IMasterNotesSlide.h>

#include "DOM/BaseSlide.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IMasterNotesSlideHeaderFooterManager;
class ITextStyle;
class MasterNotesSlideHeaderFooterManager;
class MasterNotesSlideManager;
namespace PptSerialization
{
class NotesMasterPPTSerialization;
class PlaceholderPPTSerialization;
class PptDeserializator;
class PptSerializator;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class NotesMasterPartParser;
class PresentationPartParser;
} // namespace PartParser
} // namespace PptxSerialization
class Presentation;
class TextStyle;
namespace Theme
{
class IMasterThemeManager;
class MasterThemeManager;
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
class MasterNotesSlidePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents master slide for notes.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MasterNotesSlide : public Aspose::Slides::BaseSlide, public Aspose::Slides::IMasterNotesSlide
{
    typedef MasterNotesSlide ThisType;
    typedef Aspose::Slides::BaseSlide BaseType;
    typedef Aspose::Slides::IMasterNotesSlide BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptSerialization::NotesMasterPPTSerialization;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptSerialization::PptSerializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::NotesMasterPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::PresentationPartParser;
    friend class Aspose::Slides::PptSerialization::PlaceholderPPTSerialization;
    friend class Aspose::Slides::MasterNotesSlideManager;
    /// @endcond
    
public:

    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// For master slide itself this property always returns <c>false</c>.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <exception cref="System::NotSupportedException">Thrown if set <c>true</c> for master slide.</exception>
    ASPOSE_SLIDES_SHARED_API bool get_ShowMasterShapes() override;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// For master slide itself this property always returns <c>false</c>.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <exception cref="System::NotSupportedException">Thrown if set <c>true</c> for master slide.</exception>
    ASPOSE_SLIDES_SHARED_API void set_ShowMasterShapes(bool value) override;
    /// <summary>
    /// Returns HeaderFooter manager of the master notes slide.
    /// Read-only <see cref="Aspose::Slides::IMasterHandoutSlideHeaderFooterManager">IMasterHandoutSlideHeaderFooterManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterNotesSlideHeaderFooterManager> get_HeaderFooterManager() override;
    /// <summary>
    /// Returns the theme manager.
    /// Read-only <see cref="Aspose::Slides::Theme::IMasterThemeManager">Theme::IMasterThemeManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Theme::IMasterThemeManager> get_ThemeManager() override;
    /// <summary>
    /// Returns the style of a notes text.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextStyle> get_NotesStyle() override;
    
protected:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::BaseSlidePPTXUnsupportedProps> get_BaseSlidePPTXUnsupportedProps() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::BaseSlidePPTUnsupportedProps> get_BaseSlidePPTUnsupportedProps() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::MasterNotesSlidePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::NotesOrMasterNotesPPTUnsupportedProps> get_PPTUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API MasterNotesSlide(System::SharedPtr<MasterNotesSlideManager> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MasterNotesSlide, CODEPORTING_ARGS(System::SharedPtr<MasterNotesSlideManager> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void AdjustSlideImagePlaceholderOnResize();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~MasterNotesSlide();
    
private:

    System::SharedPtr<TextStyle> m_notesStyle;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::MasterNotesSlidePPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::NotesOrMasterNotesPPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<MasterNotesSlideHeaderFooterManager> m_headerFooterManager;
    System::SharedPtr<Theme::MasterThemeManager> m_themeManager;
    
};

} // namespace Slides
} // namespace Aspose


