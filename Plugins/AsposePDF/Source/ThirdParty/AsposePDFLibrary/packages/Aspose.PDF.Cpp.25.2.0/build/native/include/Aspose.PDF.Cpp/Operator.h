#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Pdf.Exceptions;

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class DefaultAppearance;
class FreeTextAnnotation;
class WatermarkAnnotation;
} // namespace Annotations
class Artifact;
class ArtifactCollection;
class ContentsAppender;
class Document;
namespace Engine
{
namespace CommonData
{
namespace PageContent
{
namespace Operators
{
namespace ClippingPathOperators
{
class ModifyCurrentClippingPath;
class ModifyCurrentClippingPathEO;
} // namespace ClippingPathOperators
namespace Color
{
class SetAdvancedNonstrokingColor;
class SetAdvancedStrokingColor;
class SetCMYKNonstrokingColor;
class SetCMYKStrokingColor;
class SetColor;
class SetColorSpaceNonstroking;
class SetColorSpaceStroking;
class SetGrayNonstrokingColor;
class SetGrayStrokingColor;
class SetNonstrokingColor;
class SetRGBNonstrokingColor;
class SetRGBStrokingColor;
class SetStrokingColor;
} // namespace Color
namespace Commands
{
class CommandsList;
class ICommand;
class PageOperator;
} // namespace Commands
namespace Compatibility
{
class BeginCompatibilitySection;
class EndCompatibilitySection;
} // namespace Compatibility
namespace GraphicStateOperators
{
class ModifyCurrentTransformationMatrix;
class RestoreGraphicState;
class SaveGraphicState;
class SetColourRenderingIntent;
class SetFlatnessTolerance;
class SetLineCapStyle;
class SetLineDashPattern;
class SetLineJoinStyle;
class SetLineWidth;
class SetMiterLimit;
class SetSpecifiedParameters;
} // namespace GraphicStateOperators
namespace InlineImages
{
class BeginImageData;
class BeginInlineObject;
class EndInlineObject;
} // namespace InlineImages
namespace MarkedContent
{
class BeginMarkedContent;
class BeginMarkedContentWithProperties;
class DesignateMarkedContent;
class DesignateMarkedContentWithProperties;
class EndMarkedContent;
} // namespace MarkedContent
namespace PathConstructionOperators
{
class AppendCubicBezierCurve;
class AppendCubicBezierCurve1;
class AppendCubicBezierCurve2;
class AppendRectangle;
class AppendStreightLineSegment;
class BeginNewSubpath;
class CloseCurrentSubpath;
} // namespace PathConstructionOperators
namespace PathPaintingOperators
{
class CloseAndStrokePath;
class CloseFillAndStrokePath;
class CloseFillAndStrokePathEO;
class EndPath;
class FillAndStrokePath;
class FillAndStrokePathEO;
class FillPath;
class FillPathEO;
class StrokePath;
} // namespace PathPaintingOperators
namespace ShadingPatterns
{
class PaintShapeAndColorShading;
} // namespace ShadingPatterns
namespace TextObjectsOperators
{
class BeginText;
class EndText;
} // namespace TextObjectsOperators
namespace TextPositioningOperators
{
class MoveToNextLine;
class MoveToNextLineAndSetLeading;
class MoveToNextLineDefault;
class SetTextMatrix;
} // namespace TextPositioningOperators
namespace TextShowing
{
class ShowTextOnTheNextLine;
class ShowTextString;
class ShowTextWithParameters;
class ShowTextWithPositions;
} // namespace TextShowing
namespace TextStateOperators
{
class SetCharacterSpasing;
class SetHorizontalScaling;
class SetTextFont;
class SetTextLeading;
class SetTextRendringMode;
class SetTextRise;
class SetWordSpacing;
} // namespace TextStateOperators
namespace Type3Fonts
{
class SetWidthAndBoundingInformation;
class SetWidthInformation;
} // namespace Type3Fonts
namespace XObjects
{
class PaintXObject;
} // namespace XObjects
} // namespace Operators
} // namespace PageContent
namespace Text
{
namespace Fonts
{
namespace Utilities
{
class DocumentCIDType2FontContentUpdater;
class DocumentFontsSubsetter;
class FontUtilities;
} // namespace Utilities
} // namespace Fonts
namespace Segmenting
{
class ArrayTextSegment;
class PhysicalTextSegment;
class StringTextSegment;
class TextSegmentBuilder;
} // namespace Segmenting
class Subpath;
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfArray;
class IPdfBoolean;
class IPdfDictionary;
class IPdfName;
class IPdfNumber;
class IPdfPrimitive;
class IPdfString;
class ITrailerable;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class ConversionFontData;
namespace ConvertHelpers
{
class LowLevelFontSubstitutor;
} // namespace ConvertHelpers
namespace PdfA
{
class PdfAOperatorValidator;
} // namespace PdfA
class PdfAConvertStrategyBase;
class PdfConvertStrategy;
class PdfXConvertStrategy;
class SearchablePdfConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
namespace Presentation
{
namespace Primitives
{
enum class LineCap;
enum class LineJoin;
} // namespace Primitives
} // namespace Presentation
} // namespace Engine
namespace Facades
{
class BDCProperties;
class Form;
class LogicalStructureConcatenation;
class PdfContentEditor;
class TextProperties;
} // namespace Facades
namespace Forms
{
class ComboBoxField;
class Form;
class TextBoxField;
class TextModel;
} // namespace Forms
class ImagePlacementAbsorber;
namespace Interchange
{
class ContentSequenceMarkedGroup;
} // namespace Interchange
class IOperatorSelector;
class LayerProcessor;
namespace LogicalStructure
{
class MCRElement;
class StructureElement;
} // namespace LogicalStructure
class Matrix;
class OperatorCollection;
namespace Operators
{
class BasicSetColorAndPatternOperator;
class BasicSetColorOperator;
class BDC;
class BI;
class BlockTextOperator;
class BMC;
class BT;
class BX;
class Clip;
class ClosePath;
class ClosePathEOFillStroke;
class ClosePathFillStroke;
class ClosePathStroke;
class ConcatenateMatrix;
class CurveTo;
class CurveTo1;
class CurveTo2;
class Do;
class DP;
class EI;
class EMC;
class EndPath;
class EOClip;
class EOFill;
class EOFillStroke;
class ET;
class EX;
class Fill;
class FillStroke;
class GlyphPosition;
class GRestore;
class GS;
class GSave;
class ID;
class LineTo;
class MoveTextPosition;
class MoveTextPositionSetLeading;
class MoveTo;
class MoveToNextLine;
class MoveToNextLineShowText;
class MP;
class ObsoleteFill;
class Re;
class SelectFont;
class SetAdvancedColor;
class SetAdvancedColorStroke;
class SetCharacterSpacing;
class SetCharWidth;
class SetCharWidthBoundingBox;
class SetCMYKColor;
class SetCMYKColorStroke;
class SetColor;
class SetColorOperator;
class SetColorRenderingIntent;
class SetColorSpace;
class SetColorSpaceStroke;
class SetColorStroke;
class SetDash;
class SetFlat;
class SetGlyphsPositionShowText;
class SetGray;
class SetGrayStroke;
class SetHorizontalTextScaling;
class SetLineCap;
class SetLineJoin;
class SetLineWidth;
class SetMiterLimit;
class SetRGBColor;
class SetRGBColorStroke;
class SetSpacingMoveToNextLineShowText;
class SetTextLeading;
class SetTextMatrix;
class SetTextRenderingMode;
class SetTextRise;
class SetWordSpacing;
class ShFill;
class ShowText;
class Stroke;
class TextOperator;
class TextPlaceOperator;
class TextShowOperator;
class TextStateOperator;
} // namespace Operators
class Page;
class PdfToApsConverter;
class Point;
class Stamp;
namespace Structure
{
class FigureElement;
class TextElement;
} // namespace Structure
class Table;
namespace Tagged
{
namespace Helpers
{
class StructureElementUtil;
} // namespace Helpers
class TaggedContext;
} // namespace Tagged
namespace Tests
{
namespace Collections
{
class OperatorCollectionTests;
} // namespace Collections
namespace Facades
{
class PdfFileStampTests;
} // namespace Facades
class Helper;
namespace Mocks
{
namespace Engine
{
namespace Commands
{
class TestAsyncCommand;
class TestAsyncExceptionCommand;
class TestAsyncFailCommand;
} // namespace Commands
} // namespace Engine
} // namespace Mocks
class RegressionTests_v10_8;
class RegressionTests_v11_7;
class RegressionTests_v11_9;
class RegressionTests_v16_12;
class RegressionTests_v17_10;
class RegressionTests_v17_12;
class RegressionTests_v18_6;
class RegressionTests_v20_07;
class RegressionTests_v20_11;
class RegressionTests_v23_07;
class RegressionTests_v23_11;
class RegressionTests_v24_09;
class RegressionTests_v6_2;
class RegressionTests_v6_7;
class RegressionTests_v6_9;
class RegressionTests_v7_0;
class RegressionTests_v9_4;
class TestBase;
namespace Text
{
class TextFragmentTests;
class TextSegmentTests;
} // namespace Text
} // namespace Tests
namespace Text
{
class Font;
class TableAbsorber;
class TextBuilder;
} // namespace Text
class TextBoxFieldXfa;
namespace Vector
{
class CumulativeGraphicState;
namespace Extraction
{
class ApsSvgRenderer;
} // namespace Extraction
class GraphicsAbsorber;
class GraphicState;
class PositionSetter;
class SubPath;
} // namespace Vector
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerable;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Color;
} // namespace Drawing
namespace Text
{
class StringBuilder;
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Abstract class representing operator.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Operator : public System::Object
{
    typedef Operator ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandsList;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubsetter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontUtilities;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::Engine::CommonData::Text::Subpath;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::PdfToApsConverter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConversionFontData;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::PageOperator;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::ArrayTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::StringTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::Text::TableAbsorber;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Annotations::DefaultAppearance;
    friend class Aspose::Pdf::Operators::ClosePathFillStroke;
    friend class Aspose::Pdf::Operators::FillStroke;
    friend class Aspose::Pdf::Operators::ClosePathEOFillStroke;
    friend class Aspose::Pdf::Operators::EOFillStroke;
    friend class Aspose::Pdf::Operators::BDC;
    friend class Aspose::Pdf::Operators::BI;
    friend class Aspose::Pdf::Operators::BMC;
    friend class Aspose::Pdf::Operators::TextOperator;
    friend class Aspose::Pdf::Operators::BX;
    friend class Aspose::Pdf::Operators::CurveTo;
    friend class Aspose::Pdf::Operators::ConcatenateMatrix;
    friend class Aspose::Pdf::Operators::SetColorSpaceStroke;
    friend class Aspose::Pdf::Operators::SetColorSpace;
    friend class Aspose::Pdf::Operators::SetDash;
    friend class Aspose::Pdf::Operators::SetCharWidth;
    friend class Aspose::Pdf::Operators::SetCharWidthBoundingBox;
    friend class Aspose::Pdf::Operators::Do;
    friend class Aspose::Pdf::Operators::DP;
    friend class Aspose::Pdf::Operators::EI;
    friend class Aspose::Pdf::Operators::EMC;
    friend class Aspose::Pdf::Operators::EX;
    friend class Aspose::Pdf::Operators::Fill;
    friend class Aspose::Pdf::Operators::ObsoleteFill;
    friend class Aspose::Pdf::Operators::EOFill;
    friend class Aspose::Pdf::Operators::GS;
    friend class Aspose::Pdf::Operators::ClosePath;
    friend class Aspose::Pdf::Operators::SetFlat;
    friend class Aspose::Pdf::Operators::ID;
    friend class Aspose::Pdf::Operators::SetLineJoin;
    friend class Aspose::Pdf::Operators::SetLineCap;
    friend class Aspose::Pdf::Operators::LineTo;
    friend class Aspose::Pdf::Operators::MoveTo;
    friend class Aspose::Pdf::Operators::SetMiterLimit;
    friend class Aspose::Pdf::Operators::MP;
    friend class Aspose::Pdf::Operators::EndPath;
    friend class Aspose::Pdf::Operators::GSave;
    friend class Aspose::Pdf::Operators::GRestore;
    friend class Aspose::Pdf::Operators::Re;
    friend class Aspose::Pdf::Operators::SetColorOperator;
    friend class Aspose::Pdf::Operators::SetColorRenderingIntent;
    friend class Aspose::Pdf::Operators::ClosePathStroke;
    friend class Aspose::Pdf::Operators::Stroke;
    friend class Aspose::Pdf::Operators::ShFill;
    friend class Aspose::Pdf::Operators::CurveTo1;
    friend class Aspose::Pdf::Operators::SetLineWidth;
    friend class Aspose::Pdf::Operators::Clip;
    friend class Aspose::Pdf::Operators::EOClip;
    friend class Aspose::Pdf::Operators::CurveTo2;
    friend class Aspose::Pdf::OperatorCollection;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::ContentsAppender;
    friend class Aspose::Pdf::Structure::TextElement;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::Vector::SubPath;
    friend class Aspose::Pdf::Vector::GraphicsAbsorber;
    friend class Aspose::Pdf::Vector::GraphicState;
    friend class Aspose::Pdf::Vector::PositionSetter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA::PdfAOperatorValidator;
    friend class Aspose::Pdf::Vector::Extraction::ApsSvgRenderer;
    friend class Aspose::Pdf::LayerProcessor;
    friend class Aspose::Pdf::Vector::CumulativeGraphicState;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::Helper;
    friend class Aspose::Pdf::Tests::TestBase;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_6;
    friend class Aspose::Pdf::Tests::Text::TextSegmentTests;
    friend class Aspose::Pdf::Tests::Text::TextFragmentTests;
    friend class Aspose::Pdf::Tests::Mocks::Engine::Commands::TestAsyncCommand;
    friend class Aspose::Pdf::Tests::Mocks::Engine::Commands::TestAsyncExceptionCommand;
    friend class Aspose::Pdf::Tests::Mocks::Engine::Commands::TestAsyncFailCommand;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_11;
    friend class Aspose::Pdf::Tests::Facades::PdfFileStampTests;
    
public:

    /// <summary>
    /// Operator index in page operators list.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Index();
    /// <summary>
    /// Operator index in page operators list.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Index(int32_t value);
    
    /// <summary>
    /// Accepts visitor IOperatorSelector which provides operators processing.
    /// </summary>
    /// <param name="visitor">Visitor object</param>
    virtual ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) = 0;
    /// <summary>
    /// Compares this instance with the given object.
    /// </summary>
    /// <param name="op">Operator to compare.</param>
    /// <returns>True if objects are equal, otherwise false.</returns>
    ASPOSE_PDF_SHARED_API bool ValueEquals(const System::SharedPtr<Operator>& op);
    /// <summary>
    /// Determines if the operator is operator which responsible for text output (Tj, TJ, etc)
    /// </summary>
    /// <param name="op">Operator object</param>
    /// <returns>True if this is text output operator</returns>
    static ASPOSE_PDF_SHARED_API bool IsTextShowOperator(const System::SharedPtr<Operator>& op);
    /// <summary>
    /// Returns text of operator and its parameters.
    /// </summary>
    /// <returns>Operator text</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// The collection of the operator
    /// </summary>
    System::WeakPtr<OperatorCollection> container;
    
