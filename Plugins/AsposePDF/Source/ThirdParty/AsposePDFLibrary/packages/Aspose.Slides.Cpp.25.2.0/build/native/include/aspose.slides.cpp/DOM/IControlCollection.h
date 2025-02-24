#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class ControlType;
class IControl;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// A collection of ActiveX controls.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IControlCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IControl>>
{
    typedef IControlCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IControl>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Removes an ActiveX control from the collection.
    /// </summary>
    /// <param name="item">A control to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<IControl> item) = 0;
    /// <summary>
    /// Removes an ActiveX control stored at specified position from the collection.
    /// </summary>
    /// <param name="index">Index of a control to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes all controls from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
    /// <summary>
    /// Returns a control at the specified position.
    /// </summary>
    /// <param name="index">Index of a control.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IControl> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Creates and adds a new control to the collection.
    /// </summary>
    /// <param name="controlType">Type of a control to add.</param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <returns>Created control <see cref="Aspose::Slides::IControl">IControl</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IControl> AddControl(ControlType controlType, float x, float y, float width, float height) = 0;
    
};

} // namespace Slides
} // namespace Aspose


