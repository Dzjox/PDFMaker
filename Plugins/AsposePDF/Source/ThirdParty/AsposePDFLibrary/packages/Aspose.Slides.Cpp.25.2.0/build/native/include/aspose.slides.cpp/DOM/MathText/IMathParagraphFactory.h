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
class ASPOSE_SLIDES_API_SHARED_CLASS IMathParagraphFactory : public virtual System::Object
{
    typedef IMathParagraphFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Create empty math paragraph
    /// </summary>
    /// <returns>new math paragraph</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathParagraph> CreateMathParagraph() = 0;
    /// <summary>
    /// Creates a math paragraph and places the specified math block in it 
    /// </summary>
    /// <param name="mathBlock">math block to place in the paragraph</param>
    /// <returns>new math paragraph</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathParagraph> CreateMathParagraph(System::SharedPtr<IMathBlock> mathBlock) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


