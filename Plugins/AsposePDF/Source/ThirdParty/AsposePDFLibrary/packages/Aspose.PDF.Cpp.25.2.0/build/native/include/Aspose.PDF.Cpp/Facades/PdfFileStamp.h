#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !NETCORE


// C# preprocessor directive: #endif


#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class ContentDisposition;
class Document;
namespace Facades
{
enum class BlendingColorSpace;
class FormattedText;
class Stamp;
} // namespace Facades
enum class NumberingStyle;
class Page;
enum class PdfFormat;
class SaveOptions;
class Stamp;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
namespace Web
{
class HttpResponse;
} // namespace Web
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class for adding stamps (watermark or background) to PDF files.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfFileStamp final : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfFileStamp ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Bottom middle position.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int32_t PosBottomMiddle;
    /// <summary>
    /// Bottom right position.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int32_t PosBottomRight;
    /// <summary>
    /// Right upper position.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int32_t PosUpperRight;
    /// <summary>
    /// Right position.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int32_t PosSidesRight;
    /// <summary>
    /// Upper middle position.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int32_t PosUpperMiddle;
    /// <summary>
    /// Bottom left position.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int32_t PosBottomLeft;
    /// <summary>
    /// Left position.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int32_t PosSidesLeft;
    /// <summary>
    /// Upper let position.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int32_t PosUpperLeft;
    
    /// <summary>
    /// Gets optimization flag. Equal resource streams in resultant file are merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_OptimizeSize() const;
    /// <summary>
    /// Sets optimization flag. Equal resource streams in resultant file are merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OptimizeSize(bool value);
    /// <summary>
    /// Keeps security if true. (This feature will be implemented in next versions).
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_KeepSecurity() const;
    /// <summary>
    /// Keeps security if true. (This feature will be implemented in next versions).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_KeepSecurity(bool value);
    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Gets name and path of input file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_InputFile() const;
    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Sets name and path of input file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputFile(System::String value);
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Gets input stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_InputStream() const;
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Sets input stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    /// @deprecated Use Save(outputFile) method for getting facade results.
    /// <summary>
    /// Gets name and path of output file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_OutputFile() const;
    /// @deprecated Use Save(outputFile) method for getting facade results.
    /// <summary>
    /// Sets name and path of output file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputFile(System::String value);
    /// @deprecated Use Save(outputStream) method for getting facade results.
    /// <summary>
    /// Gets output stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_OutputStream() const;
    /// @deprecated Use Save(outputStream) method for getting facade results.
    /// <summary>
    /// Sets output stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets rotation of page number. Rotation  is in degrees. Default is 0.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_PageNumberRotation();
    /// <summary>
    /// Sets rotation of page number. Rotation  is in degrees. Default is 0.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageNumberRotation(float value);
    /// <summary>
    /// Sets PDF file format. Result file will be saved in specified file format. 
    /// If this property is not specified then file will be save in default PDF format without conversion.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ConvertTo(PdfFormat value);
    /// <summary>
    /// Gets height of first page in souorce file.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API float get_PageHeight();
    /// <summary>
    /// Gets width of first page in input file.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API float get_PageWidth();
    /// <summary>
    /// Gets starting number for first page in input file. Next pages will be numbered starting from this value. 
    /// For example if  StartingNumber is set to 100, document pages will have numbers 100, 101, 102... 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API int32_t get_StartingNumber() const;
    /// <summary>
    /// Sets starting number for first page in input file. Next pages will be numbered starting from this value. 
    /// For example if  StartingNumber is set to 100, document pages will have numbers 100, 101, 102... 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_StartingNumber(int32_t value);
    /// <summary>
    /// Gets pabge numbering style. Possible values: NumeralsArabic, NumeralsRomanUppercase, NumeralsRomanLowercase, LettersAppercase, LettersLowercase
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::NumberingStyle get_NumberingStyle() const;
    /// <summary>
    /// Sets pabge numbering style. Possible values: NumeralsArabic, NumeralsRomanUppercase, NumeralsRomanLowercase, LettersAppercase, LettersLowercase
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NumberingStyle(Aspose::Pdf::NumberingStyle value);
    /// <summary>
    /// Stamp ID of next added stamp (incluiding page headers/hooters/page numbers).
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_StampId() const;
    /// <summary>
    /// Stamp ID of next added stamp (incluiding page headers/hooters/page numbers).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StampId(int32_t value);
    /// <summary>
    /// Gets how content will be stored when result of operation is stored into HttpResponse object. Possible value: inline / attachment.
    /// Default: inline.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ContentDisposition get_ContentDisposition() const;
    /// <summary>
    /// Sets how content will be stored when result of operation is stored into HttpResponse object. Possible value: inline / attachment.
    /// Default: inline.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ContentDisposition(Aspose::Pdf::ContentDisposition value);
    /// <summary>
    /// Gets Response object where result of operation will be stored.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Web::HttpResponse> get_Response() const;
    /// <summary>
    /// Sets Response object where result of operation will be stored.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Response(System::SharedPtr<System::Web::HttpResponse> value);
    /// <summary>
    /// Gets save options when result is stored as HttpResponse.
    /// Default value: PdfSaveOptions. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::SaveOptions> get_SaveOptions() const;
    /// <summary>
    /// Sets save options when result is stored as HttpResponse.
    /// Default value: PdfSaveOptions. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SaveOptions(System::SharedPtr<Aspose::Pdf::SaveOptions> value);
    /// <summary>
    /// Gets name of attachment when result of operation is stored into HttpResponse objects as attachment.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_AttachmentName() const;
    /// <summary>
    /// Sets name of attachment when result of operation is stored into HttpResponse objects as attachment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AttachmentName(System::String value);
    
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor for PdfFileStamp.
    /// </summary>
    /// <param name="inputFile">Input file name and path.</param>
    /// <param name="outputFile">Output file name and path.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API PdfFileStamp(System::String inputFile, System::String outputFile);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor for PdfFileStamp.
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="outputStream">Output stream.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API PdfFileStamp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor for PdfFileStamp.
    /// </summary>
    /// <param name="inputFile">Input file name and path.</param>
    /// <param name="outputFile">Output file name and path.</param>
    /// <param name="keepSecurity">Keep security if true.</param>
    ASPOSE_PDF_SHARED_API PdfFileStamp(System::String inputFile, System::String outputFile, bool keepSecurity);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor of PdfFileStamp.
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="outputStream">Output stream.</param>
    /// <param name="keepSecurity">Keep security if true.</param>
    ASPOSE_PDF_SHARED_API PdfFileStamp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, bool keepSecurity);
    
    /// <summary>
    /// Closes opened files and saves changes. 
    /// Warning. If input or output streams are specified they are not closed by Close() method. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Close() override;
    /// <summary>
    /// Saves result into specified file.
    /// </summary>
    /// <param name="destFile">Path to file where document will be saved.</param>
    ASPOSE_PDF_SHARED_API void Save(System::String destFile) override;
    /// <summary>
    /// Saves document into specified stream.
    /// </summary>
    /// <param name="destStream">Stream where document will be saved.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> destStream) override;
    /// <summary>
    /// Adds stamp to the file.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="stamp">Stamp object which.</param>
    ASPOSE_PDF_SHARED_API void AddStamp(System::SharedPtr<Stamp> stamp);
    /// <summary>
    /// Add page number to file. Page number text may contain # sign which will be replaced with number of the page. 
    /// Page number is placed in the bottom of the page centered horizontally.
    /// </summary>
    /// <param name="formatString">Text of page number</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddPageNumber(System::String formatString);
    /// <summary>
    /// Adds page number to the page. Page number may contain # sign which will be replaced with page number.
    /// Page number is placed in the bottom of the page centered horizontally.
    /// </summary> 
    /// <example>
    /// </example>
    /// <param name="formattedText">Format string for page number representes as FormattedText.</param>
    ASPOSE_PDF_SHARED_API void AddPageNumber(System::SharedPtr<FormattedText> formattedText);
    /// <summary>
    /// Adds page number to the pages of document.
    /// </summary>
    /// <param name="formatString">Format string for page number.</param>
    /// <param name="position">Position where page number will be placed on the page.  0-bottom middle, 1-bottom right, 2-upper right, 
    /// 3 - sides right, 4 - upper middle,5 - bottom left,6 - sides left,7 - upper left.
    /// You can use the following constants: 
    /// PosBottomMiddle = 0, PosBottomRight = 1, PosUpperRight = 2, PosSidesRight = 3, 
    /// PosUpperMiddle, PosBottomLeft = 5, PosSidesLeft, PosUpperLeft 
    /// </param>
    /// <param name="leftMargin">Margin on the left edge of the page. </param>
    /// <param name="rightMargin">Margin on the right edge of the page.</param>
    /// <param name="topMargin">Margin on the top edge of the page.</param>
    /// <param name="bottomMargin">Margin on the bottom edge of the page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddPageNumber(System::String formatString, int32_t position, float leftMargin, float rightMargin, float topMargin, float bottomMargin);
    /// <summary>
    /// Adds page number at the specified position on the page. 
    /// </summary>
    /// <param name="formatString">Format string. Format string can contain # sign which will be replaced with page number.</param>
    /// <param name="x">X coordinate of page number.</param>
    /// <param name="y">Y coordinate of page number.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddPageNumber(System::String formatString, float x, float y);
    /// <summary>
    /// Adds page number to the pages of document.
    /// </summary>
    /// <param name="formattedText">FormattedText object which represents page number format and properties iof the text.</param>
    /// <param name="position">Position where page number will be placed on the page.  0-bottom middle, 1-bottom right, 2-upper right, 
    /// 3 - sides right, 4 - upper middle,5 - bottom left,6 - sides left,7 - upper left.
    /// You can use the following constants: 
    /// PosBottomMiddle = 0, PosBottomRight = 1, PosUpperRight = 2, PosSidesRight = 3, 
    /// PosUpperMiddle, PosBottomLeft = 5, PosSidesLeft, PosUpperLeft 
    /// </param>
    /// <param name="leftMargin">Margin on the left edge of the page. </param>
    /// <param name="rightMargin">Margin on the right edge of the page.</param>
    /// <param name="topMargin">Margin on the top edge of the page.</param>
    /// <param name="bottomMargin">Margin on the bottom edge of the page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddPageNumber(System::SharedPtr<FormattedText> formattedText, int32_t position, float leftMargin, float rightMargin, float topMargin, float bottomMargin);
    /// <summary>
    /// Adds page number at the specified position on the page. 
    /// </summary>
    /// <param name="formattedText">Formatted text which represents page number format and properties of the text.
    /// Format string can contain # sign which will be replaced with page number.</param>
    /// <param name="x">X coordinate of page number.</param>
    /// <param name="y">Y coordinate of page number.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddPageNumber(System::SharedPtr<FormattedText> formattedText, float x, float y);
    /// <summary>
    /// Adds header to the page.
    /// </summary>
    /// <param name="formattedText">Text for header and properties of the text.</param>
    /// <param name="topMargin">Margin on the top of page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddHeader(System::SharedPtr<FormattedText> formattedText, float topMargin);
    /// <summary>
    /// Adds header to the pages of file. 
    /// </summary>
    /// <param name="formattedText">Formatted text object which contains page text and its properties.</param>
    /// <param name="topMargin">Margin on the top of the page.</param>
    /// <param name="leftMargin">Margin on the left of the page.</param>
    /// <param name="rightMargin">Margin on the right of the page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddHeader(System::SharedPtr<FormattedText> formattedText, float topMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds image as header to the pages of the file. 
    /// </summary>
    /// <param name="imageFile">Path to the image file.</param>
    /// <param name="topMargin">Margin at top of the page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddHeader(System::String imageFile, float topMargin);
    /// <summary>
    /// Adds image as header on the pages.
    /// </summary>
    /// <param name="imageFile">Path to the image file.</param>
    /// <param name="topMargin">Margin at top of the page.</param>
    /// <param name="leftMargin">Margin at left side of the page.</param>
    /// <param name="rightMargin">Margin at right side of the page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddHeader(System::String imageFile, float topMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds image as header on the pages.
    /// </summary>
    /// <param name="imageStream">Stream of the image.</param>
    /// <param name="topMargin">Margin at top of the page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddHeader(System::SharedPtr<System::IO::Stream> imageStream, float topMargin);
    /// <summary>
    /// Adds image at the top of the page. 
    /// </summary>
    /// <param name="inputStream">Stream which contains image data.</param>
    /// <param name="topMargin">Margin at top of the page.</param>
    /// <param name="leftMargin">Margin at left side of the page.</param>
    /// <param name="rightMargin">Margin at right side of the page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddHeader(System::SharedPtr<System::IO::Stream> inputStream, float topMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds footer to the pages of the document.
    /// </summary>
    /// <param name="formattedText">FormattedText object which contains text of the footer and text properties.</param>
    /// <param name="bottomMargin">Margin at the top of page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddFooter(System::SharedPtr<FormattedText> formattedText, float bottomMargin);
    /// <summary>
    /// Adds footer to the pages of the document.
    /// </summary>
    /// <param name="formattedText">FormattedText object which contains footer text and text properties.</param>
    /// <param name="bottomMargin">Margin at the bottom of the page.</param>
    /// <param name="leftMargin">Margin at the left side of the page.</param>
    /// <param name="rightMargin">Margin at the right side of the page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddFooter(System::SharedPtr<FormattedText> formattedText, float bottomMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds image as footer to the pages of the document.
    /// </summary>
    /// <param name="imageFile">Image file name and path.</param>
    /// <param name="bottomMargin">Margin at the bottom of the page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddFooter(System::String imageFile, float bottomMargin);
    /// <summary>
    /// Adds image as footer of the pages.
    /// </summary>
    /// <param name="imageFile">Iamge file name and path.</param>
    /// <param name="bottomMargin">Margin at the bottom of the page.</param>
    /// <param name="leftMargin">Margin at the left side of the page.</param>
    /// <param name="rightMargin">Margin at the right side of the page.</param>
    /// /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddFooter(System::String imageFile, float bottomMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds image as footer of the page.
    /// </summary>
    /// <param name="imageStream">Stream contains image data.</param>
    /// <param name="bottomMargin">Margin at the bottom of the page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddFooter(System::SharedPtr<System::IO::Stream> imageStream, float bottomMargin);
    /// <summary>
    /// Adds image as footer of the page.
    /// </summary>
    /// <param name="imageStream">Stream contains image data.</param>
    /// <param name="bottomMargin">Margin at the bottom of the page.</param>
    /// <param name="leftMargin">Margin at the left side of the page.</param>
    /// <param name="rightMargin">Margin at the right side of the page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddFooter(System::SharedPtr<System::IO::Stream> imageStream, float bottomMargin, float leftMargin, float rightMargin);
    /// <summary>
    /// Adds page number to the pages.
    /// </summary>
    /// <param name="formatString">Format of the page number. This text may contain # which will be replaced with page number.</param>
    /// <param name="position">Position where page number will be placed on the page.  0-bottom middle, 1-bottom right, 2-upper right, 
    /// 3 - sides right, 4 - upper middle,5 - bottom left,6 - sides left,7 - upper left.
    /// You can use the following constants: 
    /// PosBottomMiddle = 0, PosBottomRight = 1, PosUpperRight = 2, PosSidesRight = 3, 
    /// PosUpperMiddle, PosBottomLeft = 5, PosSidesLeft, PosUpperLeft 
    /// </param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddPageNumber(System::String formatString, int32_t position);
    /// <summary>
    /// Adds page number to the pages.
    /// </summary>
    /// <param name="formattedText">FormattedText object which contains format of the page number and text properties. 
    /// This text may contain # which will be replaced with page number.</param>
    /// <param name="position">Position where page number will be placed on the page.  0-bottom middle, 1-bottom right, 2-upper right, 
    /// 3 - sides right, 4 - upper middle,5 - bottom left,6 - sides left,7 - upper left.
    /// You can use the following constants: 
    /// PosBottomMiddle = 0, PosBottomRight = 1, PosUpperRight = 2, PosSidesRight = 3, 
    /// PosUpperMiddle, PosBottomLeft = 5, PosSidesLeft, PosUpperLeft 
    /// </param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddPageNumber(System::SharedPtr<FormattedText> formattedText, int32_t position);
    
    /// <summary>
    /// Constructor of the PdfFileStamp.
    /// Input file and output file may be specified via corresponding properties.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfFileStamp();
    /// <summary>
    /// Initializes new <see cref="PdfFileStamp"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfFileStamp(System::SharedPtr<Aspose::Pdf::Document> document);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Initializes new <see cref="PdfFileStamp"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputFile">
    /// Output file name and path.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfFileStamp(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFile);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Initializes new <see cref="PdfFileStamp"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputStream">
    /// Output stream.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfFileStamp(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> outputStream);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Creates PdfFileStamp which will save result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream with input document.</param>
    /// <param name="response">HttpResponse object where result will be saved.</param>
    ASPOSE_PDF_SHARED_API PdfFileStamp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Creates PdfFileStamp which will save result into HttpResponse object. 
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="response">HttpResponse object where result will be saved.</param>
    ASPOSE_PDF_SHARED_API PdfFileStamp(System::String inputFile, System::SharedPtr<System::Web::HttpResponse> response);
    
