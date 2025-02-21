#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !NETCORE


// C# preprocessor directive: #endif


#include <system/enum_helpers.h>
#include <system/array.h>

#include "Aspose.PDF.Cpp/Generator/BaseParagraph.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class BorderCornerStyle;
enum class BorderCornerType;
class BorderInfo;
class Cell;
class Color;
enum class ColumnAdjustment;
class Document;
namespace Drawing
{
class Graph;
} // namespace Drawing
class FloatingBox;
class FormattedFragment;
class GraphInfo;
enum class HorizontalAlignment;
namespace LogicalStructure
{
class TableElement;
} // namespace LogicalStructure
class MarginInfo;
class Operator;
class Page;
class PageGenerator;
class Paragraphs;
class Point;
class Row;
class Rows;
enum class TableBroken;
namespace Tagged
{
class TaggedContext;
} // namespace Tagged
namespace Text
{
class TextFragment;
class TextState;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Globalization
{
class CultureInfo;
} // namespace Globalization
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a table that can be added to the page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Table final : public Aspose::Pdf::BaseParagraph
{
    typedef Table ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::FormattedFragment;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::LogicalStructure::TableElement;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::FloatingBox;
    friend class Aspose::Pdf::MarginInfo;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    
public:

    /// <summary>
    /// Gets table background color
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Color>& get_BackgroundColor() const;
    /// <summary>
    /// Sets table background color
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets break text for table
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Text::TextFragment>& get_BreakText() const;
    /// <summary>
    /// Sets break text for table
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BreakText(System::SharedPtr<Text::TextFragment> value);
    /// <summary>
    /// Gets the styles of the border corners
    /// </summary>
    ASPOSE_PDF_SHARED_API BorderCornerStyle get_CornerStyle() const;
    /// <summary>
    /// Sets the styles of the border corners
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CornerStyle(BorderCornerStyle value);
    /// <summary>
    /// Gets the style for repeating rows
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Text::TextState>& get_RepeatingRowsStyle() const;
    /// <summary>
    /// Gets the style for repeating rows
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RepeatingRowsStyle(System::SharedPtr<Text::TextState> value);
    /// <summary>
    /// Gets the maximum columns count for table
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_RepeatingColumnsCount() const;
    /// <summary>
    /// Sets the maximum columns count for table
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RepeatingColumnsCount(int32_t value);
    /// <summary>
    /// Gets the first rows count repeated for several pages
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_RepeatingRowsCount() const;
    /// <summary>
    /// Gets the first rows count repeated for several pages
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RepeatingRowsCount(int32_t value);
    /// <summary>
    /// Gets the column widths of the table.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ColumnWidths() const;
    /// <summary>
    /// Gets the column widths of the table.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ColumnWidths(System::String value);
    /// <summary>
    /// Gets table vertial broken;
    /// </summary>
    ASPOSE_PDF_SHARED_API TableBroken get_Broken() const;
    /// <summary>
    /// Sets table vertial broken;
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Broken(TableBroken value);
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<BorderInfo>& get_DefaultCellBorder() const;
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellBorder(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DefaultColumnWidth() const;
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultColumnWidth(System::String value);
    /// <summary>
    /// Gets the rows of the table.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rows> get_Rows() const;
    /// <summary>
    /// Gets the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<BorderInfo>& get_Border() const;
    /// <summary>
    /// Sets the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets the default cell padding.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<MarginInfo>& get_DefaultCellPadding() const;
    /// <summary>
    /// Sets the default cell padding.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets the default cell text state.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Text::TextState> get_DefaultCellTextState();
    /// <summary>
    /// Sets the default cell text state.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellTextState(System::SharedPtr<Text::TextState> value);
    /// <summary>
    /// Gets the table alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_Alignment() const;
    /// <summary>
    /// Sets the table alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Alignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets the table left coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_Left() const;
    /// <summary>
    /// Sets the table left coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Left(float value);
    /// <summary>
    /// Gets the table top coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_Top() const;
    /// <summary>
    /// Sets the table top coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Top(float value);
    /// <summary>
    /// Gets the table is broken - will be truncated for next page.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsBroken() const;
    /// <summary>
    /// Sets the table is broken - will be truncated for next page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsBroken(bool value);
    /// <summary>
    /// Gets border included in column widhts.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsBordersIncluded() const;
    /// <summary>
    /// Sets border included in column widhts.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsBordersIncluded(bool value);
    /// <summary>
    /// Gets the table column adjustment.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ColumnAdjustment get_ColumnAdjustment() const;
    /// <summary>
    /// Sets the table column adjustment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ColumnAdjustment(Aspose::Pdf::ColumnAdjustment value);
    
    /// <summary>
    /// Default ctor
    /// </summary>
    ASPOSE_PDF_SHARED_API Table();
    
    /// <summary>
    /// Get width.
    /// </summary>
    /// <returns>The table width</returns>
    ASPOSE_PDF_SHARED_API double GetWidth();
    /// <summary>
    /// Get height.
    /// </summary>
    /// <param name="parentPage">The table's parent page (optional).</param>
    /// <returns>The table height.</returns>
    ASPOSE_PDF_SHARED_API double GetHeight(System::SharedPtr<Page> parentPage = nullptr);
    /// <summary>
    /// Set height.
    /// </summary>
    /// <param name="colNumber">The column number.</param>
    /// <param name="textState">The text state for column.</param>
    ASPOSE_PDF_SHARED_API void SetColumnTextState(int32_t colNumber, System::SharedPtr<Text::TextState> textState);
    /// <summary>
    /// Clone the table.
    /// </summary>
    /// <returns>The cloned object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    /// <summary>
    /// Gets max table cells count(for internal use)
    /// </summary>
    int32_t get_MaxCellsCount() const;
    /// <summary>
    /// Gets printed rows count(for internal use)
    /// </summary>
    int32_t get_PrintedRowsCount() const;
    /// <summary>
    /// Gets the column widths of the table.(for internal use)
    /// </summary>
    const System::ArrayPtr<double>& get_InternalColumnWidths() const;
    /// <summary>
    /// Gets the column widths of the table.(for internal use)
    /// </summary>
    void set_InternalColumnWidths(System::ArrayPtr<double> value);
    /// <summary>
    /// Gets columns count from colwidhts
    /// </summary>
    int32_t get_ColsCount();
    /// <summary>
    /// Gets special symbols processing like $P $p etc..
    /// </summary>
    bool get_IsProcessSpecialSymbols() const;
    /// <summary>
    /// Gets text states for columns(for internally use).
    /// </summary>
    const System::ArrayPtr<System::SharedPtr<Text::TextState>>& get_ColumnTextStates() const;
    /// <summary>
    /// Gets top margin nested table.
    /// </summary>
    double get_TablesTopMargin();
    /// <summary>
    /// Gets the parent table(for internal use only).
    /// </summary>
    const System::SharedPtr<Table>& get_ParentTable() const;
    /// <summary>
    /// Sets the parent table(for internal use only).
    /// </summary>
    void set_ParentTable(System::SharedPtr<Table> value);
    /// <summary>
    /// Gets McName property for marked content (TaggedPdf)
    /// </summary>
    System::String get_McName() const;
    /// <summary>
    /// Sets McName property for marked content (TaggedPdf)
    /// </summary>
    void set_McName(System::String value);
    /// <summary>
    /// Gets McId property for marked content (TaggedPdf)
    /// </summary>
    int32_t get_McId() const;
    /// <summary>
    /// Sets McId property for marked content (TaggedPdf)
    /// </summary>
    void set_McId(int32_t value);
    double get_RepeatingRowsHeight();
    
    /// <summary>
    /// Gets border height.
    /// </summary>
    static double GetBorderHeight(System::SharedPtr<BorderInfo> border);
    /// <summary>
    /// Gets border width.
    /// </summary>
    static double GetBorderWidth(System::SharedPtr<BorderInfo> border);
    /// <summary>
    /// Gets the column widths of the table.(for internal use)
    /// </summary>
    /// <param name="index">The index of column.</param>
    double GetColumnWidth(int32_t index);
    /// <summary>
    /// Adds border into the page's content.
    /// </summary>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    /// <param name="info">The border info.</param>
    /// <param name="start">The start point.</param>
    /// <param name="end">The end point.</param>
    static void DrawLine(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<GraphInfo> info, System::SharedPtr<Point> start, System::SharedPtr<Point> end);
    /// <summary>
    /// Add operators for rectangle.
    /// </summary>        
    /// <param name="info">The border info.</param>
    /// <param name="topLeft">The left top point.</param>
    /// <param name="rightBottom">The right bottom point.</param>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    /// <param name="radius">The border radius.</param>
    static void DrawRoundedRectangle(System::SharedPtr<GraphInfo> info, System::SharedPtr<Point> topLeft, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double radius);
    /// <summary>
    /// Returns line width.
    /// </summary>
    /// <param name="info">The border info.</param>
    static double GetLineWidth(System::SharedPtr<GraphInfo> info);
    /// <summary>
    /// Returns line single width.
    /// </summary>
    /// <param name="info">The border info.</param>
    static double GetLineSingleWidth(System::SharedPtr<GraphInfo> info);
    static void DrawDoubleBorder(System::SharedPtr<BorderInfo> border, System::SharedPtr<Point> leftTop, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double left, double right, double top, double bottom);
    /// <summary>
    /// Adds border into the page's content.
    /// </summary>
    /// <param name="border">The border style.</param>
    /// <param name="leftTop">The left top point.</param>
    /// <param name="rightBottom">The right bottom point.</param>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    /// <param name="cornerStyle">The border corner style.</param>
    static void DrawBorder(System::SharedPtr<BorderInfo> border, System::SharedPtr<Point> leftTop, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, BorderCornerStyle cornerStyle);
    static void DrawBackground(System::SharedPtr<Point> leftTop, double width, double height, System::SharedPtr<Color> color, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, BorderCornerType type, double radius);
    static void ApplyBorderToCurXY(double& curX, double& curY, System::SharedPtr<BorderInfo> border, double leftRowBorderWidth);
    /// <summary>
    /// Gets a object with specified ID in the document.
    /// </summary>
    /// <param name="id">The object id.</param>
    /// <returns>The object with specified id. Null if the id is not found.</returns>
    System::SharedPtr<System::Object> GetObjectById(System::String id);
    double GetAllBordersWidth();
    double GetRepeatingColumnWidth();
    /// <summary>
    /// Process table.
    /// </summary>
    /// <param name="curX">The current X positon.</param>
    /// <param name="curY">The current Y positon.</param>
    /// <param name="isCalculatedMode">The calculation mode for nested tables.</param>
    /// <param name="pageRealWidth">The real page width.</param>
    /// <param name="bottomY">The page bottom Y coordinate.</param>
    /// <param name="page">The page.</param>
    /// <param name="isProcessSpecialSymbols">The condition for special symbols processing like $P $p etc.</param>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    bool Process(double& curX, double& curY, bool isCalculatedMode, double pageRealWidth, double bottomY, System::SharedPtr<Page> page, bool isProcessSpecialSymbols, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    /// <summary>
    /// Get column width
    /// </summary>
    /// <param name="stringColumnWidth">The string representation.</param>
    static double GetColumnWidth(System::String stringColumnWidth);
    static System::ArrayPtr<double> GetColumnWidths(System::String columnWidthString, double realWidth, bool isCutRightPageMargin);
    /// <summary>
    /// Apply column width.
    /// </summary>
    /// <param name="realWidth">The real width.</param>
    /// <param name="page">The current page object.</param>
    void ApplyColumnWidth(double realWidth, System::SharedPtr<Page> page);
    /// <summary>
    /// Reset isConverted property of formatted fragments
    /// </summary>
    void ResetFormattedFragments(System::SharedPtr<Paragraphs> paragraphs);
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
    virtual ASPOSE_PDF_SHARED_API ~Table();
    
private:

    System::SharedPtr<Text::TextState> defaultCellTextState;
    bool isNullAddedToRows;
    bool isPreprocessed;
    System::SharedPtr<Aspose::Pdf::Rows> m_Rows;
    int32_t pr_MaxCellsCount;
    
    /// <summary>
    /// Gets max table cells count(for internal use)
    /// </summary>
    void set_MaxCellsCount(int32_t value);
    
    int32_t pr_PrintedRowsCount;
    
    /// <summary>
    /// Gets printed rows count(for internal use)
    /// </summary>
    void set_PrintedRowsCount(int32_t value);
    
    System::SharedPtr<Color> pr_BackgroundColor;
    System::SharedPtr<Text::TextFragment> pr_BreakText;
    BorderCornerStyle pr_CornerStyle;
    System::ArrayPtr<double> pr_InternalColumnWidths;
    System::SharedPtr<Text::TextState> pr_RepeatingRowsStyle;
    int32_t pr_RepeatingColumnsCount;
    int32_t pr_RepeatingRowsCount;
    System::String pr_ColumnWidths;
    TableBroken pr_Broken;
    System::SharedPtr<BorderInfo> pr_DefaultCellBorder;
    System::String pr_DefaultColumnWidth;
    System::SharedPtr<BorderInfo> pr_Border;
    System::SharedPtr<MarginInfo> pr_DefaultCellPadding;
    Aspose::Pdf::HorizontalAlignment pr_Alignment;
    float pr_Left;
    float pr_Top;
    bool pr_IsBroken;
    bool pr_IsBordersIncluded;
    Aspose::Pdf::ColumnAdjustment pr_ColumnAdjustment;
    bool pr_IsProcessSpecialSymbols;
    
    /// <summary>
    /// Sets special symbols processing like $P $p etc..
    /// </summary>
    void set_IsProcessSpecialSymbols(bool value);
    
    System::ArrayPtr<System::SharedPtr<Text::TextState>> pr_ColumnTextStates;
    
    /// <summary>
    /// Gets text states for columns(for internally use).
    /// </summary>
    void set_ColumnTextStates(System::ArrayPtr<System::SharedPtr<Text::TextState>> value);
    
    System::WeakPtr<Table> pr_ParentTable;
    
    double get_Width();
    
    System::String pr_McName;
    int32_t pr_McId;
    static System::SharedPtr<System::Globalization::CultureInfo> ciInvariant;
    
    static System::SharedPtr<System::Globalization::CultureInfo> get_InvariantCulture();
    
    /// <summary>
    /// Add operators for rectangle.
    /// </summary>        
    /// <param name="info">The border info.</param>
    /// <param name="topLeft">The left top point.</param>
    /// <param name="rightBottom">The right bottom point.</param>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    static void DrawRectangle(System::SharedPtr<GraphInfo> info, System::SharedPtr<Point> topLeft, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    static void DrawRoundedPathSegment(System::SharedPtr<Point> first, System::SharedPtr<Point> second, System::SharedPtr<Point> third, bool isCornerRounded, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    bool ProcessVerticalBroken(double& curX, double& curY, double pageRealWidth, System::SharedPtr<Page> page, bool isCalculatedMode, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    void RecalculateAutoFitRows(double pageRealWidth);
    void PreProcessAutoFitRow(System::SharedPtr<Row> row, System::ArrayPtr<double> borderWidths, double pageRealWidth);
    void PreProcessRow(System::SharedPtr<Row> row, int32_t i);
    void PreProcess(double pageRealWidth);
    void ProcessRowSpanSplit(System::SharedPtr<Row> row, int32_t i, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> rowsOperators);
    void AddRowsOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, int32_t count);
    System::SharedPtr<Row> GetBreakRow(double curX, double curY, bool isCalculatedMode, double pageRealWidth, double bottomY, System::SharedPtr<Page> page);
    
};

} // namespace Pdf
} // namespace Aspose


