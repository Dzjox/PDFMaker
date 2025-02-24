#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/INotesSlideManager.h>

#include "DOM/Slide.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class INotesSlide;
class NotesSlide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Notes slide manager.
/// </summary>
/// <example>
/// The following example shows how to Add Notes to specific PowerPoint Presentation slide.
/// <code>
/// // Instantiate a Presentation object that represents a presentation file
/// auto presentation = System::MakeObject<Presentation>(dataDir + u"AccessSlides.pptx");
/// 
/// // Add notes to first slide
/// System::SharedPtr<INotesSlideManager> mgr = presentation->get_Slides()->idx_get(0)->get_NotesSlideManager();
/// System::SharedPtr<INotesSlide> noteSlide = mgr->AddNotesSlide();
/// noteSlide->get_NotesTextFrame()->set_Text(u"Your Notes");
/// 
/// // Save presentation to disk
/// presentation->Save(u"RemoveNotesAtSpecificSlide_out.pptx", SaveFormat::Pptx);
/// </code>
/// The following examples shows how to remove Notes from PowerPoint Presentation's specific slide.
/// <code>
/// // Instantiate a Presentation object that represents a presentation file
/// auto presentation = System::MakeObject<Presentation>(dataDir + u"AccessSlides.pptx");
/// // Removing notes of first slide
/// System::SharedPtr<INotesSlideManager> mgr = presentation->get_Slides()->idx_get(0)->get_NotesSlideManager();
/// mgr->RemoveNotesSlide();
/// // Save presentation to disk
/// presentation->Save(u"RemoveNotesAtSpecificSlide_out.pptx", SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS NotesSlideManager final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Slide>>, public Aspose::Slides::INotesSlideManager
{
    typedef NotesSlideManager ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Slide>> BaseType;
    typedef Aspose::Slides::INotesSlideManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::NotesSlide;
    friend class Aspose::Slides::Slide;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the notes slide for the current slide. Returns null if slide doesn't have notes slide.
    /// Read-only <see cref="Aspose::Slides::INotesSlide">INotesSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<INotesSlide> get_NotesSlide() override;
    
    /// <summary>
    /// Returns the notes slide for the current slide, creating one if there isn't.
    /// </summary>
    /// <returns><see cref="NotesSlideManager::get_NotesSlide"></see> for this slide.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<INotesSlide> AddNotesSlide() override;
    /// <summary>
    /// Removes notes slide of the current slide.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void RemoveNotesSlide() override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Slide> get_ParentSlide();
    
    ASPOSE_SLIDES_LOCAL_API void SetNotesSlide(System::SharedPtr<Aspose::Slides::NotesSlide> notesSlide);
    
    ASPOSE_SLIDES_LOCAL_API NotesSlideManager(System::SharedPtr<Slide> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NotesSlideManager, CODEPORTING_ARGS(System::SharedPtr<Slide> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~NotesSlideManager();
    
private:

    System::SharedPtr<Aspose::Slides::NotesSlide> m_notesSlide;
    
};

} // namespace Slides
} // namespace Aspose


