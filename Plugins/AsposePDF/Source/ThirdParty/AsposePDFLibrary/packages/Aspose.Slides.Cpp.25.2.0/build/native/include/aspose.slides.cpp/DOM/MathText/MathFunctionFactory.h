#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathFunctionFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathElement;
class IMathFunction;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create a math function
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS MathFunctionFactory : public Aspose::Slides::MathText::IMathFunctionFactory
{
    typedef MathFunctionFactory ThisType;
    typedef Aspose::Slides::MathText::IMathFunctionFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates math function
    /// </summary>
    /// <param name="funcName">Element used as a function name</param>
    /// <param name="baseArgument">Element used as a function argument</param>
    /// <returns>new math function</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFunction> CreateMathFunction(System::SharedPtr<IMathElement> funcName, System::SharedPtr<IMathElement> baseArgument) override;
    /// <summary>
    /// Creates math function
    /// </summary>
    /// <param name="funcName">Function name</param>
    /// <param name="baseArgument">Element used as a function argument</param>
    /// <returns>new math function</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFunction> CreateMathFunction(System::String funcName, System::SharedPtr<IMathElement> baseArgument) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


