#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/exceptions.h>

#include "Exceptions/PptxEditException.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Spreadsheet {

class Details_CellInvalidFormulaException;
using CellInvalidFormulaException = System::ExceptionWrapper<Details_CellInvalidFormulaException>;

/// <summary>
/// The exception that is thrown when a calculated formula is not correct or was not parsed. 
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS Details_CellInvalidFormulaException : public Aspose::Slides::Details_PptxEditException
{
    typedef Details_CellInvalidFormulaException ThisType;
    typedef Aspose::Slides::Details_PptxEditException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    /// @endcond
    
public:

    /// <summary>
    /// Gets a cell reference that contains the invalid formula.
    /// </summary>
    ASPOSE_SLIDES_API_SHARED_API System::String get_Reference();
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Slides::Spreadsheet::CellInvalidFormulaException">CellInvalidFormulaException</see> class.
    /// </summary>
    ASPOSE_SLIDES_API_SHARED_API Details_CellInvalidFormulaException();
    
    ASPOSE_SLIDES_API_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_CellInvalidFormulaException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Slides::Spreadsheet::CellInvalidFormulaException">CellInvalidFormulaException</see> class with a specified error message.
    /// </summary>
    /// <param name="message">A string that describes the error.</param>
    ASPOSE_SLIDES_API_SHARED_API Details_CellInvalidFormulaException(System::String message);
    
    ASPOSE_SLIDES_API_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_CellInvalidFormulaException, CODEPORTING_ARGS(System::String message));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Slides::Spreadsheet::CellInvalidFormulaException">CellInvalidFormulaException</see> class with a specified error message
    /// and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">A string that describes the error.</param>
    /// <param name="innerException">The exception that is the cause of the current exception.</param>
    ASPOSE_SLIDES_API_SHARED_API Details_CellInvalidFormulaException(System::String message, System::Exception innerException);
    
    ASPOSE_SLIDES_API_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_CellInvalidFormulaException, CODEPORTING_ARGS(System::String message, System::Exception innerException));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Slides::Spreadsheet::CellInvalidFormulaException">CellInvalidFormulaException</see> class with a specified error message
    /// and a cell reference that contains the invalid formula.
    /// </summary>
    /// <param name="message"></param>
    /// <param name="reference"></param>
    ASPOSE_SLIDES_API_SHARED_API Details_CellInvalidFormulaException(System::String message, System::String reference);
    
    ASPOSE_SLIDES_API_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_CellInvalidFormulaException, CODEPORTING_ARGS(System::String message, System::String reference));
    
private:

    System::String m_reference;
    
};

} // namespace Spreadsheet
} // namespace Slides
} // namespace Aspose