    const System::SharedPtr<Engine::Data::ITrailerable>& get_Trailerable() const;
    void set_Trailerable(System::SharedPtr<Engine::Data::ITrailerable> value);
    /// <summary>
    /// Gets operator name.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::String get_CommandName();
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> get_Command();
    /// <summary>
    /// Returns true if operator has binary parameter.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API bool get_HasBinaryData();
    
    /// <summary>
    /// Sets updated state of the command. Command text will be updated.
    /// </summary>
    void UpdateCommand();
    bool IsCommandNull();
    System::SharedPtr<Operator> Clone();
    void Reset();
    /// <summary>
    /// Creates operator from Pdf.Kit.Engine.ICommand instance.
    /// </summary>
    /// <param name="command">Pdf.Kit.Engine.ICommand instance representing this operator </param>
    /// <returns>Created operator</returns>
    static System::SharedPtr<Operator> Create(const System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand>& command);
    /// <summary>
    /// Creates operator from Aspose.Pdf.Engine.CommonData.PageContent.Operators.Commands.ICommand instance,
    /// using virtual method CreateOperator
    /// </summary>
    /// <param name="index">Index of operator in operators list</param>
    /// <param name="command">Aspose.Pdf.Engine.CommonData.PageContent.Operators.Commands.ICommand instance representing this operator </param>
    /// <returns>Created operator</returns>
    static System::SharedPtr<Operator> Create(int32_t index, const System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand>& command);
    /// <summary>
    /// Creates operator by name of Aspose.Pdf.Engine.CommonData.PageContent.Operators.Commands.ICommand instance.
    /// The method is used for test purposes in Aspose.Pdf.Tests.Mocks.Engine.Commands
    /// </summary>
    /// <param name="index">Index of operator in operators list</param>
    /// <param name="command">Aspose.Pdf.Engine.CommonData.PageContent.Operators.Commands.ICommand instance representing this operator </param>
    /// <returns>Created operator</returns>
    static System::SharedPtr<Operator> CreateFromCommandName(int32_t index, const System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand>& command);
    /// <summary>
    /// saves operator to command
    /// </summary>
    /// <returns></returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    /// <summary>
    /// Serializes command to the string builder.
    /// </summary>
    /// <param name="sb"></param>
    virtual ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb);
    
    /// <summary>
    /// Constructor of Operators. Creates operator by command object and operator index.
    /// </summary>
    /// <param name="index">Index of operator in operators list</param>
    /// <param name="command">Command object of operator</param>
    Operator(int32_t index, const System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand>& command);
    
    /// <summary>
    /// Returns text representation of Pdf primitive (string, array, dictionary etc.) according to PDF specification.
    /// </summary>
    /// <param name="primitive">Primitive</param>
    /// <returns>Text representation of the primitive</returns>
    static System::String ToString(const System::SharedPtr<Engine::Data::IPdfPrimitive>& primitive);
    /// <summary>
    /// Returns text representation of Pdf primitive (string, array, dictionary etc.) according to PDF specification.
    /// </summary>
    /// <param name="primitive">Primitive</param>
    /// <returns>Text representation of the primitive</returns>
    static System::String ToString(const System::SharedPtr<Engine::Data::IPdfBoolean>& primitive);
    /// <summary>
    /// Returns text representation of Pdf primitive (string, array, dictionary etc.) according to PDF specification.
    /// </summary>
    /// <param name="primitive">Primitive</param>
    /// <returns>Text representation of the primitive</returns>
    static System::String ToString(const System::SharedPtr<Engine::Data::IPdfArray>& primitive);
    /// <summary>
    /// Returns text representation of Pdf primitive (string, array, dictionary etc.) according to PDF specification.
    /// </summary>
    /// <param name="primitive">Primitive</param>
    /// <returns>Text representation of the primitive</returns>
    static System::String ToString(const System::SharedPtr<Engine::Data::IPdfDictionary>& primitive);
    /// <summary>
    /// Returns text representation of Pdf primitive (string, array, dictionary etc.) according to PDF specification.
    /// </summary>
    /// <param name="primitive">Primitive</param>
    /// <returns>Text representation of the primitive</returns>
    static System::String ToString(const System::SharedPtr<Engine::Data::IPdfString>& primitive);
    /// <summary>
    /// Returns text representation of Pdf primitive (string, array, dictionary etc.) according to PDF specification.
    /// </summary>
    /// <param name="primitive">Primitive</param>
    /// <returns>Text representation of the primitive</returns>
    static System::String ToString(const System::SharedPtr<Engine::Data::IPdfName>& primitive);
    /// <summary>
    /// Escapese special characters in string according to PDF specification
    /// </summary>
    /// <param name="s">Source string</param>
    /// <returns>Escaped string</returns>
    static System::String escape(const System::String& s);
    /// <summary>
    /// This function is created to avoid .NET-specific IFormatProvider usage
    /// </summary>
    /// <param name="v">Value to be converted</param>
    /// <returns>String representation.</returns>
    static ASPOSE_PDF_SHARED_API System::String FloatToStr(double v);
    System::SharedPtr<OperatorCollection> cpp_get_container();
    
    virtual ASPOSE_PDF_SHARED_API ~Operator();
    
private:

    /// <summary>
    /// Index of operator in list.
    /// </summary>
    int32_t _index;
    /// <summary>
    /// Command instance from Pdf.Kit.Engine
    /// </summary>
    System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> _command;
    bool isCommandInitialized;
    System::SharedPtr<Engine::Data::ITrailerable> pr_Trailerable;
    
    static System::String toOct(int32_t code);
    System::String ToString_NonConst();
    
};

