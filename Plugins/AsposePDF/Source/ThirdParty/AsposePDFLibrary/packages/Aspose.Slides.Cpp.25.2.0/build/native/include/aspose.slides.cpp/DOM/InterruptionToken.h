#pragma once
// Copyright (c) 2001-2018 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <IInterruptionToken.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class InterruptionTokenSource;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// This class represents the token to use for signaling long running tasks whether the interruption was requested.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS InterruptionToken : public Aspose::Slides::IInterruptionToken
{
    typedef InterruptionToken ThisType;
    typedef Aspose::Slides::IInterruptionToken BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::InterruptionTokenSource;
    /// @endcond
    
public:

    /// <summary>
    /// Represents an empty interruption token.
    /// <remarks>Long-running operations will never be interrupted via <see cref="InterruptionTokenSource::Interrupt"></see>
    /// when using this token.</remarks>
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<InterruptionToken> get_None();
    /// <summary>
    /// Returns <see cref="bool"></see>.true if interruption was requested.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsInterruptionRequested() override;
    
    /// <summary>
    /// Throws an <exception cref="System::OperationCanceledException">OperationCanceledException</exception> if
    /// interruption was requested.
    /// </summary>
    /// <exception cref="System::OperationCanceledException">Thrown when interruption was requested.</exception>
    ASPOSE_SLIDES_SHARED_API void ThrowIfInterruptionRequested() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API InterruptionToken(System::SharedPtr<InterruptionTokenSource> source);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(InterruptionToken, CODEPORTING_ARGS(System::SharedPtr<InterruptionTokenSource> source));
    
private:

    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<InterruptionToken> m_noneToken;
    System::SharedPtr<InterruptionTokenSource> m_source;
    
    ASPOSE_SLIDES_LOCAL_API void ThrowOperationCanceledException();
    
};

} // namespace Slides
} // namespace Aspose


