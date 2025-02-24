#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "Warnings/IWarningInfo.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Warnings {

/// <summary>
/// This warning indicates that the presentation being read has the signature 
/// and this signature will be removed during processing.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPresentationSignedWarningInfo : public virtual Aspose::Slides::Warnings::IWarningInfo
{
    typedef IPresentationSignedWarningInfo ThisType;
    typedef Aspose::Slides::Warnings::IWarningInfo BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Warnings
} // namespace Slides
} // namespace Aspose


