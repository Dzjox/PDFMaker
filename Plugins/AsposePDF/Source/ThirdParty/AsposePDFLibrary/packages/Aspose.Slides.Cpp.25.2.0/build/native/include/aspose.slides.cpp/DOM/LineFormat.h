#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <system/array.h>
#include <DOM/ILineFormat.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BasePortionFormat;
class BasePortionFormatImpl;
class Cell;
class CellFormat;
class CellFormatImpl;
namespace Charts
{
class AggregatedDataPoint;
class AxisFormat;
class Chart;
class ChartDataPointDefaultStyle;
class ChartLinesFormat;
class DataLabelTextBase;
class Format;
class FormatImpl;
class MarkerElement;
class TitleElement;
} // namespace Charts
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
class GeometryShape;
class GeometryShapeLayout;
class IDOMObject;
class ILineFillFormat;
class ILineFormatEffectiveData;
class ISketchFormat;
enum class LineAlignment : int8_t;
enum class LineArrowheadLength : int8_t;
enum class LineArrowheadStyle : int8_t;
enum class LineArrowheadWidth : int8_t;
enum class LineCapStyle : int8_t;
enum class LineDashStyle : int8_t;
class LineFillFormat;
class LineFormatEffectiveData;
class LineFormatImpl;
enum class LineJoinStyle : int8_t;
enum class LineStyle : int8_t;
class MasterThemeTemplate;
class OleObjectFrame;
namespace PptSerialization
{
class GroupShapeMetroBlobSerialization;
class LineFormatPPTSerialization;
class PptGroupShapeDeserializationContext;
class ShapePPTSerialization;
class TablePPTSerialization;
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
class Shape;
class SketchFormat;
namespace SmartArt
{
class DiagramPoint;
class SmartArt;
class SmartArtShape;
} // namespace SmartArt
class SummaryZoomFrame;
namespace Theme
{
class LineFormatCollection;
} // namespace Theme
class ThemeableLineFormat;
class ZoomObject;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents format of a line.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS LineFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::ILineFormat
{
    typedef LineFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::ILineFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ZoomObject;
    friend class Aspose::Slides::SummaryZoomFrame;
    friend class Aspose::Slides::GeometryShapeLayout;
    friend class Aspose::Slides::GeometryShape;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::LineFormatEffectiveData;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DBaseRenderer;
    friend class Aspose::Slides::Charts::AggregatedDataPoint;
    friend class Aspose::Slides::Charts::ChartDataPointDefaultStyle;
    friend class Aspose::Slides::BasePortionFormat;
    friend class Aspose::Slides::BasePortionFormatImpl;
    friend class Aspose::Slides::Charts::Format;
    friend class Aspose::Slides::CellFormatImpl;
    friend class Aspose::Slides::CellFormat;
    friend class Aspose::Slides::Charts::AxisFormat;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::Charts::ChartLinesFormat;
    friend class Aspose::Slides::Charts::FormatImpl;
    friend class Aspose::Slides::Cell;
    friend class Aspose::Slides::ThemeableLineFormat;
    friend class Aspose::Slides::Theme::LineFormatCollection;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeDeserializationContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::PptSerialization::GroupShapeMetroBlobSerialization;
    friend class Aspose::Slides::OleObjectFrame;
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::SmartArt::SmartArtShape;
    friend class Aspose::Slides::Charts::DataLabelTextBase;
    friend class Aspose::Slides::Charts::MarkerElement;
    friend class Aspose::Slides::Charts::TitleElement;
    friend class Aspose::Slides::PptxSerialization::PartParser::ShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptSerialization::ShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::LineFormatPPTSerialization;
    friend class Aspose::Slides::PptSerialization::TablePPTSerialization;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    friend class Aspose::Slides::MasterThemeTemplate;
    /// @endcond
    
public:

