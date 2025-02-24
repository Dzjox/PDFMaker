#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/ILineFillFormat.h>
#include <cstdint>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ChartSeries;
} // namespace Charts
class ColorFormat;
enum class FillType : int8_t;
class GradientFormat;
class IColorFormat;
class IDOMObject;
class IGradientFormat;
class ILineFillFormatEffectiveData;
class IPatternFormat;
class LineFillFormatEffectiveData;
class LineFillFormatImpl;
class LineFormat;
class LineFormatImpl;
enum class NullableBool : int8_t;
class PatternFormat;
class Shape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents properties for lines filling.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS LineFillFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::ILineFillFormat
{
    typedef LineFillFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::ILineFillFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::LineFormatImpl;
    friend class Aspose::Slides::Charts::ChartSeries;
    friend class Aspose::Slides::GradientFormat;
    friend class Aspose::Slides::LineFormat;
    friend class Aspose::Slides::PatternFormat;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the fill type.
    /// Read <see cref="Slides::FillType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::FillType get_FillType() override;
    /// <summary>
    /// Sets the fill type.
    /// Write <see cref="Slides::FillType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FillType(Aspose::Slides::FillType value) override;
    /// <summary>
    /// Determines whether the fill should be rotated with a shape.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_RotateWithShape() override;
    /// <summary>
    /// Determines whether the fill should be rotated with a shape.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RotateWithShape(NullableBool value) override;
    /// <summary>
    /// Returns the color of a solid fill.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_SolidFillColor() override;
    /// <summary>
    /// Returns the gradient fill format.
    /// Read-only <see cref="Aspose::Slides::IGradientFormat">IGradientFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGradientFormat> get_GradientFormat() override;
    /// <summary>
    /// Returns the pattern fill format.
    /// Read-only <see cref="Aspose::Slides::IPatternFormat">IPatternFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPatternFormat> get_PatternFormat() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<LineFillFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_MetroBlobRequired();
    
    System::Event<void()> FillTypeChanged;
    System::Event<void()> LineFillFormatChanged;
    
    ASPOSE_SLIDES_LOCAL_API LineFillFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LineFillFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<LineFillFormatEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ILineFillFormat> source);
    ASPOSE_SLIDES_LOCAL_API bool IsNotDefined();
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API void NoEventCopyDataFrom(System::SharedPtr<ILineFillFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ILineFillFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API void OnLineFillFormatChanged();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~LineFillFormat();
    
private:

    System::SharedPtr<ColorFormat> m_colorFormat;
    System::SharedPtr<Aspose::Slides::GradientFormat> m_gradientFormat;
    System::SharedPtr<Aspose::Slides::PatternFormat> m_patternFormat;
    
};

} // namespace Slides
} // namespace Aspose


