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
class IMathSuperscriptElement;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create IMathSuperscriptElement
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathSuperscriptElementFactory : public virtual System::Object
{
    typedef IMathSuperscriptElementFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates IMathSuperscriptElement
    /// </summary>
    /// <param name="baseArg">Base argument to apply superscript</param>
    /// <param name="superScript">upper right index</param>
    /// <returns>new IMathSuperscriptElement</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathSuperscriptElement> CreateMathSuperscriptElement(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> superScript) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


