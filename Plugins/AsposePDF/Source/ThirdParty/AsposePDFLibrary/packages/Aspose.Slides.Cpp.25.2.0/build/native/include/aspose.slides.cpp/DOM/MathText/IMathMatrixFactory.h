#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathMatrix;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create a math matrix
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathMatrixFactory : public virtual System::Object
{
    typedef IMathMatrixFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a math matrix
    /// </summary>
    /// <param name="rowCount">row count</param>
    /// <param name="columnCount">column count</param>
    /// <returns>new math matrix</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathMatrix> CreateMathMatrix(int32_t rowCount, int32_t columnCount) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


