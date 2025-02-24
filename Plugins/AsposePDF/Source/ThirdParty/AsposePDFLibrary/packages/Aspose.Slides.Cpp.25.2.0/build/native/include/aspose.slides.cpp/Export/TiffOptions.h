#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <Export/ITiffOptions.h>
#include <drawing/size.h>
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
enum class BlackWhiteConversionMode;
class IInkOptions;
enum class ImagePixelFormat;
class InkOptions;
class ISlidesLayoutOptions;
enum class TiffCompressionTypes;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation is saved in TIFF format.
/// </summary>
/// <example>
/// The following example shows how to convert PowerPoint to TIFF with default size.
/// <code>
/// // Instantiate a Presentation object that represents a presentation file
/// auto presentation = System::MakeObject<Presentation>(u"DemoFile.pptx");
/// 
/// // Saving the presentation to TIFF document
/// presentation->Save(u"Tiffoutput_out.tiff", SaveFormat::Tiff);
/// </code>
/// The following example shows how to convert PowerPoint to TIFF with custom size.
/// <code>
/// // Instantiate a Presentation object that represents a Presentation file
/// auto pres = System::MakeObject<Presentation>(u"Convert_Tiff_Custom.pptx");
/// 
/// // Instantiate the TiffOptions class
/// System::SharedPtr<TiffOptions> opts = System::MakeObject<TiffOptions>();
/// // Setting compression type
/// opts->set_CompressionType(TiffCompressionTypes::Default);
/// 
/// System::SharedPtr<NotesCommentsLayoutingOptions> slidesLayoutOptions = System::MakeObject<NotesCommentsLayoutingOptions>();
/// slidesLayoutOptions->set_NotesPosition(NotesPositions::BottomFull);
/// opts->set_SlidesLayoutOptions(slidesLayoutOptions);
/// 
/// // Compression Types
/// // Default - Specifies the default compression scheme (LZW).
/// // None - Specifies no compression.
/// // CCITT3
/// // CCITT4
/// // LZW
/// // RLE
/// // Depth depends on the compression type and cannot be set manually.
/// // Resolution unit is always equal to "2" (dots per inch)
/// // Setting image DPI
/// opts->set_DpiX(200);
/// opts->set_DpiY(100);
/// // Set Image Size
/// opts->set_ImageSize(System::Drawing::Size(1728, 1078));
/// // Save the presentation to TIFF with specified image size
/// pres->Save(u"TiffWithCustomSize_out.tiff", SaveFormat::Tiff, opts);
/// </code>
/// The following example shows how to convert PowerPoint to TIFF with custom image pixel format.
/// <code>
/// // Instantiate a Presentation object that represents a Presentation file
/// auto presentation = System::MakeObject<Presentation>(u"DemoFile.pptx");
/// 
/// System::SharedPtr<TiffOptions> options = System::MakeObject<TiffOptions>();
/// options->set_PixelFormat(ImagePixelFormat::Format8bppIndexed);
/// 
/// // Save the presentation to TIFF with specified image size
/// presentation->Save(u"Tiff_With_Custom_Image_Pixel_Format_out.tiff", SaveFormat::Tiff, options);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS TiffOptions : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::ITiffOptions
{
    typedef TiffOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::ITiffOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

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
    /// Specifies size of a generated TIFF image.
    /// Default value is 0x0, what means that generated image sizes will be calculated based on presentation slide size value.
    /// Read <see cref="System::Drawing::Size"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::Size get_ImageSize() override;
    /// <summary>
    /// Specifies size of a generated TIFF image.
    /// Default value is 0x0, what means that generated image sizes will be calculated based on presentation slide size value.
    /// Write <see cref="System::Drawing::Size"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ImageSize(System::Drawing::Size value) override;
    /// <summary>
    /// Specifies the horizontal resolution in dots per inch.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_DpiX() override;
    /// <summary>
    /// Specifies the horizontal resolution in dots per inch.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DpiX(uint32_t value) override;
    /// <summary>
    /// Specifies the vertical resolution in dots per inch.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_DpiY() override;
    /// <summary>
    /// Specifies the vertical resolution in dots per inch.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DpiY(uint32_t value) override;
    /// <summary>
    /// Specifies the compression type.
    /// Read <see cref="TiffCompressionTypes"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TiffCompressionTypes get_CompressionType() override;
    /// <summary>
    /// Specifies the compression type.
    /// Write <see cref="TiffCompressionTypes"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CompressionType(TiffCompressionTypes value) override;
    /// <summary>
    /// Specifies the pixel format for the generated images.
    /// Read <see cref="ImagePixelFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ImagePixelFormat get_PixelFormat() override;
    /// <summary>
    /// Specifies the pixel format for the generated images.
    /// Write <see cref="ImagePixelFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PixelFormat(ImagePixelFormat value) override;
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
    /// System::SharedPtr<TiffOptions> options = System::MakeObject<TiffOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// pres->Save(u"pres.tiff", SaveFormat::Tiff, options);
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
    /// System::SharedPtr<TiffOptions> options = System::MakeObject<TiffOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// pres->Save(u"pres.tiff", SaveFormat::Tiff, options);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_SlidesLayoutOptions(System::SharedPtr<ISlidesLayoutOptions> value) override;
    /// <summary>
    /// Specifies the algorithm for converting a color image into a black and white image.
    /// This option will applied only if <see cref="Aspose::Slides::Export::ITiffOptions::get_CompressionType">ITiffOptions::get_CompressionType()</see> 
    /// is set to <see cref="TiffCompressionTypes::CCITT4"></see> or <see cref="TiffCompressionTypes::CCITT3"></see>
    /// Read <see cref="BlackWhiteConversionMode"></see>.
    /// Default is <see cref="BlackWhiteConversionMode::Default"></see>. 
    /// </summary>
    /// <example>
    /// The following example shows how to set conversion algorithm to Dithering.
    /// <code>
    /// System::SharedPtr<TiffOptions> tiffOptions = System::MakeObject<TiffOptions>();
    /// tiffOptions->set_CompressionType(TiffCompressionTypes::CCITT4);
    /// tiffOptions->set_BwConversionMode(BlackWhiteConversionMode::Dithering);
    /// 
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>();
    /// presentation->Save(tiffFilePath, SaveFormat::Tiff, tiffOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API BlackWhiteConversionMode get_BwConversionMode() override;
    /// <summary>
    /// Specifies the algorithm for converting a color image into a black and white image.
    /// This option will applied only if <see cref="Aspose::Slides::Export::ITiffOptions::get_CompressionType">ITiffOptions::get_CompressionType()</see> 
    /// is set to <see cref="TiffCompressionTypes::CCITT4"></see> or <see cref="TiffCompressionTypes::CCITT3"></see>
    /// Write <see cref="BlackWhiteConversionMode"></see>.
    /// Default is <see cref="BlackWhiteConversionMode::Default"></see>. 
    /// </summary>
    /// <example>
    /// The following example shows how to set conversion algorithm to Dithering.
    /// <code>
    /// System::SharedPtr<TiffOptions> tiffOptions = System::MakeObject<TiffOptions>();
    /// tiffOptions->set_CompressionType(TiffCompressionTypes::CCITT4);
    /// tiffOptions->set_BwConversionMode(BlackWhiteConversionMode::Dithering);
    /// 
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>();
    /// presentation->Save(tiffFilePath, SaveFormat::Tiff, tiffOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_BwConversionMode(BlackWhiteConversionMode value) override;
    
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TiffOptions();
    
private:

    System::Drawing::Size m_imageSize;
    uint32_t m_dpiX;
    uint32_t m_dpiY;
    TiffCompressionTypes m_compression;
    ImagePixelFormat m_pixelFormat;
    bool m_showHiddenSlides;
    bool m_includeComments;
    BlackWhiteConversionMode m_bwConversionmode;
    System::SharedPtr<Aspose::Slides::Export::InkOptions> m_inkOptions;
    System::SharedPtr<ISlidesLayoutOptions> m_slideLayoutOptions;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


