#pragma once
//Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/exceptions.h>

#include "Exceptions/PptReadException.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

class Details_PptCorruptFileException;
using PptCorruptFileException = System::ExceptionWrapper<Details_PptCorruptFileException>;

/// <summary>
/// Exception which thrown when presentation file is probably corrupt.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS Details_PptCorruptFileException : public Aspose::Slides::Details_PptReadException
{
    typedef Details_PptCorruptFileException ThisType;
    typedef Aspose::Slides::Details_PptReadException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    /// @endcond
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_SLIDES_API_SHARED_API Details_PptCorruptFileException();
    
    ASPOSE_SLIDES_API_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_PptCorruptFileException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Constructor allowing a message to be added to this exception.
    /// </summary>
    /// <param name="message">message</param>
    ASPOSE_SLIDES_API_SHARED_API Details_PptCorruptFileException(System::String message);
    
    ASPOSE_SLIDES_API_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_PptCorruptFileException, CODEPORTING_ARGS(System::String message));
    
    /// <summary>
    /// Constructor for an exception containing a message and an embedded exception.
    /// </summary>
    /// <param name="message">message </param>
    /// <param name="exception">original exception</param>
    ASPOSE_SLIDES_API_SHARED_API Details_PptCorruptFileException(System::String message, System::Exception exception);
    
    ASPOSE_SLIDES_API_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_PptCorruptFileException, CODEPORTING_ARGS(System::String message, System::Exception exception));
    
};

} // namespace Slides
} // namespace Aspose


