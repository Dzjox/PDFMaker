#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathBlockFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathBlock;
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
/// Allows to create a math block
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS MathBlockFactory : public Aspose::Slides::MathText::IMathBlockFactory
{
    typedef MathBlockFactory ThisType;
    typedef Aspose::Slides::MathText::IMathBlockFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Create a math block
    /// </summary>
    /// <returns>new math block</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBlock> CreateMathBlock() override;
    /// <summary>
    /// Create a math block and place the element in it
    /// </summary>
    /// <param name="mathElement">A math element</param>
    /// <returns>new math block</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBlock> CreateMathBlock(System::SharedPtr<IMathElement> mathElement) override;
    /// <summary>
    /// Create a math block and place elements in it
    /// </summary>
    /// <param name="mathElements">math elements</param>
    /// <returns>new math block</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathBlock> CreateMathBlock(System::SharedPtr<IMathElementCollection> mathElements) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


