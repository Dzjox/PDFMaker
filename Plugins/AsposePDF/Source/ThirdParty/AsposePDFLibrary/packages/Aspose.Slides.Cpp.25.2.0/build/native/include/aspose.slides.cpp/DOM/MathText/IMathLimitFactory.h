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
class ASPOSE_SLIDES_API_SHARED_CLASS IMathLimitFactory : public virtual System::Object
{
    typedef IMathLimitFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates IMathLimit 
    /// </summary>
    /// <param name="baseArg">Base argument to apply the limit</param>
    /// <param name="limit">Limit element</param>
    /// <param name="upperLimit">Sets the placement of the limit on top</param>
    /// <returns>new math limit</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathLimit> CreateMathLimit(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> limit, bool upperLimit) = 0;
    /// <summary>
    /// Creates IMathLimit with limit at the bottom
    /// </summary>
    /// <param name="baseArg">Base argument to apply the limit</param>
    /// <param name="limit">Limit element</param>
    /// <returns>new math limit</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathLimit> CreateMathLimit(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> limit) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