namespace Operators {

/// <summary>
/// The line join style shall specify the shape to be used at the corners of paths that are stroked.
/// </summary>
enum class LineJoin
{
    /// <summary>
    /// Miter join. The outer edges of the strokes for the two segments shall be extended until they meet at an angle, as in a 
    /// picture frame. If the segments meet at too sharp an angle as defined by the miter limit parameter (see 8.4.3.5, "Miter Limit"), 
    /// a bevel join shall be used instead.
    /// </summary>
    MiterJoin = 0,
    /// <summary>
    /// Round join. An arc of a circle with a diameter equal to the line width shall be drawn around the point where the two 
    /// segments meet, connecting the outer edges of the strokes for the two segments. This pieslice-shaped figure shall be filled 
    /// in, producing a rounded corner.
    /// </summary>
    RoundJoin = 1,
    /// <summary>
    /// Bevel join. The two segments shall be finished with butt caps (see 8.4.3.3, "Line Cap Style") and the resulting notch 
    /// beyond the ends of the segments shall be filled with a triangle.
    /// </summary>
    BevelJoin = 2
};

/// <summary>
/// The line cap style shall specify the shape that shall be used at the ends of open subpaths (and dashes, if any) when they are stroked.
/// </summary>
enum class LineCap
{
    /// <summary>
    /// Butt cap. The stroke shall be squared off at the endpoint of the path. There shall be no projection beyond the end of the path.
    /// </summary>
    ButtCap = 0,
    /// <summary>
    /// Round cap. A semicircular arc with a diameter equal to the line width shall be drawn around the endpoint and shall be filled in.
    /// </summary>
    RoundCap = 1,
    /// <summary>
    /// Projecting square cap. The stroke shall continue beyond the endpoint of the path for a distance equal to half the line width and shall besquared off.
    /// </summary>
    SquareCap = 2
};


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Operators</b> is a namespace for Operator implementations. These classes describes operators used in PDF page contents.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
/// Class representing b operator (close, fill and stroke path with nonzer winding rule).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ClosePathFillStroke : public Aspose::Pdf::Operator
{
    typedef ClosePathFillStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathPaintingOperators::CloseFillAndStrokePath;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API ClosePathFillStroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns string representation of operator.
    /// </summary>
    /// <returns>String representation</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    ASPOSE_PDF_SHARED_API System::String get_CommandName() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ClosePathFillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ClosePathFillStroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ClosePathFillStroke();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing B operator (fill and stroke path using nonzero winding rule)
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FillStroke : public Aspose::Pdf::Operator
{
    typedef FillStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathPaintingOperators::FillAndStrokePath;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API FillStroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    FillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FillStroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~FillStroke();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing b* operator (close, fill and stroke path using even-odd rule).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ClosePathEOFillStroke : public Aspose::Pdf::Operator
{
    typedef ClosePathEOFillStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathPaintingOperators::CloseFillAndStrokePathEO;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API ClosePathEOFillStroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    ASPOSE_PDF_SHARED_API System::String get_CommandName() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ClosePathEOFillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ClosePathEOFillStroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ClosePathEOFillStroke();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing B* operator (fill and stroke path usign even-odd rule).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EOFillStroke : public Aspose::Pdf::Operator
{
    typedef EOFillStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathPaintingOperators::FillAndStrokePathEO;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API EOFillStroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EOFillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EOFillStroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~EOFillStroke();
    
};

/// <summary>
/// class representing BDC operator (Begin marked-content sequence)
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BDC : public Aspose::Pdf::Operator
{
    typedef BDC ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Interchange::ContentSequenceMarkedGroup;
    friend class Aspose::Pdf::Facades::LogicalStructureConcatenation;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::BeginMarkedContentWithProperties;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Tagged::Helpers::StructureElementUtil;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Stamp;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Structure::FigureElement;
    friend class Aspose::Pdf::Structure::TextElement;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::LayerProcessor;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_07;
    
public:

    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Facades::BDCProperties> get_Properties() const;
    /// <summary>
    /// Gets marked content tag
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Tag() const;
    /// <summary>
    /// Sets marked content tag
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Tag(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="tag">Tag value.</param>
    ASPOSE_PDF_SHARED_API BDC(System::String tag);
    ASPOSE_PDF_SHARED_API BDC(System::String tag, System::SharedPtr<Aspose::Pdf::Facades::BDCProperties> properties);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_PropertiesDictionary();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> get_PropertiesName();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BDC(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::BeginMarkedContentWithProperties> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BDC, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::BeginMarkedContentWithProperties> command));
    
    BDC(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> properties);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BDC, CODEPORTING_ARGS(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> properties));
    
    BDC(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> property);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BDC, CODEPORTING_ARGS(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> property));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~BDC();
    
private:

    System::String _tag;
    System::SharedPtr<Aspose::Pdf::Facades::BDCProperties> _properties;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::BeginMarkedContentWithProperties> command);
    
};

/// <summary>
/// Class representing BI operator (Begin inline image obect).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BI : public Aspose::Pdf::Operator
{
    typedef BI ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::InlineImages::BeginInlineObject;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API BI();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BI(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BI, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~BI();
    
};

/// <summary>
/// Class representing BMC operator (Begin marked-content sequence).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BMC : public Aspose::Pdf::Operator
{
    typedef BMC ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::BeginMarkedContent;
    
public:

    /// <summary>
    /// Gets marked content tag
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Tag() const;
    /// <summary>
    /// Sets marked content tag
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Tag(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="tag">Marked content tag.</param>
    ASPOSE_PDF_SHARED_API BMC(System::String tag);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BMC(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::BeginMarkedContent> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BMC, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::BeginMarkedContent> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~BMC();
    
private:

    System::String _tag;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::BeginMarkedContent> command);
    
};

/// <summary>
/// Abstract base class for text-related operators (TJ, Tj, Tm, BT, ET, etc).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextOperator : public Aspose::Pdf::Operator
{
    typedef TextOperator ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Operators::BlockTextOperator;
    friend class Aspose::Pdf::Operators::TextShowOperator;
    friend class Aspose::Pdf::Operators::TextStateOperator;
    friend class Aspose::Pdf::Operators::TextPlaceOperator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextOperator();
    /// <summary>
    /// Text operator which accepts text properties. 
    /// </summary>
    /// <param name="textProperties">Text properties.</param>
    ASPOSE_PDF_SHARED_API TextOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes TextOperator 
    /// </summary>
    /// <param name="index">Index of operator in operators list.</param>
    /// <param name="command">Operator command.</param>
    TextOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual ASPOSE_PDF_SHARED_API ~TextOperator();
    
private:

    System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties;
    
};

/// <summary>
/// Abstract base class for text block operators i.e.  Begin and End text operators (BT/ET)
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BlockTextOperator : public Aspose::Pdf::Operators::TextOperator
{
    typedef BlockTextOperator ThisType;
    typedef Aspose::Pdf::Operators::TextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Operators::BT;
    friend class Aspose::Pdf::Operators::ET;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API BlockTextOperator();
    /// <summary>
    /// Initializes BlockTextOperator which accepts TextProperties.
    /// </summary>
    /// <param name="textProperties">Text properties.</param>
    ASPOSE_PDF_SHARED_API BlockTextOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BlockTextOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BlockTextOperator, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    
};

/// <summary>
/// Abstract base class for all operators which used to out text (Tj, TJ, etc).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextShowOperator : public Aspose::Pdf::Operators::TextOperator
{
    typedef TextShowOperator ThisType;
    typedef Aspose::Pdf::Operators::TextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Operators::ShowText;
    friend class Aspose::Pdf::Operators::SetGlyphsPositionShowText;
    friend class Aspose::Pdf::Operators::MoveToNextLineShowText;
    friend class Aspose::Pdf::Operators::SetSpacingMoveToNextLineShowText;
    
public:

    /// <summary>
    /// Gets text which operator out on the page.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::String get_Text();
    /// <summary>
    /// Gets text which operator out on the page.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Text(System::String value);
    
    /// <summary>
    /// Initializes TextShowOperator. 
    /// </summary>
    ASPOSE_PDF_SHARED_API TextShowOperator();
    /// <summary>
    /// Initializes TextShowOperator which allows to pass TextProperties.
    /// </summary>
    /// <param name="textProperties">Text properties.</param>
    ASPOSE_PDF_SHARED_API TextShowOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    TextShowOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextShowOperator, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    
};

/// <summary>
/// Abstract base class for operators which changes current text state (Tc, Tf, TL, etc).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextStateOperator : public Aspose::Pdf::Operators::TextOperator
{
    typedef TextStateOperator ThisType;
    typedef Aspose::Pdf::Operators::TextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Operators::SetCharacterSpacing;
    friend class Aspose::Pdf::Operators::SelectFont;
    friend class Aspose::Pdf::Operators::SetTextLeading;
    friend class Aspose::Pdf::Operators::SetTextRenderingMode;
    friend class Aspose::Pdf::Operators::SetTextRise;
    friend class Aspose::Pdf::Operators::SetWordSpacing;
    friend class Aspose::Pdf::Operators::SetHorizontalTextScaling;
    
public:

    /// <summary>
    /// Initializes TextStateOperator.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextStateOperator();
    /// <summary>
    /// Initializes TextStateoperator which allows to pass TextProperties.
    /// </summary>
    /// <param name="textProperties">Text properties.</param>
    ASPOSE_PDF_SHARED_API TextStateOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    TextStateOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextStateOperator, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    
};

/// <summary>
/// Abstract base class for operators which changes text position (Tm, Td, etc).
/// 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextPlaceOperator : public Aspose::Pdf::Operators::TextOperator
{
    typedef TextPlaceOperator ThisType;
    typedef Aspose::Pdf::Operators::TextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Operators::MoveToNextLine;
    friend class Aspose::Pdf::Operators::MoveTextPosition;
    friend class Aspose::Pdf::Operators::MoveTextPositionSetLeading;
    friend class Aspose::Pdf::Operators::SetTextMatrix;
    
public:

    /// <summary>
    /// Initializes TextPlaceOperator.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextPlaceOperator();
    /// <summary>
    /// Initializes TextPlaceOperator which accepts TextProperties.
    /// </summary>
    /// <param name="textProperties">Text properties.</param>
    ASPOSE_PDF_SHARED_API TextPlaceOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    TextPlaceOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextPlaceOperator, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    
};

/// <summary>
/// Class representing BT operator (Begin of text block).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BT : public Aspose::Pdf::Operators::BlockTextOperator
{
    typedef BT ThisType;
    typedef Aspose::Pdf::Operators::BlockTextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextObjectsOperators::BeginText;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API BT();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Produces text code of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BT(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BT, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~BT();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing BX operator (begin compatibility section).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BX : public Aspose::Pdf::Operator
{
    typedef BX ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Compatibility::BeginCompatibilitySection;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API BX();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    ASPOSE_PDF_SHARED_API System::String get_CommandName() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BX(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BX, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~BX();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing c operator (append curve to path).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CurveTo : public Aspose::Pdf::Operator
{
    typedef CurveTo ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve;
    
public:

    /// <summary>
    /// Gets or sets the X1 coordinate.
    /// </summary>
    double X1;
    /// <summary>
    /// Gets or sets the Y1 coordinate.
    /// </summary>
    double Y1;
    /// <summary>
    /// Gets or sets the X2 coordinate.
    /// </summary>
    double X2;
    /// <summary>
    /// Gets or sets the Y2 coordinate.
    /// </summary>
    double Y2;
    /// <summary>
    /// Gets or sets the X3 coordinate.
    /// </summary>
    double X3;
    /// <summary>
    /// Gets or sets the Y3 coordinate.
    /// </summary>
    double Y3;
    
    /// <summary>
    /// Initializes curve operator.
    /// </summary>
    /// <param name="x1">Abscissa of first point.</param>
    /// <param name="y1">Ordinate of first point.</param>
    /// <param name="x2">Abscissa of second point.</param>
    /// <param name="y2">Ordinate of second point.</param>
    /// <param name="x3">Abscissa of third point.</param>
    /// <param name="y3">Ordinate of third point.</param>
    ASPOSE_PDF_SHARED_API CurveTo(double x1, double y1, double x2, double y2, double x3, double y3);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    CurveTo(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CurveTo, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~CurveTo();
    
private:

    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve> command);
    
};

/// <summary>
/// Class representing cm operator (concatenate matrix to current transformation matrix).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ConcatenateMatrix : public Aspose::Pdf::Operator
{
    typedef ConcatenateMatrix ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::ModifyCurrentTransformationMatrix;
    friend class Aspose::Pdf::Vector::Extraction::ApsSvgRenderer;
    
public:

    /// <summary>
    /// Matrix argument of the operator. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix() const;
    /// <summary>
    /// Matrix argument of the operator. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Matrix(System::SharedPtr<Aspose::Pdf::Matrix> value);
    
    /// <summary>
    /// Initializes operator. 
    /// </summary>
    /// <param name="a">A coefficient</param>
    /// <param name="b">B coefficient</param>
    /// <param name="c">C coefficient</param>
    /// <param name="d">D coefficient</param>
    /// <param name="e">E coefficient</param>
    /// <param name="f">F coefficient</param>
    ASPOSE_PDF_SHARED_API ConcatenateMatrix(double a, double b, double c, double d, double e, double f);
    /// <summary>
    /// Initializes operator by matrix.
    /// </summary>
    /// <param name="m">Transfomation matrix.</param>
    ASPOSE_PDF_SHARED_API ConcatenateMatrix(System::SharedPtr<Aspose::Pdf::Matrix> m);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of representation</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ConcatenateMatrix(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::ModifyCurrentTransformationMatrix> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ConcatenateMatrix, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::ModifyCurrentTransformationMatrix> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~ConcatenateMatrix();
    
private:

    System::SharedPtr<Aspose::Pdf::Matrix> matrix;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::ModifyCurrentTransformationMatrix> command);
    
};

/// <summary>
/// Class representing CS operator (set color for stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetColorSpaceStroke : public Aspose::Pdf::Operator
{
    typedef SetColorSpaceStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetColorSpaceStroking;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    
public:

    /// <summary>
    /// Gets color space name.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name() const;
    /// <summary>
    /// Sets color space name.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="name">Color space name.</param>
    ASPOSE_PDF_SHARED_API SetColorSpaceStroke(System::String name);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetColorSpaceStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetColorSpaceStroking> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetColorSpaceStroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetColorSpaceStroking> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetColorSpaceStroke();
    
private:

    System::String name;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetColorSpaceStroking> command);
    
};

/// <summary>
/// Class representing cs operator (set colorspace for non-stroking operations)
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetColorSpace : public Aspose::Pdf::Operator
{
    typedef SetColorSpace ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetColorSpaceNonstroking;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    
public:

    /// <summary>
    /// Gets color space name.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name() const;
    /// <summary>
    /// Sets color space name.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="name">Color space name.</param>
    ASPOSE_PDF_SHARED_API SetColorSpace(System::String name);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    ASPOSE_PDF_SHARED_API System::String get_CommandName() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetColorSpace(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetColorSpaceNonstroking> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetColorSpace, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetColorSpaceNonstroking> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetColorSpace();
    
private:

    System::String name;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetColorSpaceNonstroking> command);
    
};

/// <summary>
/// Class representing d operator (set line dash pattern).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetDash : public Aspose::Pdf::Operator
{
    typedef SetDash ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineDashPattern;
    
public:

    /// <summary>
    /// Dash pattern. Array's elements shall be numbers that specify the lengths of alternating dashes and gaps.
    /// In case of one element array dash and gap lengths are equal.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<int32_t> get_Pattern() const;
    /// <summary>
    /// Dash pattern. Array's elements shall be numbers that specify the lengths of alternating dashes and gaps.
    /// In case of one element array dash and gap lengths are equal.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Pattern(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Dash phase. Before beginning to stroke a path, the dash array shall be cycled through, adding up the lengths of dashes and gaps. 
    /// When the accumulated length equals the value specified by the dash phase, stroking of the path shall begin, 
    /// and the dash array shall be used cyclically from that point onward.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Phase() const;
    /// <summary>
    /// Dash phase. Before beginning to stroke a path, the dash array shall be cycled through, adding up the lengths of dashes and gaps. 
    /// When the accumulated length equals the value specified by the dash phase, stroking of the path shall begin, 
    /// and the dash array shall be used cyclically from that point onward.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Phase(int32_t value);
    
    /// <summary>
    /// Creates set dash pattern operator.
    /// </summary>
    /// <param name="pattern">Array which defines dash pattern.</param>
    /// <param name="phase">Dash phase.</param>
    ASPOSE_PDF_SHARED_API SetDash(System::ArrayPtr<int32_t> pattern, int32_t phase);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Gets operator string representation.
    /// </summary>
    /// <returns>
    /// [x1 x2] y d, where x1 - dash length, x2 - gap length, y - phase.
    /// </returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetDash(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineDashPattern> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetDash, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineDashPattern> command));
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetDash();
    
private:

    System::ArrayPtr<int32_t> pattern;
    int32_t phase;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineDashPattern> command);
    
};

/// <summary>
/// Class representing d0 operator (set glyph width).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetCharWidth : public Aspose::Pdf::Operator
{
    typedef SetCharWidth ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Type3Fonts::SetWidthInformation;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    /// <summary>
    /// Horizontal displacement of glyph coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Wx() const;
    /// <summary>
    /// Vertical displacement of glyph coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Wy() const;
    
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="wx">Horizontal displacement of glyph.</param>
    /// <param name="wy">Vertical displacement of glyph.</param>
    ASPOSE_PDF_SHARED_API SetCharWidth(double wx, double wy);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of representation</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetCharWidth(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetCharWidth, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetCharWidth();
    
private:

    double _wx;
    double _wy;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Type3Fonts::SetWidthInformation> command);
    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing d1 operator (set glyph and bounding box).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetCharWidthBoundingBox : public Aspose::Pdf::Operator
{
    typedef SetCharWidthBoundingBox ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Type3Fonts::SetWidthAndBoundingInformation;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    /// <summary>
    /// Horizontal displacement of glyph.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Wx() const;
    /// <summary>
    /// Vertical displacement of glyph.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Wy() const;
    /// <summary>
    /// Lower-left horizontal coordinate of bounding rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Llx() const;
    /// <summary>
    /// Lower-left vertical coordinate of bounding rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Lly() const;
    /// <summary>
    /// Upper-right horizontal coordinate of bounding rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Urx() const;
    /// <summary>
    /// Upper-right vertical coordinate of bounding rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Ury() const;
    
    /// <summary>
    /// Initializes SetCharWidthBoundingBox operator.
    /// </summary>
    /// <param name="wx">Denotes the horizontal displacement in the glyph coordinate.</param>
    /// <param name="wy">Denotes the vertical displacement in the glyph coordinate. Shall be 0.</param>
    /// <param name="llx">Denotes X coordinate of the lower-left corner.</param>
    /// <param name="lly">Denotes Y coordinate of the lower-left corner.</param>
    /// <param name="urx">Denotes X coordinate of upper-right corner.</param>
    /// <param name="ury">Denotes Y coordinate of upper-right corner.</param>
    ASPOSE_PDF_SHARED_API SetCharWidthBoundingBox(double wx, double wy, double llx, double lly, double urx, double ury);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of representation</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetCharWidthBoundingBox(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Type3Fonts::SetWidthAndBoundingInformation> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetCharWidthBoundingBox, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Type3Fonts::SetWidthAndBoundingInformation> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetCharWidthBoundingBox();
    
private:

    double _wx;
    double _wy;
    double _llx;
    double _lly;
    double _urx;
    double _ury;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Type3Fonts::SetWidthAndBoundingInformation> command);
    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing Do operator (Invoke XObject).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Do : public Aspose::Pdf::Operator
{
    typedef Do ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::XObjects::PaintXObject;
    
public:

    /// <summary>
    /// Name of XObject argument of the operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name() const;
    /// <summary>
    /// Name of XObject argument of the operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    
    /// <summary>
    /// Constructs new Do operator. 
    /// </summary>
    /// <param name="name">Name of invoked XObject.</param>
    ASPOSE_PDF_SHARED_API Do(System::String name);
    /// <summary>
    /// Constructs new Do operator. 
    /// Used for retrieving all Do operators, i.e. without checking their argument names.
    /// </summary>
    ASPOSE_PDF_SHARED_API Do();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    Do(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::XObjects::PaintXObject> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Do, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::XObjects::PaintXObject> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~Do();
    
private:

    System::String _name;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::XObjects::PaintXObject> command);
    
};

/// <summary>
/// Class represeting DP operator (designamte marked content point).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DP : public Aspose::Pdf::Operator
{
    typedef DP ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::DesignateMarkedContentWithProperties;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_09;
    
public:

    /// <summary>
    /// Gets marked content tag
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Tag() const;
    /// <summary>
    /// Sets marked content tag
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Tag(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="tag">Tag value.</param>
    ASPOSE_PDF_SHARED_API DP(System::String tag);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_PropertiesDictionary();
    void set_PropertiesDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    DP(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::DesignateMarkedContentWithProperties> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DP, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::DesignateMarkedContentWithProperties> command));
    
    DP(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> properties);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DP, CODEPORTING_ARGS(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> properties));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~DP();
    
private:

    System::String _tag;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _properties;
    
    System::String ToString_NonConst();
    void EnsurePropertiesInitialized();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::DesignateMarkedContentWithProperties> command);
    
};

/// <summary>
/// Class representing EI operator (End inline image object).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EI : public Aspose::Pdf::Operator
{
    typedef EI ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::InlineImages::EndInlineObject;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API EI();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    ASPOSE_PDF_SHARED_API bool get_HasBinaryData() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EI(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EI, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~EI();
    
};

/// <summary>
/// Clsss representing EMC oeprator (End of marked-content sequence).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EMC : public Aspose::Pdf::Operator
{
    typedef EMC ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::EndMarkedContent;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API EMC();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EMC(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EMC, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~EMC();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing operator ET (End of text block).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ET : public Aspose::Pdf::Operators::BlockTextOperator
{
    typedef ET ThisType;
    typedef Aspose::Pdf::Operators::BlockTextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextObjectsOperators::EndText;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API ET();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Produces text code of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ET(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ET, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ET();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing EX operator (End of compatibility section).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EX : public Aspose::Pdf::Operator
{
    typedef EX ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Compatibility::EndCompatibilitySection;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API EX();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EX(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EX, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~EX();
    
};

/// <summary>
/// Class representing f operator (fill path with nonzero winding number rule).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Fill : public Aspose::Pdf::Operator
{
    typedef Fill ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathPaintingOperators::FillPath;
    
public:

    /// <summary>
    /// Initilizes new f operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API Fill();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    Fill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Fill, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~Fill();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing F operator (fill path using nonzero winding rule).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ObsoleteFill : public Aspose::Pdf::Operator
{
    typedef ObsoleteFill ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API ObsoleteFill();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ObsoleteFill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ObsoleteFill, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ObsoleteFill();
    
};

/// <summary>
/// Class representing f* operator (fill path using even-odd rule).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EOFill : public Aspose::Pdf::Operator
{
    typedef EOFill ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathPaintingOperators::FillPathEO;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API EOFill();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EOFill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EOFill, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~EOFill();
    
};

/// <summary>
/// Class representing gs operator (set parameters from graphic state parameter dictionary).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GS : public Aspose::Pdf::Operator
{
    typedef GS ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetSpecifiedParameters;
    
public:

    /// <summary>
    /// Gets name of graphic state resource.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name() const;
    /// <summary>
    /// Sets name of graphic state resource.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    
    /// <summary>
    /// Initializes gs operator.
    /// </summary>
    /// <param name="name">Name of graphic state.</param>
    ASPOSE_PDF_SHARED_API GS(System::String name);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns string representation of operator.
    /// </summary>
    /// <returns>String representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    GS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetSpecifiedParameters> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GS, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetSpecifiedParameters> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~GS();
    
private:

    System::String _name;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetSpecifiedParameters> command);
    
};

/// <summary>
/// Class representing h operator (close path).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ClosePath : public Aspose::Pdf::Operator
{
    typedef ClosePath ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::CloseCurrentSubpath;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API ClosePath();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    ASPOSE_PDF_SHARED_API System::String get_CommandName() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ClosePath(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ClosePath, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ClosePath();
    
};

/// <summary>
/// Class representing i operator (set flatness tolerance).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetFlat : public Aspose::Pdf::Operator
{
    typedef SetFlat ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetFlatnessTolerance;
    
public:

    /// <summary>
    /// Gets the flatness.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Flatness() const;
    /// <summary>
    /// Sets the flatness.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Flatness(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="flatness">The value of flatness.</param>
    ASPOSE_PDF_SHARED_API SetFlat(double flatness);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetFlat(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetFlatnessTolerance> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetFlat, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetFlatnessTolerance> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetFlat();
    
private:

    double _flatness;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetFlatnessTolerance> command);
    
};

/// <summary>
/// Class representing ID operator (Begin inline image data).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ID : public Aspose::Pdf::Operator
{
    typedef ID ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::InlineImages::BeginImageData;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API ID();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> Parameters;
    
    ASPOSE_PDF_SHARED_API System::String get_CommandName() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ID(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::InlineImages::BeginImageData> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ID, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::InlineImages::BeginImageData> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~ID();
    
};

/// <summary>
/// Class representing j operator (set line join style).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetLineJoin : public Aspose::Pdf::Operator
{
    typedef SetLineJoin ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineJoinStyle;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    ASPOSE_PDF_SHARED_API LineJoin get_Join();
    ASPOSE_PDF_SHARED_API void set_Join(LineJoin value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API SetLineJoin();
    ASPOSE_PDF_SHARED_API SetLineJoin(LineJoin join);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetLineJoin(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetLineJoin, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetLineJoin();
    
private:

    Aspose::Pdf::Engine::Presentation::Primitives::LineJoin join;
    
    LineJoin ConvertToLineJoin(Aspose::Pdf::Engine::Presentation::Primitives::LineJoin join);
    Aspose::Pdf::Engine::Presentation::Primitives::LineJoin ConvertFromLineJoin(LineJoin join);
    
};

/// <summary>
/// Class representing J operator (set line cap style).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetLineCap : public Aspose::Pdf::Operator
{
    typedef SetLineCap ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineCapStyle;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    /// <summary>
    /// Gets line caps style. 
    /// </summary>
    ASPOSE_PDF_SHARED_API LineCap get_Cap();
    /// <summary>
    /// Sets line caps style. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Cap(LineCap value);
    
    /// <summary>
    /// Initializes SetLineCap operator
    /// </summary>
    /// <param name="cap">Line cap style.</param>
    ASPOSE_PDF_SHARED_API SetLineCap(LineCap cap);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    static Engine::Presentation::Primitives::LineCap ConvertFromLineCap(LineCap lineCap);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetLineCap(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineCapStyle> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetLineCap, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineCapStyle> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetLineCap();
    
private:

    Engine::Presentation::Primitives::LineCap cap;
    
    LineCap ConvertToLineCap(Aspose::Pdf::Engine::Presentation::Primitives::LineCap lineCap);
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineCapStyle> command);
    
};

/// <summary>
/// Class representing l operator (add line to the path).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LineTo : public Aspose::Pdf::Operator
{
    typedef LineTo ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendStreightLineSegment;
    
public:

    /// <summary>
    /// X coordinate of line point.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_X() const;
    /// <summary>
    /// X coordinate of line point.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_X(double value);
    /// <summary>
    /// Y coordinate of line point.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Y coordinate of line point.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    
    /// <summary>
    /// Initializes line operator.
    /// </summary>
    /// <param name="x">X coordinate.</param>
    /// <param name="y">Y coordinate.</param>
    ASPOSE_PDF_SHARED_API LineTo(double x, double y);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    LineTo(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendStreightLineSegment> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LineTo, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendStreightLineSegment> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~LineTo();
    
private:

    double _x;
    double _y;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendStreightLineSegment> command);
    
};

/// <summary>
/// Class representing m operator (move to and begin new subpath).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MoveTo : public Aspose::Pdf::Operator
{
    typedef MoveTo ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::BeginNewSubpath;
    
public:

    /// <summary>
    /// X coordinate 
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_X() const;
    /// <summary>
    /// X coordinate 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_X(double value);
    /// <summary>
    /// Y coordinate
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Y coordinate
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    
    /// <summary>
    /// Inintalizes new <see cref="Operators::m"></see> (move to) operator.
    /// </summary>
    /// <param name="x">The x-coordinate.</param>
    /// <param name="y">The y-coordinate.</param>
    ASPOSE_PDF_SHARED_API MoveTo(double x, double y);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    MoveTo(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::BeginNewSubpath> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MoveTo, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::BeginNewSubpath> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~MoveTo();
    
private:

    double _x;
    double _y;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::BeginNewSubpath> command);
    
};

/// <summary>
/// Class representing M operator (set miter limit).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetMiterLimit : public Aspose::Pdf::Operator
{
    typedef SetMiterLimit ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetMiterLimit;
    
public:

    /// <summary>
    /// Gets the miter limit.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_MiterLimit() const;
    /// <summary>
    /// Sets the miter limit.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MiterLimit(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="miterLimit">Mitel limit.</param>
    ASPOSE_PDF_SHARED_API SetMiterLimit(double miterLimit);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetMiterLimit(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetMiterLimit> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetMiterLimit, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetMiterLimit> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetMiterLimit();
    
private:

    double _miterLimit;
    
    void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetMiterLimit> command);
    
};

/// <summary>
/// Class representing MP operator (define marked-content point).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MP : public Aspose::Pdf::Operator
{
    typedef MP ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::DesignateMarkedContent;
    
public:

    /// <summary>
    /// Gets marked content tag
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Tag() const;
    /// <summary>
    /// Sets marked content tag
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Tag(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="tag">Marked content tag.</param>
    ASPOSE_PDF_SHARED_API MP(System::String tag);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    MP(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::DesignateMarkedContent> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MP, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::DesignateMarkedContent> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~MP();
    
private:

    System::String _tag;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::MarkedContent::DesignateMarkedContent> command);
    
};

/// <summary>
/// Class representing n operator (end path without filling or stroking).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EndPath : public Aspose::Pdf::Operator
{
    typedef EndPath ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathPaintingOperators::EndPath;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API EndPath();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EndPath(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EndPath, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~EndPath();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing q operator (save graphics state).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GSave : public Aspose::Pdf::Operator
{
    typedef GSave ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SaveGraphicState;
    
public:

    /// <summary>
    /// Initializes q operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API GSave();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    GSave(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GSave, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~GSave();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing Q operator (restore graphics state).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GRestore : public Aspose::Pdf::Operator
{
    typedef GRestore ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::RestoreGraphicState;
    
public:

    /// <summary>
    /// Initializes Q operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API GRestore();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    GRestore(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GRestore, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~GRestore();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing re operator (add rectangle to the path).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Re : public Aspose::Pdf::Operator
{
    typedef Re ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendRectangle;
    
public:

    /// <summary>
    /// X coordinate of most left side of rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_X() const;
    /// <summary>
    /// X coordinate of most left side of rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_X(double value);
    /// <summary>
    /// Y corrdinate of bottom side of rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Y corrdinate of bottom side of rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    /// <summary>
    /// Width of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Width() const;
    /// <summary>
    /// Width of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(double value);
    /// <summary>
    /// Height of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Height() const;
    /// <summary>
    /// Height of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Height(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API Re();
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="x">The x-coordinate of the bottom-left corner of the rectangle.</param>
    /// <param name="y">The y-coordinate of the bottom-left corner of the rectangle.</param>
    /// <param name="width">The width of the rectangle.</param>
    /// <param name="height">The height of the rectangle.</param>
    ASPOSE_PDF_SHARED_API Re(double x, double y, double width, double height);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    Re(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendRectangle> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Re, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendRectangle> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~Re();
    
private:

    double _x;
    double _y;
    double width;
    double height;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendRectangle> command);
    
};

/// <summary>
/// Class representing set color operation. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetColorOperator : public Aspose::Pdf::Operator
{
    typedef SetColorOperator ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Operators::SetGrayStroke;
    friend class Aspose::Pdf::Operators::SetGray;
    friend class Aspose::Pdf::Operators::SetCMYKColorStroke;
    friend class Aspose::Pdf::Operators::SetCMYKColor;
    friend class Aspose::Pdf::Operators::SetRGBColorStroke;
    friend class Aspose::Pdf::Operators::SetRGBColor;
    friend class Aspose::Pdf::Operators::BasicSetColorOperator;
    
public:

    /// <summary>
    /// Retirns color specified by the operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    virtual ASPOSE_PDF_SHARED_API System::Drawing::Color getColor() = 0;
    
protected:

    /// <summary>
    /// Initializes SetColorOperator
    /// </summary>
    /// <param name="index"></param>
    /// <param name="command"></param>
    SetColorOperator(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::Color::SetColor> command);
    
    virtual ASPOSE_PDF_SHARED_API void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::Color::SetColor> command);
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
};

/// <summary>
/// Class representing gray level for stroking operations.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetGrayStroke : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetGrayStroke ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetGrayStrokingColor;
    
public:

    /// <summary>
    /// Gets the level of gray value.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Gray() const;
    /// <summary>
    /// Sets the level of gray value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Gray(double value);
    
    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Color getColor() override;
    
    /// <summary>
    /// Initializes operator with the specified color.
    /// </summary>
    /// <param name="gray">The level of gray value.</param>
    ASPOSE_PDF_SHARED_API SetGrayStroke(double gray);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetGrayStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetGrayStrokingColor> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetGrayStroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetGrayStrokingColor> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetGrayStroke();
    
private:

    double gray;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetGrayStrokingColor> command);
    
};

/// <summary>
/// Set gray level for non-stroking operations. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetGray : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetGray ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetGrayNonstrokingColor;
    
public:

    /// <summary>
    /// Gets the level of gray value.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Gray() const;
    /// <summary>
    /// Sets the level of gray value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Gray(double value);
    
    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Color getColor() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="gray">The level of gray value.</param>
    ASPOSE_PDF_SHARED_API SetGray(double gray);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns string representation of operator.
    /// </summary>
    /// <returns>String representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetGray(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetGrayNonstrokingColor> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetGray, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetGrayNonstrokingColor> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetGray();
    
private:

    double gray;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetGrayNonstrokingColor> command);
    
};

/// <summary>
/// Class representing K operator (set CMYK color for stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetCMYKColorStroke : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetCMYKColorStroke ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetCMYKStrokingColor;
    
public:

    /// <summary>
    /// Gets the cyan component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_C() const;
    /// <summary>
    /// Sets the cyan component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_C(double value);
    /// <summary>
    /// Gets the magenta component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_M() const;
    /// <summary>
    /// Sets the magenta component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_M(double value);
    /// <summary>
    /// Gets the yellow component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Sets the yellow component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    /// <summary>
    /// Gets the black component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_K() const;
    /// <summary>
    /// Sets the black component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_K(double value);
    
    /// <summary>
    /// Returns the RGB color 
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Color getColor() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="c">The level of cyan from 0.0 to 1.0</param>
    /// <param name="m">The level of magenta from 0.0 to 1.0</param>
    /// <param name="y">The level of yellow from 0.0 to 1.0</param>
    /// <param name="k">The level of black from 0.0 to 1.0</param>
    ASPOSE_PDF_SHARED_API SetCMYKColorStroke(double c, double m, double y, double k);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetCMYKColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetCMYKStrokingColor> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetCMYKColorStroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetCMYKStrokingColor> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetCMYKColorStroke();
    
private:

    double _c;
    double _m;
    double _y;
    double _k;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetCMYKStrokingColor> command);
    
};

/// <summary>
/// Class representing k operator (set CMYK color for non-stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetCMYKColor : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetCMYKColor ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetCMYKNonstrokingColor;
    
public:

    /// <summary>
    /// Gets the cyan component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_C() const;
    /// <summary>
    /// Sets the cyan component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_C(double value);
    /// <summary>
    /// Gets the magenta component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_M() const;
    /// <summary>
    /// Sets the magenta component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_M(double value);
    /// <summary>
    /// Gets the yellow component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Sets the yellow component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    /// <summary>
    /// Gets the black component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_K() const;
    /// <summary>
    /// Sets the black component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_K(double value);
    
    /// <summary>
    /// Returns color.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Color getColor() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="c">The level of cyan from 0.0 to 1.0</param>
    /// <param name="m">The level of magenta from 0.0 to 1.0</param>
    /// <param name="y">The level of yellow from 0.0 to 1.0</param>
    /// <param name="k">The level of black from 0.0 to 1.0</param>
    ASPOSE_PDF_SHARED_API SetCMYKColor(double c, double m, double y, double k);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetCMYKColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetCMYKNonstrokingColor> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetCMYKColor, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetCMYKNonstrokingColor> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetCMYKColor();
    
private:

    double _c;
    double _m;
    double _y;
    double _k;
    
    double bound(double x);
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetCMYKNonstrokingColor> command);
    
};

/// <summary>
/// Class representing RG operator (set RGB color for stroking operators).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetRGBColorStroke : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetRGBColorStroke ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetRGBStrokingColor;
    
public:

    /// <summary>
    /// Gets the red component.
    /// </summary>
    /// <value>The level of red from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_R() const;
    /// <summary>
    /// Sets the red component.
    /// </summary>
    /// <value>The level of red from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_R(double value);
    /// <summary>
    /// Gets the green component.
    /// </summary>
    /// <value>The level of green from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_G() const;
    /// <summary>
    /// Sets the green component.
    /// </summary>
    /// <value>The level of green from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_G(double value);
    /// <summary>
    /// Gets the blue component.
    /// </summary>
    /// <value>The level of blue from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_B() const;
    /// <summary>
    /// Sets the blue component.
    /// </summary>
    /// <value>The level of blue from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_B(double value);
    
    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Color getColor() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="r">The level of red from 0.0 to 1.0</param>
    /// <param name="g">The level of green from 0.0 to 1.0</param>
    /// <param name="b">The level of blue from 0.0 to 1.0</param>
    ASPOSE_PDF_SHARED_API SetRGBColorStroke(double r, double g, double b);
    /// <summary>
    /// Initializes operator with color.
    /// </summary>
    /// <param name="color">Operator color.</param>
    ASPOSE_PDF_SHARED_API SetRGBColorStroke(System::Drawing::Color color);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetRGBColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetRGBStrokingColor> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetRGBColorStroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetRGBStrokingColor> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetRGBColorStroke();
    
private:

    double _r;
    double _g;
    double _b;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetRGBStrokingColor> command);
    
};

/// <summary>
/// Class representing rg operator (set RGB color for non-stroking operators).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetRGBColor : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetRGBColor ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetRGBNonstrokingColor;
    
public:

    /// <summary>
    /// Gets the red component.
    /// </summary>
    /// <value>The level of red from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_R() const;
    /// <summary>
    /// Sets the red component.
    /// </summary>
    /// <value>The level of red from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_R(double value);
    /// <summary>
    /// Gets the green component.
    /// </summary>
    /// <value>The level of green from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_G() const;
    /// <summary>
    /// Sets the green component.
    /// </summary>
    /// <value>The level of green from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_G(double value);
    /// <summary>
    /// Gets the blue component.
    /// </summary>
    /// <value>The level of blue from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_B() const;
    /// <summary>
    /// Sets the blue component.
    /// </summary>
    /// <value>The level of blue from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_B(double value);
    
    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Color getColor() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="r">The level of red from 0.0 to 1.0</param>
    /// <param name="g">The level of green from 0.0 to 1.0</param>
    /// <param name="b">The level of blue from 0.0 to 1.0</param>
    ASPOSE_PDF_SHARED_API SetRGBColor(double r, double g, double b);
    /// <summary>
    /// Initializes operator with color.
    /// </summary>
    /// <param name="color">Specified color.</param>
    ASPOSE_PDF_SHARED_API SetRGBColor(System::Drawing::Color color);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetRGBColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetRGBNonstrokingColor> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetRGBColor, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetRGBNonstrokingColor> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetRGBColor();
    
private:

    double _r;
    double _g;
    double _b;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetRGBNonstrokingColor> command);
    
};

/// <summary>
/// Class representing ri operator (set color rendering intent).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetColorRenderingIntent : public Aspose::Pdf::Operator
{
    typedef SetColorRenderingIntent ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetColourRenderingIntent;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    /// <summary>
    /// Gets color rendering intent name.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_IntentName() const;
    /// <summary>
    /// Sets color rendering intent name.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IntentName(System::String value);
    
    /// <summary>
    /// Set Color Rendering Intent operator constructor.
    /// </summary>
    /// <param name="intentName">Color Rendering Intent.</param>
    ASPOSE_PDF_SHARED_API SetColorRenderingIntent(System::String intentName);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetColorRenderingIntent();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetColorRenderingIntent, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetColorRenderingIntent(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetColourRenderingIntent> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetColorRenderingIntent, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetColourRenderingIntent> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetColorRenderingIntent();
    
private:

    System::String _intentName;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetColourRenderingIntent> command);
    
};

/// <summary>
/// Class representing s operator (Close and stroke path).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ClosePathStroke : public Aspose::Pdf::Operator
{
    typedef ClosePathStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathPaintingOperators::CloseAndStrokePath;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API ClosePathStroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ClosePathStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ClosePathStroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ClosePathStroke();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing S operator (stroke path).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Stroke : public Aspose::Pdf::Operator
{
    typedef Stroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathPaintingOperators::StrokePath;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API Stroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    Stroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Stroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~Stroke();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Base class for set color operators.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BasicSetColorOperator : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef BasicSetColorOperator ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Operators::SetColorStroke;
    friend class Aspose::Pdf::Operators::SetColor;
    friend class Aspose::Pdf::Operators::BasicSetColorAndPatternOperator;
    friend class Aspose::Pdf::Vector::CumulativeGraphicState;
    
public:

    /// <summary>
    /// Gets red component of color
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_R();
    /// <summary>
    /// Gets green component of color
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_G();
    /// <summary>
    /// Gets red component of color
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_B();
    /// <summary>
    /// Gets cyan component of CMYK color.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_C();
    /// <summary>
    /// Gets magenta component of CMYK color.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_M();
    /// <summary>
    /// Gets yellow component of CMYK color.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y();
    /// <summary>
    /// Gets black component of CMYK color.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_K();
    /// <summary>
    /// Gets black component of gray color.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Gray();
    /// <summary>
    /// Gets array of color components.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::ArrayPtr<double> get_Color();
    
protected:

    System::ArrayPtr<double> _color;
    
    BasicSetColorOperator(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::Color::SetColor> command);
    
    ASPOSE_PDF_SHARED_API void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::Color::SetColor> command) override;
    
};

/// <summary>
/// Class representing SC operator set color for stroking color operators.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetColorStroke : public Aspose::Pdf::Operators::BasicSetColorOperator
{
    typedef SetColorStroke ThisType;
    typedef Aspose::Pdf::Operators::BasicSetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetStrokingColor;
    
public:

    /// <summary>
    /// Gets the cyan component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_C() const;
    /// <summary>
    /// Sets the cyan component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_C(double value);
    /// <summary>
    /// Gets the magenta component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_M() const;
    /// <summary>
    /// Sets the magenta component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_M(double value);
    /// <summary>
    /// Gets the yellow component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Sets the yellow component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    /// <summary>
    /// Gets the black component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_K() const;
    /// <summary>
    /// Sets the black component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_K(double value);
    /// <summary>
    /// Gets the red component.
    /// </summary>
    /// <value>The level of red from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_R() const;
    /// <summary>
    /// Sets the red component.
    /// </summary>
    /// <value>The level of red from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_R(double value);
    /// <summary>
    /// Gets the green component.
    /// </summary>
    /// <value>The level of green from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_G() const;
    /// <summary>
    /// Sets the green component.
    /// </summary>
    /// <value>The level of green from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_G(double value);
    /// <summary>
    /// Gets the blue component.
    /// </summary>
    /// <value>The level of blue from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_B() const;
    /// <summary>
    /// Sets the blue component.
    /// </summary>
    /// <value>The level of blue from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_B(double value);
    
    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Color getColor() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API SetColorStroke();
    /// <summary>
    /// Set color for stroking operators for DeviceGray, CalGray and Indexed color spaces. 
    /// </summary>
    /// <param name="g">Color value.</param>
    ASPOSE_PDF_SHARED_API SetColorStroke(double g);
    /// <summary>
    /// Set color for stroking operator for DeviceRGB, CalRGB, and Lab color spaces
    /// </summary>
    /// <param name="r">Red component.</param>
    /// <param name="g">Green component.</param>
    /// <param name="b">Blue component.</param>
    ASPOSE_PDF_SHARED_API SetColorStroke(double r, double g, double b);
    /// <summary>
    /// Constructor which allows to set color components.
    /// </summary>
    /// <param name="color">Array of color components.</param>
    ASPOSE_PDF_SHARED_API SetColorStroke(System::ArrayPtr<double> color);
    /// <summary>
    /// Set color for stroking operator for CMYK color space
    /// </summary>
    /// <param name="c">Cyan component.</param>
    /// <param name="m">Magenta component.</param>
    /// <param name="y">Yellow component.</param>
    /// <param name="k">Black component.</param>
    ASPOSE_PDF_SHARED_API SetColorStroke(double c, double m, double y, double k);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetStrokingColor> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetColorStroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetStrokingColor> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetColorStroke();
    
private:

    double _r;
    double _g;
    double _b;
    double _c;
    double _m;
    double _y;
    double _k;
    
};

/// <summary>
/// Represents class for sc operator (set color for non-stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetColor : public Aspose::Pdf::Operators::BasicSetColorOperator
{
    typedef SetColor ThisType;
    typedef Aspose::Pdf::Operators::BasicSetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetNonstrokingColor;
    
public:

    /// <summary>
    /// Gets the cyan component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_C() const;
    /// <summary>
    /// Sets the cyan component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_C(double value);
    /// <summary>
    /// Gets the magenta component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_M() const;
    /// <summary>
    /// Sets the magenta component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_M(double value);
    /// <summary>
    /// Gets the yellow component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Sets the yellow component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    /// <summary>
    /// Gets the black component.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_K() const;
    /// <summary>
    /// Sets the black component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_K(double value);
    /// <summary>
    /// Gets the red component.
    /// </summary>
    /// <value>The level of red from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_R() const;
    /// <summary>
    /// Sets the red component.
    /// </summary>
    /// <value>The level of red from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_R(double value);
    /// <summary>
    /// Gets the green component.
    /// </summary>
    /// <value>The level of green from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_G() const;
    /// <summary>
    /// Sets the green component.
    /// </summary>
    /// <value>The level of green from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_G(double value);
    /// <summary>
    /// Gets the blue component.
    /// </summary>
    /// <value>The level of blue from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API double get_B() const;
    /// <summary>
    /// Sets the blue component.
    /// </summary>
    /// <value>The level of blue from 0.0 to 1.0</value>
    ASPOSE_PDF_SHARED_API void set_B(double value);
    
    /// <summary>
    /// Returns color specified by the operator.
    /// </summary>
    /// <returns>Operator color.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Color getColor() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API SetColor();
    /// <summary>
    /// Set color for stroking operators for DeviceGray, CalGray and Indexed color spaces. 
    /// </summary>
    /// <param name="g">Color value.</param>
    ASPOSE_PDF_SHARED_API SetColor(double g);
    /// <summary>
    /// Set color for stroking operator for DeviceRGB, CalRGB, and Lab color spaces
    /// </summary>
    /// <param name="r">Red component.</param>
    /// <param name="g">Green component.</param>
    /// <param name="b">Blue component.</param>
    ASPOSE_PDF_SHARED_API SetColor(double r, double g, double b);
    /// <summary>
    /// Set color for non-stroking operator for CMYK color space
    /// </summary>
    /// <param name="c">Cyan component.</param>
    /// <param name="m">Magenta component.</param>
    /// <param name="y">Yellow component.</param>
    /// <param name="k">Black component.</param>
    ASPOSE_PDF_SHARED_API SetColor(double c, double m, double y, double k);
    /// <summary>
    /// Constructor which allows to specify color components.
    /// </summary>
    /// <param name="color">Array of color components.</param>
    ASPOSE_PDF_SHARED_API SetColor(System::ArrayPtr<double> color);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns string representation of color.
    /// </summary>
    /// <returns>String representation of color.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetNonstrokingColor> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetColor, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetNonstrokingColor> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetColor();
    
private:

    double _r;
    double _g;
    double _b;
    double _c;
    double _m;
    double _y;
    double _k;
    
    System::String ToString_NonConst();
    
};

/// <summary>
/// Base operator for all Set Color operators.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BasicSetColorAndPatternOperator : public Aspose::Pdf::Operators::BasicSetColorOperator
{
    typedef BasicSetColorAndPatternOperator ThisType;
    typedef Aspose::Pdf::Operators::BasicSetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Operators::SetAdvancedColorStroke;
    friend class Aspose::Pdf::Operators::SetAdvancedColor;
    
public:

    /// <summary>
    /// Gets Pattern Name.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_PatternName() const;
    
protected:

    /// <summary>
    /// Pattern name.
    /// </summary>
    System::String _patternName;
    
    BasicSetColorAndPatternOperator(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::Color::SetColor> command);
    
    ASPOSE_PDF_SHARED_API void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::Color::SetColor> command) override;
    
};

/// <summary>
/// Class representing SCN operator (set color for stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetAdvancedColorStroke : public Aspose::Pdf::Operators::BasicSetColorAndPatternOperator
{
    typedef SetAdvancedColorStroke ThisType;
    typedef Aspose::Pdf::Operators::BasicSetColorAndPatternOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetAdvancedStrokingColor;
    
public:

    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specifid by operator.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Color getColor() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API SetAdvancedColorStroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
    /// <summary>
    /// Constructor for scn operator 
    /// </summary>
    /// <param name="g">Gray color value.</param>
    ASPOSE_PDF_SHARED_API SetAdvancedColorStroke(double g);
    /// <summary>
    /// Constructor for scn operator.  
    /// </summary>
    /// <param name="g">Gray color value.</param>
    /// <param name="patternName">Name of the pattern.</param>
    ASPOSE_PDF_SHARED_API SetAdvancedColorStroke(double g, System::String patternName);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="r">Red component of the color/</param>
    /// <param name="g">Green component of the color.</param>
    /// <param name="b">Blue component of the color.</param>
    /// <param name="patternName">Name of the pattern.</param>
    ASPOSE_PDF_SHARED_API SetAdvancedColorStroke(double r, double g, double b, System::String patternName);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="c">Cyan component of the color.</param>
    /// <param name="m">Magenta component of the color.</param>
    /// <param name="y">Yellow component of the color. </param>
    /// <param name="k">Black component of the color</param>
    /// <param name="patternName">Name of the pattern.</param>
    ASPOSE_PDF_SHARED_API SetAdvancedColorStroke(double c, double m, double y, double k, System::String patternName);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="patternName">Pattern name.</param>
    /// <param name="colors">Color array.</param>
    ASPOSE_PDF_SHARED_API SetAdvancedColorStroke(System::ArrayPtr<double> colors, System::String patternName);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetAdvancedColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetAdvancedStrokingColor> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetAdvancedColorStroke, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetAdvancedStrokingColor> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetAdvancedColorStroke();
    
};

/// <summary>
/// Class representing scn operator (set color for non-stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetAdvancedColor : public Aspose::Pdf::Operators::BasicSetColorAndPatternOperator
{
    typedef SetAdvancedColor ThisType;
    typedef Aspose::Pdf::Operators::BasicSetColorAndPatternOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetAdvancedNonstrokingColor;
    
public:

    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color set by operator.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Color getColor() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API SetAdvancedColor();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="g">Color value.</param>
    /// <param name="patternName">Pattern name.</param>
    ASPOSE_PDF_SHARED_API SetAdvancedColor(double g, System::String patternName);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="g">Color value.</param>
    ASPOSE_PDF_SHARED_API SetAdvancedColor(double g);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="r">Red component of the color.</param>
    /// <param name="g">Green component of the color.</param>
    /// <param name="b">Blue component of the color.</param>
    /// <param name="patternName">Pattern name.</param>
    ASPOSE_PDF_SHARED_API SetAdvancedColor(double r, double g, double b, System::String patternName);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="c">Cyan component of the color.</param>
    /// <param name="m">Magenta component of the color.</param>
    /// <param name="y">Yellow component of the color.</param>
    /// <param name="k">Black component of the color.</param>
    /// <param name="patternName">Pattern name.</param>
    ASPOSE_PDF_SHARED_API SetAdvancedColor(double c, double m, double y, double k, System::String patternName);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="patternName">Pattern name.</param>
    ASPOSE_PDF_SHARED_API SetAdvancedColor(System::String patternName);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="patternName">Pattern name.</param>
    /// <param name="colors">Color array.</param>
    ASPOSE_PDF_SHARED_API SetAdvancedColor(System::ArrayPtr<double> colors, System::String patternName);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetAdvancedColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetAdvancedNonstrokingColor> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetAdvancedColor, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Color::SetAdvancedNonstrokingColor> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetAdvancedColor();
    
};

/// <summary>
/// Class representing sh operator (paint area with shading pattern).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ShFill : public Aspose::Pdf::Operator
{
    typedef ShFill ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::ShadingPatterns::PaintShapeAndColorShading;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    /// <summary>
    /// Gets the shading name.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name() const;
    /// <summary>
    /// Sets the shading name.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
    /// <summary>
    ///  Initializes operator.
    /// </summary>
    /// <param name="shadingName">Shading name.</param>
    ASPOSE_PDF_SHARED_API ShFill(System::String shadingName);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ShFill();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ShFill, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ShFill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::ShadingPatterns::PaintShapeAndColorShading> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ShFill, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::ShadingPatterns::PaintShapeAndColorShading> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ShFill();
    
private:

    System::String _name;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::ShadingPatterns::PaintShapeAndColorShading> command);
    
};

/// <summary>
/// Class  representing T* operator (Move to start of the next line).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MoveToNextLine : public Aspose::Pdf::Operators::TextPlaceOperator
{
    typedef MoveToNextLine ThisType;
    typedef Aspose::Pdf::Operators::TextPlaceOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextPositioningOperators::MoveToNextLineDefault;
    
public:

    /// <summary>
    /// Initializes operator. 
    /// </summary>
    ASPOSE_PDF_SHARED_API MoveToNextLine();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text of the operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    MoveToNextLine(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextPositioningOperators::MoveToNextLineDefault> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MoveToNextLine, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextPositioningOperators::MoveToNextLineDefault> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~MoveToNextLine();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing Tc operator (set character spacing).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetCharacterSpacing : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetCharacterSpacing ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetCharacterSpasing;
    
public:

    /// <summary>
    /// Gets the character spacing.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_CharSpacing() const;
    /// <summary>
    /// Sets the character spacing.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CharSpacing(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="charSpacing">Character spacing.</param>
    ASPOSE_PDF_SHARED_API SetCharacterSpacing(double charSpacing);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetCharacterSpacing(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetCharacterSpasing> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetCharacterSpacing, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetCharacterSpasing> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetCharacterSpacing();
    
private:

    double _charSpacing;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetCharacterSpasing> command);
    
};

/// <summary>
/// Class representing Td operator (move text position).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MoveTextPosition : public Aspose::Pdf::Operators::TextPlaceOperator
{
    typedef MoveTextPosition ThisType;
    typedef Aspose::Pdf::Operators::TextPlaceOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextPositioningOperators::MoveToNextLine;
    
public:

    /// <summary>
    /// X coordinate of text position.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_X() const;
    /// <summary>
    /// X coordinate of text position.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_X(double value);
    /// <summary>
    /// Y coordinate of text position.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Y coordinate of text position.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="x">X coordinate of text position.</param>
    /// <param name="y">Y coordinate of text position.</param>
    ASPOSE_PDF_SHARED_API MoveTextPosition(double x, double y);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    MoveTextPosition(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::TextPositioningOperators::MoveToNextLine> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MoveTextPosition, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::TextPositioningOperators::MoveToNextLine> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~MoveTextPosition();
    
private:

    double _x;
    double _y;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::TextPositioningOperators::MoveToNextLine> command);
    
};

/// <summary>
/// Class representing TD operator (move position and set leading).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MoveTextPositionSetLeading : public Aspose::Pdf::Operators::TextPlaceOperator
{
    typedef MoveTextPositionSetLeading ThisType;
    typedef Aspose::Pdf::Operators::TextPlaceOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextPositioningOperators::MoveToNextLineAndSetLeading;
    
public:

    /// <summary>
    /// X coordinate of text position.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_X() const;
    /// <summary>
    /// X coordinate of text position.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_X(double value);
    /// <summary>
    /// Y coordinate of text position.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Y coordinate of text position.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="x">X coordinate of text position.</param>
    /// <param name="y">Y coordinate of text position.</param>
    ASPOSE_PDF_SHARED_API MoveTextPositionSetLeading(double x, double y);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    MoveTextPositionSetLeading(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextPositioningOperators::MoveToNextLineAndSetLeading> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MoveTextPositionSetLeading, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextPositioningOperators::MoveToNextLineAndSetLeading> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~MoveTextPositionSetLeading();
    
private:

    double _x;
    double _y;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextPositioningOperators::MoveToNextLineAndSetLeading> command);
    
};

/// <summary>
/// Class representing Tf operator (set text font and size).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SelectFont : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SelectFont ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    
public:

    /// <summary>
    /// Name of font.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name() const;
    /// <summary>
    /// Size of text.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Size() const;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="resName">The name of font resource, e.g. F1, F2 etc.</param>
    /// <param name="size">Size of the font.</param>
    ASPOSE_PDF_SHARED_API SelectFont(System::String resName, double size);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SelectFont(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextFont> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SelectFont, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextFont> command));
    /// <summary>
    /// Initializes Operator from Command.
    /// </summary>
    /// <param name="command">The command</param>
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextFont> command);
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SelectFont();
    
private:

    System::String name;
    double size;
    
    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing Tj operator (show text).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ShowText : public Aspose::Pdf::Operators::TextShowOperator
{
    typedef ShowText ThisType;
    typedef Aspose::Pdf::Operators::TextShowOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextString;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::TextBoxFieldXfa;
    friend class Aspose::Pdf::Structure::TextElement;
    friend class Aspose::Pdf::Forms::TextModel;
    friend class Aspose::Pdf::Artifact;
    
public:

    /// <summary>
    /// Text of operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text() override;
    /// <summary>
    /// Text of operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Text(System::String value) override;
    
    /// <summary>
    /// Initializes Tj opearor. 
    /// </summary>
    /// <param name="index">Index of operator in operators list.</param>
    /// <param name="text">argument of the operator.</param>
    ASPOSE_PDF_SHARED_API ShowText(int32_t index, System::String text);
    /// <summary>
    /// Initializes Tj operator. 
    /// </summary>
    /// <param name="text">argument of the operator.</param>
    ASPOSE_PDF_SHARED_API ShowText(System::String text);
    /// <summary>
    /// Initializes Tj opearor.
    /// </summary>
    /// <param name="text">text to add.</param>
    /// <param name="font">font that is used to draw the text.</param>
    ASPOSE_PDF_SHARED_API ShowText(System::String text, System::SharedPtr<Text::Font> font);
    /// <summary>
    /// Initializes Tj operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API ShowText();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Produces text code of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Text of operator.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> get_PdfString() const;
    /// <summary>
    /// Text of operator.
    /// </summary>
    void set_PdfString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextString> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ShowText, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextString> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ShowText();
    
private:

    System::String text;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> pdfString;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextString> command);
    
};

/// <summary>
/// Class describes text and position to use with operator TJ (set glyph with position)
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GlyphPosition : public System::Object
{
    typedef GlyphPosition ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontUtilities;
    friend class Aspose::Pdf::Operators::SetGlyphsPositionShowText;
    friend class Aspose::Pdf::Tests::Text::TextSegmentTests;
    
public:

    /// <summary>
    /// Text of operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text() const;
    /// <summary>
    /// Position off the text in the operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Position() const;
    
    /// <summary>
    /// Constructs glyph position.
    /// </summary>
    /// <param name="text">Text value.</param>
    /// <param name="position">Position value.</param>
    ASPOSE_PDF_SHARED_API GlyphPosition(System::String text, double position);
    /// <summary>
    /// Constructor for Glyph Position.
    /// </summary>
    /// <param name="text">Text calue.</param>
    ASPOSE_PDF_SHARED_API GlyphPosition(System::String text);
    
protected:

    bool get_UsePosition() const;
    
private:

    System::String _text;
    double _position;
    bool _usePosition;
    
};

/// <summary>
/// Class representing TJ operator (show text with glyph positioning).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetGlyphsPositionShowText : public Aspose::Pdf::Operators::TextShowOperator
{
    typedef SetGlyphsPositionShowText ThisType;
    typedef Aspose::Pdf::Operators::TextShowOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextWithPositions;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    /// <summary>
    /// Returns  positions of glyphs.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<GlyphPosition>>> get_GlyphPositions() const;
    /// <summary>
    /// Gets text from operator argument (glyph positioning is ignored).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text() override;
    
    /// <summary>
    /// Constructor for TJ operator.
    /// </summary>
    /// <param name="glyphPositions">List of Glyph Positions.</param>
    ASPOSE_PDF_SHARED_API SetGlyphsPositionShowText(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<GlyphPosition>>> glyphPositions);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> args;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetGlyphsPositionShowText();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetGlyphsPositionShowText, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetGlyphsPositionShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextWithPositions> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetGlyphsPositionShowText, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextWithPositions> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetGlyphsPositionShowText();
    
private:

    System::String text;
    System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<GlyphPosition>>> _glyphPositions;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextWithPositions> command);
    
};

/// <summary>
/// Class represenging TL operator (set text leading).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetTextLeading : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetTextLeading ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextLeading;
    
public:

    /// <summary>
    /// Gets the text leading.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Leading() const;
    /// <summary>
    /// Sets the text leading.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Leading(double value);
    
    /// <summary>
    /// Initializes text leading operator. 
    /// </summary>
    /// <param name="leading">Text leading.</param>
    ASPOSE_PDF_SHARED_API SetTextLeading(double leading);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Produces text code of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    SetTextLeading(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextLeading> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetTextLeading, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextLeading> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetTextLeading();
    
private:

    double _leading;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextLeading> command);
    
};

/// <summary>
/// Class representing Tm operator (set text matrix).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetTextMatrix : public Aspose::Pdf::Operators::TextPlaceOperator
{
    typedef SetTextMatrix ThisType;
    typedef Aspose::Pdf::Operators::TextPlaceOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextPositioningOperators::SetTextMatrix;
    
public:

    /// <summary>
    /// Matrix argument of the operator. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix() const;
    /// <summary>
    /// Matrix argument of the operator. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Matrix(System::SharedPtr<Aspose::Pdf::Matrix> value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="a">A coefficient</param>
    /// <param name="b">B coefficient</param>
    /// <param name="c">C coefficient</param>
    /// <param name="d">D coefficient</param>
    /// <param name="e">E coefficient</param>
    /// <param name="f">F coefficient</param>
    ASPOSE_PDF_SHARED_API SetTextMatrix(double a, double b, double c, double d, double e, double f);
    /// <summary>
    /// Initializes operator by matrix.
    /// </summary>
    /// <param name="m">Transfomation matrix.</param>
    ASPOSE_PDF_SHARED_API SetTextMatrix(System::SharedPtr<Aspose::Pdf::Matrix> m);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetTextMatrix(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::TextPositioningOperators::SetTextMatrix> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetTextMatrix, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::TextPositioningOperators::SetTextMatrix> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetTextMatrix();
    
private:

    System::SharedPtr<Aspose::Pdf::Matrix> matrix;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::TextPositioningOperators::SetTextMatrix> command);
    
};

/// <summary>
/// Class representing Tr operator (set text rendering mode).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetTextRenderingMode : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetTextRenderingMode ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PdfToApsConverter;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextRendringMode;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API SetTextRenderingMode();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    const System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber>& get_RenderingMode() const;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetTextRenderingMode(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextRendringMode> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetTextRenderingMode, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextRendringMode> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetTextRenderingMode();
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> pr_RenderingMode;
    
