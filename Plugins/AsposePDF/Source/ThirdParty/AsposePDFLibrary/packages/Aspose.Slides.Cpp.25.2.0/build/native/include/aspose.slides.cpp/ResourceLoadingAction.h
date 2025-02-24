#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Specifies the mode of external resource loading.
/// </summary>
enum class ResourceLoadingAction
{
    /// <summary>
    /// Aspose.Slides will load external resource as usual.
    /// </summary>
    Default = 0,
    /// <summary>
    /// Aspose.Slides will skip loading of external resource. Only link without data will be stored for an image.
    /// </summary>
    Skip = 1,
    /// <summary>
    /// Aspose.Slides will use byte array provided by user in <see cref="IResourceLoadingArgs::SetData"></see> as image data.
    /// </summary>
    UserProvided = 2
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ResourceLoadingAction>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ResourceLoadingAction, const char_t*>, 3>& values();
};
/// @endcond



