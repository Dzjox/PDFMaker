#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/IFacade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Facades
{
class Form;
} // namespace Facades
namespace Tests
{
class RegressionTests_v9_9;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
namespace IO
{
class MemoryStream;
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to receive data from database or other datasource, fills them into the designed fields of the template pdf and at last generates new pdf file or stream.
/// It has two template file input modes:input as a stream or a pdf file.
/// It has four types of output modes:one merged stream, one merged file, many small streams, many small files.
/// It can recieve literal data contained in a System.Data.DataTable.
/// </summary>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS AutoFiller final : public Aspose::Pdf::Facades::ISaveableFacade
{
    typedef AutoFiller ThisType;
    typedef Aspose::Pdf::Facades::ISaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    
public:

    /// <summary>
    /// Sets the fields which will not be flattened.
    /// If this property is not set, all the fields will be flattened.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UnFlattenFields(System::ArrayPtr<System::String> value);
    /// @deprecated Use Save(outputStream) method for getting facade results.
    /// <summary>
    /// Gets the OutputStream. One of four output modes. Its classical use case is Response.OutputStream.
    /// Please refer to the online demo.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_OutputStream() const;
    /// @deprecated Use Save(outputStream) method for getting facade results.
    /// <summary>
    /// Sets the OutputStream. One of four output modes. Its classical use case is Response.OutputStream.
    /// Please refer to the online demo.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets the many Output Streams. One of four output modes.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<System::IO::Stream>> get_OutputStreams() const;
    /// <summary>
    /// Sets the many Output Streams. One of four output modes.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputStreams(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> value);
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Gets the input template stream. One of two input modes.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_InputStream() const;
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Sets the input template stream. One of two input modes.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Gets the input template file. One of two input modes.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_InputFileName() const;
    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Sets the input template file. One of two input modes.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputFileName(System::String value);
    /// @deprecated Use Save(outputFile) method for getting facade results.
    /// <summary>
    /// Gets the one big merged output file. One of the four output modes.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_OutputFileName() const;
    /// @deprecated Use Save(outputFile) method for getting facade results.
    /// <summary>
    /// Sets the one big merged output file. One of the four output modes.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputFileName(System::String value);
    /// <summary>
    /// Gets the Generating Path of the small pdf files if many small pdf files to be generated. It works with another property <see cref="BasicFileName"></see>BasicFileName.
    /// One of the four output modes.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_GeneratingPath() const;
    /// <summary>
    /// Sets the Generating Path of the small pdf files if many small pdf files to be generated. It works with another property <see cref="BasicFileName"></see>BasicFileName.
    /// One of the four output modes.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_GeneratingPath(System::String value);
    /// <summary>
    /// Gets the basic file name if many small files will be generated. The generated file will be like "BasicFileName0","BasicFileName1",...
    /// It works with another property <see cref="GeneratingPath"></see>GeneratingPath.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_BasicFileName() const;
    /// <summary>
    /// Sets the basic file name if many small files will be generated. The generated file will be like "BasicFileName0","BasicFileName1",...
    /// It works with another property <see cref="GeneratingPath"></see>GeneratingPath.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BasicFileName(System::String value);
    
    /// @deprecated Use Save(destination) method for saving facade results.
    /// <summary>
    /// Saves all the pdfs.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Save();
    /// <summary>
    /// Saves all the pdfs.
    /// </summary>
    /// <param name="destFile">Output file name.</param>
    ASPOSE_PDF_SHARED_API void Save(System::String destFile) override;
    /// <summary>
    /// Saves all the pdfs.
    /// </summary>
    /// <param name="destStream">Output stream.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> destStream) override;
    /// <summary>
    /// Binds a Pdf file.
    /// </summary>
    /// <param name="srcFile">Pdf file name.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::String srcFile) override;
    /// <summary>
    /// Binds a Pdf file.
    /// </summary>
    /// <param name="srcStream">Pdf file stream.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> srcStream) override;
    /// <summary>
    /// Binds a Pdf document.
    /// </summary>
    /// <param name="srcDoc">Pdf document.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<Document> srcDoc) override;
    /// <summary>
    /// Closes the object and output streams.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Close() override;
    /// <summary>
    /// Closes the object and output streams.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    
    ASPOSE_PDF_SHARED_API AutoFiller();
    
protected:

    bool UseConcatenationAnyway;
    
private:

    bool genMultiPdfs;
    System::ArrayPtr<System::SharedPtr<Form>> forms;
    System::SharedPtr<System::IO::Stream> outputStream;
    System::ArrayPtr<System::SharedPtr<System::IO::Stream>> outputStreams;
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> midtermStreams;
    System::SharedPtr<System::IO::Stream> inputStream;
    System::String inputFileName;
    System::String outputFileName;
    System::String generatingPath;
    System::String basicFileName;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>> unFlattenFields;
    
    /// <summary>
    /// Judges whether the field is a field to be flattened.
    /// </summary>
    /// <param name="fieldName"></param>
    /// <returns></returns>
    bool IsFlattenField(System::String fieldName);
    void CopyStream(System::SharedPtr<System::IO::Stream> src, System::SharedPtr<System::IO::Stream> dest);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