    void set_RenderingMode(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> value);
    
};

/// <summary>
/// Class representing Ts operator (set text rise).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetTextRise : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetTextRise ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextRise;
    
public:

    /// <summary>
    /// Gets the text rise.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_TextRise() const;
    /// <summary>
    /// Sets the text rise.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextRise(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="textRise">Text rise.</param>
    ASPOSE_PDF_SHARED_API SetTextRise(double textRise);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetTextRise(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextRise> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetTextRise, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextRise> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetTextRise();
    
private:

    double _textRise;
    
    void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::TextStateOperators::SetTextRise> command);
    
};

/// <summary>
/// Class representing Tw operator (set word spacing).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetWordSpacing : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetWordSpacing ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetWordSpacing;
    
public:

    /// <summary>
    /// Gets the word spacing.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_WordSpacing() const;
    /// <summary>
    /// Sets the word spacing.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_WordSpacing(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="wordSpacing">Word spacing.</param>
    ASPOSE_PDF_SHARED_API SetWordSpacing(double wordSpacing);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    SetWordSpacing(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::TextStateOperators::SetWordSpacing> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetWordSpacing, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::TextStateOperators::SetWordSpacing> command));
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetWordSpacing();
    
private:

    double _wordSpacing;
    
    void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::TextStateOperators::SetWordSpacing> command);
    
};

