#pragma once
// Copyright (c) 2001-2018 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// This class represents the token to use for signaling long running tasks whether the interruption was requested.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IInterruptionToken : public virtual System::Object
{
    typedef IInterruptionToken ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns <see cref="bool"></see>.true if interruption was requested.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsInterruptionRequested() = 0;
    
    /// <summary>
    /// Throws an <exception cref="System::OperationCanceledException">OperationCanceledException</exception> if
    /// interruption was requested.
    /// <exception cref="System::OperationCanceledException">Thrown when interruption was requested.</exception>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ThrowIfInterruptionRequested() = 0;
    
};

} // namespace Slides
} // namespace Aspose


