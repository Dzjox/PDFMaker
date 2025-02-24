#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/Animation/IBehavior.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class IPoint;
class IPointCollection;
enum class PropertyCalcModeType;
enum class PropertyValueType;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent property effect behavior.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPropertyEffect : public virtual Aspose::Slides::Animation::IBehavior
{
    typedef IPropertyEffect ThisType;
    typedef Aspose::Slides::Animation::IBehavior BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the starting value of the animation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_From() = 0;
    /// <summary>
    /// Specifies the starting value of the animation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_From(System::String value) = 0;
    /// <summary>
    /// Specifies the ending value for the animation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_To() = 0;
    /// <summary>
    /// Specifies the ending value for the animation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_To(System::String value) = 0;
    /// <summary>
    /// Specifies a relative offset value for the animation with respect to its
    /// position before the start of the animation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_By() = 0;
    /// <summary>
    /// Specifies a relative offset value for the animation with respect to its
    /// position before the start of the animation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_By(System::String value) = 0;
    /// <summary>
    /// Specifies the type of a property value.
    /// Read <see cref="PropertyValueType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API PropertyValueType get_ValueType() = 0;
    /// <summary>
    /// Specifies the type of a property value.
    /// Write <see cref="PropertyValueType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ValueType(PropertyValueType value) = 0;
    /// <summary>
    /// Specifies the interpolation mode for the animation
    /// Read <see cref="PropertyCalcModeType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API PropertyCalcModeType get_CalcMode() = 0;
    /// <summary>
    /// Specifies the interpolation mode for the animation
    /// Write <see cref="PropertyCalcModeType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CalcMode(PropertyCalcModeType value) = 0;
    /// <summary>
    /// Specifies the points of the animation.
    /// Read <see cref="Aspose::Slides::Animation::IPointCollection">IPointCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPointCollection> get_Points() = 0;
    /// <summary>
    /// Specifies the points of the animation.
    /// Write <see cref="Aspose::Slides::Animation::IPointCollection">IPointCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Points(System::SharedPtr<IPointCollection> value) = 0;
    
    /// <summary>
    /// Returns a point of the animation at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPoint> get_Point(int32_t index) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


