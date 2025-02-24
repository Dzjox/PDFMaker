#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/ISlideHeaderFooterManager.h>

#include "DOM/BaseSlideHeaderFooterManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class PlaceholderType : int8_t;
class Slide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents manager which holds behavior of the slide footer, date-time, page number placeholders.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SlideHeaderFooterManager final : public Aspose::Slides::BaseSlideHeaderFooterManager, public Aspose::Slides::ISlideHeaderFooterManager
{
    typedef SlideHeaderFooterManager ThisType;
    typedef Aspose::Slides::BaseSlideHeaderFooterManager BaseType;
    typedef Aspose::Slides::ISlideHeaderFooterManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Slide;
    /// @endcond
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API SlideHeaderFooterManager(System::SharedPtr<Slide> slide);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SlideHeaderFooterManager, CODEPORTING_ARGS(System::SharedPtr<Slide> slide));
    ASPOSE_SLIDES_SHARED_API void AddPlaceholder(PlaceholderType placeholderType) override;
    
private:

    System::WeakPtr<Slide> m_slide;
    
};

} // namespace Slides
} // namespace Aspose


