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
class IMasterHandoutSlideHeaderFooterManager;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents master slide for handouts.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMasterHandoutSlide : public virtual Aspose::Slides::IBaseSlide, public Aspose::Slides::Theme::IMasterThemeable
{
    typedef IMasterHandoutSlide ThisType;
    typedef Aspose::Slides::IBaseSlide BaseType;
    typedef Aspose::Slides::Theme::IMasterThemeable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns HeaderFooter manager of the master handout slide.
    /// Read-only <see cref="Aspose::Slides::IMasterHandoutSlideHeaderFooterManager">IMasterHandoutSlideHeaderFooterManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterHandoutSlideHeaderFooterManager> get_HeaderFooterManager() = 0;
    
};

} // namespace Slides
} // namespace Aspose


