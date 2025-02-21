#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using Aspose.Pdf.Drawing;
// using ResultImage = Aspose.Pdf.Drawing.PdfImage;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/idisposable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Color;
namespace Comparison
{
class GraphicalPdfComparer;
} // namespace Comparison
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Bitmap;
namespace Imaging
{
enum class PixelFormat;
} // namespace Imaging
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Comparison {

/// <summary>
/// Represents the result class of comparing two PDF pages.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ImagesDifference final : public System::IDisposable
{
    typedef ImagesDifference ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Comparison::GraphicalPdfComparer;
    
public:

    /// <summary>
    /// Gets the image of first compared page. The image has a pixel format is 24bpp.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<System::Drawing::Bitmap>& get_SourceImage() const;
    /// <summary>
    /// Gets the difference array.
    /// This array is similar to the original image data array obtained as a result of the LockBits method.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::ArrayPtr<int32_t>& get_Difference() const;
    /// <summary>
    /// The stride of difference image data.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Stride() const;
    /// <summary>
    /// The height of difference.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Height() const;
    
    /// <summary>
    /// Returns a new bitmap representing the destination image by applying the difference array to the source image.
    /// </summary>
    /// <returns>A destination image.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetDestinationImage();
    /// <summary>
    /// Converts the difference array to a bitmap image using the specified colors.
    /// </summary>
    /// <param name="color">The color for non-zero differences.</param>
    /// <param name="backgroundColor">The background color for zero differences.</param>
    /// <returns>A bitmap image representing the difference array.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Drawing::Bitmap> DifferenceToImage(System::SharedPtr<Color> color, System::SharedPtr<Color> backgroundColor);
    /// <summary>
    /// Performs any necessary clean up operations before the object is destroyed.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    
protected:

    /// <summary>
    /// Creates and instance of <see cref="ImagesDifference"></see> class.
    /// </summary>
    /// <param name="sourceImage">The source image.</param>
    /// <param name="difference">The difference array.</param>
    /// <param name="stride">The stride of difference image data.</param>
    /// <param name="height">The height of difference.</param>
    ImagesDifference(System::SharedPtr<System::Drawing::Bitmap> sourceImage, System::ArrayPtr<int32_t> difference, int32_t stride, int32_t height);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ImagesDifference, CODEPORTING_ARGS(System::SharedPtr<System::Drawing::Bitmap> sourceImage, System::ArrayPtr<int32_t> difference, int32_t stride, int32_t height));
    
private:

    bool _disposed;
    static const System::Drawing::Imaging::PixelFormat ImagePixelFormat;
    System::SharedPtr<System::Drawing::Bitmap> pr_SourceImage;
    System::ArrayPtr<int32_t> pr_Difference;
    int32_t pr_Stride;
    int32_t pr_Height;
    
    static int32_t Clamp(int32_t value, int32_t min, int32_t max);
    void Dispose(bool disposing);
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


