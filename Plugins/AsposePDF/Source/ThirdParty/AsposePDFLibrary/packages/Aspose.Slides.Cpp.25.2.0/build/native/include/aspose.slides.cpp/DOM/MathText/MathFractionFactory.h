#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathFractionFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathElement;
class IMathFraction;
enum class MathFractionTypes;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create a math fraction
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS MathFractionFactory : public Aspose::Slides::MathText::IMathFractionFactory
{
    typedef MathFractionFactory ThisType;
    typedef Aspose::Slides::MathText::IMathFractionFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates a math fraction
    /// </summary>
    /// <param name="numerator">Numerator</param>
    /// <param name="denominator">Denominator</param>
    /// <param name="fractionType">Fraction type</param>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFraction> CreateMathFraction(System::SharedPtr<IMathElement> numerator, System::SharedPtr<IMathElement> denominator, MathFractionTypes fractionType) override;
    /// <summary>
    /// Creates a math fraction
    /// </summary>
    /// <param name="numerator">Numerator</param>
    /// <param name="denominator">Denominator</param>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathFraction> CreateMathFraction(System::SharedPtr<IMathElement> numerator, System::SharedPtr<IMathElement> denominator) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


