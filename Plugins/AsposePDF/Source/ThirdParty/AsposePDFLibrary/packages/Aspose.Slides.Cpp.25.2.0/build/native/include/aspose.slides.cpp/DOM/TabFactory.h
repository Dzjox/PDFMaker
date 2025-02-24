#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/ITabFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ITab;
enum class TabAlignment;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Allows to create ITab instances
/// </summary>
/// <remarks>For COM compatibility.</remarks>
class ASPOSE_SLIDES_SHARED_CLASS TabFactory : public Aspose::Slides::ITabFactory
{
    typedef TabFactory ThisType;
    typedef Aspose::Slides::ITabFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates a new ITab instance.
    /// </summary>
    /// <param name="position">Tab position.</param>
    /// <param name="align">Align.</param>
    /// <returns>Created tab.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITab> CreateTab(double position, TabAlignment align) override;
    
};

} // namespace Slides
} // namespace Aspose


