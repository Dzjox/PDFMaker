#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <Export/IHtmlOptions.h>
#include <cstdint>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class HtmlFormatter;
class IHtmlFormatter;
class IInkOptions;
class ILinkEmbedController;
class InkOptions;
class ISlideImageFormat;
class ISlidesLayoutOptions;
enum class PicturesCompression;
class PicturesCompressionOptions;
class PptxExporter;
class SlideImageFormat;
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
class ASPOSE_SLIDES_SHARED_CLASS HtmlOptions : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::IHtmlOptions
{
    typedef HtmlOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::IHtmlOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::PptxExporter;
    /// @endcond
    
public:

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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlidesLayoutOptions> get_SlidesLayoutOptions() override;
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
    ASPOSE_SLIDES_SHARED_API void set_SlidesLayoutOptions(System::SharedPtr<ISlidesLayoutOptions> value) override;
    /// <summary>
    /// Provides options that control the look of Ink objects in exported document.
    /// Read-only <see cref="Aspose::Slides::Export::IInkOptions">IInkOptions</see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IInkOptions> get_InkOptions() override;
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowHiddenSlides() override;
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowHiddenSlides(bool value) override;
    /// <summary>
    /// Returns HTML template.
    /// Read <see cref="Aspose::Slides::Export::IHtmlFormatter">IHtmlFormatter</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHtmlFormatter> get_HtmlFormatter() override;
    /// <summary>
    /// Sets HTML template.
    /// Write <see cref="Aspose::Slides::Export::IHtmlFormatter">IHtmlFormatter</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HtmlFormatter(System::SharedPtr<IHtmlFormatter> value) override;
    /// <summary>
    /// Gets a value indicating whether text is rendered without using ligatures.
    /// When set to <c>true</c>, ligatures will be disabled in the rendered output. By default, this property is set to <c>false</c>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HtmlOptions> options = System::MakeObject<HtmlOptions>();
    /// options->set_DisableFontLigatures(true); // Disable ligatures in text rendering
    /// 
    /// pres->Save(outputSlidePath, SaveFormat::Html, options);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_DisableFontLigatures() override;
    /// <summary>
    /// Sets a value indicating whether text is rendered without using ligatures.
    /// When set to <c>true</c>, ligatures will be disabled in the rendered output. By default, this property is set to <c>false</c>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HtmlOptions> options = System::MakeObject<HtmlOptions>();
    /// options->set_DisableFontLigatures(true); // Disable ligatures in text rendering
    /// 
    /// pres->Save(outputSlidePath, SaveFormat::Html, options);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_DisableFontLigatures(bool value) override;
    /// <summary>
    /// Returns slide image format options.
    /// Read <see cref="Aspose::Slides::Export::ISlideImageFormat">ISlideImageFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlideImageFormat> get_SlideImageFormat() override;
    /// <summary>
    /// Sets slide image format options.
    /// Write <see cref="Aspose::Slides::Export::ISlideImageFormat">ISlideImageFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SlideImageFormat(System::SharedPtr<ISlideImageFormat> value) override;
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
    ASPOSE_SLIDES_SHARED_API uint8_t get_JpegQuality() override;
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
    ASPOSE_SLIDES_SHARED_API void set_JpegQuality(uint8_t value) override;
    /// <summary>
    /// Represents the pictures compression level
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Export::PicturesCompression get_PicturesCompression() override;
    /// <summary>
    /// Represents the pictures compression level
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PicturesCompression(Aspose::Slides::Export::PicturesCompression value) override;
    /// <summary>
    /// A boolean flag indicates if the cropped parts remain as part of the document. If true the cropped 
    /// parts will removed, if false they will be serialized in the document (which can possible lead to a 
    /// larger file)
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_DeletePicturesCroppedAreas() override;
    /// <summary>
    /// A boolean flag indicates if the cropped parts remain as part of the document. If true the cropped 
    /// parts will removed, if false they will be serialized in the document (which can possible lead to a 
    /// larger file)
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DeletePicturesCroppedAreas(bool value) override;
    /// <summary>
    /// True to exclude width and height attributes from svg container - that will make layout responsive. False - otherwise.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_SvgResponsiveLayout() override;
    /// <summary>
    /// True to exclude width and height attributes from svg container - that will make layout responsive. False - otherwise.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SvgResponsiveLayout(bool value) override;
    
    /// <summary>
    /// Creates a new HtmlOptions object specifiing callback.
    /// </summary>
    /// <param name="linkEmbedController">Callback object which controls saving project.</param>
    ASPOSE_SLIDES_SHARED_API HtmlOptions(System::SharedPtr<ILinkEmbedController> linkEmbedController);
    /// <summary>
    /// Creates a new HtmlOptions object for saving into single HTML file.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API HtmlOptions();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ILinkEmbedController> get_LinkEmbedController();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Export::PicturesCompressionOptions> get_PicturesCompressionOptions();
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Export::HtmlFormatter> GetEffectiveHtmlFormatter(int32_t slideSizeRatio);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Export::SlideImageFormat> GetEffectiveSlideImageFormat();
    /// @endcond
    
private:

    bool pr_DisableFontLigatures;
    int32_t m_jpegQuality;
    bool m_showHiddenSlides;
    System::SharedPtr<Aspose::Slides::Export::HtmlFormatter> m_htmlFormatter;
    System::SharedPtr<Aspose::Slides::Export::SlideImageFormat> m_slideImageFormat;
    System::SharedPtr<ILinkEmbedController> m_linkEmbedController;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Export::HtmlFormatter> m_effectiveDefaultHtmlFormatter;
    System::SharedPtr<Aspose::Slides::Export::PicturesCompressionOptions> m_picturesCompressionOptions;
    bool m_includeComments;
    bool m_svgResponsiveLayout;
    System::SharedPtr<ISlidesLayoutOptions> m_slideLayoutOptions;
    System::SharedPtr<Aspose::Slides::Export::InkOptions> m_inkOptions;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Export::SlideImageFormat> DefaultSlideImageFormat;
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


