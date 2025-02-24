#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathArrayFactory.h>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS MathArrayFactory : public Aspose::Slides::MathText::IMathArrayFactory
{
    typedef MathArrayFactory ThisType;
    typedef Aspose::Slides::MathText::IMathArrayFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates a math array and places the specified element in it 
    /// </summary>
    /// <param name="element">math element to place in array</param>
    /// <returns>new math array</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathArray> CreateMathArray(System::SharedPtr<IMathElement> element) override;
    /// <summary>
    /// Creates a math array and places specified elements in it 
    /// </summary>
    /// <param name="elements">math elements to place in array</param>
    /// <returns>new math array</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathArray> CreateMathArray(System::SharedPtr<IMathElementCollection> elements) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


