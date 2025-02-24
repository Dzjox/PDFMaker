#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/ILayoutSlideHeaderFooterManager.h>

#include "DOM/BaseSlideHeaderFooterManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class LayoutSlide;
class MasterSlideHeaderFooterManager;
enum class PlaceholderType : int8_t;
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
/// Represents manager which holds behavior of the layout slide footer, date-time, page number placeholders and all child placeholders.
/// Child placeholders mean placeholders are contained on depending slides.
/// Depending slides use and depend on layout slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS LayoutSlideHeaderFooterManager final : public Aspose::Slides::BaseSlideHeaderFooterManager, public Aspose::Slides::ILayoutSlideHeaderFooterManager
{
    typedef LayoutSlideHeaderFooterManager ThisType;
    typedef Aspose::Slides::BaseSlideHeaderFooterManager BaseType;
    typedef Aspose::Slides::ILayoutSlideHeaderFooterManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::MasterSlideHeaderFooterManager;
    friend class Aspose::Slides::LayoutSlide;
    /// @endcond
    
public:

    /// <summary>
    /// Changes layout slide footer placeholder and all child footer placeholders visibility.
    /// Child placeholders mean placeholders are contained on depending slides.
    /// Depending slides use and depend on master slide.
    /// </summary>
    /// <param name="isVisible">true - makes a footer placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetFooterAndChildFootersVisibility(bool isVisible) override;
    /// <summary>
    /// Changes layout slide page number placeholder and all child page number placeholders visibility.
    /// Child placeholders mean placeholders are contained on depending slides.
    /// Depending slides use and depend on layout slide.
    /// </summary>
    /// <param name="isVisible">true - makes a page number placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetSlideNumberAndChildSlideNumbersVisibility(bool isVisible) override;
    /// <summary>
    /// Changes layout slide date-time placeholder and all child date-time placeholders visibility.
    /// Child placeholders mean placeholders are contained on depending slides.
    /// Depending slides use and depend on layout slide.
    /// </summary>
    /// <param name="isVisible">true - makes a date-time placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetDateTimeAndChildDateTimesVisibility(bool isVisible) override;
    /// <summary>
    /// Sets text to layout slide footer placeholder and all child footer placeholders.
    /// Child placeholders mean placeholders are contained on depending slides.
    /// Depending slides use and depend on layout slide.
    /// </summary>
    /// <param name="text">Text to set.</param>
    ASPOSE_SLIDES_SHARED_API void SetFooterAndChildFootersText(System::String text) override;
    /// <summary>
    /// Sets text to layout slide date-time placeholder and all child date-time placeholders.
    /// Child placeholders mean placeholders are contained on depending slides.
    /// Depending slides use and depend on layout slide.
    /// </summary>
    /// <param name="text">Text to set.</param>
    ASPOSE_SLIDES_SHARED_API void SetDateTimeAndChildDateTimesText(System::String text) override;
    
protected:

    ASPOSE_SLIDES_SHARED_API void AddPlaceholder(PlaceholderType placeholderType) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetPlaceholderAndChildPlaceholdersVisibility(PlaceholderType placeholderType, bool isVisible);
    ASPOSE_SLIDES_LOCAL_API void SetPlaceholderAndChildPlaceholdersText(PlaceholderType placeholderType, System::String text, bool isRemoveField);
    
    ASPOSE_SLIDES_LOCAL_API LayoutSlideHeaderFooterManager(System::SharedPtr<LayoutSlide> layoutSlide);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LayoutSlideHeaderFooterManager, CODEPORTING_ARGS(System::SharedPtr<LayoutSlide> layoutSlide));
    
private:

    System::WeakPtr<LayoutSlide> m_layoutSlide;
    
};

} // namespace Slides
} // namespace Aspose


