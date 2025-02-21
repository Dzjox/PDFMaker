#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/exceptions.h>

#include "Aspose.PDF.Cpp/Exceptions/InvalidFileFormatException.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

class Details_InvalidFormTypeOperationException;
using InvalidFormTypeOperationException = System::ExceptionWrapper<Details_InvalidFormTypeOperationException>;

/// <summary>
/// The exception that is thrown when an operation with form type is not valid.
/// </summary>
//public sealed class InvalidFormTypeOperationException : PdfException
class ASPOSE_PDF_SHARED_CLASS Details_InvalidFormTypeOperationException final : public System::Details_InvalidOperationException
{
    typedef Details_InvalidFormTypeOperationException ThisType;
    typedef System::Details_InvalidOperationException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidFormTypeOperationException"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Details_InvalidFormTypeOperationException();
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidFormTypeOperationException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidFormTypeOperationException"></see> class.
    /// </summary>
    /// <param name="message">The message.</param>
    ASPOSE_PDF_SHARED_API Details_InvalidFormTypeOperationException(System::String message);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidFormTypeOperationException, CODEPORTING_ARGS(System::String message));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidFormTypeOperationException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    ASPOSE_PDF_SHARED_API Details_InvalidFormTypeOperationException(System::String message, System::Exception innerException);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidFormTypeOperationException, CODEPORTING_ARGS(System::String message, System::Exception innerException));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidFormTypeOperationException"></see> class with a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    ASPOSE_PDF_SHARED_API Details_InvalidFormTypeOperationException(System::Exception innerException);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidFormTypeOperationException, CODEPORTING_ARGS(System::Exception innerException));
    
};

class Details_InvalidCgmFileFormatException;
using InvalidCgmFileFormatException = System::ExceptionWrapper<Details_InvalidCgmFileFormatException>;

/// <summary>
/// The exception that is thrown when a Cgm file is invalid.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Details_InvalidCgmFileFormatException final : public Aspose::Pdf::Details_InvalidFileFormatException
{
    typedef Details_InvalidCgmFileFormatException ThisType;
    typedef Aspose::Pdf::Details_InvalidFileFormatException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidCgmFileFormatException"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Details_InvalidCgmFileFormatException();
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidCgmFileFormatException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidCgmFileFormatException"></see> class.
    /// </summary>
    /// <param name="message">The message.</param>
    ASPOSE_PDF_SHARED_API Details_InvalidCgmFileFormatException(System::String message);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidCgmFileFormatException, CODEPORTING_ARGS(System::String message));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidCgmFileFormatException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    ASPOSE_PDF_SHARED_API Details_InvalidCgmFileFormatException(System::String message, System::Exception innerException);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidCgmFileFormatException, CODEPORTING_ARGS(System::String message, System::Exception innerException));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="InvalidCgmFileFormatException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    ASPOSE_PDF_SHARED_API Details_InvalidCgmFileFormatException(System::Exception innerException);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_InvalidCgmFileFormatException, CODEPORTING_ARGS(System::Exception innerException));
    
};

} // namespace Pdf
} // namespace Aspose


