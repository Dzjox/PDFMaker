#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "Import/IExternalResourceResolver.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Import {

/// @deprecated Obsolete. Use IExternalResourceResolver instead. Will be removed in 17.12 release.
/// <summary>
/// Callback interface used by HTML import routine to obtain referrenced objects such as images.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IHtmlExternalResolver : public Aspose::Slides::Import::IExternalResourceResolver
{
    typedef IHtmlExternalResolver ThisType;
    typedef Aspose::Slides::Import::IExternalResourceResolver BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Import
} // namespace Slides
} // namespace Aspose


