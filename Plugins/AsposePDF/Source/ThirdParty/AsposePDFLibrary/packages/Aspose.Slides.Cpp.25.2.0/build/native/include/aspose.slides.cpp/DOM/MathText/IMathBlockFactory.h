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
class ASPOSE_SLIDES_API_SHARED_CLASS IMathBlockFactory : public virtual System::Object
{
    typedef IMathBlockFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Create a math block
    /// </summary>
    /// <returns>new math block</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBlock> CreateMathBlock() = 0;
    /// <summary>
    /// Create a math block and place the element in it
    /// </summary>
    /// <param name="mathElement">A math element</param>
    /// <returns>new math block</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBlock> CreateMathBlock(System::SharedPtr<IMathElement> mathElement) = 0;
    /// <summary>
    /// Create a math block and place elements in it
    /// </summary>
    /// <param name="mathElements">math elements</param>
    /// <returns>new math block</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBlock> CreateMathBlock(System::SharedPtr<IMathElementCollection> mathElements) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