    /// <summary>
    /// Returns true if line format is not defined (as just created, default).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsFormatNotDefined() override;
    /// <summary>
    /// Returns the fill format of a line.
    /// Read-only <see cref="Aspose::Slides::ILineFillFormat">ILineFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFillFormat> get_FillFormat() override;
    /// <summary>
    /// Returns the sketch format of a line.
    /// Read-only <see cref="Aspose::Slides::ILineFillFormat">ILineFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISketchFormat> get_SketchFormat() override;
    /// <summary>
    /// Returns the width of a line.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Width() override;
    /// <summary>
    /// Sets the width of a line.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Width(double value) override;
    /// <summary>
    /// Returns the line dash style.
    /// Read <see cref="LineDashStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineDashStyle get_DashStyle() override;
    /// <summary>
    /// Sets the line dash style.
    /// Write <see cref="LineDashStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DashStyle(LineDashStyle value) override;
    /// <summary>
    /// Returns the custom dash pattern.
    /// Read <see cref="float"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<float> get_CustomDashPattern() override;
    /// <summary>
    /// Sets the custom dash pattern.
    /// Write <see cref="float"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CustomDashPattern(System::ArrayPtr<float> value) override;
    /// <summary>
    /// Returns the line cap style.
    /// Read <see cref="LineCapStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineCapStyle get_CapStyle() override;
    /// <summary>
    /// Sets the line cap style.
    /// Write <see cref="LineCapStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CapStyle(LineCapStyle value) override;
    /// <summary>
    /// Returns the line style.
    /// Read <see cref="LineStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineStyle get_Style() override;
    /// <summary>
    /// Sets the line style.
    /// Write <see cref="LineStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Style(LineStyle value) override;
    /// <summary>
    /// Returns the line alignment.
    /// Read <see cref="LineAlignment"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineAlignment get_Alignment() override;
    /// <summary>
    /// Sets the line alignment.
    /// Write <see cref="LineAlignment"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Alignment(LineAlignment value) override;
    /// <summary>
    /// Returns the lines join style.
    /// Read <see cref="LineJoinStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineJoinStyle get_JoinStyle() override;
    /// <summary>
    /// Sets the lines join style.
    /// Write <see cref="LineJoinStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_JoinStyle(LineJoinStyle value) override;
    /// <summary>
    /// Returns the miter limit of a line.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_MiterLimit() override;
    /// <summary>
    /// Sets the miter limit of a line.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MiterLimit(float value) override;
    /// <summary>
    /// Returns the arrowhead style at the beginning of a line.
    /// Read <see cref="LineArrowheadStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineArrowheadStyle get_BeginArrowheadStyle() override;
    /// <summary>
    /// Sets the arrowhead style at the beginning of a line.
    /// Write <see cref="LineArrowheadStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BeginArrowheadStyle(LineArrowheadStyle value) override;
    /// <summary>
    /// Returns the arrowhead style at the end of a line.
    /// Read <see cref="LineArrowheadStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineArrowheadStyle get_EndArrowheadStyle() override;
    /// <summary>
    /// Sets the arrowhead style at the end of a line.
    /// Write <see cref="LineArrowheadStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EndArrowheadStyle(LineArrowheadStyle value) override;
    /// <summary>
    /// Returns the arrowhead width at the beginning of a line.
    /// Read <see cref="LineArrowheadWidth"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineArrowheadWidth get_BeginArrowheadWidth() override;
    /// <summary>
    /// Sets the arrowhead width at the beginning of a line.
    /// Write <see cref="LineArrowheadWidth"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BeginArrowheadWidth(LineArrowheadWidth value) override;
    /// <summary>
    /// Returns the arrowhead width at the end of a line.
    /// Read <see cref="LineArrowheadWidth"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineArrowheadWidth get_EndArrowheadWidth() override;
    /// <summary>
    /// Sets the arrowhead width at the end of a line.
    /// Write <see cref="LineArrowheadWidth"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EndArrowheadWidth(LineArrowheadWidth value) override;
    /// <summary>
    /// Returns the arrowhead length at the beginning of a line.
    /// Read <see cref="LineArrowheadLength"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineArrowheadLength get_BeginArrowheadLength() override;
    /// <summary>
    /// Sets the arrowhead length at the beginning of a line.
    /// Write <see cref="LineArrowheadLength"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BeginArrowheadLength(LineArrowheadLength value) override;
    /// <summary>
    /// Returns the arrowhead length at the end of a line.
    /// Read <see cref="LineArrowheadLength"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineArrowheadLength get_EndArrowheadLength() override;
    /// <summary>
    /// Sets the arrowhead length at the end of a line.
    /// Write <see cref="LineArrowheadLength"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EndArrowheadLength(LineArrowheadLength value) override;
    
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Determines whether the two LineFormat instances are equal.
    /// </summary>
    /// <param name="lineFormat">The LineFormat to compare with the current LineFormat.</param>
    /// <returns>
    /// <b>true</b> if the specified LineFormat is equal to the current LineFormat; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ILineFormat> lineFormat) override;
    /// <summary>
    /// Gets effective line formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates getting shape's effective line format properties.
    /// <code>
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto effectiveLineFormat = pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)->get_LineFormat()->GetEffective();
    /// 
    /// Console::WriteLine(String(u"Style: ") + ObjectExt::ToString(effectiveLineFormat->get_Style()));
    /// Console::WriteLine(String(u"Width: ") + effectiveLineFormat->get_Width());
    /// Console::WriteLine(String(u"Fill type: ") + ObjectExt::ToString(effectiveLineFormat->get_FillFormat()->get_FillType()));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormatEffectiveData> GetEffective() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<LineFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_MetroBlobRequired();
    
    static const ASPOSE_SLIDES_LOCAL_API double DEFAULT_WIDTH_VALUE;
    
    System::Event<void(System::SharedPtr<LineFormat>)> LineFormatChanged;
    System::Event<void()> SketchFormatChanged;
    
    ASPOSE_SLIDES_LOCAL_API LineFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LineFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ILineFormat> source);
    ASPOSE_SLIDES_LOCAL_API void NoEventCopyDataFrom(System::SharedPtr<ILineFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ILineFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<LineFormat> Clone();
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API void Reset2();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<LineFormatEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<Shape> parentImmediate);
    ASPOSE_SLIDES_LOCAL_API void ClearEffective();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~LineFormat();
    
private:

    System::SharedPtr<LineFillFormat> m_lineFillFormat;
    System::SharedPtr<Aspose::Slides::SketchFormat> m_sketchFormat;
    System::SharedPtr<LineFormatEffectiveData> m_effective;
    
    ASPOSE_SLIDES_LOCAL_API void OnLineFormatChanged();
    ASPOSE_SLIDES_LOCAL_API void OnSketchFormatChanged();
    
};

} // namespace Slides
} // namespace Aspose


