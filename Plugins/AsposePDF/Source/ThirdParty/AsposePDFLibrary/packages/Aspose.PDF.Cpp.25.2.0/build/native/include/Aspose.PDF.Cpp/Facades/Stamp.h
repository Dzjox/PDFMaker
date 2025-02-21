#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Facades
{
enum class BlendingColorSpace;
class FormattedText;
class PdfFileStamp;
} // namespace Facades
class Page;
enum class Rotation;
class Stamp;
namespace Text
{
class TextState;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class represeting stamp. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Stamp final : public System::Object
{
    typedef Stamp ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileStamp;
    
public:

    /// <summary>
    /// Gets identifier of stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_StampId() const;
    /// <summary>
    /// Sets identifier of stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StampId(int32_t value);
    /// <summary>
    /// Gets quality of image stamp in percent. Valiued values 0..100%. 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Quality() const;
    /// <summary>
    /// Sets quality of image stamp in percent. Valiued values 0..100%. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Quality(int32_t value);
    /// <summary>
    /// Gets opacity of the stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_Opacity();
    /// <summary>
    /// Sets opacity of the stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Opacity(float value);
    /// <summary>
    /// Gets page number. 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageNumber() const;
    /// <summary>
    /// Sets page number. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageNumber(int32_t value);
    /// <summary>
    /// Gets array with numbers of pages which will be affected by stamp. 
    /// If Pages = null all pages of the document are affected.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<int32_t> get_Pages() const;
    /// <summary>
    /// Sets array with numbers of pages which will be affected by stamp. 
    /// If Pages = null all pages of the document are affected.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_Pages(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets rotation of the stamp in degrees.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API float get_Rotation() const;
    /// <summary>
    /// Sets rotation of the stamp in degrees.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_Rotation(float value);
    /// <summary>
    /// Gets background status. If true stamp will be placed as background of the spamped page.
    /// By default is set to false.
    /// </summary>
    /// /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool get_IsBackground() const;
    /// <summary>
    /// Sets background status. If true stamp will be placed as background of the spamped page.
    /// By default is set to false.
    /// </summary>
    /// /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_IsBackground(bool value);
    /// <summary>
    /// Gets a BlendingColorSpace value that defines a color space 
    /// that is used to perform transparency and blending operations on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API BlendingColorSpace get_BlendingSpace() const;
    /// <summary>
    /// Sets a BlendingColorSpace value that defines a color space 
    /// that is used to perform transparency and blending operations on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BlendingSpace(BlendingColorSpace value);
    
    /// <summary>
    /// Constructor for Stamp object.
    /// </summary>
    ASPOSE_PDF_SHARED_API Stamp();
    
    /// <summary>
    /// Sets PDF file and number of page which will be used as stamp.
    /// </summary>
    /// <param name="pdfFile">Path to PDF file.</param>
    /// <param name="pageNumber">Number of page in PDF file</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void BindPdf(System::String pdfFile, int32_t pageNumber);
    /// <summary>
    ///  Sets PDF file and number of page which will be used as stamp.
    /// </summary>
    /// <param name="pdfStream">Stream which contains PDF document.</param>
    /// <param name="pageNumber">Page index of the document whihc will be used as stamp.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> pdfStream, int32_t pageNumber);
    /// <summary>
    /// Sets image as a stamp.
    /// </summary>
    /// <param name="imageFile">Image file name and path.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void BindImage(System::String imageFile);
    /// <summary>
    /// Sets text as stamp.
    /// </summary>
    /// <param name="formattedText">FormattedText object which specifies text and text properties.</param>
    ASPOSE_PDF_SHARED_API void BindLogo(System::SharedPtr<FormattedText> formattedText);
    /// <summary>
    /// Sets text state of stamp text.
    /// </summary>
    /// <param name="textState">TextState object which specifies text properties.</param>
    ASPOSE_PDF_SHARED_API void BindTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    /// <summary>
    /// Sets position on page where stamp will be placed.
    /// </summary>
    /// <param name="originX">X coordinate of the stamp.</param>
    /// <param name="originY">Y coordinate of the stamp.</param>
    ASPOSE_PDF_SHARED_API void SetOrigin(float originX, float originY);
    /// <summary>
    /// Sets size of image stamp. Image will be scaled according to the specified values.
    /// </summary>
    /// <param name="width">Image width.</param>
    /// <param name="height">Image height.</param>
    ASPOSE_PDF_SHARED_API void SetImageSize(float width, float height);
    /// <summary>
    /// Sets image which will be used as stamp.
    /// </summary>
    /// <param name="image">Stream which contains image data.</param>
    ASPOSE_PDF_SHARED_API void BindImage(System::SharedPtr<System::IO::Stream> image);
    
protected:

    /// <summary>
    /// Translates Stamp into corresponding Aspose.Pdf.Stamp descendant (TextStamp / ImageStamp / PdfPageStamp )
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Stamp> translate();
    
private:

    System::ArrayPtr<int32_t> pages;
    int32_t pageNumber;
    int32_t _pageNumber;
    System::SharedPtr<FormattedText> text;
    System::SharedPtr<System::IO::Stream> image;
    System::String imageName;
    System::String pdfFile;
    System::SharedPtr<System::IO::Stream> pdfStream;
    System::SharedPtr<Page> page;
    double originX;
    double originY;
    double imageWidth;
    double imageHeight;
    double opacity;
    bool background;
    float rotation;
    int32_t stampId;
    int32_t quality;
    BlendingColorSpace blendingColorSpace;
    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    
    void reset();
    void setPage(System::SharedPtr<Document> doc, int32_t pageNumber);
    bool isValidAngle(float angle);
    Aspose::Pdf::Rotation translateRotation();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


