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
class ASPOSE_SLIDES_API_SHARED_CLASS IMathRadicalFactory : public virtual System::Object
{
    typedef IMathRadicalFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a math radical
    /// </summary>
    /// <param name="baseArgument">Base argument to apply radical</param>
    /// <param name="degreeArgument">Degree value</param>
    /// <returns>new radical element</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathRadical> CreateMathRadical(System::SharedPtr<IMathElement> baseArgument, System::SharedPtr<IMathElement> degreeArgument) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


