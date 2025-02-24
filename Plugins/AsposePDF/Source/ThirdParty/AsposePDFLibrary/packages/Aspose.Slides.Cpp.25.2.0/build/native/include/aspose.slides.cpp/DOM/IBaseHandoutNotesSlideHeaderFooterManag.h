#pragma once
// Copyright (c) 2001-2018 Aspose Pty Ltd. All Rights Reserved.

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
/// Represents manager which holds behavior of the placeholders, including header placeholder for all types handout and notes slides.
/// </summary>
/// <remarks>Original interface name "IBaseHandoutNotesSlideHeaderFooterManager" is trancuted to "IBaseHandoutNotesSlideHeaderFooterManag" for COM compatibility (type name length must be not more than 39).</remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IBaseHandoutNotesSlideHeaderFooterManag : public virtual Aspose::Slides::IBaseSlideHeaderFooterManager
{
    typedef IBaseHandoutNotesSlideHeaderFooterManag ThisType;
    typedef Aspose::Slides::IBaseSlideHeaderFooterManager BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets value indicating that a header placeholder is present.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsHeaderVisible() = 0;
    
    /// <summary>
    /// Changes slide header placeholder visibility.
    /// </summary>
    /// <param name="isVisible">true - makes a header placeholder visible, otherwise - hides it.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetHeaderVisibility(bool isVisible) = 0;
    /// <summary>
    /// Sets text to slide header placeholder.
    /// </summary>
    /// <param name="text">Text to set.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetHeaderText(System::String text) = 0;
    
};

} // namespace Slides
} // namespace Aspose


