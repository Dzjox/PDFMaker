#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using ImageFormat = Aspose.Pdf.Drawing.ImageFormat;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


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
class ImagesDifference;
} // namespace Comparison
namespace Devices
{
class Resolution;
} // namespace Devices
class Document;
class Page;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Bitmap;
namespace Imaging
{
class BitmapData;
class ImageFormat;
enum class PixelFormat;
} // namespace Imaging
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Comparison {

/// <summary>
/// Represents a class for graphically comparing PDF documents.
/// Should be used to search for small changes, mainly of a graphical nature.
/// To compare text content changes, use other PDF comparison classes.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GraphicalPdfComparer : public System::Object
{
    typedef GraphicalPdfComparer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Comparison::ImagesDifference;
    
private:

    /// <summary>
    /// Represents a class to store and operate with image data.
    /// </summary>
    class ImageData final : public System::Object
    {
        typedef ImageData ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<System::Drawing::Bitmap> Bitmap;
        System::SharedPtr<System::Drawing::Imaging::BitmapData> BitmapData;
        int32_t Size;
        int32_t Stride;
        int32_t Height;
        System::ArrayPtr<uint8_t> Data;
        
        /// <summary>
        /// Gets an instance of <see cref="ImageData"></see> class by stream.
        /// </summary>
        /// <param name="bitmap">The bitmap.</param>
        /// <param name="pixelFormat">The pixel format.</param>
        /// <returns>The instance of <see cref="ImageData"></see>.</returns>
        static System::SharedPtr<GraphicalPdfComparer::ImageData> GetImageData(System::SharedPtr<System::Drawing::Bitmap> bitmap, System::Drawing::Imaging::PixelFormat pixelFormat);
        /// <summary>
        /// Unlocks the bitmap data.
        /// </summary>
        /// <remarks>
        /// This method releases the lock on the bitmap data that was obtained using the <see cref="ImageData::GetImageData"></see> method.
        /// After calling this method, further operations on the bitmap data are not allowed.
        /// </remarks>
        /// <seealso cref="ImageData::GetImageData"></seealso>
        void UnlockBitmap();
        /// <summary>
        /// Copies the data from the <see cref="ImageData::Data"></see> array to the bitmap.
        /// </summary>
        void CopyDataToBitmap();
        
        ImageData();
        
    };
    
    
public:

    /// <summary>
    /// Gets and sets the resolution of the resulting images.
    /// The default value is 150dpi.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Devices::Resolution>& get_Resolution() const;
    /// <summary>
    /// Gets and sets the resolution of the resulting images.
    /// The default value is 150dpi.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Resolution(System::SharedPtr<Aspose::Pdf::Devices::Resolution> value);
    /// <summary>
    /// Gets and sets the change flag color.
    /// The default color is red.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Color>& get_Color() const;
    /// <summary>
    /// Gets and sets the change flag color.
    /// The default color is red.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Color(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets and sets the threshold value in percentage.
    /// This value allows you to ignore small changes if they are not significant to you.
    /// The default value is 0%.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Threshold() const;
    /// <summary>
    /// Gets and sets the threshold value in percentage.
    /// This value allows you to ignore small changes if they are not significant to you.
    /// The default value is 0%.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Threshold(double value);
    
    /// <summary>
    /// Creates an instance of <see cref="GraphicalPdfComparer"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API GraphicalPdfComparer();
    
    /// <summary>
    /// Gets differences between pages images.
    /// The result contains an image of the first page compared and an array of differences.
    /// </summary>
    /// <param name="page1">The first page.</param>
    /// <param name="page2">The second page.</param>
    /// <returns>The <see cref="ImagesDifference"></see> instance.</returns>
    /// <exception cref="ArgumentException">If the pages being compared are of different sizes.</exception>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ImagesDifference> GetDifference(System::SharedPtr<Page> page1, System::SharedPtr<Page> page2);
    /// <summary>
    /// Compares pages graphically. The comparison result is placed in a PDF document.
    /// </summary>
    /// <param name="page1">The first page.</param>
    /// <param name="page2">The second page.</param>
    /// <param name="resultPdfPath">The path to target pdf file.</param>
    /// <exception cref="ArgumentException">
    /// If the pages being compared are of different sizes.
    /// If resultPdfPath is null or empty string.
    /// </exception>
    ASPOSE_PDF_SHARED_API void ComparePagesToPdf(System::SharedPtr<Page> page1, System::SharedPtr<Page> page2, System::String resultPdfPath);
    /// <summary>
    /// Compares pages graphically. The comparison result is placed in a PDF document.
    /// </summary>
    /// <param name="page1">The first page.</param>
    /// <param name="page2">The second page.</param>
    /// <param name="pdfDocument">The pdf document instance.</param>
    /// <exception cref="ArgumentException">If the pages being compared are of different sizes.</exception>
    ASPOSE_PDF_SHARED_API void ComparePagesToPdf(System::SharedPtr<Page> page1, System::SharedPtr<Page> page2, System::SharedPtr<Document> pdfDocument);
    /// <summary>
    /// Compares documents graphically. The comparison result is placed in a PDF document.
    /// </summary>
    /// <param name="document1">The first document to compare.</param>
    /// <param name="document2">The second document to compare.</param>
    /// <param name="resultPdfPath">The target pdf file path.</param>
    /// <exception cref="ArgumentException">
    /// If the pages being compared are of different sizes.
    /// If resultPdfPath is null or empty string.
    /// </exception>
    ASPOSE_PDF_SHARED_API void CompareDocumentsToPdf(System::SharedPtr<Document> document1, System::SharedPtr<Document> document2, System::String resultPdfPath);
    /// <summary>
    /// Compares pages graphically. The comparison result is placed in a image.
    /// </summary>
    /// <param name="page1">The first page to compare.</param>
    /// <param name="page2">The second page to compare.</param>
    /// <param name="resultImagePath">The path to target image file.</param>
    /// <exception cref="ArgumentException">
    /// If the pages being compared are of different sizes.
    /// If resultImagePath is null or empty string.
    /// There is unknown saving image format.
    /// </exception>
    ASPOSE_PDF_SHARED_API void ComparePagesToImage(System::SharedPtr<Page> page1, System::SharedPtr<Page> page2, System::String resultImagePath);
    /// <summary>
    /// Compares documents graphically. The comparison result is placed in images.
    /// </summary>
    /// <param name="document1">The first document to compare.</param>
    /// <param name="document2">The second document to compare.</param>
    /// <param name="targetDirectory">The directory to save a comparison results.</param>
    /// <param name="fileNamePrefix">The images name prefix.</param>
    /// <param name="imageFormat">The image format to save.</param>
    /// <exception cref="ArgumentException">
    /// If the pages being compared are of different sizes.
    /// If targetDirectory is null or empty string.
    /// If fileNamePrefix is null or empty string.
    /// </exception>
    ASPOSE_PDF_SHARED_API void CompareDocumentsToImages(System::SharedPtr<Document> document1, System::SharedPtr<Document> document2, System::String targetDirectory, System::String fileNamePrefix, System::SharedPtr<System::Drawing::Imaging::ImageFormat> imageFormat);
    
protected:

    static const int32_t BytesPerPixel;
    
private:

    static const System::Drawing::Imaging::PixelFormat ImagePixelFormat;
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> _defaultResolution;
    static const int32_t DefaultThreshold;
    double _maxColorValue;
    double _threshold;
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> pr_Resolution;
    System::SharedPtr<Aspose::Pdf::Color> pr_Color;
    
    System::SharedPtr<ImagesDifference> CalculateDifference(System::SharedPtr<Page> page1, System::SharedPtr<Page> page2);
    static int32_t GetNumberOfDigits(int32_t number);
    static void AssertArePagesSizeIsEqual(System::SharedPtr<Page> page1, System::SharedPtr<Page> page2);
    static void AssertArePagesSizeIsEqual(System::SharedPtr<Document> document1, System::SharedPtr<Document> document2, int32_t count);
    System::SharedPtr<System::Drawing::Bitmap> CalculateDifferenceImage(System::SharedPtr<System::Drawing::Bitmap> image1, System::SharedPtr<System::Drawing::Bitmap> image2);
    static double GetColorValueSquared(int32_t r, int32_t g, int32_t b);
    double GetColorValuePercentage(int32_t r, int32_t g, int32_t b);
    static System::String GetFileExtension(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    static System::SharedPtr<System::Drawing::Imaging::ImageFormat> GetImageFormat(System::String filePath);
    void AddImageToPage(System::SharedPtr<Document> pdfDocument, System::SharedPtr<System::Drawing::Bitmap> bitmap);
    void ConvertPagesToImages(System::SharedPtr<Page> page1, System::SharedPtr<Page> page2, System::SharedPtr<System::Drawing::Bitmap>& image1, System::SharedPtr<System::Drawing::Bitmap>& image2);
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


