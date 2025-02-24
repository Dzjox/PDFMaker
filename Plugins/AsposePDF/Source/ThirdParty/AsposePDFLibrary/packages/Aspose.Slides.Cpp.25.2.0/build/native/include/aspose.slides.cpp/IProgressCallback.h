#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a callback object for saving progress updates in percentage.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IProgressCallback : public virtual System::Object
{
    typedef IProgressCallback ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Reports a progress update.
    /// </summary>
    /// <param name="progressValue">The value of the updated progress.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Reporting(double progressValue) = 0;
    
};

} // namespace Slides
} // namespace Aspose


