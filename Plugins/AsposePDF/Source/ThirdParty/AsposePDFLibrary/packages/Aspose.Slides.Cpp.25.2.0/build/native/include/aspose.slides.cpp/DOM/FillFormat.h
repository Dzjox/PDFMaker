#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/IFillFormat.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Cells
{
namespace Render
{
namespace Chart2007
{
namespace ChartHelpers
{
class Column3DHelper;
} // namespace ChartHelpers
} // namespace Chart2007
} // namespace Render
} // namespace Cells
namespace Slides
{
class AutoShapeLayout;
class Background;
class BackgroundImpl;
class BasePortionFormat;
class BasePortionFormatImpl;
class BulletFormatEffectiveData;
class Cell;
class CellFormat;
class CellFormatImpl;
namespace Charts
{
class AggregatedDataPoint;
class AxisFormat;
class ChartDataPointDefaultStyle;
class DataLabelTextBase;
class Format;
class FormatImpl;
class TextElementBase;
class TitleElement;
} // namespace Charts
class ColorFormat;
namespace DOM
{
namespace Xlsx
{
namespace Charts
{
namespace Chart3DNew
{
class Chart3DBaseRenderer;
} // namespace Chart3DNew
} // namespace Charts
} // namespace Xlsx
} // namespace DOM
class EffectFormatImpl;
namespace Effects
{
class FillOverlay;
} // namespace Effects
class FillFormatEffectiveData;
class FillFormatImpl;
enum class FillType : int8_t;
class GeometryShapeLayout;
class GradientFormat;
class HandoutsView;
namespace HtmlIO
{
class HtmlDocumentSlidesVisitor;
} // namespace HtmlIO
class IColorFormat;
class IDOMObject;
class IFillFormatEffectiveData;
class IGradientFormat;
class IPatternFormat;
class IPictureFillFormat;
namespace Layout
{
class TableLayout;
} // namespace Layout
class LineFillFormat;
enum class NullableBool : int8_t;
namespace OdpSerialization
{
namespace PartParser
{
class ShapeOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class PatternFormat;
class PictureFillFormat;
class PortionFormatImpl;
namespace PptSerialization
{
class BackgroundPPTSerialization;
class GroupShapeMetroBlobSerialization;
class ShapePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class DrsShapePartParser;
class ShapePPTXSerialization;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
enum class PresetColor;
class Shape;
namespace SmartArt
{
class DiagramPoint;
class SmartArtShape;
} // namespace SmartArt
class TableFormat;
namespace Theme
{
class FillFormatCollection;
} // namespace Theme
class ThemeableFillFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a fill formatting options.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FillFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::IFillFormat
{
    typedef FillFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IFillFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::HandoutsView;
    friend class Aspose::Slides::HtmlIO::HtmlDocumentSlidesVisitor;
    friend class Aspose::Slides::AutoShapeLayout;
    friend class Aspose::Slides::GeometryShapeLayout;
    friend class Aspose::Slides::BulletFormatEffectiveData;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::FillFormatEffectiveData;
    friend class Aspose::Slides::Layout::TableLayout;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DBaseRenderer;
    friend class Aspose::Slides::BackgroundImpl;
    friend class Aspose::Slides::TableFormat;
    friend class Aspose::Slides::Charts::AggregatedDataPoint;
    friend class Aspose::Slides::Charts::ChartDataPointDefaultStyle;
    friend class Aspose::Slides::BasePortionFormat;
    friend class Aspose::Slides::BasePortionFormatImpl;
    friend class Aspose::Slides::Charts::Format;
    friend class Aspose::Slides::EffectFormatImpl;
    friend class Aspose::Slides::LineFillFormat;
    friend class Aspose::Slides::PortionFormatImpl;
    friend class Aspose::Slides::CellFormatImpl;
    friend class Aspose::Slides::CellFormat;
    friend class Aspose::Slides::Charts::AxisFormat;
    friend class Aspose::Slides::Charts::FormatImpl;
    friend class Aspose::Slides::Cell;
    friend class Aspose::Slides::ThemeableFillFormat;
    friend class Aspose::Slides::Theme::FillFormatCollection;
    friend class Aspose::Slides::Effects::FillOverlay;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpSerialization;
    friend class Aspose::Slides::PptSerialization::GroupShapeMetroBlobSerialization;
    friend class Aspose::Slides::Background;
    friend class Aspose::Slides::SmartArt::SmartArtShape;
    friend class Aspose::Slides::Charts::TextElementBase;
    friend class Aspose::Slides::Charts::DataLabelTextBase;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::Column3DHelper;
    friend class Aspose::Slides::Charts::TitleElement;
    friend class Aspose::Slides::PptxSerialization::PartParser::ShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptSerialization::BackgroundPPTSerialization;
    friend class Aspose::Slides::PptSerialization::ShapePPTSerialization;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the type of filling.
    /// Read <see cref="Slides::FillType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::FillType get_FillType() override;
    /// <summary>
    /// Sets the type of filling.
    /// Write <see cref="Slides::FillType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FillType(Aspose::Slides::FillType value) override;
    /// <summary>
    /// Returns the fill color.
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
    /// <summary>
    /// Returns the picture fill format.
    /// Read-only <see cref="Aspose::Slides::IPictureFillFormat">IPictureFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPictureFillFormat> get_PictureFillFormat() override;
    /// <summary>
    /// Determines whether the fill should be rotated with shape.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_RotateWithShape() override;
    /// <summary>
    /// Determines whether the fill should be rotated with shape.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RotateWithShape(NullableBool value) override;
    
