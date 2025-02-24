﻿#pragma once
//Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/exceptions.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

class Details_AxesCompositionNotCombinableException;
using AxesCompositionNotCombinableException = System::ExceptionWrapper<Details_AxesCompositionNotCombinableException>;

/// <summary>
/// Exception which thrown when axes composition of the series is not combinable with present axes 
/// composition in chart.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS Details_AxesCompositionNotCombinableException : public System::Details_InvalidOperationException
{
    typedef Details_AxesCompositionNotCombinableException ThisType;
    typedef System::Details_InvalidOperationException BaseType;
    
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
    ASPOSE_SLIDES_API_SHARED_API Details_AxesCompositionNotCombinableException();
    
    ASPOSE_SLIDES_API_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_AxesCompositionNotCombinableException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Constructor allowing a message to be added to this exception.
    /// </summary>
    /// <param name="message">message</param>
    ASPOSE_SLIDES_API_SHARED_API Details_AxesCompositionNotCombinableException(System::String message);
    
    ASPOSE_SLIDES_API_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_AxesCompositionNotCombinableException, CODEPORTING_ARGS(System::String message));
    
    /// <summary>
    /// Constructor for an exception containing a message and an embedded exception.
    /// </summary>
    /// <param name="message">message </param>
    /// <param name="exception">original exception</param>
    ASPOSE_SLIDES_API_SHARED_API Details_AxesCompositionNotCombinableException(System::String message, System::Exception exception);
    
    ASPOSE_SLIDES_API_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_AxesCompositionNotCombinableException, CODEPORTING_ARGS(System::String message, System::Exception exception));
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


