#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathDelimiterFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathDelimiter;
class IMathElement;
class IMathElementCollection;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create a math delimiter
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS MathDelimiterFactory : public Aspose::Slides::MathText::IMathDelimiterFactory
{
    typedef MathDelimiterFactory ThisType;
    typedef Aspose::Slides::MathText::IMathDelimiterFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Create a math delimiter by applying to the element
    /// </summary>
    /// <param name="element">math element to apply delimiter</param>
    /// <returns>new math delimiter</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathDelimiter> CreateMathDelimiter(System::SharedPtr<IMathElement> element) override;
    /// <summary>
    /// Create a math delimiter by applying to the element
    /// </summary>
    /// <param name="mathElements">math elements to apply delimiter</param>
    /// <returns>new math delimiter</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathDelimiter> CreateMathDelimiter(System::SharedPtr<IMathElementCollection> mathElements) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


