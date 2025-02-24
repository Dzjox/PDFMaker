#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class ColorTransformOperation;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents different color operations used for color transformations.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColorOperation : public virtual System::Object
{
    typedef IColorOperation ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the type of an operation.
    /// Read-only <see cref="ColorTransformOperation"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ColorTransformOperation get_OperationType() = 0;
    /// <summary>
    /// Returns a parameter of an operation.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Parameter() = 0;
    
};

} // namespace Slides
} // namespace Aspose


