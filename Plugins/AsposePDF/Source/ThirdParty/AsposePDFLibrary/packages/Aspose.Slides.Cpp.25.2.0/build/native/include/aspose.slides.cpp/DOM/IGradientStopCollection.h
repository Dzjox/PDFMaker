#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IGradientStop;
enum class PresetColor;
enum class SchemeColor;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represnts a collection of gradient stops.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGradientStopCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IGradientStop>>
{
    typedef IGradientStopCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IGradientStop>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the gradient stop by index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGradientStop> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Creates the new gradient stop and adds it to the end of collection.
    /// </summary>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="color">Color of the new radient stop.</param>
    /// <returns>Index of the new gradient stop in the collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGradientStop> Add(float position, System::Drawing::Color color) = 0;
    /// <summary>
    /// Creates the new gradient stop and adds it to the end of collection.
    /// </summary>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="presetColor">Color of the new radient stop.</param>
    /// <returns>Index of the new gradient stop in the collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGradientStop> Add(float position, PresetColor presetColor) = 0;
    /// <summary>
    /// Creates the new gradient stop and adds it to the end of collection.
    /// </summary>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="schemeColor">Color of the new radient stop.</param>
    /// <returns>Index of the new gradient stop in the collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGradientStop> Add(float position, SchemeColor schemeColor) = 0;
    /// <summary>
    /// Creates the new gradient stop and inserts it at the specified index to the collection.
    /// </summary>
    /// <param name="index">Index in the collection where new gradient stop will be inserted.</param>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="color">Color of the new radient stop.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Insert(int32_t index, float position, System::Drawing::Color color) = 0;
    /// <summary>
    /// Creates the new gradient stop and inserts it at the specified index to the collection.
    /// </summary>
    /// <param name="index">Index in the collection where new gradient stop will be inserted.</param>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="presetColor">Color of the new radient stop.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Insert(int32_t index, float position, PresetColor presetColor) = 0;
    /// <summary>
    /// Creates the new gradient stop and inserts it at the specified index to the collection.
    /// </summary>
    /// <param name="index">Index in the collection where new gradient stop will be inserted.</param>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="schemeColor">Color of the new radient stop.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Insert(int32_t index, float position, SchemeColor schemeColor) = 0;
    /// <summary>
    /// Removes a gradient stop at the specified index.
    /// </summary>
    /// <param name="index">Index of a gradient stop that should be deleted.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes all gradient stops from a collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Slides
} // namespace Aspose


