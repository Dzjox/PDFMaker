#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathLimitFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathElement;
class IMathLimit;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create IMathLimit
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS MathLimitFactory : public Aspose::Slides::MathText::IMathLimitFactory
{
    typedef MathLimitFactory ThisType;
    typedef Aspose::Slides::MathText::IMathLimitFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates IMathLimit 
    /// </summary>
    /// <param name="baseArg">Base argument to apply the limit</param>
    /// <param name="limit">Limit element</param>
    /// <param name="upperLimit">Sets the placement of the limit on top</param>
    /// <returns>new math limit</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathLimit> CreateMathLimit(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> limit, bool upperLimit) override;
    /// <summary>
    /// Creates IMathLimit with limit at the bottom
    /// </summary>
    /// <param name="baseArg">Base argument to apply the limit</param>
    /// <param name="limit">Limit element</param>
    /// <returns>new math limit</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathLimit> CreateMathLimit(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> limit) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


