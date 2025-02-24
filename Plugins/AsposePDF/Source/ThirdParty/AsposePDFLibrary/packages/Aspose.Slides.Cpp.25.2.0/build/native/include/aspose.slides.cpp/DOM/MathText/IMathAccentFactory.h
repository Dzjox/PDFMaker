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
class IMathAccent;
class IMathElement;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create a math accent
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathAccentFactory : public virtual System::Object
{
    typedef IMathAccentFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a math accent applying to a specified math element with the default accent character value
    /// </summary>
    /// <param name="element">math element to apply accent</param>
    /// <returns>new math accent</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathAccent> CreateMathAccent(System::SharedPtr<IMathElement> element) = 0;
    /// <summary>
    /// Creates a math accent applying to a specified math element
    /// </summary>
    /// <param name="element">math element to apply accent</param>
    /// <param name="accentCharacter">accent character</param>
    /// <returns>new math accent</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathAccent> CreateMathAccent(System::SharedPtr<IMathElement> element, char16_t accentCharacter) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


