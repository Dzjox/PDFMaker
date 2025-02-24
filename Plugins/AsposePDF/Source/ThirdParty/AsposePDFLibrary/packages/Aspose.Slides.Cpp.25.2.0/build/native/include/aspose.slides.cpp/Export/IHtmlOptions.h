#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Export/ISaveOptions.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IHtmlFormatter;
class IInkOptions;
class ISlideImageFormat;
class ISlidesLayoutOptions;
enum class PicturesCompression;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents a HTML exporting options.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IHtmlOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef IHtmlOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns HTML template.
    /// Read <see cref="Aspose::Slides::Export::IHtmlFormatter">IHtmlFormatter</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHtmlFormatter> get_HtmlFormatter() = 0;
    /// <summary>
    /// Sets HTML template.
    /// Write <see cref="Aspose::Slides::Export::IHtmlFormatter">IHtmlFormatter</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HtmlFormatter(System::SharedPtr<IHtmlFormatter> value) = 0;
    /// <summary>
    /// Returns slide image format options.
    /// Read <see cref="Aspose::Slides::Export::ISlideImageFormat">ISlideImageFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlideImageFormat> get_SlideImageFormat() = 0;
    /// <summary>
    /// Sets slide image format options.
    /// Write <see cref="Aspose::Slides::Export::ISlideImageFormat">ISlideImageFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SlideImageFormat(System::SharedPtr<ISlideImageFormat> value) = 0;
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowHiddenSlides() = 0;
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowHiddenSlides(bool value) = 0;
    /// <summary>
    /// Returns a value determining the quality of the JPEG images inside PDF document.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    /// <remarks>
    /// <p>Has effect only when a document contains JPEG images.</p>
    /// <p>Use this property to get or set the quality of the images inside a document when saving in PDF format.
    /// The value may vary from 0 to 100 where 0 means worst quality but maximum compression and 100 means best quality but minimum compression.</p>
    /// <p>The default value is <b>95</b>.</p>
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_JpegQuality() = 0;
    /// <summary>
    /// Sets a value determining the quality of the JPEG images inside PDF document.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    /// <remarks>
    /// <p>Has effect only when a document contains JPEG images.</p>
    /// <p>Use this property to get or set the quality of the images inside a document when saving in PDF format.
    /// The value may vary from 0 to 100 where 0 means worst quality but maximum compression and 100 means best quality but minimum compression.</p>
    /// <p>The default value is <b>95</b>.</p>
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_JpegQuality(uint8_t value) = 0;
    /// <summary>
    /// Represents the pictures compression level
    /// Read <see cref="PicturesCompression"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Export::PicturesCompression get_PicturesCompression() = 0;
    /// <summary>
    /// Represents the pictures compression level
    /// Write <see cref="PicturesCompression"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PicturesCompression(Aspose::Slides::Export::PicturesCompression value) = 0;
    /// <summary>
    /// A boolean flag indicates if the cropped parts remain as part of the document. If true the cropped 
    /// parts will removed, if false they will be serialized in the document (which can possible lead to a 
    /// larger file)
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DeletePicturesCroppedAreas() = 0;
    /// <summary>
    /// A boolean flag indicates if the cropped parts remain as part of the document. If true the cropped 
    /// parts will removed, if false they will be serialized in the document (which can possible lead to a 
    /// larger file)
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DeletePicturesCroppedAreas(bool value) = 0;
    /// <summary>
    /// True to exclude width and height attributes from SVG container - that will make layout responsive. False - otherwise.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SvgResponsiveLayout() = 0;
    /// <summary>
    /// True to exclude width and height attributes from SVG container - that will make layout responsive. False - otherwise.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SvgResponsiveLayout(bool value) = 0;
    /// <summary>
    /// Gets a value indicating whether text is rendered without using ligatures.
    /// When set to <c>true</c>, ligatures will be disabled in the rendered output. By default, this property is set to <c>false</c>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// System::SharedPtr<HtmlOptions> options = System::MakeObject<HtmlOptions>();
    /// options->set_DisableFontLigatures(true); // Disable ligatures in text rendering
    /// 
    /// pres->Save(outputSlidePath, SaveFormat::Html, options);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DisableFontLigatures() = 0;
    /// <summary>
    /// Sets a value indicating whether text is rendered without using ligatures.
    /// When set to <c>true</c>, ligatures will be disabled in the rendered output. By default, this property is set to <c>false</c>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// System::SharedPtr<HtmlOptions> options = System::MakeObject<HtmlOptions>();
    /// options->set_DisableFontLigatures(true); // Disable ligatures in text rendering
    /// 
    /// pres->Save(outputSlidePath, SaveFormat::Html, options);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DisableFontLigatures(bool value) = 0;
    /// <summary>
    /// Gets the mode in which slides are placed on the page when exporting a presentation <see cref="Aspose::Slides::Export::ISlidesLayoutOptions">ISlidesLayoutOptions</see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> handoutLayoutingOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// handoutLayoutingOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// 
    /// System::SharedPtr<HtmlOptions> options = System::MakeObject<HtmlOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// pres->Save(u"pres.html", SaveFormat::Html, options);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlidesLayoutOptions> get_SlidesLayoutOptions() = 0;
    /// <summary>
    /// Sets the mode in which slides are placed on the page when exporting a presentation <see cref="Aspose::Slides::Export::ISlidesLayoutOptions">ISlidesLayoutOptions</see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> handoutLayoutingOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// handoutLayoutingOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// 
    /// System::SharedPtr<HtmlOptions> options = System::MakeObject<HtmlOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// pres->Save(u"pres.html", SaveFormat::Html, options);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SlidesLayoutOptions(System::SharedPtr<ISlidesLayoutOptions> value) = 0;
    /// <summary>
    /// Provides options that control the look of Ink objects in exported document.
    /// Read-only <see cref="Aspose::Slides::Export::IInkOptions">IInkOptions</see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IInkOptions> get_InkOptions() = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


