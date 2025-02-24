#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IFontDataFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFontData;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// FontData factory
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FontDataFactory : public Aspose::Slides::IFontDataFactory
{
    typedef FontDataFactory ThisType;
    typedef Aspose::Slides::IFontDataFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates FontData with specified font name.
    /// </summary>
    /// <param name="fontName">Font name</param>
    /// <returns>FontData</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontData> CreateFontData(System::String fontName) override;
    
};

} // namespace Slides
} // namespace Aspose


