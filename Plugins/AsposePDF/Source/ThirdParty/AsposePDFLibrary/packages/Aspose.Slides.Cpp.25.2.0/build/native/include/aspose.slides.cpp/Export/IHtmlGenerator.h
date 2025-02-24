#pragma once
//Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
enum class SvgCoordinateUnit;
} // namespace Export
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class SizeF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Html generator.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IHtmlGenerator : public virtual System::Object
{
    typedef IHtmlGenerator ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns slide image size.
    /// Read-only <see cref="System::Drawing::SizeF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::SizeF get_SlideImageSize() = 0;
    /// <summary>
    /// Returns a unit in which slide image size is specified.
    /// Read-only <see cref="SvgCoordinateUnit"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API SvgCoordinateUnit get_SlideImageSizeUnit() = 0;
    /// <summary>
    /// Returns a css code of unit in which slide image size is specified.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_SlideImageSizeUnitCode() = 0;
    /// <summary>
    /// Returns index of previously rendered slide or -1 if first slide is rendering.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_PreviousSlideIndex() = 0;
    /// <summary>
    /// Returns index of currently rendering slide.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_SlideIndex() = 0;
    /// <summary>
    /// Returns index of a slide, which will be rendered after the current slide or -1 if currently rendering last slide.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_NextSlideIndex() = 0;
    
    /// <summary>
    /// Adds formatted HTML text.
    /// </summary>
    /// <param name="html">Text to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddHtml(System::String html) = 0;
    /// <summary>
    /// Adds formatted HTML text.
    /// </summary>
    /// <param name="html">Text to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddHtml(System::ArrayPtr<char16_t> html) = 0;
    /// <summary>
    /// Adds formatted HTML text.
    /// </summary>
    /// <param name="html">Text to add.</param>
    /// <param name="startIndex">Start index of the portion to add.</param>
    /// <param name="length">Length of the portion to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddHtml(System::ArrayPtr<char16_t> html, int32_t startIndex, int32_t length) = 0;
    /// <summary>
    /// Adds plain text to the html files, replacing special characters with html entities.
    /// Linebreaks and whitespaces aren't replaced.
    /// </summary>
    /// <param name="text">Text to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddText(System::String text) = 0;
    /// <summary>
    /// Adds plain text to the html files, replacing special characters with html entities.
    /// Linebreaks and whitespaces aren't replaced.
    /// </summary>
    /// <param name="text">Text to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddText(System::ArrayPtr<char16_t> text) = 0;
    /// <summary>
    /// Adds plain text to the html files, replacing special characters with html entities.
    /// Linebreaks and whitespaces aren't replaced.
    /// </summary>
    /// <param name="text">Text to add.</param>
    /// <param name="startIndex">Start index of the portion to add.</param>
    /// <param name="length">Length of the portion to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddText(System::ArrayPtr<char16_t> text, int32_t startIndex, int32_t length) = 0;
    /// <summary>
    /// Quotes attribute value and adds it to the html file.
    /// </summary>
    /// <param name="value">Attribute value string.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddAttributeValue(System::String value) = 0;
    /// <summary>
    /// Quotes attribute value and adds it to the html file.
    /// </summary>
    /// <param name="value">Attribute value string.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddAttributeValue(System::ArrayPtr<char16_t> value) = 0;
    /// <summary>
    /// Quotes attribute value and adds it to the html file.
    /// </summary>
    /// <param name="value">Attribute value string.</param>
    /// <param name="startIndex">Start index of the portion to add.</param>
    /// <param name="length">Length of the portion to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddAttributeValue(System::ArrayPtr<char16_t> value, int32_t startIndex, int32_t length) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


