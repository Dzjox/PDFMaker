#pragma once
//Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/array.h>
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
class IInkOptions;
class ISlidesLayoutOptions;
enum class PdfAccessPermissions;
enum class PdfCompliance;
enum class PdfTextCompression;
} // namespace Export
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation is saved in Pdf format.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPdfOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef IPdfOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies compression type to be used for all textual content in the document.
    /// Read <see cref="PdfTextCompression"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="PdfTextCompression::Flate"></see>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API PdfTextCompression get_TextCompression() = 0;
    /// <summary>
    /// Specifies compression type to be used for all textual content in the document.
    /// Write <see cref="PdfTextCompression"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="PdfTextCompression::Flate"></see>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TextCompression(PdfTextCompression value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_BestImagesCompressionRatio() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BestImagesCompressionRatio(bool value) = 0;
    /// <summary>
    /// True to embed true type fonts for ASCII characters 32-127.
    /// Fonts for character codes greater than 127 are always embedded.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>true</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_EmbedTrueTypeFontsForASCII() = 0;
    /// <summary>
    /// True to embed true type fonts for ASCII characters 32-127.
    /// Fonts for character codes greater than 127 are always embedded.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>true</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EmbedTrueTypeFontsForASCII(bool value) = 0;
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
    /// Returns an array of user-defined names of font families which Aspose.Slides should consider common.
    /// Read <see cref="System::String"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::String> get_AdditionalCommonFontFamilies() = 0;
    /// <summary>
    /// Sets an array of user-defined names of font families which Aspose.Slides should consider common.
    /// Write <see cref="System::String"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AdditionalCommonFontFamilies(System::ArrayPtr<System::String> value) = 0;
    /// <summary>
    /// Determines if all characters of font should be embedded or only used subset.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_EmbedFullFonts() = 0;
    /// <summary>
    /// Determines if all characters of font should be embedded or only used subset.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EmbedFullFonts(bool value) = 0;
    /// <summary>
    /// Indicates whether text should be rasterized as a bitmap and saved to PDF when the font does not support bold styling.
    /// This approach can enhance the quality of text in the resulting PDF for certain fonts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RasterizeUnsupportedFontStyles() = 0;
    /// <summary>
    /// Indicates whether text should be rasterized as a bitmap and saved to PDF when the font does not support bold styling.
    /// This approach can enhance the quality of text in the resulting PDF for certain fonts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RasterizeUnsupportedFontStyles(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_JpegQuality() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_JpegQuality(uint8_t value) = 0;
    /// <summary>
    /// Desired conformance level for generated PDF document.
    /// Read <see cref="PdfCompliance"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="PdfCompliance::Pdf17"></see>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API PdfCompliance get_Compliance() = 0;
    /// <summary>
    /// Desired conformance level for generated PDF document.
    /// Write <see cref="PdfCompliance"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="PdfCompliance::Pdf17"></see>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Compliance(PdfCompliance value) = 0;
    /// <summary>
    /// Setting user password to protect the PDF document. 
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Password() = 0;
    /// <summary>
    /// Setting user password to protect the PDF document. 
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Password(System::String value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API PdfAccessPermissions get_AccessPermissions() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AccessPermissions(PdfAccessPermissions value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SaveMetafilesAsPng() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SaveMetafilesAsPng(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_SufficientResolution() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SufficientResolution(float value) = 0;
    /// <summary>
    /// True to draw black frame around each slide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DrawSlidesFrame() = 0;
    /// <summary>
    /// True to draw black frame around each slide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DrawSlidesFrame(bool value) = 0;
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
    /// System::SharedPtr<PdfOptions> options = System::MakeObject<PdfOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// pres->Save(u"pres.pdf", SaveFormat::Pdf, options);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SlidesLayoutOptions(System::SharedPtr<ISlidesLayoutOptions> value) = 0;
    /// <summary>
    /// Gets the image transparent color.
    /// </summary>
    /// <value>
    /// The color of the image transparent.
    /// </value>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_ImageTransparentColor() = 0;
    /// <summary>
    /// Sets the image transparent color.
    /// </summary>
    /// <value>
    /// The color of the image transparent.
    /// </value>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ImageTransparentColor(System::Drawing::Color value) = 0;
    /// <summary>
    /// Applies the specified transparent color to an image if <c>true</c>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ApplyImageTransparent() = 0;
    /// <summary>
    /// Applies the specified transparent color to an image if <c>true</c>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ApplyImageTransparent(bool value) = 0;
    /// <summary>
    /// Provides options that control the look of Ink objects in exported document.
    /// Read-only <see cref="Aspose::Slides::Export::IInkOptions">IInkOptions</see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IInkOptions> get_InkOptions() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IncludeOleData() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IncludeOleData(bool value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


