#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Devices
{
enum class ColorDepth;
enum class CompressionType;
class Margins;
enum class ShapeType;
} // namespace Devices
enum class PageCoordinateType;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// This class represents settings for importing pdf to Tiff.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TiffSettings final : public System::Object
{
    typedef TiffSettings ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the margins.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Devices::Margins> get_Margins() const;
    /// <summary>
    /// Gets a value indicating whether to skip blank pages.
    /// </summary>
    /// <remarks>
    /// Default value is false
    /// </remarks>
    /// <value><c>true</c> if need to skip blank pages; otherwise, <c>false</c>.</value>
    ASPOSE_PDF_SHARED_API bool get_SkipBlankPages() const;
    /// <summary>
    /// Sets a value indicating whether to skip blank pages.
    /// </summary>
    /// <remarks>
    /// Default value is false
    /// </remarks>
    /// <value><c>true</c> if need to skip blank pages; otherwise, <c>false</c>.</value>
    ASPOSE_PDF_SHARED_API void set_SkipBlankPages(bool value);
    /// <summary>
    /// Gets the type of the compression.
    /// </summary>
    /// <remarks>
    /// Default value is CompressionType.LZW
    /// </remarks>
    /// <value>The type of the compression.</value>
    ASPOSE_PDF_SHARED_API CompressionType get_Compression() const;
    /// <summary>
    /// Sets the type of the compression.
    /// </summary>
    /// <remarks>
    /// Default value is CompressionType.LZW
    /// </remarks>
    /// <value>The type of the compression.</value>
    ASPOSE_PDF_SHARED_API void set_Compression(CompressionType value);
    /// <summary>
    /// Gets the color depth.
    /// </summary>
    /// <remarks>
    /// Default value is ColorDepth.Default
    /// </remarks>
    /// <value>The color depth.</value>
    ASPOSE_PDF_SHARED_API ColorDepth get_Depth() const;
    /// <summary>
    /// Sets the color depth.
    /// </summary>
    /// <remarks>
    /// Default value is ColorDepth.Default
    /// </remarks>
    /// <value>The color depth.</value>
    ASPOSE_PDF_SHARED_API void set_Depth(ColorDepth value);
    /// <summary>
    /// Gets the type of the shape.
    /// </summary>
    /// <remarks>
    /// Default value is ShapeType.None
    /// </remarks>
    /// <value>The type of the shape.</value>
    ASPOSE_PDF_SHARED_API ShapeType get_Shape() const;
    /// <summary>
    /// Sets the type of the shape.
    /// </summary>
    /// <remarks>
    /// Default value is ShapeType.None
    /// </remarks>
    /// <value>The type of the shape.</value>
    ASPOSE_PDF_SHARED_API void set_Shape(ShapeType value);
    /// <summary>
    /// Get or sets a value boundary of the transformation of colors in white and black.
    /// This parameter can be applied with EncoderValue.CompressionCCITT4, EncoderValue.CompressionCCITT3, EncoderValue.CompressionRle or ColorDepth.Format1bpp == 1
    /// </summary>
    /// <value>Value of brightness should be in the range from 0 to 1. By default value is equal to 0.33f</value>
    ASPOSE_PDF_SHARED_API float get_Brightness() const;
    /// <summary>
    /// Get or sets a value boundary of the transformation of colors in white and black.
    /// This parameter can be applied with EncoderValue.CompressionCCITT4, EncoderValue.CompressionCCITT3, EncoderValue.CompressionRle or ColorDepth.Format1bpp == 1
    /// </summary>
    /// <value>Value of brightness should be in the range from 0 to 1. By default value is equal to 0.33f</value>
    ASPOSE_PDF_SHARED_API void set_Brightness(float value);
    /// <summary>
    /// Get or sets the page coordinate type (Media/Crop boxes). CropBox value is used by default.        
    /// </summary>
    ASPOSE_PDF_SHARED_API PageCoordinateType get_CoordinateType() const;
    /// <summary>
    /// Get or sets the page coordinate type (Media/Crop boxes). CropBox value is used by default.        
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CoordinateType(PageCoordinateType value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API TiffSettings();
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"></see> class.
    /// </summary>
    /// <param name="shapeType">Type of the shape.</param>
    ASPOSE_PDF_SHARED_API TiffSettings(ShapeType shapeType);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"></see> class.
    /// </summary>
    /// <param name="compressionType">Type of the compression.</param>
    ASPOSE_PDF_SHARED_API TiffSettings(CompressionType compressionType);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"></see> class.
    /// </summary>
    /// <param name="colorDepth">The color depth.</param>
    ASPOSE_PDF_SHARED_API TiffSettings(ColorDepth colorDepth);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"></see> class.
    /// </summary>
    /// <param name="margins">The margins.</param>
    ASPOSE_PDF_SHARED_API TiffSettings(System::SharedPtr<Aspose::Pdf::Devices::Margins> margins);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"></see> class.
    /// </summary>
    /// <param name="compressionType">Type of the compression.</param>
    /// <param name="colorDepth">The color depth.</param>
    /// <param name="margins">The margins.</param>
    ASPOSE_PDF_SHARED_API TiffSettings(CompressionType compressionType, ColorDepth colorDepth, System::SharedPtr<Aspose::Pdf::Devices::Margins> margins);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"></see> class.
    /// </summary>
    /// <param name="compressionType">Type of the compression.</param>
    /// <param name="colorDepth">The color depth.</param>
    /// <param name="margins">The margins.</param>
    /// <param name="skipBlankPages">if set to <c>true</c> need to skip blank pages.</param>
    ASPOSE_PDF_SHARED_API TiffSettings(CompressionType compressionType, ColorDepth colorDepth, System::SharedPtr<Aspose::Pdf::Devices::Margins> margins, bool skipBlankPages);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"></see> class.
    /// </summary>
    /// <param name="compressionType">Type of the compression.</param>
    /// <param name="colorDepth">The color depth.</param>
    /// <param name="margins">The margins.</param>
    /// <param name="skipBlankPages">if set to <c>true</c> need to skip blank pages.</param>
    /// <param name="shapeType">Type of the shape.</param>
    ASPOSE_PDF_SHARED_API TiffSettings(CompressionType compressionType, ColorDepth colorDepth, System::SharedPtr<Aspose::Pdf::Devices::Margins> margins, bool skipBlankPages, ShapeType shapeType);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffSettings"></see> class.
    /// </summary>
    /// <param name="skipBlankPages">if set to <c>true</c> [skip blank pages].</param>
    ASPOSE_PDF_SHARED_API TiffSettings(bool skipBlankPages);
    
private:

    System::SharedPtr<Aspose::Pdf::Devices::Margins> margins;
    bool skipBlankPages;
    CompressionType compression;
    ColorDepth depth;
    ShapeType shape;
    float brightness;
    PageCoordinateType coordinateType;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


