#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IPlaceholder.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlideHeaderFooterManager;
namespace OdpSerialization
{
namespace PartParser
{
class ShapeOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
enum class Orientation : int8_t;
enum class PlaceholderSize : int8_t;
enum class PlaceholderType : int8_t;
namespace PptSerialization
{
class LayoutSlidePPTSerialization;
class PptSlideDeserializationContext;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class BaseSlidePPTXSerialization;
class PlaceholderPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Shape;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class PlaceholderPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a placeholder on a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Placeholder : public Aspose::Slides::IPlaceholder
{
    typedef Placeholder ThisType;
    typedef Aspose::Slides::IPlaceholder BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::BaseSlideHeaderFooterManager;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::PptSerialization::PptSlideDeserializationContext;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpDeserialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::BaseSlidePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PlaceholderPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::LayoutSlidePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the orientation of a placeholder.
    /// Read-only <see cref="Slides::Orientation"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Orientation get_Orientation() override;
    /// <summary>
    /// Gets the size of a placeholder.
    /// Read-only <see cref="PlaceholderSize"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API PlaceholderSize get_Size() override;
    /// <summary>
    /// Gets the type of a placeholder.
    /// Read-only <see cref="PlaceholderType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API PlaceholderType get_Type() override;
    /// <summary>
    /// Gets the index of a placeholder.
    /// Read-only <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_Index() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API uint32_t get_IndexInternal();
    ASPOSE_SLIDES_LOCAL_API void set_IndexInternal(uint32_t value);
    ASPOSE_SLIDES_LOCAL_API bool get_HasCustomPrompt();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PlaceholderPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API Placeholder(Aspose::Slides::Orientation orientation, PlaceholderSize size, PlaceholderType type, uint32_t index, bool hasCustomPrompt);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Placeholder, CODEPORTING_ARGS(Aspose::Slides::Orientation orientation, PlaceholderSize size, PlaceholderType type, uint32_t index, bool hasCustomPrompt));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Placeholder();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Placeholder, CODEPORTING_ARGS());
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<Placeholder> placeholder);
    /// @endcond
    
private:

    Aspose::Slides::Orientation m_orientation;
    PlaceholderSize m_size;
    PlaceholderType m_type;
    uint32_t m_index;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PlaceholderPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
};

} // namespace Slides
} // namespace Aspose


