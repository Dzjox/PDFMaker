#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathRadicalFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathElement;
class IMathRadical;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create math radical
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS MathRadicalFactory : public Aspose::Slides::MathText::IMathRadicalFactory
{
    typedef MathRadicalFactory ThisType;
    typedef Aspose::Slides::MathText::IMathRadicalFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates a math radical
    /// </summary>
    /// <param name="baseArgument">Base argument to apply radical</param>
    /// <param name="degreeArgument">Degree value</param>
    /// <returns>new radical element</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathRadical> CreateMathRadical(System::SharedPtr<IMathElement> baseArgument, System::SharedPtr<IMathElement> degreeArgument) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


