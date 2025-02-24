#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IAutoShapeLock.h>
#include <cstdint>

#include "DOM/BaseShapeLock.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AutoShape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Determines which operations are disabled on the parent AutoshapeEx.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS AutoShapeLock : public Aspose::Slides::BaseShapeLock, public Aspose::Slides::IAutoShapeLock
{
    typedef AutoShapeLock ThisType;
    typedef Aspose::Slides::BaseShapeLock BaseType;
    typedef Aspose::Slides::IAutoShapeLock BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::AutoShape;
    /// @endcond
    
public:

    /// <summary>
    /// Determines whether an adding this shape to a group is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_GroupingLocked() override;
    /// <summary>
    /// Determines whether an adding this shape to a group is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_GroupingLocked(bool value) override;
    /// <summary>
    /// Determines whether a selecting this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_SelectLocked() override;
    /// <summary>
    /// Determines whether a selecting this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SelectLocked(bool value) override;
    /// <summary>
    /// Determines whether a changing rotation angle of this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_RotateLocked() override;
    /// <summary>
    /// Determines whether a changing rotation angle of this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RotateLocked(bool value) override;
    /// <summary>
    /// Determines whether a shape have to preserve aspect ratio on resizing.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_AspectRatioLocked() override;
    /// <summary>
    /// Determines whether a shape have to preserve aspect ratio on resizing.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AspectRatioLocked(bool value) override;
    /// <summary>
    /// Determines whether a moving this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_PositionLocked() override;
    /// <summary>
    /// Determines whether a moving this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PositionLocked(bool value) override;
    /// <summary>
    /// Determines whether a resizing this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_SizeLocked() override;
    /// <summary>
    /// Determines whether a resizing this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SizeLocked(bool value) override;
    /// <summary>
    /// Determines whether a direct changing of contour of this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_EditPointsLocked() override;
    /// <summary>
    /// Determines whether a direct changing of contour of this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EditPointsLocked(bool value) override;
    /// <summary>
    /// Determines whether a changing adjust values is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_AdjustHandlesLocked() override;
    /// <summary>
    /// Determines whether a changing adjust values is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AdjustHandlesLocked(bool value) override;
    /// <summary>
    /// Determines whether a changing arrowheads is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ArrowheadsLocked() override;
    /// <summary>
    /// Determines whether a changing arrowheads is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ArrowheadsLocked(bool value) override;
    /// <summary>
    /// Determines whether a changing of a shape type is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShapeTypeLocked() override;
    /// <summary>
    /// Determines whether a changing of a shape type is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShapeTypeLocked(bool value) override;
    /// <summary>
    /// Determines whether an editing of text is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_TextLocked() override;
    /// <summary>
    /// Determines whether an editing of text is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TextLocked(bool value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API AutoShapeLock();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AutoShapeLock, CODEPORTING_ARGS());
    
private:

    static ASPOSE_SLIDES_LOCAL_API uint16_t Significant;
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


