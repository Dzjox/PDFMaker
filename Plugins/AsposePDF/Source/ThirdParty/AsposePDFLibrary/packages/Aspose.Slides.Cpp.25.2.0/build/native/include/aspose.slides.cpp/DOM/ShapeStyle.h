#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IShapeStyle.h>

#include "DOM/Shape.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ChartDataPointDefaultStyle;
class ChartDefaultStyle;
} // namespace Charts
class ColorFormat;
enum class FontCollectionIndex : uint8_t;
class GeometryShape;
class IBaseSlide;
class IColorFormat;
namespace PptxSerialization
{
namespace PartParser
{
class DrsShapePartParser;
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represent shape's style reference.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ShapeStyle : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Shape>>, public Aspose::Slides::IShapeStyle
{
    typedef ShapeStyle ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Shape>> BaseType;
    typedef Aspose::Slides::IShapeStyle BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::GeometryShape;
    friend class Aspose::Slides::Charts::ChartDefaultStyle;
    friend class Aspose::Slides::Charts::ChartDataPointDefaultStyle;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a shape's outline color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_LineColor() override;
    /// <summary>
    /// Returns line's column index in a style matrix.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint16_t get_LineStyleIndex() override;
    /// <summary>
    /// Sets line's column index in a style matrix.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LineStyleIndex(uint16_t value) override;
    /// <summary>
    /// Returns a shape's fill color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_FillColor() override;
    /// <summary>
    /// Returns shape's fill column index in style matrices.
    /// 0 means no fill,
    /// positive value - index in theme's fill styles,
    /// negative value - index in theme's background styles.
    /// Read <see cref="int16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int16_t get_FillStyleIndex() override;
    /// <summary>
    /// Sets shape's fill column index in style matrices.
    /// 0 means no fill,
    /// positive value - index in theme's fill styles,
    /// negative value - index in theme's background styles.
    /// Write <see cref="int16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FillStyleIndex(int16_t value) override;
    /// <summary>
    /// Returns a shape's effect color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_EffectColor() override;
    /// <summary>
    /// Returns shape's effect column index in a style matrix.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_EffectStyleIndex() override;
    /// <summary>
    /// Sets shape's effect column index in a style matrix.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EffectStyleIndex(uint32_t value) override;
    /// <summary>
    /// Returns a shape's font color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_FontColor() override;
    /// <summary>
    /// Returns shape's font index in a font collection.
    /// Read <see cref="Slides::FontCollectionIndex"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::FontCollectionIndex get_FontCollectionIndex() override;
    /// <summary>
    /// Sets shape's font index in a font collection.
    /// Write <see cref="Slides::FontCollectionIndex"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FontCollectionIndex(Aspose::Slides::FontCollectionIndex value) override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IBaseSlide> get_Slide();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    ASPOSE_SLIDES_LOCAL_API ShapeStyle(System::SharedPtr<Shape> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ShapeStyle, CODEPORTING_ARGS(System::SharedPtr<Shape> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ShapeStyle> Clone();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IShapeStyle> source);
    ASPOSE_SLIDES_LOCAL_API void Clear();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ShapeStyle();
    
private:

    uint32_t m_version;
    System::SharedPtr<ColorFormat> m_lineColor;
    System::SharedPtr<ColorFormat> m_fillColor;
    System::SharedPtr<ColorFormat> m_effectColor;
    System::SharedPtr<ColorFormat> m_fontColor;
    uint32_t m_lineIndex;
    uint32_t m_fillIndex;
    uint32_t m_effectIndex;
    Aspose::Slides::FontCollectionIndex m_fontIndex;
    
    ASPOSE_SLIDES_LOCAL_API void Changed();
    
};

} // namespace Slides
} // namespace Aspose


