#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathBarFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathBar;
class IMathElement;
enum class MathTopBotPositions;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create a math bar
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS MathBarFactory : public Aspose::Slides::MathText::IMathBarFactory
{
    typedef MathBarFactory ThisType;
    typedef Aspose::Slides::MathText::IMathBarFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Create a math bar by applying to the element
    /// </summary>
    /// <param name="element">math element to apply bar</param>
    /// <returns>new math bar element</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBar> CreateMathBar(System::SharedPtr<IMathElement> element) override;
    /// <summary>
    /// Create a math bar by applying to the element
    /// </summary>
    /// <param name="element">Math element to apply bar</param>
    /// <param name="position">Position of the bar</param>
    /// <returns>new math bar element</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBar> CreateMathBar(System::SharedPtr<IMathElement> element, MathTopBotPositions position) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


