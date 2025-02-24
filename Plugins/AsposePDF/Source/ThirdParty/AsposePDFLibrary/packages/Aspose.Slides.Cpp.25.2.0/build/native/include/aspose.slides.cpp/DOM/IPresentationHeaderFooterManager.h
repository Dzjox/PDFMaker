#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IBaseHeaderFooterManager.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents manager which holds behavior of all footer, date-time and page number placeholders of presentation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPresentationHeaderFooterManager : public virtual Aspose::Slides::IBaseHeaderFooterManager
{
    typedef IPresentationHeaderFooterManager ThisType;
    typedef Aspose::Slides::IBaseHeaderFooterManager BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Changes all header placeholders visibility, including notes master, notes slides and handout master.
    /// </summary>
    /// <param name="isVisible">true - makes a header placeholders visible, otherwise - hides them.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetAllHeadersVisibility(bool isVisible) = 0;
    /// <summary>
    /// Changes all footer placeholders visibility, including master slides, layout slides and slides.
    /// </summary>
    /// <param name="isVisible">true - makes a footer placeholders visible, otherwise - hides them.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetAllFootersVisibility(bool isVisible) = 0;
    /// <summary>
    /// Changes all page number placeholders visibility, including master slides, layout slides and slides.
    /// </summary>
    /// <param name="isVisible">true - makes a page number placeholders visible, otherwise - hides them.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetAllSlideNumbersVisibility(bool isVisible) = 0;
    /// <summary>
    /// Changes all date-time placeholders visibility, including master slides, layout slides and slides.
    /// </summary>
    /// <param name="isVisible">true - makes a date-time placeholders visible, otherwise - hides them.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetAllDateTimesVisibility(bool isVisible) = 0;
    /// <summary>
    /// Sets text to all header placeholders, including notes master, notes slides and handout master.
    /// </summary>
    /// <param name="text">Text to set.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetAllHeadersText(System::String text) = 0;
    /// <summary>
    /// Sets text to all footer placeholders, including master slides, layout slides and slides.
    /// </summary>
    /// <param name="text">Text to set.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetAllFootersText(System::String text) = 0;
    /// <summary>
    /// Sets text to all date-time placeholders, including master slides, layout slides and slides.
    /// </summary>
    /// <param name="text">Text to set.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetAllDateTimesText(System::String text) = 0;
    /// <summary>
    /// Changes the footer, date-time and page number placeholders visibility for all title slides and for first layout slide.
    /// Title slides – slides based on first layout slide (regardless of type of this first layout).
    /// </summary>
    /// <param name="isVisible">true - makes a placeholders visible, otherwise - hides them.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetVisibilityOnAllTitleSlides(bool isVisible) = 0;
    
};

} // namespace Slides
} // namespace Aspose


