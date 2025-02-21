#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.PDF.Cpp/Devices/PageDevice.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Forms
{
class Field;
} // namespace Forms
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

namespace Devices {

/// <summary>
/// Abstract class for all devices which is used to process the whole pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DocumentDevice : public Aspose::Pdf::Devices::PageDevice
{
    typedef DocumentDevice ThisType;
    typedef Aspose::Pdf::Devices::PageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Each device represents some operation on the document, e.g. we can convert pdf document into another format.
    /// </summary>
    /// <param name="document">
    /// The document to process.
    /// </param>
    /// <param name="fromPage">
    /// Defines the page from which to start processing.
    /// </param>
    /// <param name="toPage">
    /// Defines the last page to process.
    /// </param>
    /// <param name="output">
    /// Defines stream where the results of processing are stored.
    /// </param>
    virtual ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Aspose::Pdf::Document> document, int32_t fromPage, int32_t toPage, System::SharedPtr<System::IO::Stream> output) = 0;
    /// <summary>
    /// Processes the whole document and saves results into stream.
    /// </summary>
    /// <param name="document">
    /// The document to process.
    /// </param>
    /// <param name="output">
    /// Defines stream where the results of processing are stored.
    /// </param>
    ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> output);
    /// <summary>
    /// Processes the whole document and saves results into file.
    /// </summary>
    /// <param name="document">
    /// The document to process.
    /// </param>
    /// <param name="outputFileName">
    /// Defines file where the results of processing are stored.
    /// </param>
    ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFileName);
    /// <summary>
    /// Processes certain pages of the document and saves results into file.
    /// </summary>
    /// <param name="document">
    /// The document to process.
    /// </param>
    /// <param name="fromPage">
    /// The first page to start processing.
    /// </param>
    /// <param name="toPage">
    /// The last page of processing.
    /// </param>
    /// <param name="outputFileName">
    /// Defines file where the results of processing are stored.
    /// </param>
    ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Aspose::Pdf::Document> document, int32_t fromPage, int32_t toPage, System::String outputFileName);
    
    ASPOSE_PDF_SHARED_API DocumentDevice();
    
private:

    bool _updateAnnotations;
    
    void ProcessField(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


