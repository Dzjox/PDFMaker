﻿#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IBaseSlideHeaderFooterManager.h"
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
/// Represents manager which holds behavior of the layout slide footer, date-time, page number placeholders and all child placeholders.
/// Child placeholders mean placeholders are contained on depending slides.
/// Depending slides use and depend on layout slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILayoutSlideHeaderFooterManager : public virtual Aspose::Slides::IBaseSlideHeaderFooterManager
{
    typedef ILayoutSlideHeaderFooterManager ThisType;
    typedef Aspose::Slides::IBaseSlideHeaderFooterManager BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Changes layout slide footer placeholder and all child footer placeholders visibility.
    /// Child placeholders mean placeholders are contained on depending slides.
    /// Depending slides use and depend on master slide.
    /// </summary>
    /// <param name="isVisible">true - makes a footer placeholders visible, otherwise - hides them.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetFooterAndChildFootersVisibility(bool isVisible) = 0;
    /// <summary>
    /// Changes layout slide page number placeholder and all child page number placeholders visibility.
    /// Child placeholders mean placeholders are contained on depending slides.
    /// Depending slides use and depend on layout slide.
    /// </summary>
    /// <param name="isVisible">true - makes a page number placeholders visible, otherwise - hides them.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetSlideNumberAndChildSlideNumbersVisibility(bool isVisible) = 0;
    /// <summary>
    /// Changes layout slide date-time placeholder and all child date-time placeholders visibility.
    /// Child placeholders mean placeholders are contained on depending slides.
    /// Depending slides use and depend on layout slide.
    /// </summary>
    /// <param name="isVisible">true - makes a date-time placeholders visible, otherwise - hides them.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetDateTimeAndChildDateTimesVisibility(bool isVisible) = 0;
    /// <summary>
    /// Sets text to layout slide footer placeholder and all child footer placeholders.
    /// Child placeholders mean placeholders are contained on depending slides.
    /// Depending slides use and depend on layout slide.
    /// </summary>
    /// <param name="text">Text to set.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetFooterAndChildFootersText(System::String text) = 0;
    /// <summary>
    /// Sets text to layout slide date-time placeholder and all child date-time placeholders.
    /// Child placeholders mean placeholders are contained on depending slides.
    /// Depending slides use and depend on layout slide.
    /// </summary>
    /// <param name="text">Text to set.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetDateTimeAndChildDateTimesText(System::String text) = 0;
    
};

} // namespace Slides
} // namespace Aspose


