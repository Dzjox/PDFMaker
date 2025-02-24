#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/IPresentationHeaderFooterManager.h>

#include "DOM/BaseHeaderFooterManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlide;
class IBaseSlide;
enum class PlaceholderType : int8_t;
class Portion;
namespace PptSerialization
{
class PptDeserializator;
} // namespace PptSerialization
class Presentation;
class Slide;
class SlideCollection;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class HeaderFooter;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents manager which holds behavior of all footer, date-time and page number placeholders of presentation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PresentationHeaderFooterManager : public Aspose::Slides::BaseHeaderFooterManager, public Aspose::Slides::IPresentationHeaderFooterManager
{
    typedef PresentationHeaderFooterManager ThisType;
    typedef Aspose::Slides::BaseHeaderFooterManager BaseType;
    typedef Aspose::Slides::IPresentationHeaderFooterManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Portion;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::Slide;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    /// @endcond
    
public:

    /// <summary>
    /// Changes all header placeholders visibility, including notes master, notes slides and handout master.
    /// </summary>
    /// <param name="isVisible">true - makes a header placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetAllHeadersVisibility(bool isVisible) override;
    /// <summary>
    /// Changes all footer placeholders visibility, including master slides, layout slides, slides, 
    /// notes master, notes slides and handout master.
    /// </summary>
    /// <param name="isVisible">true - makes a footer placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetAllFootersVisibility(bool isVisible) override;
    /// <summary>
    /// Changes all page number placeholders visibility, including master slides, layout slides, slides, 
    /// notes master, notes slides and handout master.
    /// </summary>
    /// <param name="isVisible">true - makes a page number placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetAllSlideNumbersVisibility(bool isVisible) override;
    /// <summary>
    /// Changes all date-time placeholders visibility, including master slides, layout slides, slides, 
    /// notes master, notes slides and handout master.
    /// </summary>
    /// <param name="isVisible">true - makes a date-time placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetAllDateTimesVisibility(bool isVisible) override;
    /// <summary>
    /// Sets text to all header placeholders, including notes master, notes slides and handout master.
    /// </summary>
    /// <param name="text">Text to set.</param>
    ASPOSE_SLIDES_SHARED_API void SetAllHeadersText(System::String text) override;
    /// <summary>
    /// Sets text to all footer placeholders, including master slides, layout slides, slides, 
    /// notes master, notes slides and handout master.
    /// </summary>
    /// <param name="text">Text to set.</param>
    ASPOSE_SLIDES_SHARED_API void SetAllFootersText(System::String text) override;
    /// <summary>
    /// Sets text to all date-time placeholders, including master slides, layout slides, slides, 
    /// notes master, notes slides and handout master.
    /// </summary>
    /// <param name="text">Text to set.</param>
    ASPOSE_SLIDES_SHARED_API void SetAllDateTimesText(System::String text) override;
    /// <summary>
    /// Changes the footer, date-time and page number placeholders visibility for all title slides and for first layout slide.
    /// Title slides – slides based on first layout slide (regardless of type of this first layout).
    /// </summary>
    /// <param name="isVisible">true - makes a placeholders visible, otherwise - hides them.</param>
    ASPOSE_SLIDES_SHARED_API void SetVisibilityOnAllTitleSlides(bool isVisible) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API PresentationHeaderFooterManager(System::SharedPtr<Presentation> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PresentationHeaderFooterManager, CODEPORTING_ARGS(System::SharedPtr<Presentation> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void Initialize();
    ASPOSE_SLIDES_LOCAL_API void UpdateSlideNumberPlaceholders();
    ASPOSE_SLIDES_LOCAL_API void UpdateSlideNumberPlaceholders(int32_t fromIndex);
    ASPOSE_SLIDES_LOCAL_API void UpdateDateTimePlaceholders();
    ASPOSE_SLIDES_LOCAL_API void UpdatePlaceholdersTextByType(PlaceholderType phType, System::String text, bool removeField);
    ASPOSE_SLIDES_LOCAL_API void UpdateNotesPlaceholdersTextByType(PlaceholderType phType, System::String text, bool removeField);
    static ASPOSE_SLIDES_LOCAL_API void UpdatePlaceholderText(PlaceholderType phType, System::String text, System::SharedPtr<BaseSlide> slide, bool removeField);
    ASPOSE_SLIDES_LOCAL_API void ChangePlaceholderVisibilityState(PlaceholderType phType, bool notes, bool newVisibleState);
    ASPOSE_SLIDES_LOCAL_API void ChangePlaceholderVisibilityState(System::SharedPtr<BaseSlide> slide, PlaceholderType phType, bool newVisibleState);
    ASPOSE_SLIDES_LOCAL_API void CopyAllPlaceholdersFromMaster(System::SharedPtr<Slide> slide, System::SharedPtr<BaseSlide> placeholdersCarrier);
    ASPOSE_SLIDES_LOCAL_API uint32_t GetTitleLayoutSlideId();
    static ASPOSE_SLIDES_LOCAL_API System::String GetTimeByFormat(System::String format, System::String languageID);
    /// @endcond
    
private:

    static const ASPOSE_SLIDES_LOCAL_API System::String CHINESE_SHORT_TIME_PATTERN;
    static const ASPOSE_SLIDES_LOCAL_API System::String CHINESE_LONG_TIME_PATTERN;
    System::WeakPtr<Presentation> m_presentation;
    bool m_isAllFootersVisible;
    bool m_isAllSlideNumbersVisible;
    bool m_isAllDateTimesVisible;
    
    ASPOSE_SLIDES_LOCAL_API void SaveHFConfiguration();
    ASPOSE_SLIDES_LOCAL_API void SaveToHF(System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::HeaderFooter> hf);
    static ASPOSE_SLIDES_LOCAL_API void SetSlideNumber(System::SharedPtr<IBaseSlide> slide, int32_t slideIndex);
    static ASPOSE_SLIDES_LOCAL_API void SetDateTime(System::SharedPtr<IBaseSlide> slide);
    static ASPOSE_SLIDES_LOCAL_API void UpdatedateTime(System::SharedPtr<Portion> portion);
    static ASPOSE_SLIDES_LOCAL_API System::String GetTimeByFormat(System::String format);
    ASPOSE_SLIDES_LOCAL_API void SetAllPlaceholdersVisibility(PlaceholderType placeholderType, bool isVisible);
    ASPOSE_SLIDES_LOCAL_API void SetAllPlaceholdersText(PlaceholderType placeholderType, System::String text, bool isRemoveField);
    
};

} // namespace Slides
} // namespace Aspose


