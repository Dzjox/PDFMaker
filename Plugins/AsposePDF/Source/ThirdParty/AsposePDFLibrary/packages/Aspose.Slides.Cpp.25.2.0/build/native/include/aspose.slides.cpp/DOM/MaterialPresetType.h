#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Constants which define material of shape.
/// </summary>
enum class MaterialPresetType
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    Clear,
    /// <summary ></summary>
    DkEdge,
    /// <summary ></summary>
    Flat,
    /// <summary ></summary>
    LegacyMatte,
    /// <summary ></summary>
    LegacyMetal,
    /// <summary ></summary>
    LegacyPlastic,
    /// <summary ></summary>
    LegacyWireframe,
    /// <summary ></summary>
    Matte,
    /// <summary ></summary>
    Metal,
    /// <summary ></summary>
    Plastic,
    /// <summary ></summary>
    Powder,
    /// <summary ></summary>
    SoftEdge,
    /// <summary ></summary>
    Softmetal,
    /// <summary ></summary>
    TranslucentPowder,
    /// <summary ></summary>
    WarmMatte
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MaterialPresetType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MaterialPresetType, const char_t*>, 16>& values();
};
/// @endcond



