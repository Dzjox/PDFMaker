#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IResourceLoadingArgs;
enum class ResourceLoadingAction;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Callback interface used to manage external resources loading.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IResourceLoadingCallback : public virtual System::Object
{
    typedef IResourceLoadingCallback ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Callback method which regulates external resources loading.
    /// </summary>
    /// <param name="args">The loading resource data <see cref="Aspose::Slides::IResourceLoadingArgs">IResourceLoadingArgs</see>.</param>
    /// <returns>The resource loading decision <see cref="ResourceLoadingAction"></see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API ResourceLoadingAction ResourceLoading(System::SharedPtr<IResourceLoadingArgs> args) = 0;
    
};

} // namespace Slides
} // namespace Aspose


