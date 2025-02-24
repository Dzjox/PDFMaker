#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathElement;
class IMathNaryOperator;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create IMathNaryOperator
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathNaryOperatorFactory : public virtual System::Object
{
    typedef IMathNaryOperatorFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates IMathNaryOperator
    /// </summary>
    /// <param name="operatorSymbol">The operator sign</param>
    /// <param name="baseArgument">Base argument to apply operator</param>
    /// <param name="lowerLimit">Lower limit</param>
    /// <param name="upperLimit">Upper limit </param>
    /// <returns>new IMathNaryOperator</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathNaryOperator> CreateMathNaryOperator(char16_t operatorSymbol, System::SharedPtr<IMathElement> baseArgument, System::SharedPtr<IMathElement> lowerLimit, System::SharedPtr<IMathElement> upperLimit) = 0;
    /// <summary>
    /// Creates IMathNaryOperator
    /// </summary>
    /// <param name="operatorSymbol">The operator sign</param>
    /// <param name="baseArgument">Base argument to apply operator</param>
    /// <param name="lowerLimit">Lower limit</param>
    /// <returns>new IMathNaryOperator</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathNaryOperator> CreateMathNaryOperator(char16_t operatorSymbol, System::SharedPtr<IMathElement> baseArgument, System::SharedPtr<IMathElement> lowerLimit) = 0;
    /// <summary>
    /// Creates IMathNaryOperator
    /// </summary>
    /// <param name="operatorSymbol">The operator sign</param>
    /// <param name="baseArgument">Base argument to apply operator</param>
    /// <returns>new IMathNaryOperator</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathNaryOperator> CreateMathNaryOperator(char16_t operatorSymbol, System::SharedPtr<IMathElement> baseArgument) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


