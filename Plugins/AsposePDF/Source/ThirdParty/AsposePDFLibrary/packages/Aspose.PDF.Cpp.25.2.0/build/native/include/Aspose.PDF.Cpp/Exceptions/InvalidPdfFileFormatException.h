#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Exceptions/InvalidFileFormatException.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

class Details_InvalidPdfFileFormatException;
using InvalidPdfFileFormatException = System::ExceptionWrapper<Details_InvalidPdfFileFormatException>;

/// <summary>
/// The exception that is thrown when a pdf file is invalid.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Details_InvalidPdfFileFormatException final : public Aspose::Pdf::Details_InvalidFileFormatException
{
    typedef Details_InvalidPdfFileFormatException ThisType;
    typedef Aspose::Pdf::Details_InvalidFileFormatException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidPdfFileFormatException"></see> class.
    /// </summary>
    /// <param name="message">The message.</param>
    ASPOSE_PDF_SHARED_API Details_InvalidPdfFileFormatException(System::String message);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidPdfFileFormatException, CODEPORTING_ARGS(System::String message));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidPdfFileFormatException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    ASPOSE_PDF_SHARED_API Details_InvalidPdfFileFormatException(System::String message, System::Exception innerException);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidPdfFileFormatException, CODEPORTING_ARGS(System::String message, System::Exception innerException));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidPdfFileFormatException"></see> class with a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    ASPOSE_PDF_SHARED_API Details_InvalidPdfFileFormatException(System::Exception innerException);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidPdfFileFormatException, CODEPORTING_ARGS(System::Exception innerException));
    
};

} // namespace Pdf
} // namespace Aspose


