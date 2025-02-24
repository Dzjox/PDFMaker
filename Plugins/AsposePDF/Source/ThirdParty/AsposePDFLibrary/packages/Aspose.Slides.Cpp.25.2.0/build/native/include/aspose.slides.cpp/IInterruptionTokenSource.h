#pragma once
// Copyright (c) 2001-2018 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IInterruptionToken;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the source of <see cref="Aspose::Slides::IInterruptionToken">IInterruptionToken</see>.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IInterruptionTokenSource : public virtual System::Object
{
    typedef IInterruptionTokenSource ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns new token binded to this <see cref="Aspose::Slides::IInterruptionTokenSource">IInterruptionTokenSource</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IInterruptionToken> get_Token() = 0;
    /// <summary>
    /// Returns true if interruption requested, false otherwise.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsInterruptionRequested() = 0;
    
    /// <summary>
    /// Intialize request for interruption.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Interrupt() = 0;
    
};

} // namespace Slides
} // namespace Aspose


