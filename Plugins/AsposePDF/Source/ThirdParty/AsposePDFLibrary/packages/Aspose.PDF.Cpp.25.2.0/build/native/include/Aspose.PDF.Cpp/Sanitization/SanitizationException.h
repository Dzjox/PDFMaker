#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/exceptions.h>

#include "Aspose.PDF.Cpp/Exceptions/PdfException.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Sanitization {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Sanitization</b> is a namespace for sanitization operations.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

class Details_SanitizationException;
using SanitizationException = System::ExceptionWrapper<Details_SanitizationException>;

/// <summary>
/// The exception that is thrown when an sanitization operation failed.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Details_SanitizationException final : public Aspose::Pdf::Details_PdfException
{
    typedef Details_SanitizationException ThisType;
    typedef Aspose::Pdf::Details_PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="SanitizationException"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Details_SanitizationException();
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_SanitizationException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes a new instance of the <see cref="SanitizationException"></see> class.
    /// </summary>
    /// <param name="message">The message.</param>
    ASPOSE_PDF_SHARED_API Details_SanitizationException(System::String message);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_SanitizationException, CODEPORTING_ARGS(System::String message));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="SanitizationException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    ASPOSE_PDF_SHARED_API Details_SanitizationException(System::String message, System::Exception innerException);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_SanitizationException, CODEPORTING_ARGS(System::String message, System::Exception innerException));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="SanitizationException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    ASPOSE_PDF_SHARED_API Details_SanitizationException(System::Exception innerException);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_SanitizationException, CODEPORTING_ARGS(System::Exception innerException));
    
};

} // namespace Sanitization
} // namespace Pdf
} // namespace Aspose


