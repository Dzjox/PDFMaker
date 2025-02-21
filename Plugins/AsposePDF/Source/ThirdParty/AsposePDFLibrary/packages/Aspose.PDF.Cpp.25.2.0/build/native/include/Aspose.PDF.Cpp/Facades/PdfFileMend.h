#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
class CompositingParameters;
class Document;
namespace Facades
{
class FormattedText;
enum class PositioningMode;
enum class WordWrapMode;
} // namespace Facades
namespace Text
{
class TextBuilder;
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
/// Represents a class for adding texts and images on the pages of existing PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfFileMend final : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfFileMend ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Sets the input stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_InputStream() const;
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Sets the input stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    /// @deprecated Use Save(outputStream) method for getting facade results.
    /// <summary>
    /// Sets the output stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_OutputStream() const;
    /// @deprecated Use Save(outputStream) method for getting facade results.
    /// <summary>
    /// Sets the output stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Sets the input file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_InputFile() const;
    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Sets the input file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputFile(System::String value);
    /// @deprecated Use Save(outputFile) method for getting facade results.
    /// <summary>
    /// Sets the output file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_OutputFile() const;
    /// @deprecated Use Save(outputFile) method for getting facade results.
    /// <summary>
    /// Sets the output file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputFile(System::String value);
    /// <summary>
    /// Sets a bool value that indicates word wrap in AddText methods.
    /// If the value is true, the text in FormattedText will word wrap.
    /// By defalt, the value is false.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsWordWrap(bool value);
    /// <summary>
    /// Sets or gets word wrapping algorithm. See WordWrapMode and IsWordWrap.
    /// </summary>
    ASPOSE_PDF_SHARED_API WordWrapMode get_WrapMode() const;
    /// <summary>
    /// Sets or gets word wrapping algorithm. See WordWrapMode and IsWordWrap.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_WrapMode(WordWrapMode value);
    /// <summary>
    /// Sets or gets text positioning strategy. <see cref="PositioningMode"></see>
    /// Default mode is Legacy.
    /// </summary>
    ASPOSE_PDF_SHARED_API PositioningMode get_TextPositioningMode() const;
    /// <summary>
    /// Sets or gets text positioning strategy. <see cref="PositioningMode"></see>
    /// Default mode is Legacy.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextPositioningMode(PositioningMode value);
    
