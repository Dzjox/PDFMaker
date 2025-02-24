#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IBaseSlideHeaderFooterManager.h>

#include "DOM/BaseHeaderFooterManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseHandoutNotesSlideHeaderFooterManager;
class BaseSlide;
class LayoutSlideHeaderFooterManager;
class MasterNotesSlideHeaderFooterManager;
class MasterSlideHeaderFooterManager;
namespace OdpSerialization
{
namespace PartParser
{
class ShapeOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
enum class PlaceholderType : int8_t;
namespace PptSerialization
{
class PptDeserializator;
class PptSerializationContext;
} // namespace PptSerialization
class PresentationHeaderFooterManager;
class Slide;
class SlideHeaderFooterManager;
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
/// Represents manager which holds behavior of the footer, date-time, page number placeholders for all slide types.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BaseSlideHeaderFooterManager : public Aspose::Slides::BaseHeaderFooterManager, public virtual Aspose::Slides::IBaseSlideHeaderFooterManager
{
    typedef BaseSlideHeaderFooterManager ThisType;
    typedef Aspose::Slides::BaseHeaderFooterManager BaseType;
    typedef Aspose::Slides::IBaseSlideHeaderFooterManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::BaseHandoutNotesSlideHeaderFooterManager;
    friend class Aspose::Slides::LayoutSlideHeaderFooterManager;
    friend class Aspose::Slides::MasterNotesSlideHeaderFooterManager;
    friend class Aspose::Slides::MasterSlideHeaderFooterManager;
    friend class Aspose::Slides::PresentationHeaderFooterManager;
    friend class Aspose::Slides::SlideHeaderFooterManager;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpDeserialization;
    friend class Aspose::Slides::Slide;
    friend class Aspose::Slides::PptSerialization::PptSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    /// @endcond
    
public:

    /// <summary>
    /// Gets value indicating that a footer placeholder is present.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsFooterVisible() override;
    /// <summary>
    /// Gets value indicating that a page number placeholder is present.
    /// Read<see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSlideNumberVisible() override;
    /// <summary>
    /// Gets value indicating that a date-time placeholder is present.
    /// Read<see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsDateTimeVisible() override;
    
    /// <summary>
    /// Changes slide footer placeholder visibility.
    /// </summary>
    /// <param name="isVisible">true - makes a footer placeholder visible, otherwise - hides it.</param>
    ASPOSE_SLIDES_SHARED_API void SetFooterVisibility(bool isVisible) override;
    /// <summary>
    /// Changes slide page number placeholder visibility.
    /// </summary>
    /// <param name="isVisible">true - makes a page number placeholder visible, otherwise - hides it.</param>
    ASPOSE_SLIDES_SHARED_API void SetSlideNumberVisibility(bool isVisible) override;
    /// <summary>
    /// Changes slide date-time placeholder visibility.
    /// </summary>
    /// <param name="isVisible">true - makes a date-time placeholder visible, otherwise - hides it.</param>
    ASPOSE_SLIDES_SHARED_API void SetDateTimeVisibility(bool isVisible) override;
    /// <summary>
    /// Sets text to slide footer placeholder.
    /// </summary>
    /// <param name="text">Text to set.</param>
    ASPOSE_SLIDES_SHARED_API void SetFooterText(System::String text) override;
    /// <summary>
    /// Sets text to slide date-time placeholder.
    /// </summary>
    /// <param name="text">Text to set.</param>
    ASPOSE_SLIDES_SHARED_API void SetDateTimeText(System::String text) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::BaseSlide> get_BaseSlide();
    ASPOSE_SLIDES_LOCAL_API bool get_IsDateTimeFixed();
    ASPOSE_SLIDES_LOCAL_API System::String get_DateTimeText();
    ASPOSE_SLIDES_LOCAL_API System::String get_FooterText();
    
    ASPOSE_SLIDES_LOCAL_API void SetSlideNumberText(System::String text);
    ASPOSE_SLIDES_LOCAL_API void DetachPlaceholders();
    ASPOSE_SLIDES_LOCAL_API void FixPlaceholdersIdxByType(System::SharedPtr<Aspose::Slides::BaseSlide> layout);
    static ASPOSE_SLIDES_LOCAL_API bool IsCommonPlaceholderType(PlaceholderType phType);
    
    ASPOSE_SLIDES_LOCAL_API BaseSlideHeaderFooterManager(System::SharedPtr<Aspose::Slides::BaseSlide> baseSlide);
    
    ASPOSE_SLIDES_LOCAL_API bool GetIsPlaceholderExist(PlaceholderType placeholderType);
    virtual ASPOSE_SLIDES_LOCAL_API void AddPlaceholder(PlaceholderType placeholderType) = 0;
    ASPOSE_SLIDES_LOCAL_API void RemovePlaceholder(PlaceholderType placeholderType);
    ASPOSE_SLIDES_LOCAL_API void SetPlaceholderVisibility(PlaceholderType placeholderType, bool isVisible);
    ASPOSE_SLIDES_LOCAL_API void SetPlaceholderText(PlaceholderType placeholderType, System::String text, bool isRemoveField);
    /// @endcond
    
private:

    System::WeakPtr<Aspose::Slides::BaseSlide> m_baseSlide;
    
    ASPOSE_SLIDES_LOCAL_API System::String GetPlaceholderText(PlaceholderType placeholderType);
    
};

} // namespace Slides
} // namespace Aspose


