#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents Shape lock (disabled operation).
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBaseShapeLock : public virtual System::Object
{
    typedef IBaseShapeLock ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Return true if all lock-flags are disabled.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_NoLocks() = 0;
    
};

} // namespace Slides
} // namespace Aspose


