#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathBoxFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathBox;
class IMathElement;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create a math box
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS MathBoxFactory : public Aspose::Slides::MathText::IMathBoxFactory
{
    typedef MathBoxFactory ThisType;
    typedef Aspose::Slides::MathText::IMathBoxFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Create a math box by applying to the element
    /// </summary>
    /// <param name="element">math element to apply box</param>
    /// <returns>new box element</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBox> CreateMathBox(System::SharedPtr<IMathElement> element) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


