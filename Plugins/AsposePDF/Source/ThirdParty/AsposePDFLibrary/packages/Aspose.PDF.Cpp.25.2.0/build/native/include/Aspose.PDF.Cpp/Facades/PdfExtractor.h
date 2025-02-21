#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using ImageFormat = Aspose.Pdf.Drawing.ImageFormat;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
enum class ExtractImageMode;
namespace Facades
{
class PdfContentEditor;
} // namespace Facades
class FileSpecification;
namespace Text
{
class TextSearchOptions;
} // namespace Text
class XForm;
class XImage;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
namespace Imaging
{
class ImageFormat;
} // namespace Imaging
} // namespace Drawing
namespace IO
{
class MemoryStream;
class Stream;
} // namespace IO
namespace Text
{
class Encoding;
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class for extracting images and text from PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfExtractor final : public Aspose::Pdf::Facades::Facade
{
    typedef PdfExtractor ThisType;
    typedef Aspose::Pdf::Facades::Facade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    
public:

    /// <summary>
    /// Gets start page in the page range where extracting operation will be performed.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_StartPage() const;
    /// <summary>
    /// Sets start page in the page range where extracting operation will be performed.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StartPage(int32_t value);
    /// <summary>
    /// Gets end page in the page range where extracting operation will be performed.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_EndPage() const;
    /// <summary>
    /// Sets end page in the page range where extracting operation will be performed.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EndPage(int32_t value);
    /// <summary>
    /// Sets the mode for extract text's result.
    /// </summary>
    /// <value>0 is pure text mode and 1 is raw ordering mode. Default is 0.</value>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API int32_t get_ExtractTextMode() const;
    /// <summary>
    /// Sets the mode for extract text's result.
    /// </summary>
    /// <value>0 is pure text mode and 1 is raw ordering mode. Default is 0.</value>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_ExtractTextMode(int32_t value);
    /// <summary>
    /// Gets text search options.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> get_TextSearchOptions() const;
    /// <summary>
    /// Sets text search options.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> value);
    /// <summary>
    /// Sets the mode for extract images process.
    /// </summary>
    /// <remarks>
    /// Default value is ExtractImageMode.DefinedInResources that extracts all images defined in resources.
    /// 
    /// To extract actually shown images ExtractImageMode.ActuallyUsed mode should be used.
    /// </remarks>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ExtractImageMode get_ExtractImageMode() const;
    /// <summary>
    /// Sets the mode for extract images process.
    /// </summary>
    /// <remarks>
    /// Default value is ExtractImageMode.DefinedInResources that extracts all images defined in resources.
    /// 
    /// To extract actually shown images ExtractImageMode.ActuallyUsed mode should be used.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_ExtractImageMode(Aspose::Pdf::ExtractImageMode value);
    /// <summary>
    /// Is true when text has hebriew or arabic symbols. This case must be specially considered because
    /// string functions change their behaviour and start process text from right to left (except numbers 
    /// and other non text chars).
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsBidi();
    /// <summary>
    /// Set or gets resolution for extracted images.
    /// Default value is 150.
    /// Images which have greater resolution value are more clear.
    /// However increasing resolution value results in increasing time and memory needed to extract images.
    /// Usually to get clear image it's enough to set resolution to 150 or 300.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Resolution() const;
    /// <summary>
    /// Set or gets resolution for extracted images.
    /// Default value is 150.
    /// Images which have greater resolution value are more clear.
    /// However increasing resolution value results in increasing time and memory needed to extract images.
    /// Usually to get clear image it's enough to set resolution to 150 or 300.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Resolution(int32_t value);
    /// <summary>
    /// Gets input file's password.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Password() const;
    /// <summary>
    /// Sets input file's password.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Password(System::String value);
    
    /// <summary>
    /// Extracts text from a Pdf document using Unicode encoding.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ExtractText();
    /// <summary>
    /// Extracts text from a Pdf document using specified encoding.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="encoding">The encoding of the extracted text.</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API void ExtractText(System::SharedPtr<System::Text::Encoding> encoding);
    /// <summary>
    /// Saves text to file. see also:<see cref="ExtractText"></see> 
    /// </summary>
    /// <param name="outputFile">The file path and name to save the text.</param>
    ASPOSE_PDF_SHARED_API void GetText(System::String outputFile);
    /// <summary>
    /// Saves text to stream. see also:<see cref="ExtractText"></see> 
    /// </summary>
    /// <param name="outputStream">The stream to save the text.</param>
    ASPOSE_PDF_SHARED_API void GetText(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Bind input PDF file.
    /// </summary>
    /// <param name="inputFile">PDF file to bind</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void BindPdf(System::String inputFile) override;
    /// <summary>
    /// Binds PDF document from stream.
    /// </summary>
    /// <param name="inputStream">Stream containing PDF document data</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> inputStream) override;
    /// <summary>
    /// Extract images from PDF file.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ExtractImage();
    /// <summary>
    /// Checks if more images are accessible in PDF document. Note: ExtractImage must be called before using of this method.
    /// </summary>
    /// <returns>Trues if more images are accessible</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool HasNextImage();
    /// <summary>
    /// Retrieves next image from PDF document. Note: ExtractImage must be called before using of this method.
    /// </summary>
    /// <param name="outputFile">File where image will be stored</param>
    /// <returns>True is image is successfully extracted</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool GetNextImage(System::String outputFile);
    /// <summary>
    /// Retrieves next image from PDF document with given image format. Note: ExtractImage must be called before using of this method.
    /// </summary>
    /// <param name="outputFile">File where image will be stored</param>
    /// <param name="format">The format of the image.</param>
    /// <returns>True is image is successfully extracted</returns>
    ASPOSE_PDF_SHARED_API bool GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Retrieve next image from PDF file and stores it into stream with given image format.
    /// </summary>
    /// <param name="outputStream">Stream where image data will be saved</param>
    /// <param name="format">The format of the image.</param>
    /// <returns>True in case the image is successfully extracted.</returns>
    ASPOSE_PDF_SHARED_API bool GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Retrieve next image from PDF file and stores it into stream.
    /// </summary>
    /// <param name="outputStream">Stream where image data will be saved</param>
    /// <returns>True in case the image is successfully extracted.</returns>
    ASPOSE_PDF_SHARED_API bool GetNextImage(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Returns list of attachments in PDF file. Note: ExtractAttachments must be called before using this method.
    /// </summary>
    /// <returns>List of attachments</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::String>> GetAttachNames();
    /// <summary>
    /// Extracts attachments from a Pdf document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void ExtractAttachment();
    /// <summary>
    /// Extracts attachment to PDF file by attachment name.
    /// </summary>
    /// <param name="attachmentFileName">Name of attachment to extract</param>
    ASPOSE_PDF_SHARED_API void ExtractAttachment(System::String attachmentFileName);
    /// <summary>
    /// Stores attachment into file.
    /// </summary>
    /// <param name="outputPath">
    /// Directory path where attachment(s) will be stored.
    /// Null or empty string means attachment(s) will be placed in the application directory.
    /// </param>
    ASPOSE_PDF_SHARED_API void GetAttachment(System::String outputPath);
    /// <summary>
    /// Indicates that whether can get more texts or not.
    /// </summary>
    /// <example>
    /// </example>
    /// <returns>Can get more texts or not, true is can, or false.</returns>
    ASPOSE_PDF_SHARED_API bool HasNextPageText();
    /// <summary>
    /// Saves one page's text to file.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="outputFile">The file path and name to save the text.</param>
    ASPOSE_PDF_SHARED_API void GetNextPageText(System::String outputFile);
    /// <summary>
    /// Saves one page's text to stream.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="outputStream">The stream to save the text.</param>
    ASPOSE_PDF_SHARED_API void GetNextPageText(System::SharedPtr<System::IO::Stream> outputStream);
    
    /// <summary>
    /// Initializes new <see cref="PdfExtractor"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfExtractor();
    /// <summary>
    /// Initializes new <see cref="PdfExtractor"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfExtractor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Saves text to stream. see also:<see cref="ExtractText"></see> 
    /// </summary>
    /// <param name="outputStream">The stream to save the text.</param>
    /// <param name="filterNotAscii">If this parameter is true all Not ASCII symbols will be removed</param>
    ASPOSE_PDF_SHARED_API void GetText(System::SharedPtr<System::IO::Stream> outputStream, bool filterNotAscii);
    /// <summary>
    /// Saves all the attachment file to streams.
    /// </summary>
    /// <returns>The stream array of the attachment file in the pdf document.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> GetAttachment();
    /// <summary>
    /// Gets the list of attachments.
    /// </summary>
    /// <returns>Returns a List&lt;FileSpecificatio&gt;>.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FileSpecification>>> GetAttachmentInfo();
    
protected:

    static void InitXFormImages(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<System::Collections::Generic::List<int32_t>> processedObjectIds, System::SharedPtr<XForm> xForm);
    void InitPageImages(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<Aspose::Pdf::Document> document, int32_t page, int32_t endPage);
    static void InitPageXFormImages_ActuallyUsed(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<Aspose::Pdf::Document> document, int32_t page, int32_t endPage);
    void InitPageXFormImages_DefinedInResources(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> images, System::SharedPtr<Aspose::Pdf::Document> document, int32_t page, int32_t endPage);
    
    virtual ASPOSE_PDF_SHARED_API ~PdfExtractor();
    
private:

    int32_t _startPage;
    int32_t _endPage;
    int32_t _currentPage;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XImage>>> _images;
    int32_t _currentImage;
    int32_t _currentNoNameAttachment;
    System::String _attachmentFileName;
    System::SharedPtr<System::Collections::Generic::List<System::String>> _pageTexts;
    int32_t _extractTextMode;
    Aspose::Pdf::ExtractImageMode _extractImageMode;
    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> _textSearchOptions;
    int32_t _resolution;
    System::String _password;
    System::SharedPtr<System::Text::Encoding> _encoding;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> _uniqueObjectIDs;
    System::SharedPtr<System::Collections::Generic::List<int32_t>> _processedObjectIds;
    
    void WriteAttachment(System::SharedPtr<FileSpecification> file, System::String outputPath);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> GetAttachment(System::String outputPath, bool fileOut);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FileSpecification>>> GetAllAttachments();
    void InitPageBounds();
    bool IsArabic(char16_t chr);
    bool IsHebriew(char16_t chr);
    void Reset();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


