#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IBaseHandoutNotesSlideHeaderFooterManag.h>

#include "DOM/BaseSlideHeaderFooterManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlide;
class MasterHandoutSlideHeaderFooterManager;
class MasterNotesSlideHeaderFooterManager;
class NotesSlideHeaderFooterManager;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents manager which holds behavior of the placeholders, including header placeholder for all types handout and notes slides.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BaseHandoutNotesSlideHeaderFooterManager : public Aspose::Slides::BaseSlideHeaderFooterManager, public virtual Aspose::Slides::IBaseHandoutNotesSlideHeaderFooterManag
{
    typedef BaseHandoutNotesSlideHeaderFooterManager ThisType;
    typedef Aspose::Slides::BaseSlideHeaderFooterManager BaseType;
    typedef Aspose::Slides::IBaseHandoutNotesSlideHeaderFooterManag BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::MasterHandoutSlideHeaderFooterManager;
    friend class Aspose::Slides::MasterNotesSlideHeaderFooterManager;
    friend class Aspose::Slides::NotesSlideHeaderFooterManager;
    /// @endcond
    
public:

    /// <summary>
    /// Gets value indicating that a header placeholder is present.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsHeaderVisible() override;
    
    /// <summary>
    /// Changes slide header placeholder visibility.
    /// </summary>
    /// <param name="isVisible">true - makes a header placeholder visible, otherwise - hides it.</param>
    ASPOSE_SLIDES_SHARED_API void SetHeaderVisibility(bool isVisible) override;
    /// <summary>
    /// Sets text to slide header placeholder.
    /// </summary>
    /// <param name="text">Text to set.</param>
    ASPOSE_SLIDES_SHARED_API void SetHeaderText(System::String text) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API BaseHandoutNotesSlideHeaderFooterManager(System::SharedPtr<Aspose::Slides::BaseSlide> baseSlide);
    /// @endcond
    
};

} // namespace Slides
} // namespace Aspose