/// <summary>
/// Class representing Tz operator (set horizontal text scaling).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetHorizontalTextScaling : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetHorizontalTextScaling ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetHorizontalScaling;
    
public:

    /// <summary>
    /// Gets the horizontal scaling.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_HorizontalScaling() const;
    /// <summary>
    /// Sets the horizontal scaling.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HorizontalScaling(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="horizintalScaling">Horizontal scaling.</param>
    ASPOSE_PDF_SHARED_API SetHorizontalTextScaling(double horizintalScaling);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetHorizontalTextScaling(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetHorizontalScaling> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetHorizontalTextScaling, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetHorizontalScaling> command));
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetHorizontalTextScaling();
    
private:

    double _horizontalScaling;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextStateOperators::SetHorizontalScaling> command);
    
};

/// <summary>
/// Class representing v operator (append curve to path, initial point replicated).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CurveTo1 : public Aspose::Pdf::Operator
{
    typedef CurveTo1 ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve1;
    
public:

    /// <summary>
    /// Points of the curve.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Point>> get_Points() const;
    
    /// <summary>
    /// Initializes curve operator.
    /// </summary>
    /// <param name="x2">Abscissa of second point.</param>
    /// <param name="y2">Ordinate of second point.</param>
    /// <param name="x3">Abscissa of third point.</param>
    /// <param name="y3">Ordinate of third point.</param>
    ASPOSE_PDF_SHARED_API CurveTo1(double x2, double y2, double x3, double y3);
    
    /// <summary>
    /// Accepts operator selector.
    /// </summary>
    /// <param name="visitor">Visitor object</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    CurveTo1(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve1> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CurveTo1, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve1> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~CurveTo1();
    
private:

    System::ArrayPtr<System::SharedPtr<Point>> points;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve1> command);
    
};

