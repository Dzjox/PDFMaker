#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Exceptions/PdfException.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

class Details_InvalidValueFormatException;
using InvalidValueFormatException = System::ExceptionWrapper<Details_InvalidValueFormatException>;

/// <summary>
/// Exception which thrown when requested value has incorrect format.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Details_InvalidValueFormatException : public Aspose::Pdf::Details_PdfException
{
    typedef Details_InvalidValueFormatException ThisType;
    typedef Aspose::Pdf::Details_PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidValueFormatException"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Details_InvalidValueFormatException();
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidValueFormatException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Constructor. 
    /// </summary>
    /// <param name="message">Exception message.</param>
    ASPOSE_PDF_SHARED_API Details_InvalidValueFormatException(System::String message);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidValueFormatException, CODEPORTING_ARGS(System::String message));
    
};

} // namespace Pdf
} // namespace Aspose


