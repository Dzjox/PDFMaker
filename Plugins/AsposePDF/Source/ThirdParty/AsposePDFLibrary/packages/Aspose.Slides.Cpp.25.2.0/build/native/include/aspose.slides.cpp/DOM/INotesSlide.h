#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Theme/IOverrideThemeable.h"
#include "DOM/IBaseSlide.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class INotesSlideHeaderFooterManager;
class ISlide;
class ITextFrame;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a notes slide in a presentation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS INotesSlide : public virtual Aspose::Slides::IBaseSlide, public Aspose::Slides::Theme::IOverrideThemeable
{
    typedef INotesSlide ThisType;
    typedef Aspose::Slides::IBaseSlide BaseType;
    typedef Aspose::Slides::Theme::IOverrideThemeable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns HeaderFooter manager of the notes slide.
    /// Read-only <see cref="Aspose::Slides::INotesSlideHeaderFooterManager">INotesSlideHeaderFooterManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<INotesSlideHeaderFooterManager> get_HeaderFooterManager() = 0;
    /// <summary>
    /// Returns a TextFrame with notes' text if there is one.
    /// Read-only <see cref="Aspose::Slides::ITextFrame">ITextFrame</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextFrame> get_NotesTextFrame() = 0;
    /// <summary>
    /// Returns a ParentSlide
    /// Read-only <see cref="Aspose::Slides::ISlide">ISlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> get_ParentSlide() = 0;
    
};

} // namespace Slides
} // namespace Aspose


