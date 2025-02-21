#pragma once

#include "Aspose.PDF.Cpp/Exceptions/PdfException.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

class Details_BoundsOutOfRangeException;
using BoundsOutOfRangeException = System::ExceptionWrapper<Details_BoundsOutOfRangeException>;

/// <summary>
/// Represents an exception which occurs when an item doesn't fit within the given container dimensions.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Details_BoundsOutOfRangeException : public Aspose::Pdf::Details_PdfException
{
    typedef Details_BoundsOutOfRangeException ThisType;
    typedef Aspose::Pdf::Details_PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="BoundsOutOfRangeException"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Details_BoundsOutOfRangeException();
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_BoundsOutOfRangeException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes a new instance of the <see cref="BoundsOutOfRangeException"></see> class with a specified error message.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception.</param>
    ASPOSE_PDF_SHARED_API Details_BoundsOutOfRangeException(System::String message);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_BoundsOutOfRangeException, CODEPORTING_ARGS(System::String message));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="BoundsOutOfRangeException"></see> class with a specified error message and item dimensions.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception.</param>
    /// <param name="containerWidth">The width of the container.</param>
    /// <param name="containerHeight">The height of the container.</param>
    ASPOSE_PDF_SHARED_API Details_BoundsOutOfRangeException(System::String message, double containerWidth, double containerHeight);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_BoundsOutOfRangeException, CODEPORTING_ARGS(System::String message, double containerWidth, double containerHeight));
    
};

} // namespace Pdf
} // namespace Aspose


