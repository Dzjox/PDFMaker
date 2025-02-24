#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <Export/IHtmlGenerator.h>
#include <drawing/size_f.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class EmbeddedFontsHtmlControllerInternal;
class HtmlSvgRenderContext;
class PptxExporter;
enum class SvgCoordinateUnit;
} // namespace Export
namespace Util
{
class EnumDescriptor;
} // namespace Util
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace IO
{
class TextWriter;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Html generator.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS HtmlGenerator final : public Aspose::Slides::Export::IHtmlGenerator
{
    typedef HtmlGenerator ThisType;
    typedef Aspose::Slides::Export::IHtmlGenerator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::EmbeddedFontsHtmlControllerInternal;
    friend class Aspose::Slides::Export::HtmlSvgRenderContext;
    friend class Aspose::Slides::Export::PptxExporter;
    /// @endcond
    
public:

    /// <summary>
    /// Returns slide image size.
    /// Read-only <see cref="System::Drawing::SizeF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::SizeF get_SlideImageSize() override;
    /// <summary>
    /// Returns a unit in which slide image size is specified.
    /// Read-only <see cref="SvgCoordinateUnit"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API SvgCoordinateUnit get_SlideImageSizeUnit() override;
    /// <summary>
    /// Returns a css code of unit in which slide image size is specified.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_SlideImageSizeUnitCode() override;
    /// <summary>
    /// Returns index of previously rendered slide or -1 if first slide is rendering.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_PreviousSlideIndex() override;
    /// <summary>
    /// Returns index of currently rendering slide.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_SlideIndex() override;
    /// <summary>
    /// Returns index of a slide, which will be rendered after the current slide or -1 if currently rendering last slide.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_NextSlideIndex() override;
    
    /// <summary>
    /// Adds formatted HTML text.
    /// </summary>
    /// <param name="html">Text to add.</param>
    ASPOSE_SLIDES_SHARED_API void AddHtml(System::String html) override;
    /// <summary>
    /// Adds formatted HTML text.
    /// </summary>
    /// <param name="html">Text to add.</param>
    ASPOSE_SLIDES_SHARED_API void AddHtml(System::ArrayPtr<char16_t> html) override;
    /// <summary>
    /// Adds formatted HTML text.
    /// </summary>
    /// <param name="html">Text to add.</param>
    /// <param name="startIndex">Start index of the portion to add.</param>
    /// <param name="length">Length of the portion to add.</param>
    ASPOSE_SLIDES_SHARED_API void AddHtml(System::ArrayPtr<char16_t> html, int32_t startIndex, int32_t length) override;
    /// <summary>
    /// Adds plain text to the html files, replacing special characters with html entities.
    /// Linebreaks and whitespaces aren't replaced.
    /// </summary>
    /// <param name="text">Text to add.</param>
    ASPOSE_SLIDES_SHARED_API void AddText(System::String text) override;
    /// <summary>
    /// Adds plain text to the html files, replacing special characters with html entities.
    /// Linebreaks and whitespaces aren't replaced.
    /// </summary>
    /// <param name="text">Text to add.</param>
    ASPOSE_SLIDES_SHARED_API void AddText(System::ArrayPtr<char16_t> text) override;
    /// <summary>
    /// Adds plain text to the html files, replacing special characters with html entities.
    /// Linebreaks and whitespaces aren't replaced.
    /// </summary>
    /// <param name="text">Text to add.</param>
    /// <param name="startIndex">Start index of the portion to add.</param>
    /// <param name="length">Length of the portion to add.</param>
    ASPOSE_SLIDES_SHARED_API void AddText(System::ArrayPtr<char16_t> text, int32_t startIndex, int32_t length) override;
    /// <summary>
    /// Quotes attribute value and adds it to the html file.
    /// </summary>
    /// <param name="value">Attribute value string.</param>
    ASPOSE_SLIDES_SHARED_API void AddAttributeValue(System::String value) override;
    /// <summary>
    /// Quotes attribute value and adds it to the html file.
    /// </summary>
    /// <param name="value">Attribute value string.</param>
    ASPOSE_SLIDES_SHARED_API void AddAttributeValue(System::ArrayPtr<char16_t> value) override;
    /// <summary>
    /// Quotes attribute value and adds it to the html file.
    /// </summary>
    /// <param name="value">Attribute value string.</param>
    /// <param name="startIndex">Start index of the portion to add.</param>
    /// <param name="length">Length of the portion to add.</param>
    ASPOSE_SLIDES_SHARED_API void AddAttributeValue(System::ArrayPtr<char16_t> value, int32_t startIndex, int32_t length) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_ContainsHtml();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::IO::TextWriter> get_TextWriter();
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<int32_t> get_SlidesToRender();
    
    ASPOSE_SLIDES_LOCAL_API HtmlGenerator(System::SharedPtr<System::IO::TextWriter> tw, System::Drawing::SizeF slideSize, SvgCoordinateUnit sizeUnit, System::ArrayPtr<int32_t> slides);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HtmlGenerator, CODEPORTING_ARGS(System::SharedPtr<System::IO::TextWriter> tw, System::Drawing::SizeF slideSize, SvgCoordinateUnit sizeUnit, System::ArrayPtr<int32_t> slides));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void Flush();
    ASPOSE_SLIDES_LOCAL_API void NewSlideStarted(int32_t prevSlideIndex, int32_t currentSlideIndex, int32_t nextSlideIndex);
    /// @endcond
    
private:

    System::ArrayPtr<char16_t> m_textBuffer;
    static const ASPOSE_SLIDES_LOCAL_API int32_t SizeIncrement;
    int32_t m_charCount;
    System::SharedPtr<System::IO::TextWriter> m_textWriter;
    System::Drawing::SizeF m_size;
    SvgCoordinateUnit m_sizeUnit;
    int32_t m_previousSlideIndex, m_currentSlideIndex, m_nextSlideIndex;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Util::EnumDescriptor> SvgUnitED;
    System::ArrayPtr<int32_t> m_slides;
    
    ASPOSE_SLIDES_LOCAL_API HtmlGenerator();
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HtmlGenerator, CODEPORTING_ARGS());
    ASPOSE_SLIDES_LOCAL_API void AppendRaw(System::String text);
    ASPOSE_SLIDES_LOCAL_API void AppendRaw(System::String text, int32_t startIndex, int32_t length);
    ASPOSE_SLIDES_LOCAL_API void AppendRaw(System::ArrayPtr<char16_t> text, int32_t startIndex, int32_t length);
    ASPOSE_SLIDES_LOCAL_API void EnsureCapacity(int32_t capacity);
    ASPOSE_SLIDES_LOCAL_API void Clear();
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


