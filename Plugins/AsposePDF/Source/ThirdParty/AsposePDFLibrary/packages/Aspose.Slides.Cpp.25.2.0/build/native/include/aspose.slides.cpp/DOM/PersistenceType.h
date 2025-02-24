#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Specifies the method used to store properties of the ActiveX control.
/// </summary>
enum class PersistenceType
{
    /// <summary>
    /// Persistance id not specified.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// Specifies that the ActiveX control is persisted using property-bag-based persistence. 
    /// Property-bag-based persistence stores an ActiveX control by means of a collection of name 
    /// and value pairs which specify the data persisted by the ActiveX control.
    /// </summary>
    PersistPropertyBag,
    /// <summary>
    /// Specifies that the ActiveX control is persisted using a stream-based persistence 
    /// that does not support initialization of the ActiveX control to a default state.
    /// </summary>
    PersistStream,
    /// <summary>
    /// Specifies that the ActiveX control is persisted using a stream-based persistence 
    /// that supports initialization of the ActiveX control to a default state.
    /// </summary>
    PersistStreamInit,
    /// <summary>
    /// Specifies that the ActiveX control is persisted using storage-based persistence.
    /// </summary>
    PersistStorage
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::PersistenceType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::PersistenceType, const char_t*>, 5>& values();
};
/// @endcond