/// <summary>
/// Class representing w operator (set line width).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetLineWidth : public Aspose::Pdf::Operator
{
    typedef SetLineWidth ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineWidth;
    
public:

    /// <summary>
    /// Gets width of the line. 
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Width() const;
    /// <summary>
    /// Sets width of the line. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(double value);
    
    /// <summary>
    /// Initializes operator with width value.
    /// </summary>
    /// <param name="width">Line width.</param>
    ASPOSE_PDF_SHARED_API SetLineWidth(double width);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetLineWidth(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineWidth> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetLineWidth, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineWidth> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetLineWidth();
    
private:

    double width;
    
    System::String ToString_NonConst();
    void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineWidth> command);
    
};

/// <summary>
/// Class representing W operator (set clipping path using non-zero winding rule).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Clip : public Aspose::Pdf::Operator
{
    typedef Clip ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::ClippingPathOperators::ModifyCurrentClippingPath;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API Clip();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    /// <summary>
    /// Returns text representation of operators.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    Clip(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Clip, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~Clip();
    
private:

    System::String ToString_NonConst();
    
};

/// <summary>
/// Class representing W* operator (set clipping path using even-odd rule).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EOClip : public Aspose::Pdf::Operator
{
    typedef EOClip ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::ClippingPathOperators::ModifyCurrentClippingPathEO;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API EOClip();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EOClip(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EOClip, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~EOClip();
    
};

/// <summary>
/// Class representing y operator (append curve to path, final point replicated).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CurveTo2 : public Aspose::Pdf::Operator
{
    typedef CurveTo2 ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve2;
    
public:

    /// <summary>
    /// Points of the curve.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Point>> get_Points() const;
    
    /// <summary>
    /// Initializes curve operator.
    /// </summary>
    /// <param name="x1">Abscissa of second point.</param>
    /// <param name="y1">Ordinate of second point.</param>
    /// <param name="x3">Abscissa of third point.</param>
    /// <param name="y3">Ordinate of third point.</param>
    ASPOSE_PDF_SHARED_API CurveTo2(double x1, double y1, double x3, double y3);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    CurveTo2(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve2> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CurveTo2, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve2> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~CurveTo2();
    
private:

    System::ArrayPtr<System::SharedPtr<Point>> points;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::PathConstructionOperators::AppendCubicBezierCurve2> command);
    
};

/// <summary>
/// Class representing ' operator (move to next line and show text).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MoveToNextLineShowText : public Aspose::Pdf::Operators::TextShowOperator
{
    typedef MoveToNextLineShowText ThisType;
    typedef Aspose::Pdf::Operators::TextShowOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextOnTheNextLine;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    /// <summary>
    /// Gets operator text.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API MoveToNextLineShowText();
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="text">The text.</param>
    ASPOSE_PDF_SHARED_API MoveToNextLineShowText(System::String text);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    MoveToNextLineShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextOnTheNextLine> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MoveToNextLineShowText, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextOnTheNextLine> command));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    
    virtual ASPOSE_PDF_SHARED_API ~MoveToNextLineShowText();
    
