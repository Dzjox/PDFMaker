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
class ASPOSE_SLIDES_API_SHARED_CLASS IMathBarFactory : public virtual System::Object
{
    typedef IMathBarFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Create a math bar by applying to the element
    /// </summary>
    /// <param name="element">math element to apply bar</param>
    /// <returns>new math bar element</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBar> CreateMathBar(System::SharedPtr<IMathElement> element) = 0;
    /// <summary>
    /// Create a math bar by applying to the element
    /// </summary>
    /// <param name="element">Math element to apply bar</param>
    /// <param name="position">Position of the bar</param>
    /// <returns>new math bar element</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBar> CreateMathBar(System::SharedPtr<IMathElement> element, MathTopBotPositions position) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


