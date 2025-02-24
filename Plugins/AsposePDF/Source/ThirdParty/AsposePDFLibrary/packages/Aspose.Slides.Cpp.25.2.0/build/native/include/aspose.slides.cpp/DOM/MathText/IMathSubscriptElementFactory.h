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
class IMathSubscriptElement;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create IMathSubscriptElement
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathSubscriptElementFactory : public virtual System::Object
{
    typedef IMathSubscriptElementFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates IMathSubscriptElement
    /// </summary>
    /// <param name="baseArg">Base argument to apply indexe</param>
    /// <param name="subScript">lower right index</param>
    /// <returns>new IMathSubscriptElement</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathSubscriptElement> CreateMathSubscriptElement(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> subScript) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


