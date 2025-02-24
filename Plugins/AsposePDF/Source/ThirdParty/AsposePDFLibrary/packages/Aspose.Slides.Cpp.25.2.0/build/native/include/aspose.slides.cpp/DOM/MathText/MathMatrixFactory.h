#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathMatrixFactory.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS MathMatrixFactory : public Aspose::Slides::MathText::IMathMatrixFactory
{
    typedef MathMatrixFactory ThisType;
    typedef Aspose::Slides::MathText::IMathMatrixFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates a math matrix
    /// </summary>
    /// <param name="rowCount">row count</param>
    /// <param name="columnCount">column count</param>
    /// <returns>new math matrix</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathMatrix> CreateMathMatrix(int32_t rowCount, int32_t columnCount) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


