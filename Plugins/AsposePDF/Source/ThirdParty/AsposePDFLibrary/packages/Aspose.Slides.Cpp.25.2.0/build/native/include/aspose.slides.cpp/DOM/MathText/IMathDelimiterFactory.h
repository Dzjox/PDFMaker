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
class ASPOSE_SLIDES_API_SHARED_CLASS IMathDelimiterFactory : public virtual System::Object
{
    typedef IMathDelimiterFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Create a math delimiter by applying to the element
    /// </summary>
    /// <param name="element">math element to apply delimiter</param>
    /// <returns>new math delimiter</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathDelimiter> CreateMathDelimiter(System::SharedPtr<IMathElement> element) = 0;
    /// <summary>
    /// Create a math delimiter by applying to the element
    /// </summary>
    /// <param name="mathElements">math elements to apply delimiter</param>
    /// <returns>new math delimiter</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathDelimiter> CreateMathDelimiter(System::SharedPtr<IMathElementCollection> mathElements) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


