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
class ASPOSE_SLIDES_API_SHARED_CLASS IMathBoxFactory : public virtual System::Object
{
    typedef IMathBoxFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Create a math box by applying to the element
    /// </summary>
    /// <param name="element">math element to apply box</param>
    /// <returns>new box element</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBox> CreateMathBox(System::SharedPtr<IMathElement> element) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


