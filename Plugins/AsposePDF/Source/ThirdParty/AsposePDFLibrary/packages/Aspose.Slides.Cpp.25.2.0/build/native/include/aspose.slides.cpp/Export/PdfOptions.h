#pragma once
//Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/array.h>
#include <Export/IPdfOptions.h>
#include <drawing/color.h>
#include <cstdint>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Foundation
{
namespace Rendering
{
namespace Pdf
{
enum class PdfComplianceCore;
class PdfOptionsCore;
} // namespace Pdf
} // namespace Rendering
} // namespace Foundation
namespace Slides
{
namespace Export
{
class ExportNotesSlides;
class IInkOptions;
class InkOptions;
class ISlidesLayoutOptions;
enum class PdfAccessPermissions;
enum class PdfCompliance;
enum class PdfTextCompression;
class PptxExporter;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation is saved in Pdf format.
/// </summary>    
/// <example>
/// The following example shows how to convert PowerPoint to PDF with custom options.
/// <code>
/// auto presentation = System::MakeObject<Presentation>(u"PowerPoint.pptx");
/// 
/// // Instantiates the PdfOptions class
/// System::SharedPtr<PdfOptions> pdfOptions = System::MakeObject<PdfOptions>();
/// // Sets the Jpeg quality
/// pdfOptions->set_JpegQuality(90);
/// // Sets the behavior for metafiles
/// pdfOptions->set_SaveMetafilesAsPng(true);
/// // Sets the text compression level
/// pdfOptions->set_TextCompression(PdfTextCompression::Flate);
/// // Defines the PDF standard
/// pdfOptions->set_Compliance(PdfCompliance::Pdf15);
/// // Saves the presentation as a PDF
/// presentation->Save(u"PowerPoint-to-PDF.pdf", SaveFormat::Pdf, pdfOptions);
/// </code>
/// The following example shows how to convert PowerPoint to PDF with hidden slides.
/// <code>
/// // Instantiates a Presentation class that represents a PowerPoint file
/// auto presentation = System::MakeObject<Presentation>(u"PowerPoint.pptx");
/// 
/// // Instantiates the PdfOptions class
/// System::SharedPtr<PdfOptions> pdfOptions = System::MakeObject<PdfOptions>();
/// // Adds hidden slides
/// pdfOptions->set_ShowHiddenSlides(true);
/// // Saves the presentation as a PDF
/// presentation->Save(u"PowerPoint-to-PDF.pdf", SaveFormat::Pdf, pdfOptions);
/// </code>
/// The following example shows how to convert PowerPoint to password protected PDF.
/// <code>
/// // Instantiates a Presentation object that represents a PowerPoint file
/// auto presentation = System::MakeObject<Presentation>(u"PowerPoint.pptx");
/// 
/// /// Instantiates the PdfOptions class
/// System::SharedPtr<PdfOptions> pdfOptions = System::MakeObject<PdfOptions>();
/// 
/// // Sets PDF password and access permissions
/// pdfOptions->set_Password(u"password");
/// pdfOptions->set_AccessPermissions(PdfAccessPermissions::PrintDocument | PdfAccessPermissions::HighQualityPrint);
/// // Saves the presentation as a PDF
/// presentation->Save(u"PPTX-to-PDF.pdf", SaveFormat::Pdf, pdfOptions);
/// </code>
/// The following example shows how to convert PowerPoint to PDF with notes.
/// <code>
/// // Instantiate a Presentation object that represents a presentation file
/// auto presentation = System::MakeObject<Presentation>(u"SelectedSlides.pptx");
/// 
/// auto auxPresentation = System::MakeObject<Presentation>();
/// 
/// auto slide = presentation->get_Slides()->idx_get(0);
/// auxPresentation->get_Slides()->InsertClone(0, slide);
/// 
/// // Setting Slide Type and Size
/// auxPresentation->get_SlideSize()->SetSize(612.F, 792.F, SlideSizeScaleType::EnsureFit);
/// 
/// System::SharedPtr<PdfOptions> pdfOptions = System::MakeObject<PdfOptions>();
/// System::SharedPtr<NotesCommentsLayoutingOptions> slidesLayoutOptions = System::MakeObject<NotesCommentsLayoutingOptions>();
/// slidesLayoutOptions->set_NotesPosition(NotesPositions::BottomFull);
/// pdfOptions->set_SlidesLayoutOptions(slidesLayoutOptions);
/// auxPresentation->Save(u"PDFnotes_out.pdf", SaveFormat::Pdf, pdfOptions);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS PdfOptions : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::IPdfOptions
{
    typedef PdfOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::IPdfOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::ExportNotesSlides;
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
    /// System::SharedPtr<PdfOptions> options = System::MakeObject<PdfOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// pres->Save(u"pres.pdf", SaveFormat::Pdf, options);
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
    /// System::SharedPtr<PdfOptions> options = System::MakeObject<PdfOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// pres->Save(u"pres.pdf", SaveFormat::Pdf, options);
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
    /// Specifies compression type to be used for all textual content in the document.
    /// Read <see cref="PdfTextCompression"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="PdfTextCompression::Flate"></see>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API PdfTextCompression get_TextCompression() override;
    /// <summary>
    /// Specifies compression type to be used for all textual content in the document.
    /// Write <see cref="PdfTextCompression"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="PdfTextCompression::Flate"></see>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_TextCompression(PdfTextCompression value) override;
    /// <summary>
    /// Indicates if the most effective compression (instead of the default one) for each image must be selected 
    /// automatically. If set to <see cref="bool"></see>.true, for every image in presentation the most appropriate compression 
    /// algorithm will be chosen, what will lead to the smaller size of the resulting PDF document. 
    /// <remarks>Best image compression ratio selection is computationally expensive and takes 
    /// an additional amount of RAM, and this option is <see cref="bool"></see>.false by default.</remarks>
    /// </summary>
    /// <remarks>
    /// Default is <see cref="bool"></see>.false.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_BestImagesCompressionRatio() override;
    /// <summary>
    /// Indicates if the most effective compression (instead of the default one) for each image must be selected 
    /// automatically. If set to <see cref="bool"></see>.true, for every image in presentation the most appropriate compression 
    /// algorithm will be chosen, what will lead to the smaller size of the resulting PDF document. 
    /// <remarks>Best image compression ratio selection is computationally expensive and takes 
    /// an additional amount of RAM, and this option is <see cref="bool"></see>.false by default.</remarks>
    /// </summary>
    /// <remarks>
    /// Default is <see cref="bool"></see>.false.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_BestImagesCompressionRatio(bool value) override;
    /// <summary>
    /// Determines if Aspose.Slides will embed common fonts for ASCII (33..127 code range) text.
    /// Fonts for character codes greater than 127 are always embedded.
    /// Common fonts list includes PDF's base 14 fonts and additional user specified fonts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>true</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_EmbedTrueTypeFontsForASCII() override;
    /// <summary>
    /// Determines if Aspose.Slides will embed common fonts for ASCII (33..127 code range) text.
    /// Fonts for character codes greater than 127 are always embedded.
    /// Common fonts list includes PDF's base 14 fonts and additional user specified fonts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>true</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_EmbedTrueTypeFontsForASCII(bool value) override;
    /// <summary>
    /// Returns an array of user-defined names of font families which Aspose.Slides should consider common.
    /// Read <see cref="System::String"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::String> get_AdditionalCommonFontFamilies() override;
    /// <summary>
    /// Sets an array of user-defined names of font families which Aspose.Slides should consider common.
    /// Write <see cref="System::String"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AdditionalCommonFontFamilies(System::ArrayPtr<System::String> value) override;
    /// <summary>
    /// Determines if all characters of font should be embedded or only used subset.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_EmbedFullFonts() override;
    /// <summary>
    /// Determines if all characters of font should be embedded or only used subset.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_EmbedFullFonts(bool value) override;
    /// <summary>
    /// Indicates whether text should be rasterized as a bitmap and saved to PDF when the font does not support bold styling.
    /// This approach can enhance the quality of text in the resulting PDF for certain fonts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_RasterizeUnsupportedFontStyles() override;
    /// <summary>
    /// Indicates whether text should be rasterized as a bitmap and saved to PDF when the font does not support bold styling.
    /// This approach can enhance the quality of text in the resulting PDF for certain fonts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_RasterizeUnsupportedFontStyles(bool value) override;
    /// <summary>
    /// Returns a value determining the quality of the JPEG images inside PDF document.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    /// <remarks>
    /// <p>Has effect only when a document contains JPEG images.</p>
    /// <p>Use this property to get or set the quality of the images inside a document when saving in PDF format.
    /// The value may vary from 0 to 100 where 0 means worst quality but maximum compression and 100 means best quality but minimum compression.</p>
    /// <p>The default value is <b>100</b>.</p>
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
    /// <p>The default value is <b>100</b>.</p>
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_JpegQuality(uint8_t value) override;
    /// <summary>
    /// Desired conformance level for generated PDF document.
    /// Read <see cref="PdfCompliance"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="PdfCompliance::Pdf17"></see>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API PdfCompliance get_Compliance() override;
    /// <summary>
    /// Desired conformance level for generated PDF document.
    /// Write <see cref="PdfCompliance"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="PdfCompliance::Pdf17"></see>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_Compliance(PdfCompliance value) override;
    /// <summary>
    /// Setting user password to protect the PDF document. 
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Password() override;
    /// <summary>
    /// Setting user password to protect the PDF document. 
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Password(System::String value) override;
    /// <summary>
    /// Contains a set of flags specifying which access permissions should be granted when the document is opened
    /// with user access. See <see cref="PdfAccessPermissions"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pdfOptions = MakeObject<PdfOptions>();
    /// pdfOptions->set_Password(u"my_password");
    /// pdfOptions->set_AccessPermissions(PdfAccessPermissions::PrintDocument | PdfAccessPermissions::HighQualityPrint);
    /// auto presentation = MakeObject<Presentation>();
    /// presentation->Save(pdfFilePath, SaveFormat::Pdf, pdfOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API PdfAccessPermissions get_AccessPermissions() override;
    /// <summary>
    /// Contains a set of flags specifying which access permissions should be granted when the document is opened
    /// with user access. See <see cref="PdfAccessPermissions"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pdfOptions = MakeObject<PdfOptions>();
    /// pdfOptions->set_Password(u"my_password");
    /// pdfOptions->set_AccessPermissions(PdfAccessPermissions::PrintDocument | PdfAccessPermissions::HighQualityPrint);
    /// auto presentation = MakeObject<Presentation>();
    /// presentation->Save(pdfFilePath, SaveFormat::Pdf, pdfOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_AccessPermissions(PdfAccessPermissions value) override;
    /// <summary>
    /// True to convert all metafiles used in a presentation to the PNG images.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>true</b>.
    /// Pdf document can contain vector graphics and raster images. 
    /// If SaveMetafilesAsPng is set to true then source Metafile 
    /// image is converted to Png format and saved to Pdf as a raster 
    /// image. If SaveMetafilesAsPng is set to false then source Metafile 
    /// is converted to Pdf vector graphics. Each approach has advantages 
    /// and disadvantages. For example, if Metafile is converted to PNG, 
    /// then some quality loss is possible during resulting 
    /// document scaling. If Metafile is converted to Pdf vector graphics, 
    /// then performance issues in Pdf viewing tool are possible.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_SaveMetafilesAsPng() override;
    /// <summary>
    /// True to convert all metafiles used in a presentation to the PNG images.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>true</b>.
    /// Pdf document can contain vector graphics and raster images. 
    /// If SaveMetafilesAsPng is set to true then source Metafile 
    /// image is converted to Png format and saved to Pdf as a raster 
    /// image. If SaveMetafilesAsPng is set to false then source Metafile 
    /// is converted to Pdf vector graphics. Each approach has advantages 
    /// and disadvantages. For example, if Metafile is converted to PNG, 
    /// then some quality loss is possible during resulting 
    /// document scaling. If Metafile is converted to Pdf vector graphics, 
    /// then performance issues in Pdf viewing tool are possible.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_SaveMetafilesAsPng(bool value) override;
    /// <summary>
    /// Returns a value determining resolution of images inside PDF document.
    /// <remarks>
    /// <p>Property affects on file size, time of export and image quality.</p>
    /// <p>The default value is <b>96</b>.</p>
    /// </remarks>
    /// <value>Effect of this parameter depends on few factors. 
    /// Algorithm tries to get best output image size according to the property value, source image size and image frame size.
    /// Using of similar property values may give the same result. Recommended to use step 16 or 32 to get visible effect.</value>
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_SufficientResolution() override;
    /// <summary>
    /// Sets a value determining resolution of images inside PDF document.
    /// <remarks>
    /// <p>Property affects on file size, time of export and image quality.</p>
    /// <p>The default value is <b>96</b>.</p>
    /// </remarks>
    /// <value>Effect of this parameter depends on few factors. 
    /// Algorithm tries to get best output image size according to the property value, source image size and image frame size.
    /// Using of similar property values may give the same result. Recommended to use step 16 or 32 to get visible effect.</value>
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SufficientResolution(float value) override;
    /// <summary>
    /// True to draw black frame around each slide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_DrawSlidesFrame() override;
    /// <summary>
    /// True to draw black frame around each slide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_DrawSlidesFrame(bool value) override;
    /// <summary>
    /// Gets the image transparent color.
    /// </summary>
    /// <value>
    /// The color of the image transparent.
    /// </value>
    ASPOSE_SLIDES_SHARED_API System::Drawing::Color get_ImageTransparentColor() override;
    /// <summary>
    /// Sets the image transparent color.
    /// </summary>
    /// <value>
    /// The color of the image transparent.
    /// </value>
    ASPOSE_SLIDES_SHARED_API void set_ImageTransparentColor(System::Drawing::Color value) override;
    /// <summary>
    /// Applies the specified transparent color to an image if <c>true</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ApplyImageTransparent() override;
    /// <summary>
    /// Applies the specified transparent color to an image if <c>true</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ApplyImageTransparent(bool value) override;
    /// <summary>
    /// True to convert all OLE data from the presentation to embedded files in the resulting PDF.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<PdfOptions> options = System::MakeObject<PdfOptions>();
    /// options->set_IncludeOleData(true);
    /// pres->Save(u"pres.pdf", SaveFormat::Pdf, options);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_IncludeOleData() override;
    /// <summary>
    /// True to convert all OLE data from the presentation to embedded files in the resulting PDF.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<PdfOptions> options = System::MakeObject<PdfOptions>();
    /// options->set_IncludeOleData(true);
    /// pres->Save(u"pres.pdf", SaveFormat::Pdf, options);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_IncludeOleData(bool value) override;
    
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API PdfOptions();
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::String> StandardPdfFonts;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Foundation::Rendering::Pdf::PdfOptionsCore> ToPdfOptionsCore();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~PdfOptions();
    
private:

    PdfAccessPermissions pr_AccessPermissions;
    PdfTextCompression m_textCompression;
    bool m_bestImagesCompressionRatio;
    bool m_isEmbedTrueTypeFontsForAsciiChars;
    bool m_rasterizeUnsupportedFontStyles;
    bool m_embedFullFonts;
    int32_t m_jpegQuality;
    bool m_taggedPdf;
    PdfCompliance m_compliance;
    bool m_saveMetafilesAsPng;
    System::ArrayPtr<System::String> m_additionalCommonFontFamilies;
    System::String m_passwd;
    float m_sufficientResolution;
    bool m_drawSlidesFrame;
    bool m_showHiddenSlides;
    bool m_includeComments;
    System::Drawing::Color m_imageTransparentColor;
    bool m_applyImageTransparent;
    bool m_includeTextEffects;
    System::SharedPtr<ISlidesLayoutOptions> m_slideLayoutOptions;
    System::SharedPtr<Aspose::Slides::Export::InkOptions> m_inkOptions;
    bool m_includeOleData;
    
    static ASPOSE_SLIDES_LOCAL_API Aspose::Foundation::Rendering::Pdf::PdfComplianceCore ToPdfComplianceCore(PdfCompliance compliance);
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


