#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "Warnings/IWarningInfo.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Warnings {

/// <summary>
/// Represents a warning about known issue which won't be fixed in the near future.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IKnownIssueWarningInfo : public virtual Aspose::Slides::Warnings::IWarningInfo
{
    typedef IKnownIssueWarningInfo ThisType;
    typedef Aspose::Slides::Warnings::IWarningInfo BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Warnings
} // namespace Slides
} // namespace Aspose


