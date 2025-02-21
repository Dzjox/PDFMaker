#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using ImageFormat = Aspose.Pdf.Drawing.ImageFormat;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Redaction;
} // namespace Annotations
class CompositingParameters;
namespace Devices
{
class Resolution;
} // namespace Devices
namespace Engine
{
namespace IO
{
namespace ConvertStrategies
{
class PdfAConvertStrategyBase;
class PdfConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
class ImagePlacementAbsorber;
class Matrix;
class Operator;
class Page;
class Rectangle;
class XImage;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
namespace Imaging
{
class ImageFormat;
} // namespace Imaging
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents characteristics of an image placed to Pdf document page.
/// </summary>
/// <remarks>
/// When an image is placed to a page it may have dimensions other than physical dimensions defined in <see cref="Resources"></see>.
/// The object <see cref="ImagePlacement"></see> is intended to provide such information like dimensions, resolution and so on.
/// </remarks>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS ImagePlacement final : public System::Object
{
    typedef ImagePlacement ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    
public:

    /// <summary>
    /// Current transformation matrix for this image. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix() const;
    /// <summary>
    /// Gets rectangle of the Image.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() const;
    /// <summary>
    /// Operator used for displaying the image.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Operator> get_Operator() const;
    /// <summary>
    /// Gets rotation angle of the Image.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_Rotation() const;
    /// <summary>
    /// Gets resolution of the Image.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Devices::Resolution> get_Resolution() const;
    /// <summary>
    /// Gets related XImage resource object.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XImage> get_Image() const;
    /// <summary>
    /// Gets the page containing the image.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Page> get_Page() const;
    /// <summary>
    /// Gets compositing parameters of graphics state active for the image placed to the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::CompositingParameters> get_CompositingParameters() const;
    
    /// <summary>
    /// Delete image from the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Hide();
    /// <summary>
    /// Replace image in collection with another image. 
    /// </summary>
    /// <param name="image">Stream containing image data.</param>
    ASPOSE_PDF_SHARED_API void Replace(const System::SharedPtr<System::IO::Stream>& image);
    /// <summary>
    /// Saves image with corresponding transformations: scaling, rotation and resolution.
    /// </summary>
    /// <param name="stream">Stream where image will be saved</param>
    ASPOSE_PDF_SHARED_API void Save(const System::SharedPtr<System::IO::Stream>& stream);
    /// <summary>
    /// Saves image with corresponding transformations: scaling, rotation and resolution.
    /// </summary>
    /// <param name="stream">Stream where image will be saved</param>
    /// <param name="format">Format which will be used for image enconding. <see cref="ImageFormat"></see></param>
    ASPOSE_PDF_SHARED_API void Save(const System::SharedPtr<System::IO::Stream>& stream, const System::SharedPtr<System::Drawing::Imaging::ImageFormat>& format);
    
protected:

    bool get_IsInline() const;
    
    /// <summary>
    /// Initializes new instance of the <see cref="ImagePlacement"></see> object.
    /// </summary>
    ImagePlacement(const System::SharedPtr<Aspose::Pdf::Page>& page, const System::SharedPtr<XImage>& image, int32_t resHorizontal, int32_t resVertical, const System::SharedPtr<Aspose::Pdf::CompositingParameters>& compositingParameters, float rotationAngle, const System::SharedPtr<Aspose::Pdf::Matrix>& matrix, bool isInline, const System::SharedPtr<Aspose::Pdf::Operator>& op, const System::SharedPtr<Aspose::Pdf::Rectangle>& rectangle);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ImagePlacement, CODEPORTING_ARGS(const System::SharedPtr<Aspose::Pdf::Page>& page, const System::SharedPtr<XImage>& image, int32_t resHorizontal, int32_t resVertical, const System::SharedPtr<Aspose::Pdf::CompositingParameters>& compositingParameters, float rotationAngle, const System::SharedPtr<Aspose::Pdf::Matrix>& matrix, bool isInline, const System::SharedPtr<Aspose::Pdf::Operator>& op, const System::SharedPtr<Aspose::Pdf::Rectangle>& rectangle));
    /// <summary>
    /// Isolates current image placement by creating the duplicate xImage object.
    /// </summary>
    void Isolate();
    /// <summary>
    /// Determines whether the image associated with the current page is shared across other pages in the document.
    /// </summary>
    /// <returns>True if the image is shared across other pages, false otherwise.</returns>
    bool IsSharedAcrossPages();
    
private:

    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution;
    System::SharedPtr<XImage> image;
    System::SharedPtr<Aspose::Pdf::CompositingParameters> compositingParameters;
    System::SharedPtr<Aspose::Pdf::Page> page;
    float rotationAngle;
    bool isInline;
    System::SharedPtr<Aspose::Pdf::Operator> imageDrawingOperator;
    System::SharedPtr<Aspose::Pdf::Matrix> matrix;
    
};

} // namespace Pdf
} // namespace Aspose


