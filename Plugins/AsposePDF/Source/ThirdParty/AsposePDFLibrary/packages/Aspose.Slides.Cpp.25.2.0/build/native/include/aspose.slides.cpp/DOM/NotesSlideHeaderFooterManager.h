#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/INotesSlideHeaderFooterManager.h>

#include "DOM/BaseHandoutNotesSlideHeaderFooterManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class MasterNotesSlide;
class NotesSlide;
enum class PlaceholderType : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents manager which holds behavior of the notes slide placeholders, including header placeholder.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS NotesSlideHeaderFooterManager final : public Aspose::Slides::BaseHandoutNotesSlideHeaderFooterManager, public Aspose::Slides::INotesSlideHeaderFooterManager
{
    typedef NotesSlideHeaderFooterManager ThisType;
    typedef Aspose::Slides::BaseHandoutNotesSlideHeaderFooterManager BaseType;
    typedef Aspose::Slides::INotesSlideHeaderFooterManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::NotesSlide;
    /// @endcond
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API NotesSlideHeaderFooterManager(System::SharedPtr<NotesSlide> notesSlide);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NotesSlideHeaderFooterManager, CODEPORTING_ARGS(System::SharedPtr<NotesSlide> notesSlide));
    ASPOSE_SLIDES_SHARED_API void AddPlaceholder(PlaceholderType placeholderType) override;
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::MasterNotesSlide> get_MasterNotesSlide();
    
    System::WeakPtr<NotesSlide> m_notesSlide;
    
};

} // namespace Slides
} // namespace Aspose


