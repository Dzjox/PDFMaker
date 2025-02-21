#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/Exceptions/PdfException.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

class Details_EmptyValueException;
using EmptyValueException = System::ExceptionWrapper<Details_EmptyValueException>;

/// <summary>
/// Exception which thrown when requirested value does not exists.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Details_EmptyValueException : public Aspose::Pdf::Details_PdfException
{
    typedef Details_EmptyValueException ThisType;
    typedef Aspose::Pdf::Details_PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="EmptyValueException"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Details_EmptyValueException();
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_EmptyValueException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="message">Exception message.</param>
    ASPOSE_PDF_SHARED_API Details_EmptyValueException(System::String message);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_EmptyValueException, CODEPORTING_ARGS(System::String message));
    
private:

    System::String valueName;
    
};

} // namespace Pdf
} // namespace Aspose


