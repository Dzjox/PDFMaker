#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGeometryShape.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IAutoShapeLock;
class ITextFrame;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an AutoShape.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAutoShape : public virtual Aspose::Slides::IGeometryShape
{
    typedef IAutoShape ThisType;
    typedef Aspose::Slides::IGeometryShape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns AutoShape's locks.
    /// Read-only <see cref="Aspose::Slides::IAutoShapeLock">IAutoShapeLock</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAutoShapeLock> get_AutoShapeLock() = 0;
    /// <summary>
    /// Returns TextFrame object for the AutoShape.
    /// Read-only <see cref="Aspose::Slides::ITextFrame">ITextFrame</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextFrame> get_TextFrame() = 0;
    /// <summary>
    /// Determines whether this autoshape should be filled with slide's background fill instead of specified by style or fill format.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_UseBackgroundFill() = 0;
    /// <summary>
    /// Determines whether this autoshape should be filled with slide's background fill instead of specified by style or fill format.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_UseBackgroundFill(bool value) = 0;
    /// <summary>
    /// Specifies if the shape is a text box.
    /// </summary>
    /// <remarks>
    /// If shape is not specified to be a text box does not mean that it cannot have text attached to it. A text
    /// box is merely a specialized shape with specific properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsTextBox() = 0;
    
    /// <summary>
    /// Adds a new TextFrame to a shape.
    /// If shape already has TextFrame then simply changes its text.
    /// </summary>
    /// <param name="text">Default text for a new TextFrame.</param>
    /// <returns>
    /// New <see cref="Aspose::Slides::ITextFrame">ITextFrame</see> object.
    /// </returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextFrame> AddTextFrame(System::String text) = 0;
    
};

} // namespace Slides
} // namespace Aspose


