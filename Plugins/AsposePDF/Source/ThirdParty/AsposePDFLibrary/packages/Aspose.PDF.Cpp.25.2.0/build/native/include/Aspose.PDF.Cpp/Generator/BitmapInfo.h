#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// extern alias AsposeImaging;
// using ImagingColor = AsposeImaging::Aspose.Imaging.Color;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/details/array_view.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class XImageCollection;
} // namespace Pdf
namespace Utils
{
class ImageUtils;
} // namespace Utils
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Object containing array of pixels and bitmap information.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BitmapInfo : public System::Object
{
    typedef BitmapInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Utils::ImageUtils;
    friend class Aspose::Pdf::XImageCollection;
    
public:

    /// <summary>
    /// Bitmap pixel format.
    /// </summary>
    enum class PixelFormat
    {
        /// <summary>
        /// Rgb24 pixel format.
        /// </summary>
        Rgb24,
        /// <summary>
        /// Bgr24 pixel format.
        /// </summary>
        Bgr24,
        /// <summary>
        /// Rgba32 pixel format.
        /// </summary>
        Rgba32,
        /// <summary>
        /// Argb32 pixel format.
        /// </summary>
        Argb32,
        /// <summary>
        /// Bgra32 pixel format.
        /// </summary>
        Bgra32
    };
    
    
public:

    /// <summary>
    /// Gets the array of pixels.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<uint8_t> get_PixelBytes() const;
    /// <summary>
    /// Gets the width of the bitmap.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Width() const;
    /// <summary>
    /// Gets the height of the bitmap.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Height() const;
    /// <summary>
    /// Gets the pixel format of the bitmap.
    /// </summary>
    ASPOSE_PDF_SHARED_API BitmapInfo::PixelFormat get_Format() const;
    
    /// <summary>
    /// Creates a new instance of the <seealso cref="BitmapInfo"></seealso> class.
    /// </summary>
    /// <param name="pixelBytes">Array of pixels.</param>
    /// <param name="width">Width of the bitmap.</param>
    /// <param name="height">Height of the bitmap.</param>
    /// <param name="format">Pixel format of the bitmap.</param>
    ASPOSE_PDF_SHARED_API BitmapInfo(System::ArrayPtr<uint8_t> pixelBytes, int32_t width, int32_t height, BitmapInfo::PixelFormat format);
    
protected:

    /// <summary>
    /// Converts pixels to System.Drawing native pixel format (Bgr or Bgra).
    /// </summary>
    /// <returns>Alpha bytes if it is Bgra format.</returns>
    System::ArrayPtr<int32_t> GetImagingColors();
    /// <summary>
    /// Converts pixels to System.Drawing native pixel format (Bgr or Bgra).
    /// </summary>
    /// <returns>Alpha bytes if it is Bgra format.</returns>
    System::ArrayPtr<uint8_t> ConvertToBgr();
    /// <summary>
    /// Converts pixels to rgb.
    /// </summary>
    /// <returns>Alpha bytes if it is Bgra format.</returns>
    System::ArrayPtr<uint8_t> GetRgb(const System::Details::ArrayView<uint8_t>& resultRgb);
    
private:

    System::ArrayPtr<uint8_t> _pixelBytes;
    int32_t _width;
    int32_t _height;
    BitmapInfo::PixelFormat _format;
    
    void ValidateParams(System::ArrayPtr<uint8_t> pixelBytes, int32_t width, int32_t height, BitmapInfo::PixelFormat format);
    System::ArrayPtr<int32_t> GetImagingColorsFromBgra32();
    System::ArrayPtr<int32_t> GetImagingColorsFromRgba32();
    System::ArrayPtr<int32_t> GetImagingColorsFromArgb32();
    System::ArrayPtr<int32_t> GetImagingColorsFromBgr24();
    System::ArrayPtr<int32_t> GetImagingColorsFromRgb24();
    void GetFromBgr24(const System::Details::ArrayView<uint8_t>& resultRgb);
    System::ArrayPtr<uint8_t> GetFromBgra32(const System::Details::ArrayView<uint8_t>& resultRgb);
    System::ArrayPtr<uint8_t> GetFromRgba32(const System::Details::ArrayView<uint8_t>& resultRgb);
    System::ArrayPtr<uint8_t> GetFromArgb32(const System::Details::ArrayView<uint8_t>& resultRgb);
    void GetFromRgb24(const System::Details::ArrayView<uint8_t>& resultRgb);
    void ConvertRgb24(const System::Details::ArrayView<uint8_t>& rawBytes);
    System::ArrayPtr<uint8_t> ConvertArgb32(const System::Details::ArrayView<uint8_t>& rawBytes);
    System::ArrayPtr<uint8_t> ConvertRgba32(const System::Details::ArrayView<uint8_t>& rawBytes);
    System::ArrayPtr<uint8_t> ConvertBgra32(const System::Details::ArrayView<uint8_t>& rawBytes);
    
};

} // namespace Pdf
} // namespace Aspose


