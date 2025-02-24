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
class IMathArray;
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
/// Allows to create a math array
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathArrayFactory : public virtual System::Object
{
    typedef IMathArrayFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a math array and places the specified element in it 
    /// </summary>
    /// <param name="element">math element to place in array</param>
    /// <returns>new math array</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathArray> CreateMathArray(System::SharedPtr<IMathElement> element) = 0;
    /// <summary>
    /// Creates a math array and places specified elements in it 
    /// </summary>
    /// <param name="elements">math elements to place in array</param>
    /// <returns>new math array</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathArray> CreateMathArray(System::SharedPtr<IMathElementCollection> elements) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


