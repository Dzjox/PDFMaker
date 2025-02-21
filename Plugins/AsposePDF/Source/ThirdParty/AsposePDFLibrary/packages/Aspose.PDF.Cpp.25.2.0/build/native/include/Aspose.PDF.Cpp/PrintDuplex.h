#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// The paper handling option to use when printing the file from the print dialog..
/// </summary>
enum class PrintDuplex
{
    /// <summary>
    /// Print single-sided.
    /// </summary>
    Simplex,
    /// <summary>
    /// Duplex and flip on the short edge of the sheet.
    /// </summary>
    DuplexFlipShortEdge,
    /// <summary>
    /// Duplex and flip on the long edge of the sheet.
    /// </summary>
    DuplexFlipLongEdge
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS PrintDuplexConverter : public System::Object
{
    typedef PrintDuplexConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(PrintDuplex value);
    static ASPOSE_PDF_SHARED_API PrintDuplex ToEnum(System::String value);
    
};

} // namespace Pdf
} // namespace Aspose