    /// <summary>
    /// Gets effective fill formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IFillFormatEffectiveData">IFillFormatEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates getting shape's effective fill format properties.
    /// <code>
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto effectiveFillFormat = pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)->get_FillFormat()->GetEffective();
    /// 
    /// Console::WriteLine(String(u"Type: ") + ObjectExt::ToString(effectiveFillFormat->get_FillType()));
    /// switch (effectiveFillFormat->get_FillType())
    /// {
    ///     case FillType::Solid:
    ///         Console::WriteLine(String(u"Fill color: ") + effectiveFillFormat->get_SolidFillColor());
    ///         break;
    /// 
    ///     case FillType::Pattern:
    ///         Console::WriteLine(String(u"Pattern style: ") + ObjectExt::ToString(effectiveFillFormat->get_PatternFormat()->get_PatternStyle()));
    ///         Console::WriteLine(String(u"Fore color: ") + effectiveFillFormat->get_PatternFormat()->get_ForeColor());
    ///         Console::WriteLine(String(u"Back color: ") + effectiveFillFormat->get_PatternFormat()->get_BackColor());
    ///         break;
    /// 
    ///     case FillType::Gradient:
    ///         Console::WriteLine(String(u"Gradient direction: ") + ObjectExt::ToString(effectiveFillFormat->get_GradientFormat()->get_GradientDirection()));
    ///         Console::WriteLine(String(u"Gradient stops count: ") + effectiveFillFormat->get_GradientFormat()->get_GradientStops()->get_Count());
    ///         break;
    /// 
    ///     case FillType::Picture:
    ///         Console::WriteLine(String(u"Picture width: ") + effectiveFillFormat->get_PictureFillFormat()->get_Picture()->get_Image()->get_Width());
    ///         Console::WriteLine(String(u"Picture height: ") + effectiveFillFormat->get_PictureFillFormat()->get_Picture()->get_Image()->get_Height());
    ///         break;
    /// 
    ///     default:
    ///         break;
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormatEffectiveData> GetEffective() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FillFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_MetroBlobRequired();
    ASPOSE_SLIDES_LOCAL_API bool get_IsNotDefined();
    
    static const ASPOSE_SLIDES_LOCAL_API PresetColor DefaultPresetColor;
    
    System::Event<void()> FillFormatChanged;
    
    ASPOSE_SLIDES_LOCAL_API FillFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FillFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IFillFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IFillFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FillFormat> Clone();
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API void Reset2();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FillFormatEffectiveData> GetEffectiveInternal();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~FillFormat();
    
private:

    System::SharedPtr<Aspose::Slides::PictureFillFormat> m_pictureFillFormat;
    System::SharedPtr<Aspose::Slides::GradientFormat> m_gradientFormat;
    System::SharedPtr<Aspose::Slides::PatternFormat> m_patternFormat;
    System::SharedPtr<ColorFormat> m_colorFormat;
    System::SharedPtr<FillFormatEffectiveData> m_effective;
    
    ASPOSE_SLIDES_LOCAL_API void OnFillFormatChanged();
    
};

} // namespace Slides
} // namespace Aspose


