#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathRightSubSuperscriptElementFactory.h>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS MathRightSubSuperscriptElementFactory : public Aspose::Slides::MathText::IMathRightSubSuperscriptElementFactory
{
    typedef MathRightSubSuperscriptElementFactory ThisType;
    typedef Aspose::Slides::MathText::IMathRightSubSuperscriptElementFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates an instance of IMathRightSubSuperscriptElementFactory
    /// </summary>
    /// <param name="baseArg">Base argument to apply indexes</param>
    /// <param name="subScript">lower right index</param>
    /// <param name="superScript">upper right index</param>
    /// <returns>new IMathLeftSubSuperscriptElement</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathRightSubSuperscriptElement> CreateMathRightSubSuperscriptElement(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> subScript, System::SharedPtr<IMathElement> superScript) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


