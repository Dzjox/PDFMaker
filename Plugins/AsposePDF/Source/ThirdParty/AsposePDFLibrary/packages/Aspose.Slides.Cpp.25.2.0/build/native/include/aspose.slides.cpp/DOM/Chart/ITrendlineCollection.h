#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ITrendline;
enum class TrendlineType;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a collection of TrendlineEx
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITrendlineCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Charts::ITrendline>>
{
    typedef ITrendlineCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Charts::ITrendline>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::Charts::ITrendline">ITrendline</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITrendline> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds the new Trendline at the end of a collection and return it.
    /// </summary>
    /// <param name="trendlineType">Trendline type <see cref="TrendlineType"></see></param>
    /// <returns>New Trendline <see cref="Aspose::Slides::Charts::ITrendline">ITrendline</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITrendline> Add(TrendlineType trendlineType) = 0;
    /// <summary>
    /// Removes the specified value.
    /// </summary>
    /// <param name="value">Trendline to remove <see cref="Aspose::Slides::Charts::ITrendline">ITrendline</see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<ITrendline> value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


