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
class ASPOSE_SLIDES_API_SHARED_CLASS IMathFractionFactory : public virtual System::Object
{
    typedef IMathFractionFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a math fraction
    /// </summary>
    /// <param name="numerator">Numerator</param>
    /// <param name="denominator">Denominator</param>
    /// <param name="fractionType">Fraction type</param>
    /// <returns>New math fraction <see cref="Aspose::Slides::MathText::IMathFraction">IMathFraction</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFraction> CreateMathFraction(System::SharedPtr<IMathElement> numerator, System::SharedPtr<IMathElement> denominator, MathFractionTypes fractionType) = 0;
    /// <summary>
    /// Creates a math fraction
    /// </summary>
    /// <param name="numerator">Numerator</param>
    /// <param name="denominator">Denominator</param>
    /// <returns>New math fraction <see cref="Aspose::Slides::MathText::IMathFraction">IMathFraction</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathFraction> CreateMathFraction(System::SharedPtr<IMathElement> numerator, System::SharedPtr<IMathElement> denominator) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


