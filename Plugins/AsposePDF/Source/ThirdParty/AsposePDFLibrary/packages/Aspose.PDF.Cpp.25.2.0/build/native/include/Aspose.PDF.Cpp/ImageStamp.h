#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Stamp.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
class Matrix;
class Page;
class PdfPageStamp;
class Rectangle;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Image;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a graphic stamp.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ImageStamp final : public Aspose::Pdf::Stamp
{
    typedef ImageStamp ThisType;
    typedef Aspose::Pdf::Stamp BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets image stream used for stamping.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_Image() const;
    /// <summary>
    /// Gets image width. Setting this property allos to scal image horizontally.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Width() override;
    /// <summary>
    /// Sets image width. Setting this property allos to scal image horizontally.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(double value) override;
    /// <summary>
    /// Gets image height. Setting this image allows to scale image vertically.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Height() override;
    /// <summary>
    /// Sets image height. Setting this image allows to scale image vertically.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Height(double value) override;
    /// <summary>
    /// Gets and sets horizontal stamp coordinate, starting from the left.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_XIndent() override;
    /// <summary>
    /// Gets and sets horizontal stamp coordinate, starting from the left.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_XIndent(double value) override;
    /// <summary>
    /// Gets and sets vertical stamp coordinate, starting from the bottom.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_YIndent() override;
    /// <summary>
    /// Gets and sets vertical stamp coordinate, starting from the bottom.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_YIndent(double value) override;
    /// <summary>
    /// Gets quality of image stamp in percent. Valid values are 0..100%. 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Quality() const;
    /// <summary>
    /// Sets quality of image stamp in percent. Valid values are 0..100%. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Quality(int32_t value);
    /// <summary>
    /// Gets Alternative Text for image stamp. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_AlternativeText() const;
    /// <summary>
    /// Sets Alternative Text for image stamp. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AlternativeText(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="ImageStamp"></see> class.
    /// </summary>
    /// <param name="image">
    /// Stream which contains image data.
    /// </param>
    ASPOSE_PDF_SHARED_API ImageStamp(System::SharedPtr<System::IO::Stream> image);
    
    /// <summary>
    /// Adds graphic stamp on the page.
    /// </summary>
    /// <param name="page">
    /// Page for stamping.
    /// </param>
    ASPOSE_PDF_SHARED_API void Put(System::SharedPtr<Page> page) override;
    
    /// <summary>
    /// Creates image stamp by image in the specified file.
    /// </summary>
    /// <param name="fileName">Name of the file which contains image. </param>
    ASPOSE_PDF_SHARED_API ImageStamp(System::String fileName);
    
protected:

    ASPOSE_PDF_SHARED_API void ClearCache() override;
    /// <summary>
    /// Returns rectangle where image stamp
    /// </summary>
    /// <returns>Rectangle of the image stamp.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> getRect() override;
    /// <summary>
    /// returns size matrix
    /// </summary>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> getSizeMatrix() override;
    
private:

    System::SharedPtr<System::IO::Stream> _image;
    System::String _imageName;
    System::SharedPtr<Engine::Data::IPdfObject> _imageObject;
    double _width;
    double _height;
    int32_t _quality;
    System::String _alternativeText;
    System::SharedPtr<System::Drawing::Image> _imageInstance;
    System::SharedPtr<PdfPageStamp> _svgStamp;
    
    void AddAlternativeText(System::SharedPtr<Page> page);
    void TryLoadSvg(System::String fileName);
    void LoadSvg(System::SharedPtr<System::IO::Stream> stream);
    
};

} // namespace Pdf
} // namespace Aspose


