#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathAccentFactory.h>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS MathAccentFactory : public Aspose::Slides::MathText::IMathAccentFactory
{
    typedef MathAccentFactory ThisType;
    typedef Aspose::Slides::MathText::IMathAccentFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates a math accent applying to a specified math element with the default accent character value
    /// </summary>
    /// <param name="element">math element to apply accent</param>
    /// <returns>new math accent</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathAccent> CreateMathAccent(System::SharedPtr<IMathElement> element) override;
    /// <summary>
    /// Creates a math accent applying to a specified math element
    /// </summary>
    /// <param name="element">math element to apply accent</param>
    /// <param name="accentCharacter">accent character</param>
    /// <returns>new math accent</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathAccent> CreateMathAccent(System::SharedPtr<IMathElement> element, char16_t accentCharacter) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


