#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Theme/IMasterThemeable.h"
#include "DOM/IBaseSlide.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IMasterNotesSlideHeaderFooterManager;
class ITextStyle;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents master slide for notes.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMasterNotesSlide : public virtual Aspose::Slides::IBaseSlide, public Aspose::Slides::Theme::IMasterThemeable
{
    typedef IMasterNotesSlide ThisType;
    typedef Aspose::Slides::IBaseSlide BaseType;
    typedef Aspose::Slides::Theme::IMasterThemeable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns HeaderFooter manager of the master notes slide.
    /// Read-only <see cref="Aspose::Slides::IMasterNotesSlideHeaderFooterManager">IMasterNotesSlideHeaderFooterManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterNotesSlideHeaderFooterManager> get_HeaderFooterManager() = 0;
    /// <summary>
    /// Returns the style of a notes text.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextStyle> get_NotesStyle() = 0;
    
};

} // namespace Slides
} // namespace Aspose


