#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace GroupProcessor
{
class IPdfTypeExtractor;
} // namespace GroupProcessor
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

namespace GroupProcessor {

namespace Creators {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// <p>The <b>Aspose.Pdf.GroupProcessor.Creators</b> namespace provides classes used to create instances of GroupProcessor classes. </p>
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
/// Represents an creator of IPdfTypeExtractor object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfTypeObjectCreator : public System::Object
{
    typedef PdfTypeObjectCreator ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates IPdfTypeExtractor object.
    /// </summary>
    /// <param name="pdfDocumentPath">Path to a pdf document.</param>
    /// <param name="bufferSize">Maximum size of content in bytes that can be kept in memory.</param>
    /// <param name="allowAsyncInitialization">Allows async initialization of resources.</param>
    /// <returns>object of IPdfTypeExtractor</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<IPdfTypeExtractor> CreateExtractor(System::String pdfDocumentPath, int32_t bufferSize, bool allowAsyncInitialization);
    /// <summary>
    /// Creates IPdfTypeExtractor object.
    /// </summary>
    /// <param name="pdfDocumentStream">Stream containing pdf document.</param>
    /// <param name="bufferSize">Maximum size of content in bytes that can be kept in memory.</param>
    /// <param name="allowAsyncInitialization">Allows async initialization of resources.</param>
    /// <returns>object of IPdfTypeExtractor</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<IPdfTypeExtractor> CreateExtractor(System::SharedPtr<System::IO::Stream> pdfDocumentStream, int32_t bufferSize, bool allowAsyncInitialization);
    /// <summary>
    /// Creates IPdfTypeExtractor object.
    /// </summary>
    /// <param name="pdfDocumentPath">Path to a pdf document.</param>
    /// <param name="password">Document password.</param>
    /// <param name="bufferSize">Maximum size of content in bytes that can be kept in memory.</param>
    /// <param name="allowAsyncInitialization">Allows async initialization of resources.</param>
    /// <returns>object of IPdfTypeExtractor</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<IPdfTypeExtractor> CreateExtractor(System::String pdfDocumentPath, System::String password, int32_t bufferSize, bool allowAsyncInitialization);
    /// <summary>
    /// Creates IPdfTypeExtractor object.
    /// </summary>
    /// <param name="pdfDocumentStream">Stream containing pdf document.</param>
    /// <param name="password">Document password.</param>
    /// <param name="bufferSize">Maximum size of content in bytes that can be kept in memory.</param>
    /// <param name="allowAsyncInitialization">Allows async initialization of resources.</param>
    /// <returns>object of IPdfTypeExtractor</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<IPdfTypeExtractor> CreateExtractor(System::SharedPtr<System::IO::Stream> pdfDocumentStream, System::String password, int32_t bufferSize, bool allowAsyncInitialization);
    
};

} // namespace Creators
} // namespace GroupProcessor
} // namespace Pdf
} // namespace Aspose


