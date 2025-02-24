#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Warnings
{
class IWarningInfo;
enum class ReturnAction;
} // namespace Warnings
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Warnings {

/// <summary>
/// Interface for classes which receive warning
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IWarningCallback : public virtual System::Object
{
    typedef IWarningCallback ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Callback method which receives warning and decides whether operation should be aborted.
    /// </summary>
    /// <param name="warning">Warning to process.</param>
    /// <returns>Abortion decision <see cref="ReturnAction"></see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API ReturnAction Warning(System::SharedPtr<IWarningInfo> warning) = 0;
    
};

} // namespace Warnings
} // namespace Slides
} // namespace Aspose


