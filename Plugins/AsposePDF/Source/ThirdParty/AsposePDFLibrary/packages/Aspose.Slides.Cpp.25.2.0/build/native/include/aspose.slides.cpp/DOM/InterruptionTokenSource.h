#pragma once
// Copyright (c) 2001-2018 Aspose Pty Ltd. All Rights Reserved.

#include <IInterruptionTokenSource.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

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
/// Represents the source of <see cref="Aspose::Slides::InterruptionToken">InterruptionToken</see>.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS InterruptionTokenSource : public Aspose::Slides::IInterruptionTokenSource
{
    typedef InterruptionTokenSource ThisType;
    typedef Aspose::Slides::IInterruptionTokenSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Returns new token binded to this <see cref="Aspose::Slides::InterruptionTokenSource">InterruptionTokenSource</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IInterruptionToken> get_Token() override;
    /// <summary>
    /// Returns true if interruption requested, false otherwise.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsInterruptionRequested() override;
    
    /// <summary>
    /// Creates a new <see cref="Aspose::Slides::InterruptionTokenSource">InterruptionTokenSource</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API InterruptionTokenSource();
    
    /// <summary>
    /// Intialize request for interruption.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Interrupt() override;
    
protected:

    virtual ASPOSE_SLIDES_SHARED_API ~InterruptionTokenSource();
    
private:

    static const ASPOSE_SLIDES_LOCAL_API int32_t NOT_INTERRUPTED;
    static const ASPOSE_SLIDES_LOCAL_API int32_t INTERRUPTING;
    static const ASPOSE_SLIDES_LOCAL_API int32_t INTERRUPTED;
    int32_t m_state;
    
};

} // namespace Slides
} // namespace Aspose