private:

    System::String text;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextOnTheNextLine> command);
    
};

/// <summary>
/// Class representing " operator (set word and character spacing, move to the next line and show text).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SetSpacingMoveToNextLineShowText : public Aspose::Pdf::Operators::TextShowOperator
{
    typedef SetSpacingMoveToNextLineShowText ThisType;
    typedef Aspose::Pdf::Operators::TextShowOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextWithParameters;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::StringTextSegment;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    
public:

    /// <summary>
    /// Gets word spacing.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Aw() const;
    /// <summary>
    /// Get character spacing. 
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Ac() const;
    /// <summary>
    /// Gets text of operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text() override;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="aw">Word spacing.</param>
    /// <param name="ac">Character spacing.</param>
    /// <param name="text">Text value.</param>
    ASPOSE_PDF_SHARED_API SetSpacingMoveToNextLineShowText(double aw, double ac, System::String text);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<IOperatorSelector>& visitor) override;
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> AWPrimitive;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> ACPrimitive;
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetSpacingMoveToNextLineShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextWithParameters> command);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetSpacingMoveToNextLineShowText, CODEPORTING_ARGS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextWithParameters> command));
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetSpacingMoveToNextLineShowText();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SetSpacingMoveToNextLineShowText, CODEPORTING_ARGS());
    ASPOSE_PDF_SHARED_API void SerializeToString(const System::SharedPtr<System::Text::StringBuilder>& sb) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SetSpacingMoveToNextLineShowText();
    
private:

    double aw;
    System::String text;
    double ac;
    
    void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextWithParameters> command);
    
};

} // namespace Operators
} // namespace Pdf
} // namespace Aspose


