#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathParagraphFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathBlock;
class IMathParagraph;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create a math paragraph
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS MathParagraphFactory : public Aspose::Slides::MathText::IMathParagraphFactory
{
    typedef MathParagraphFactory ThisType;
    typedef Aspose::Slides::MathText::IMathParagraphFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Create empty math paragraph
    /// </summary>
    /// <returns>new math paragraph</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathParagraph> CreateMathParagraph() override;
    /// <summary>
    /// Creates a math paragraph and places the specified math block in it 
    /// </summary>
    /// <param name="mathBlock">math block to place in the paragraph</param>
    /// <returns>new math paragraph</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathParagraph> CreateMathParagraph(System::SharedPtr<IMathBlock> mathBlock) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


