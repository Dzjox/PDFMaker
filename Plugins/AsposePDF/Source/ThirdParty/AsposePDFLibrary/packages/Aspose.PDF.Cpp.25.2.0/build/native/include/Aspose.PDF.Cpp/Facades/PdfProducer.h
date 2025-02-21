#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Pdf.Exceptions;

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Facades
{
namespace PdfProducers
{
class CgmPdfProducer;
} // namespace PdfProducers
} // namespace Facades
enum class ImportFormat;
class ImportOptions;
namespace Tests
{
namespace Facades
{
class PdfProducerTests;
} // namespace Facades
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to produce PDF from other formats.
/// <example>
/// </example>
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfProducer : public System::Object
{
    typedef PdfProducer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfProducers::CgmPdfProducer;
    friend class Aspose::Pdf::Tests::Facades::PdfProducerTests;
    
public:

    /// <summary>
    /// Produce the PDF stream using specified import format.
    /// <example>
    /// </example>
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="format">Import format.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Input or output stream is null</exception>
    static ASPOSE_PDF_SHARED_API void Produce(System::SharedPtr<System::IO::Stream> inputStream, ImportFormat format, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Produce the PDF stream using specified import format.
    /// <example>
    /// </example>
    /// </summary>
    /// <param name="inputFileName">Input file name.</param>
    /// <param name="format">Import format.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Output stream is null</exception>
    /// <exception cref="ArgumentException">Input file name is an empty string</exception>
    static ASPOSE_PDF_SHARED_API void Produce(System::String inputFileName, ImportFormat format, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Produce the PDF file using specified import format.
    /// <example>
    /// </example>
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="format">Import format.</param>
    /// <param name="outputFileName">Output PDF file</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Input stream is null</exception>
    /// <exception cref="ArgumentException">Output file name is an empty string</exception>
    static ASPOSE_PDF_SHARED_API void Produce(System::SharedPtr<System::IO::Stream> inputStream, ImportFormat format, System::String outputFileName);
    /// <summary>
    /// Produce the PDF file using specified import format.
    /// <example>
    /// </example>
    /// </summary>
    /// <param name="inputFileName">Input file name.</param>
    /// <param name="format">Import format.</param>
    /// <param name="outputFileName">Output PDF file</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentException">Input or output file name is an empty string</exception>
    static ASPOSE_PDF_SHARED_API void Produce(System::String inputFileName, ImportFormat format, System::String outputFileName);
    /// <summary>
    /// Produce the PDF stream using specified import option.
    /// <example>
    /// </example>
    /// </summary>
    /// <param name="inputFileName">Input file name.</param>
    /// <param name="options">Import option.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Output stream is null</exception>
    /// <exception cref="ArgumentException">Input file name is an empty string</exception>
    static ASPOSE_PDF_SHARED_API void Produce(System::String inputFileName, System::SharedPtr<ImportOptions> options, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Produce the PDF file using specified import option.
    /// <example>
    /// </example>
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="options">Import option.</param>
    /// <param name="outputFileName">Output PDF file.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Input stream is null</exception>
    /// <exception cref="ArgumentException">Output file name is an empty string</exception>
    static ASPOSE_PDF_SHARED_API void Produce(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<ImportOptions> options, System::String outputFileName);
    /// <summary>
    /// Produce the PDF file using specified import option.
    /// <example>
    /// </example>
    /// </summary>
    /// <param name="inputFileName">Input file name.</param>
    /// <param name="options">Import option.</param>
    /// <param name="outputFileName">Output PDF stream.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentException">Input or output file name is an empty string</exception>
    static ASPOSE_PDF_SHARED_API void Produce(System::String inputFileName, System::SharedPtr<ImportOptions> options, System::String outputFileName);
    /// <summary>
    /// Produce the PDF file using specified import option.
    /// <example>
    /// </example>
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="options">Import option.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    /// <exception cref="InvalidFileFormatException">The exception is thrown when a file is invalid.</exception>
    /// <exception cref="ArgumentNullException">Input or output stream is null.</exception>
    static ASPOSE_PDF_SHARED_API void Produce(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<ImportOptions> options, System::SharedPtr<System::IO::Stream> outputStream);
    
protected:

    /// <summary>
    /// ImportOptions holds level of abstraction on individual import options.
    /// </summary>
    System::SharedPtr<ImportOptions> options;
    
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="options">Import option.</param>
    ASPOSE_PDF_SHARED_API PdfProducer(System::SharedPtr<ImportOptions> options);
    
    /// <summary>
    /// Produce the PDF stream from specified stream.
    /// </summary>
    /// <param name="inputStream">Input stream.</param>
    /// <param name="outputStream">Output PDF stream.</param>
    virtual void Produce(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream) = 0;
    /// <summary>
    /// Get the producer for specified import option.
    /// </summary>
    /// <param name="options">Import option</param>
    /// <returns>PDF producer.</returns>
    static System::SharedPtr<PdfProducer> GetProducer(System::SharedPtr<ImportOptions> options);
    /// <summary>
    /// Get the producer for specified import format.
    /// </summary>
    /// <param name="format">Import option</param>
    /// <returns>PDF producer.</returns>
    static System::SharedPtr<PdfProducer> GetProducer(ImportFormat format);
    /// <summary>
    /// Get the <see cref="ImportOptions"></see> for specified import format.
    /// </summary>
    /// <param name="format">Import format.</param>
    /// <returns>Import option.</returns>
    static System::SharedPtr<ImportOptions> GetImportOptions(ImportFormat format);
    
private:

    /// <summary>
    /// Checks an argument isn't null. Throw <see cref="System::ArgumentNullException"></see> is argument equal null.
    /// </summary>
    /// <param name="argumentValue">The argument value to check.</param>
    /// <param name="argumentName">The name of the argument.</param>
    static void GuardArgumentNotNull(System::SharedPtr<System::Object> argumentValue, System::String argumentName);
    /// <summary>
    /// Checks an argument isn't null. Throw <see cref="System::ArgumentNullException"></see> is argument equal null.
    /// </summary>
    /// <param name="argumentValue">The argument value to check.</param>
    /// <param name="argumentName">The name of the argument.</param>
    static void GuardArgumentException(System::String argumentValue, System::String argumentName);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


