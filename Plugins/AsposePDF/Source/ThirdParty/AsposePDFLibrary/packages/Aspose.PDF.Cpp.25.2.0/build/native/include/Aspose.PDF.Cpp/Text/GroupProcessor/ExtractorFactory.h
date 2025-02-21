#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace GroupProcessor
{
namespace Creators
{
class PdfTypeObjectCreator;
} // namespace Creators
} // namespace GroupProcessor
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace GroupProcessor {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// <p>The <b>Aspose.Pdf.GroupProcessor</b> namespace provides classes used to work text and fonts.</p>
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
/// Represents factory for creating IPdfTypeExtractor objects.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ExtractorFactory
{
    typedef ExtractorFactory ThisType;
    
public:

    /// <summary>
    /// Conains creator of IPdfTypeExtractor object.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Creators::PdfTypeObjectCreator> Pdf;
    
public:
    ExtractorFactory() = delete;
};

} // namespace GroupProcessor
} // namespace Pdf
} // namespace Aspose