    /// <summary>
    /// Adds image to the specified page of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageStream">Input image stream.</param>
    /// <param name="pageNum">The number of page that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Adds image to the specified page of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageStream">Input image stream.</param>
    /// <param name="pageNum">The number of page that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <param name="compositingParameters">The graphics compositing parameters for the image.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    /// <summary>
    /// Adds image to the specified pages of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageStream">Input image stream.</param>
    /// <param name="pageNums">The numbers of pages that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Adds image to the specified pages of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageStream">Input image stream.</param>
    /// <param name="pageNums">The numbers of pages that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <param name="compositingParameters">The graphics compositing parameters for the images.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    /// <summary>
    /// Adds image to the specified page of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageName">The path of input image file.</param>
    /// <param name="pageNum">The number of page that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddImage(System::String imageName, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Adds image to the specified page of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageName">The path of input image file.</param>
    /// <param name="pageNum">The number of page that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <param name="compositingParameters">The graphics compositing parameters for the images.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddImage(System::String imageName, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    /// <summary>
    /// Adds image to the specified pages of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageName">The path of input image file.</param>
    /// <param name="pageNums">The numbers of pages that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddImage(System::String imageName, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Adds image to the specified pages of PDF document at specified coordinates.
    /// </summary>
    /// <param name="imageName">The path of input image file.</param>
    /// <param name="pageNums">The numbers of pages that will receive the image.</param>
    /// <param name="lowerLeftX">The lower left x of image rectangle.</param>
    /// <param name="lowerLeftY">The lower left y of image rectangle.</param>
    /// <param name="upperRightX">The upper right x of image rectangle.</param>
    /// <param name="upperRightY">The upper right y of image rectangle.</param>
    /// <param name="compositingParameters">The graphics compositing parameters for the images.</param>
    /// <returns>True if success false otherwise.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddImage(System::String imageName, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY, System::SharedPtr<CompositingParameters> compositingParameters);
    /// <summary>
    /// Not implemented.
    /// </summary>
    /// <param name="text">FormattedText object.</param>
    /// <param name="pageNum">Page number.</param>
    /// <param name="lowerLeftX">Lower left X coordinate.</param>
    /// <param name="lowerLeftY">Lower left Y coordinate.</param>
    /// <returns>True in case text was successfully added.</returns>
    ASPOSE_PDF_SHARED_API bool AddText(System::SharedPtr<FormattedText> text, int32_t pageNum, float lowerLeftX, float lowerLeftY);
    /// <summary>
    /// Not implemented.
    /// </summary>
    /// <param name="text">FormattedText object.</param>
    /// <param name="pageNum">Page number.</param>
    /// <param name="lowerLeftX">Lower left X coordinate.</param>
    /// <param name="lowerLeftY">Lower left Y coordinate.</param>
    /// <param name="upperRightX">Upper right X coordinate.</param>
    /// <param name="upperRightY">Upper right Y coordinate.</param>
    /// <returns>True in case text was successfully added.</returns>
    ASPOSE_PDF_SHARED_API bool AddText(System::SharedPtr<FormattedText> text, int32_t pageNum, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Not implemented.
    /// </summary>
    /// <param name="text">FormattedText object.</param>
    /// <param name="pageNums">Page numbers array.</param>
    /// <param name="lowerLeftX">Lower left X coordinate.</param>
    /// <param name="lowerLeftY">Lower left Y coordinate.</param>
    /// <param name="upperRightX">Upper right X coordinate.</param>
    /// <param name="upperRightY">Upper right Y coordinate.</param>
    /// <returns>True in case text was successfully added.</returns>
    ASPOSE_PDF_SHARED_API bool AddText(System::SharedPtr<FormattedText> text, System::ArrayPtr<int32_t> pageNums, float lowerLeftX, float lowerLeftY, float upperRightX, float upperRightY);
    /// <summary>
    /// Closes PdfFileMend object.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Close() override;
    
    /// <summary>
    /// Constructor.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfFileMend();
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="inputFileName">Input PDF file name.</param>
    /// <param name="outputFileName">Output PDF file name.</param>
    ASPOSE_PDF_SHARED_API PdfFileMend(System::String inputFileName, System::String outputFileName);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="inputStream">Input PDF stream.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    ASPOSE_PDF_SHARED_API PdfFileMend(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Initializes new <see cref="PdfFileMend"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfFileMend(System::SharedPtr<Aspose::Pdf::Document> document);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Initializes new <see cref="PdfFileMend"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputFileName">
    /// Output PDF file name.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfFileMend(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFileName);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Initializes new <see cref="PdfFileMend"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="destStream">
    /// Output PDF stream.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfFileMend(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> destStream);
    
    /// <summary>
    /// Saves the PDF document to the specified file.
    /// </summary>
    /// <param name="destFile">The destination file.</param>
    ASPOSE_PDF_SHARED_API void Save(System::String destFile) override;
    /// <summary>
    /// Saves the PDF document to the specified stream.
    /// </summary>
    /// <param name="destStream">The destination stream.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> destStream) override;
    
private:

    System::String _inFileName;
    System::String _outFileName;
    System::SharedPtr<System::IO::Stream> _inStream;
    System::SharedPtr<System::IO::Stream> _outStream;
    bool _bWordWrap;
    WordWrapMode _wrapMode;
    PositioningMode _mode;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::SharedPtr<Aspose::Pdf::Text::TextBuilder>>> _textBuilders;
    /// <summary>
    /// This const is used by addLine method
    /// The consts are from Pdf.Kit for backward compatibility
    /// </summary>
    static const int32_t MAGIC_DELTA_HEIGHT;
    static const int32_t FONT_LINEDELTA_HEIGHT;
    
    void PrevClose();
    void DoMend();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


