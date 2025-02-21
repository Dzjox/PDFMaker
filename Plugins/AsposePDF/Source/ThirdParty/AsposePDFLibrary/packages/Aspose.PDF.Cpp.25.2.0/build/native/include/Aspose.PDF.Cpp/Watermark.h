#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Page;
class Rectangle;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Image;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a watermark of the page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Watermark : public System::Object
{
    typedef Watermark ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Page;
    
public:

    /// <summary>
    /// Gets an image of the watermark.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Drawing::Image> get_Image() const;
    /// <summary>
    /// Gets a position of the watermark's image on a page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_Position() const;
    /// <summary>
    /// Gets a flag the watermark is present.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Available();
    
    /// <summary>
    /// Initializes a watermark object with an image and it's position on a page.
    /// </summary>
    /// <param name="image">Image of the watermark. </param>
    /// <param name="rect">Position of the watermark on the page.</param>
    ASPOSE_PDF_SHARED_API Watermark(System::SharedPtr<System::Drawing::Image> image, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initializes a watermark object with an image.
    /// </summary>
    /// <param name="image">Image of the watermark.</param>
    ASPOSE_PDF_SHARED_API Watermark(System::SharedPtr<System::Drawing::Image> image);
    
protected:

    /// <summary>
    /// Initializes a new watermark object.
    /// </summary>
    Watermark();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Watermark, CODEPORTING_ARGS());
    
private:

    System::SharedPtr<System::Drawing::Image> _image;
    System::SharedPtr<Rectangle> _rect;
    
};

} // namespace Pdf
} // namespace Aspose


