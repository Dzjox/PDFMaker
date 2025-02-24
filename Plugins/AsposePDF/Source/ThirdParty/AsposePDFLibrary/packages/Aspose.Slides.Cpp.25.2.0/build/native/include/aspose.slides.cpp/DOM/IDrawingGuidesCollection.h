#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IDrawingGuide;
enum class Orientation : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of the adjustable drawing guides.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IDrawingGuidesCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::IDrawingGuide>>
{
    typedef IDrawingGuidesCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::IDrawingGuide>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the number of all elements in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Returns the drawing guide by index.
    /// Read-only <see cref="Aspose::Slides::IDrawingGuide">IDrawingGuide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDrawingGuide> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds the drawing guide at the end of the collection.
    /// </summary>
    /// <param name="orientation">Orientation of the drawing guide.</param>
    /// <param name="position">Position of the the drawing guide in points.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDrawingGuide> Add(Orientation orientation, float position) = 0;
    /// <summary>
    /// Removes the drawing guide at the specified index.
    /// </summary>
    /// <param name="index">Index of the drawing guide that should be deleted.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Slides
} // namespace Aspose