protected:

    void ApplyStamp(System::SharedPtr<Stamp> stamp);
    
private:

    System::SharedPtr<System::IO::Stream> _inputStream;
    System::SharedPtr<System::IO::Stream> _outputStream;
    System::String _inputFileName;
    System::String _outputFileName;
    double _pageNumberRotation;
    int32_t _startingNumber;
    bool _keepSecurity;
    PdfFormat _convertTo;
    bool _executeConvert;
    Aspose::Pdf::ContentDisposition _contentDisposition;
    System::SharedPtr<Aspose::Pdf::SaveOptions> _saveOptions;
    System::String _attachmentName;
    bool _optimizeSize;
    int32_t _stampId;
    System::SharedPtr<System::Web::HttpResponse> _outputResponse;
    Aspose::Pdf::NumberingStyle _numberingStyle;
    
    void PrevClose();
    void PreSave();
    void ApplyStamp(System::SharedPtr<Aspose::Pdf::Stamp> stamp);
    void ApplyStamp(System::SharedPtr<Aspose::Pdf::Stamp> stamp, int32_t pageNumber);
    void updateGroupColorSpace(BlendingColorSpace colorSpace, System::ArrayPtr<int32_t> pages);
    static void UpdateGroupColorSpace(BlendingColorSpace colorSpace, System::SharedPtr<Page> page);
    void TranslatePosition(int32_t position, System::SharedPtr<Aspose::Pdf::Stamp> stamp);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


