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
/// Represents manager which holds behavior of the footer, date-time, page number placeholders for all slide types.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBaseSlideHeaderFooterManager : public Aspose::Slides::IBaseHeaderFooterManager
{
    typedef IBaseSlideHeaderFooterManager ThisType;
    typedef Aspose::Slides::IBaseHeaderFooterManager BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets value indicating that a footer placeholder is present.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsFooterVisible() = 0;
    /// <summary>
    /// Gets value indicating that a page number placeholder is present.
    /// Read<see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsSlideNumberVisible() = 0;
    /// <summary>
    /// Gets value indicating that a date-time placeholder is present.
    /// Read<see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsDateTimeVisible() = 0;
    
    /// <summary>
    /// Changes slide footer placeholder visibility.
    /// </summary>
    /// <param name="isVisible">true - makes a footer placeholder visible, otherwise - hides it.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetFooterVisibility(bool isVisible) = 0;
    /// <summary>
    /// Changes slide page number placeholder visibility.
    /// </summary>
    /// <param name="isVisible">true - makes a page number placeholder visible, otherwise - hides it.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetSlideNumberVisibility(bool isVisible) = 0;
    /// <summary>
    /// Changes slide date-time placeholder visibility.
    /// </summary>
    /// <param name="isVisible">true - makes a date-time placeholder visible, otherwise - hides it.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetDateTimeVisibility(bool isVisible) = 0;
    /// <summary>
    /// Sets text to slide footer placeholder.
    /// </summary>
    /// <param name="text">Text to set.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetFooterText(System::String text) = 0;
    /// <summary>
    /// Sets text to slide date-time placeholder.
    /// </summary>
    /// <param name="text">Text to set.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetDateTimeText(System::String text) = 0;
    
};

} // namespace Slides
} // namespace Aspose


