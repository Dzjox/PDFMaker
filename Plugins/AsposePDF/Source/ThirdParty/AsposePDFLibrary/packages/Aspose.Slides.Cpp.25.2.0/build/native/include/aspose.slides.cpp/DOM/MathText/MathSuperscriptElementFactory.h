#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathSuperscriptElementFactory.h>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS MathSuperscriptElementFactory : public Aspose::Slides::MathText::IMathSuperscriptElementFactory
{
    typedef MathSuperscriptElementFactory ThisType;
    typedef Aspose::Slides::MathText::IMathSuperscriptElementFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates IMathSuperscriptElement
    /// </summary>
    /// <param name="baseArg">Base argument to apply superscript</param>
    /// <param name="superScript">upper right index</param>
    /// <returns>new IMathSuperscriptElement</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathSuperscriptElement> CreateMathSuperscriptElement(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> superScript) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


