#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

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
enum class BlackWhiteConversionMode;
class IInkOptions;
enum class ImagePixelFormat;
class ISlidesLayoutOptions;
enum class TiffCompressionTypes;
} // namespace Export
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Size;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation is saved in TIFF format.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITiffOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef ITiffOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies size of a generated TIFF image.
    /// Default value is 0x0, what means that generated image sizes will be calculated based on presentation slide size value.
    /// Read <see cref="System::Drawing::Size"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Size get_ImageSize() = 0;
    /// <summary>
    /// Specifies size of a generated TIFF image.
    /// Default value is 0x0, what means that generated image sizes will be calculated based on presentation slide size value.
    /// Write <see cref="System::Drawing::Size"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ImageSize(System::Drawing::Size value) = 0;
    /// <summary>
    /// Specifies the horizontal resolution in dots per inch.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_DpiX() = 0;
    /// <summary>
    /// Specifies the horizontal resolution in dots per inch.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DpiX(uint32_t value) = 0;
    /// <summary>
    /// Specifies the vertical resolution in dots per inch.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_DpiY() = 0;
    /// <summary>
    /// Specifies the vertical resolution in dots per inch.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DpiY(uint32_t value) = 0;
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
    /// Specifies the compression type.
    /// Read <see cref="TiffCompressionTypes"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TiffCompressionTypes get_CompressionType() = 0;
    /// <summary>
    /// Specifies the compression type.
    /// Write <see cref="TiffCompressionTypes"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CompressionType(TiffCompressionTypes value) = 0;
    /// <summary>
    /// Specifies the pixel format for the generated images.
    /// Read <see cref="ImagePixelFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ImagePixelFormat get_PixelFormat() = 0;
    /// <summary>
    /// Specifies the pixel format for the generated images.
    /// Write <see cref="ImagePixelFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PixelFormat(ImagePixelFormat value) = 0;
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
    /// System::SharedPtr<TiffOptions> options = System::MakeObject<TiffOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// pres->Save(u"pres.tiff", SaveFormat::Tiff, options);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SlidesLayoutOptions(System::SharedPtr<ISlidesLayoutOptions> value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API BlackWhiteConversionMode get_BwConversionMode() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BwConversionMode(BlackWhiteConversionMode value) = 0;
    /// <summary>
    /// Provides options that control the look of Ink objects in exported document.
    /// Read-only <see cref="Aspose::Slides::Export::IInkOptions">IInkOptions</see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IInkOptions> get_InkOptions() = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


