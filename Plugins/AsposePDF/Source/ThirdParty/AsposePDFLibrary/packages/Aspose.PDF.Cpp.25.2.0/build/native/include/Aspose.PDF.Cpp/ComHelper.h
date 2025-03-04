﻿#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
class LoadOptions;
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

/// <summary>
/// Provides methods for COM clients to load a document into Aspose.Pdf.
/// </summary>
/// <remarks>
/// Use the ComHelper class to load a document from a file or stream into a Document object in a COM application.
/// The Document class provides a default constructor to create a new document
/// and also provides overloaded constructors to load a document from a file or stream.
/// If you are using Aspose.Words from a .NET application, you can use all of the Document constructors directly, but if you are using Aspose.Pdf from a COM application,
/// only the default Document constructor is available.
/// </remarks>
class ASPOSE_PDF_SHARED_CLASS ComHelper : public System::Object
{
    typedef ComHelper ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initialize and return new Document instance from the <paramref name="input" ></paramref> stream.
    /// </summary>
    /// <param name="input">Stream with pdf document. </param>
    /// <returns>Document object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> OpenStream(System::SharedPtr<System::IO::Stream> input);
    /// <summary>
    /// Initialize and return new Document instance from the <paramref name="input" ></paramref> stream.
    /// </summary>
    /// <param name="input">Input stream object, corresponding pdf is password protected.</param>
    /// <param name="password">User or owner password.</param>
    /// <returns>Document object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> OpenStream(System::SharedPtr<System::IO::Stream> input, System::String password);
    /// <summary>
    /// Initialize and return new Document instance from the <paramref name="input" ></paramref> stream.
    /// </summary>
    /// <param name="input">Stream with pdf document. </param>
    /// <param name="isManagedStream">if set to <c>true</c> inner stream is closed before exit; otherwise, is not.</param>
    /// <returns>Document object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> OpenStream(System::SharedPtr<System::IO::Stream> input, bool isManagedStream);
    /// <summary>
    /// Initialize and return new Document instance from the <paramref name="input" ></paramref> stream.
    /// </summary>
    /// <param name="input">Stream with pdf document. </param>
    /// <param name="password">User or owner password.</param>
    /// <param name="isManagedStream">if set to <c>true</c> inner stream is closed before exit; otherwise, is not.</param>
    /// <returns>Document object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> OpenStream(System::SharedPtr<System::IO::Stream> input, System::String password, bool isManagedStream);
    /// <summary>
    /// Open and return an existing document from a stream providing necessary converting to get pdf document.
    /// </summary>
    /// <param name="input">
    /// Input stream to convert into pdf document.
    /// </param>
    /// <param name="options">
    /// Represents properties for converting <paramref name="input"></paramref> into pdf document.
    /// </param>
    /// <returns>Document object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> OpenStream(System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    /// <summary>
    /// Just create and return Document using <paramref name="filename" ></paramref>. The same as <see cref="Document(Stream)"></see>.
    /// </summary>
    /// <param name="filename">The name of the pdf document file. </param>
    /// <returns>Document object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> OpenFile(System::String filename);
    /// <summary>
    /// Initialize and return new instance of the <see cref="Document"></see> class for working with encrypted document. 
    /// </summary>
    /// <param name="filename">Document file name.</param>
    /// <param name="password">User or owner password.</param>
    /// <returns>Document object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> OpenFile(System::String filename, System::String password);
    /// <summary>
    /// Initialize new instance of the <see cref="Document"></see> class for working with encrypted document. 
    /// </summary>
    /// <param name="filename">Document file name.</param>
    /// <param name="password">User or owner password.</param>
    /// <param name="isManagedStream">if set to <c>true</c> inner stream is closed before exit; otherwise, is not.</param>
    /// <returns>Document object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> OpenFile(System::String filename, System::String password, bool isManagedStream);
    /// <summary>
    /// Open an existing document from a file providing necessary converting oprions to get pdf document.
    /// </summary>
    /// <param name="filename">
    /// Input file to convert into pdf document.
    /// </param>
    /// <param name="options">
    /// Represents properties for converting <paramref name="filename"></paramref> into pdf document.
    /// </param>
    /// <returns>Document object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> OpenFile(System::String filename, System::SharedPtr<LoadOptions> options);
    
};

} // namespace Pdf
} // namespace Aspose


