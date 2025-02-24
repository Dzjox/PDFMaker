#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class Orientation : int8_t;
enum class PlaceholderSize : int8_t;
enum class PlaceholderType : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a placeholder on a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPlaceholder : public virtual System::Object
{
    typedef IPlaceholder ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the orientation of a placeholder.
    /// Read-only <see cref="Slides::Orientation"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Orientation get_Orientation() = 0;
    /// <summary>
    /// Gets the size of a placeholder.
    /// Read-only <see cref="PlaceholderSize"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API PlaceholderSize get_Size() = 0;
    /// <summary>
    /// Gets the type of a placeholder.
    /// Read-only <see cref="PlaceholderType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API PlaceholderType get_Type() = 0;
    /// <summary>
    /// Gets the index of a placeholder.
    /// Read-only <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_Index() = 0;
    
};

} // namespace Slides
} // namespace Aspose


