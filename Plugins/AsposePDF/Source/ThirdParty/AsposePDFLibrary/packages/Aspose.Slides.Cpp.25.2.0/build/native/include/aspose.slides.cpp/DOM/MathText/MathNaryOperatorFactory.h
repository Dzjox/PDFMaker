#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathNaryOperatorFactory.h>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS MathNaryOperatorFactory : public Aspose::Slides::MathText::IMathNaryOperatorFactory
{
    typedef MathNaryOperatorFactory ThisType;
    typedef Aspose::Slides::MathText::IMathNaryOperatorFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates IMathNaryOperator
    /// </summary>
    /// <param name="operatorSymbol">The operator sign</param>
    /// <param name="baseArgument">Base argument to apply operator</param>
    /// <param name="lowerLimit">Lower limit</param>
    /// <param name="upperLimit">Upper limit </param>
    /// <returns>new IMathNaryOperator</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathNaryOperator> CreateMathNaryOperator(char16_t operatorSymbol, System::SharedPtr<IMathElement> baseArgument, System::SharedPtr<IMathElement> lowerLimit, System::SharedPtr<IMathElement> upperLimit) override;
    /// <summary>
    /// Creates IMathNaryOperator
    /// </summary>
    /// <param name="operatorSymbol">The operator sign</param>
    /// <param name="baseArgument">Base argument to apply operator</param>
    /// <param name="lowerLimit">Lower limit</param>
    /// <returns>new IMathNaryOperator</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathNaryOperator> CreateMathNaryOperator(char16_t operatorSymbol, System::SharedPtr<IMathElement> baseArgument, System::SharedPtr<IMathElement> lowerLimit) override;
    /// <summary>
    /// Creates IMathNaryOperator
    /// </summary>
    /// <param name="operatorSymbol">The operator sign</param>
    /// <param name="baseArgument">Base argument to apply operator</param>
    /// <returns>new IMathNaryOperator</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathNaryOperator> CreateMathNaryOperator(char16_t operatorSymbol, System::SharedPtr<IMathElement> baseArgument) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


