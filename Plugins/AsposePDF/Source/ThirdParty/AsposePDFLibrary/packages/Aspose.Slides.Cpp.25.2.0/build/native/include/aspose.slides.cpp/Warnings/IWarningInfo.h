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
class IWarningCallback;
enum class WarningType;
} // namespace Warnings
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Warnings {

/// <summary>
/// Represents a base interface for all warnings.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IWarningInfo : public virtual System::Object
{
    typedef IWarningInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a type of warning.
    /// Read-only <see cref="IWarningInfo::get_WarningType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Warnings::WarningType get_WarningType() = 0;
    /// <summary>
    /// Returns a human readable description of this warning.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Description() = 0;
    
    /// <summary>
    /// If receiver is not null ends warning to a specified receiver and throws the 
    /// AbortRequestedException if receiver decided to abort a operation.
    /// </summary>
    /// <param name="receiver">Receiver object <see cref="Aspose::Slides::Warnings::IWarningCallback">IWarningCallback</see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SendWarning(System::SharedPtr<IWarningCallback> receiver) = 0;
    
};

} // namespace Warnings
} // namespace Slides
} // namespace Aspose


