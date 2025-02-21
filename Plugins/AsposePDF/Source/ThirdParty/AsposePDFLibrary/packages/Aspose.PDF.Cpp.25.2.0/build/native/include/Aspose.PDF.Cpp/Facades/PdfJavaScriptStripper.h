#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
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
/// Class for removing all Java Script code.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfJavaScriptStripper final : public System::Object
{
    typedef PdfJavaScriptStripper ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Remove Java Script from document. 
    /// </summary>
    /// <param name="inputFile">File containig the document.</param>
    /// <param name="outputFile">File where document will be stored.</param>
    /// <returns>true if JavaScript was stripped successfully.</returns>
    ASPOSE_PDF_SHARED_API bool Strip(System::String inputFile, System::String outputFile);
    /// <summary>
    /// Remove Java Script from the document.
    /// </summary>
    /// <param name="inStream">Stream containing document.</param>
    /// <param name="outStream">Stream where the document will be stored.</param>
    /// <returns>true if JavaScript was stripped successfully.</returns>
    ASPOSE_PDF_SHARED_API bool Strip(System::SharedPtr<System::IO::Stream> inStream, System::SharedPtr<System::IO::Stream> outStream);
    
private:

    bool RemoveJavaScriptFromDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


