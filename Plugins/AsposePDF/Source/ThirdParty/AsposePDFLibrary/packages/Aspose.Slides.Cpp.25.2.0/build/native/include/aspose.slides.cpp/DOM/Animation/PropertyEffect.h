#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Animation/IPropertyEffect.h>

#include "DOM/Animation/Behavior.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class IPoint;
class IPointCollection;
class PointCollection;
enum class PropertyCalcModeType;
enum class PropertyValueType;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent property effect behavior.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PropertyEffect : public Aspose::Slides::Animation::Behavior, public Aspose::Slides::Animation::IPropertyEffect
{
    typedef PropertyEffect ThisType;
    typedef Aspose::Slides::Animation::Behavior BaseType;
    typedef Aspose::Slides::Animation::IPropertyEffect BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Specifies the starting value of the animation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_From() override;
    /// <summary>
    /// Specifies the starting value of the animation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_From(System::String value) override;
    /// <summary>
    /// Specifies the ending value for the animation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_To() override;
    /// <summary>
    /// Specifies the ending value for the animation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_To(System::String value) override;
    /// <summary>
    /// Specifies a relative offset value for the animation with respect to its
    /// position before the start of the animation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_By() override;
    /// <summary>
    /// Specifies a relative offset value for the animation with respect to its
    /// position before the start of the animation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_By(System::String value) override;
    /// <summary>
    /// Specifies the type of a property value.
    /// Read <see cref="PropertyValueType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API PropertyValueType get_ValueType() override;
    /// <summary>
    /// Specifies the type of a property value.
    /// Write <see cref="PropertyValueType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ValueType(PropertyValueType value) override;
    /// <summary>
    /// Specifies the interpolation mode for the animation
    /// Read <see cref="PropertyCalcModeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API PropertyCalcModeType get_CalcMode() override;
    /// <summary>
    /// Specifies the interpolation mode for the animation
    /// Write <see cref="PropertyCalcModeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CalcMode(PropertyCalcModeType value) override;
    /// <summary>
    /// Specifies the points of the animation.
    /// Read <see cref="Aspose::Slides::Animation::IPointCollection">IPointCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPointCollection> get_Points() override;
    /// <summary>
    /// Specifies the points of the animation.
    /// Write <see cref="Aspose::Slides::Animation::IPointCollection">IPointCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Points(System::SharedPtr<IPointCollection> value) override;
    
    /// <summary>
    /// Returns a point of the animation at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPoint> get_Point(int32_t index) override;
    
    ASPOSE_SLIDES_SHARED_API PropertyEffect();
    
protected:

    /// @cond
    System::String m_from, m_to, m_by;
    System::SharedPtr<PointCollection> m_animPts;
    PropertyCalcModeType m_calcMode;
    PropertyValueType m_typeVal;
    
    ASPOSE_SLIDES_LOCAL_API bool CheckValue(System::SharedPtr<System::Object> val);
    ASPOSE_SLIDES_LOCAL_API bool CheckForCompatibility();
    /// @endcond
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


