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
class IMathRightSubSuperscriptElement;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create IMathRightSubSuperscriptElementFactory
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathRightSubSuperscriptElementFactory : public virtual System::Object
{
    typedef IMathRightSubSuperscriptElementFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates IMathRightSubSuperscriptElementFactory
    /// </summary>
    /// <param name="baseArg">Base argument to apply indexes</param>
    /// <param name="subScript">lower right index</param>
    /// <param name="superScript">upper right index</param>
    /// <returns>new IMathLeftSubSuperscriptElement</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathRightSubSuperscriptElement> CreateMathRightSubSuperscriptElement(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> subScript, System::SharedPtr<IMathElement> superScript) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


