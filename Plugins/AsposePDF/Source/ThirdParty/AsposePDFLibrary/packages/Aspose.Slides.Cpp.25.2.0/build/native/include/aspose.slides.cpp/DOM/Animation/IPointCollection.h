#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class IPoint;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents a collection of portions.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPointCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Animation::IPoint>>
{
    typedef IPointCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Animation::IPoint>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the number of points in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Returns a point at the specified index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPoint> idx_get(int32_t index) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


