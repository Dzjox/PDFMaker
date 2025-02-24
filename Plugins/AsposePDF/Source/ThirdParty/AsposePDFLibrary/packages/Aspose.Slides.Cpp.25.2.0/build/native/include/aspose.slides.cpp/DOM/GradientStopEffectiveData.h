#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IGradientStopEffectiveData.h>
#include <cstdint>

#include "DOM/PVI/IEffectiveData.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ColorEffectiveData;
class ColorFormat;
class GradientFormatEffectiveData;
class GradientStopCollectionEffectiveData;
class IBaseSlide;
namespace PptSerialization
{
class GradientFormatPPTSerialization;
} // namespace PptSerialization
class StyleColorEffectiveData;
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
/// Immutable object which represents a gradient stop.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS GradientStopEffectiveData : public Aspose::Slides::IEffectiveData, public Aspose::Slides::IGradientStopEffectiveData
{
    typedef GradientStopEffectiveData ThisType;
    typedef Aspose::Slides::IEffectiveData BaseType;
    typedef Aspose::Slides::IGradientStopEffectiveData BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::GradientFormatEffectiveData;
    friend class Aspose::Slides::GradientStopCollectionEffectiveData;
    friend class Aspose::Slides::PptSerialization::GradientFormatPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the position (0..1) of a gradient stop.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Position() override;
    /// <summary>
    /// Returns the color of a gradient stop.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::Color get_Color() override;
    
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::GradientStopEffectiveData">GradientStopEffectiveData</see> is equal to the current <see cref="Aspose::Slides::GradientStopEffectiveData">GradientStopEffectiveData</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::GradientStopEffectiveData">GradientStopEffectiveData</see> to compare.</param>
    /// <returns>true if objects are equal; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    System::SharedPtr<ColorEffectiveData> m_color;
    
    ASPOSE_SLIDES_LOCAL_API GradientStopEffectiveData(float position, System::SharedPtr<ColorFormat> color);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GradientStopEffectiveData, CODEPORTING_ARGS(float position, System::SharedPtr<ColorFormat> color));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API GradientStopEffectiveData(System::SharedPtr<GradientStopEffectiveData> source);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GradientStopEffectiveData, CODEPORTING_ARGS(System::SharedPtr<GradientStopEffectiveData> source));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void ResolveStyledColors(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<StyleColorEffectiveData> styleColor);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~GradientStopEffectiveData();
    
private:

    float m_position;
    
};

} // namespace Slides
} // namespace Aspose


