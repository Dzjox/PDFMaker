#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IGroupShapeLock.h>

#include "DOM/BaseShapeLock.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class GroupShape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Determines which operations are disabled on the parent GroupShape.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS GroupShapeLock : public Aspose::Slides::BaseShapeLock, public Aspose::Slides::IGroupShapeLock
{
    typedef GroupShapeLock ThisType;
    typedef Aspose::Slides::BaseShapeLock BaseType;
    typedef Aspose::Slides::IGroupShapeLock BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::GroupShape;
    /// @endcond
    
public:

    /// <summary>
    /// Determines whether adding this shape to a group is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_GroupingLocked() override;
    /// <summary>
    /// Determines whether adding this shape to a group is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_GroupingLocked(bool value) override;
    /// <summary>
    /// Determines whether splitting this groupshape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_UngroupingLocked() override;
    /// <summary>
    /// Determines whether splitting this groupshape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_UngroupingLocked(bool value) override;
    /// <summary>
    /// Determines whether selecting this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_SelectLocked() override;
    /// <summary>
    /// Determines whether selecting this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SelectLocked(bool value) override;
    /// <summary>
    /// Determines whether changing rotation angle of this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_RotationLocked() override;
    /// <summary>
    /// Determines whether changing rotation angle of this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RotationLocked(bool value) override;
    /// <summary>
    /// Determines whether shape have to preserve aspect ratio on resizing.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_AspectRatioLocked() override;
    /// <summary>
    /// Determines whether shape have to preserve aspect ratio on resizing.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AspectRatioLocked(bool value) override;
    /// <summary>
    /// Determines whether moving this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_PositionLocked() override;
    /// <summary>
    /// Determines whether moving this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PositionLocked(bool value) override;
    /// <summary>
    /// Determines whether resizing this shape is forbidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_SizeLocked() override;
    /// <summary>
    /// Determines whether resizing this shape is forbidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SizeLocked(bool value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API GroupShapeLock();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GroupShapeLock, CODEPORTING_ARGS());
    
private:

    static ASPOSE_SLIDES_LOCAL_API uint16_t Significant;
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


