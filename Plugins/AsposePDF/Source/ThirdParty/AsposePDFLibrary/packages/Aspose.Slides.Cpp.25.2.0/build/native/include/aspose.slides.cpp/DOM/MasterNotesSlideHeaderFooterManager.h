#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IMasterNotesSlideHeaderFooterManager.h>

#include "DOM/BaseHandoutNotesSlideHeaderFooterManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class MasterNotesSlide;
enum class PlaceholderType : int8_t;
class Presentation;
class PresentationHeaderFooterManager;
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
/// Represents manager which holds behavior of the master notes slide footer, date-time, page number placeholders and all child placeholders.
/// Child placeholders mean placeholders are contained on depending notes slides.
/// Depending notes slides use and depend on master notes slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MasterNotesSlideHeaderFooterManager final : public Aspose::Slides::BaseHandoutNotesSlideHeaderFooterManager, public Aspose::Slides::IMasterNotesSlideHeaderFooterManager
{
    typedef MasterNotesSlideHeaderFooterManager ThisType;
    typedef Aspose::Slides::BaseHandoutNotesSlideHeaderFooterManager BaseType;
    typedef Aspose::Slides::IMasterNotesSlideHeaderFooterManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PresentationHeaderFooterManager;
    friend class Aspose::Slides::MasterNotesSlide;
    /// @endcond
    
public:

    /// <summary>
    /// Changes master notes slide header placeholder and all child header placeholders visibility.
    /// Child placeholders mean placeholders are contained on depending notes slides.
    /// Depending notes slides use and depend on master notes slide.
    /// </summary>
    /// <param name="isVisible">true - makes a header placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetHeaderAndChildHeadersVisibility(bool isVisible) override;
    /// <summary>
    /// Sets text to master notes slide header placeholder and all child header placeholders.
    /// Child placeholders mean placeholders are contained on depending notes slides.
    /// Depending notes slides use and depend on master notes slide.
    /// </summary>
    /// <param name="text">Text to set.</param>
    ASPOSE_SLIDES_SHARED_API void SetHeaderAndChildHeadersText(System::String text) override;
    /// <summary>
    /// Changes master slide footer placeholder and all child footer placeholders visibility.
    /// Child placeholders mean placeholders are contained on depending notes slides.
    /// Depending notes slides use and depend on master notes slide.
    /// </summary>
    /// <param name="isVisible">true - makes a footer placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetFooterAndChildFootersVisibility(bool isVisible) override;
    /// <summary>
    /// Changes master slide page number placeholder and all child page number placeholders visibility.
    /// Child placeholders mean placeholders are contained on depending notes slides.
    /// Depending notes slides use and depend on master notes slide.
    /// </summary>
    /// <param name="isVisible">true - makes a page number placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetSlideNumberAndChildSlideNumbersVisibility(bool isVisible) override;
    /// <summary>
    /// Changes master slide date-time placeholder and all child date-time placeholders visibility.
    /// Child placeholders mean placeholders are contained on depending notes slides.
    /// Depending notes slides use and depend on master notes slide.
    /// </summary>
    /// <param name="isVisible">true - makes a date-time placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetDateTimeAndChildDateTimesVisibility(bool isVisible) override;
    /// <summary>
    /// Sets text to master slide footer placeholder and all child footer placeholders.
    /// Child placeholders mean placeholders are contained on depending notes slides.
    /// Depending notes slides use and depend on master notes slide.
    /// </summary>
    /// <param name="text">Text to set.</param>
    ASPOSE_SLIDES_SHARED_API void SetFooterAndChildFootersText(System::String text) override;
    /// <summary>
    /// Sets text to master slide date-time placeholder and all child date-time placeholders.
    /// Child placeholders mean placeholders are contained on depending notes slides.
    /// Depending notes slides use and depend on master notes slide.
    /// </summary>
    /// <param name="text">Text to set.</param>
    ASPOSE_SLIDES_SHARED_API void SetDateTimeAndChildDateTimesText(System::String text) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetPlaceholderAndChildPlaceholdersVisibility(PlaceholderType placeholderType, bool isVisible);
    ASPOSE_SLIDES_LOCAL_API void SetPlaceholderAndChildPlaceholdersText(PlaceholderType placeholderType, System::String text, bool isRemoveField);
    
    ASPOSE_SLIDES_LOCAL_API MasterNotesSlideHeaderFooterManager(System::SharedPtr<MasterNotesSlide> masterNotesSlide);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MasterNotesSlideHeaderFooterManager, CODEPORTING_ARGS(System::SharedPtr<MasterNotesSlide> masterNotesSlide));
    ASPOSE_SLIDES_SHARED_API void AddPlaceholder(PlaceholderType placeholderType) override;
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Presentation> get_Presentation();
    
    System::WeakPtr<MasterNotesSlide> m_masterNotesSlide;
    
};

} // namespace Slides
} // namespace Aspose


