#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using Bitmap = Aspose.Pdf.Drawing.PdfImage;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
namespace Drawing
{
class Bitmap;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// This interface declared for customization algorithms of quantization. 
/// Users can implement their own realization of this algorithms (for example algorithms based on unmanaged code).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IIndexBitmapConverter : public virtual System::Object
{
    typedef IIndexBitmapConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns 1Bpp bitmap representation
    /// </summary>
    /// <param name="src">Source bitmap.</param>
    /// <returns>Bitmap in 1 bpp image format.</returns>
    virtual System::SharedPtr<System::Drawing::Bitmap> Get1BppImage(System::SharedPtr<System::Drawing::Bitmap> src) = 0;
    /// <summary>
    /// Returns 4Bpp bitmap representation
    /// </summary>
    /// <param name="src">Source bitmap.</param>
    /// <returns>Bitmap in 4 bpp image format.</returns>
    virtual System::SharedPtr<System::Drawing::Bitmap> Get4BppImage(System::SharedPtr<System::Drawing::Bitmap> src) = 0;
    /// <summary>
    /// Returns 8Bpp bitmap representation
    /// </summary>
    /// <param name="src">Source bitmap.</param>
    /// <returns>Bitmap in 8 bpp image format.</returns>
    virtual System::SharedPtr<System::Drawing::Bitmap> Get8BppImage(System::SharedPtr<System::Drawing::Bitmap> src) = 0;
    
};

} // namespace Pdf
} // namespace Aspose


