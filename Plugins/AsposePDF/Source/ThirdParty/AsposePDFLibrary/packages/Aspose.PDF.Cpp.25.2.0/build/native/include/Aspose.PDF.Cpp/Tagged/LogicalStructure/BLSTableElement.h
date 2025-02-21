#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/Tagged/LogicalStructure/StructureElement.h"
#include "Aspose.PDF.Cpp/Tagged/LogicalStructure/ITextElement.h"
#include "Aspose.PDF.Cpp/Tagged/LogicalStructure/BLSElement.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class BorderCornerStyle;
class BorderInfo;
class Cell;
class Color;
enum class ColumnAdjustment;
namespace Engine
{
namespace Data
{
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
enum class HorizontalAlignment;
namespace LogicalStructure
{
class MCRElement;
class StructureTextState;
class StructureTypeStandard;
class TableCellElement;
class TableRowCollectionElement;
class TableTBodyElement;
class TableTDElement;
class TableTFootElement;
class TableTHeadElement;
class TableTHElement;
class TableTRElement;
} // namespace LogicalStructure
class MarginInfo;
class Row;
class Table;
enum class TableBroken;
namespace Tagged
{
class TaggedContent;
class TaggedContext;
} // namespace Tagged
namespace Text
{
class TextFragment;
class TextState;
} // namespace Text
enum class VerticalAlignment;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents Table structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TableElement final : public Aspose::Pdf::LogicalStructure::BLSElement
{
    typedef TableElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::BLSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::TableTRElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    
public:

    /// <summary>
    ///     Gets the table background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BackgroundColor() const;
    /// <summary>
    ///     Sets the table background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    ///     Gets the table border.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<BorderInfo> get_Border() const;
    /// <summary>
    ///     Sets the table border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    ///     Gets the table alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API HorizontalAlignment get_Alignment() const;
    /// <summary>
    ///     Sets the table alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Alignment(HorizontalAlignment value);
    /// <summary>
    ///     Gets the styles of the border corners
    /// </summary>
    ASPOSE_PDF_SHARED_API BorderCornerStyle get_CornerStyle() const;
    /// <summary>
    ///     Sets the styles of the border corners
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CornerStyle(BorderCornerStyle value);
    /// <summary>
    ///     Gets table vertial broken;
    /// </summary>
    ASPOSE_PDF_SHARED_API TableBroken get_Broken() const;
    /// <summary>
    ///     Sets table vertial broken;
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Broken(TableBroken value);
    /// <summary>
    ///     Gets the table column adjustment.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ColumnAdjustment get_ColumnAdjustment() const;
    /// <summary>
    ///     Sets the table column adjustment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ColumnAdjustment(Aspose::Pdf::ColumnAdjustment value);
    /// <summary>
    ///     Gets the column widths of the table.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ColumnWidths() const;
    /// <summary>
    ///     Gets the column widths of the table.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ColumnWidths(System::String value);
    /// <summary>
    ///     Gets default cell border.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<BorderInfo> get_DefaultCellBorder() const;
    /// <summary>
    ///     Gets default cell border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellBorder(System::SharedPtr<BorderInfo> value);
    /// <summary>
    ///     Gets the default cell padding.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MarginInfo> get_DefaultCellPadding() const;
    /// <summary>
    ///     Sets the default cell padding.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    ///     Gets the default cell text state.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    /// <summary>
    ///     Sets the default cell text state.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    ///     Gets default column width.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DefaultColumnWidth() const;
    /// <summary>
    ///     Sets default column width.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultColumnWidth(System::String value);
    /// <summary>
    ///     Gets the table is broken - will be truncated for next page.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsBroken() const;
    /// <summary>
    ///     Sets the table is broken - will be truncated for next page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsBroken(bool value);
    /// <summary>
    ///     Gets border included in column widhts.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsBordersIncluded() const;
    /// <summary>
    ///     Sets border included in column widhts.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsBordersIncluded(bool value);
    /// <summary>
    ///     Gets the table left coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_Left() const;
    /// <summary>
    ///     Sets the table left coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Left(float value);
    /// <summary>
    ///     Gets the table top coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_Top() const;
    /// <summary>
    ///     Sets the table top coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Top(float value);
    /// <summary>
    ///     Gets the maximum columns count for table.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_RepeatingColumnsCount() const;
    /// <summary>
    ///     Sets the maximum columns count for table.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RepeatingColumnsCount(int32_t value);
    /// <summary>
    ///     Gets the first rows count repeated for several pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_RepeatingRowsCount() const;
    /// <summary>
    ///     Gets the first rows count repeated for several pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RepeatingRowsCount(int32_t value);
    /// <summary>
    ///     Gets the style for repeating rows.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextState> get_RepeatingRowsStyle() const;
    /// <summary>
    ///     Gets the style for repeating rows.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RepeatingRowsStyle(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    
    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHeadElement"></see> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TableTHeadElement> CreateTHead();
    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHeadElement"></see> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TableTBodyElement> CreateTBody();
    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTFootElement"></see> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TableTFootElement> CreateTFoot();
    
protected:

    System::SharedPtr<Aspose::Pdf::Table> get_Table() const;
    
    TableElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TableElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    ASPOSE_PDF_SHARED_API void PreSave() override;
    ASPOSE_PDF_SHARED_API void Save() override;
    
    virtual ASPOSE_PDF_SHARED_API ~TableElement();
    
private:

    System::SharedPtr<Aspose::Pdf::Table> _table;
    System::SharedPtr<Color> _backgroundColor;
    System::SharedPtr<BorderInfo> _border;
    HorizontalAlignment _alignment;
    BorderCornerStyle _cornerStyle;
    TableBroken _broken;
    Aspose::Pdf::ColumnAdjustment _columnAdjustment;
    System::String _columnWidthString;
    System::SharedPtr<BorderInfo> _defaultCellBorder;
    System::SharedPtr<MarginInfo> _defaultCellPadding;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _defaultCellTextState;
    System::String _defaultColumnWidth;
    bool _isBroken;
    bool _isBordersIncluded;
    float _left;
    float _top;
    int32_t _repeatingColumnsCount;
    int32_t _repeatingRowsCount;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _repeatingRowsStyle;
    
};

// Table child Elements
/// <summary>
///     Represents a base class for children elements of the Table in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TableChildElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef TableChildElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::TableRowCollectionElement;
    friend class Aspose::Pdf::LogicalStructure::TableTRElement;
    friend class Aspose::Pdf::LogicalStructure::TableCellElement;
    
protected:

    TableChildElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents a base class for children elements of the Table Head, Body and Foot in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TableRowCollectionElement : public Aspose::Pdf::LogicalStructure::TableChildElement
{
    typedef TableRowCollectionElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::TableTHeadElement;
    friend class Aspose::Pdf::LogicalStructure::TableTBodyElement;
    friend class Aspose::Pdf::LogicalStructure::TableTFootElement;
    
public:

    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTRElement"></see> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<TableTRElement> CreateTR();
    
protected:

    TableRowCollectionElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureTypeStandard, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents THead structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TableTHeadElement final : public Aspose::Pdf::LogicalStructure::TableRowCollectionElement
{
    typedef TableTHeadElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableRowCollectionElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TableTHeadElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TableTHeadElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents TBody structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TableTBodyElement final : public Aspose::Pdf::LogicalStructure::TableRowCollectionElement
{
    typedef TableTBodyElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableRowCollectionElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TableTBodyElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TableTBodyElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents TFoot structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TableTFootElement final : public Aspose::Pdf::LogicalStructure::TableRowCollectionElement
{
    typedef TableTFootElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableRowCollectionElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TableTFootElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TableTFootElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents TR structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TableTRElement final : public Aspose::Pdf::LogicalStructure::TableChildElement
{
    typedef TableTRElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::TableCellElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
public:

    /// <summary>
    ///     Gets the row background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BackgroundColor() const;
    /// <summary>
    ///     Sets the row background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    ///     Gets the row border.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<BorderInfo> get_Border() const;
    /// <summary>
    ///     Sets the row border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    ///     Gets default cell border.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<BorderInfo> get_DefaultCellBorder() const;
    /// <summary>
    ///     Gets default cell border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellBorder(System::SharedPtr<BorderInfo> value);
    /// <summary>
    ///     Gets height for row.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_MinRowHeight() const;
    /// <summary>
    ///     Gets height for row.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MinRowHeight(double value);
    /// <summary>
    ///     Gets fixed row height - row may have fixed height.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_FixedRowHeight() const;
    /// <summary>
    ///     Gets fixed row height - row may have fixed height.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FixedRowHeight(double value);
    /// <summary>
    ///     Gets fixed row is in new page - page with this property should be printed to next page Default false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsInNewPage() const;
    /// <summary>
    ///     Gets fixed row is in new page - page with this property should be printed to next page Default false.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsInNewPage(bool value);
    /// <summary>
    ///     Gets is row can be broken between two pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsRowBroken() const;
    /// <summary>
    ///     Gets is row can be broken between two pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsRowBroken(bool value);
    /// <summary>
    ///     Gets default text state for row cells
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    /// <summary>
    ///     Sets default text state for row cells
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    ///     Gets default margin for row cells.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MarginInfo> get_DefaultCellPadding() const;
    /// <summary>
    ///     Sets default margin for row cells.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    ///     Gets the vertical alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_VerticalAlignment() const;
    /// <summary>
    ///     Sets the vertical alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    
    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHElement"></see> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TableTHElement> CreateTH();
    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHElement"></see> and added it to current table.
    /// </summary>
    /// <returns>Created structure element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TableTDElement> CreateTD();
    
protected:

    System::SharedPtr<Aspose::Pdf::Row> get_Row() const;
    
    TableTRElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TableTRElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    ASPOSE_PDF_SHARED_API void PreSave() override;
    
    virtual ASPOSE_PDF_SHARED_API ~TableTRElement();
    
private:

    System::SharedPtr<Aspose::Pdf::Row> _row;
    System::SharedPtr<Color> _backgroundColor;
    System::SharedPtr<BorderInfo> _border;
    System::SharedPtr<BorderInfo> _defaultCellBorder;
    double _minRowHeight;
    double _fixedRowHeight;
    bool _isInNewPage;
    bool _isRowBroken;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _defaultCellTextState;
    System::SharedPtr<MarginInfo> _defaultCellPadding;
    Aspose::Pdf::VerticalAlignment _verticalAlignment;
    
};

/// <summary>
///     Represents a base class for table cell elements (TH and TD) in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TableCellElement : public Aspose::Pdf::LogicalStructure::TableChildElement, public Aspose::Pdf::LogicalStructure::ITextElement
{
    typedef TableCellElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableChildElement BaseType;
    typedef Aspose::Pdf::LogicalStructure::ITextElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::TableTHElement;
    friend class Aspose::Pdf::LogicalStructure::TableTDElement;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    
public:

    /// <summary>
    ///     Gets the cell background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BackgroundColor() const;
    /// <summary>
    ///     Sets the cell background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    ///     Gets the cell border.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<BorderInfo> get_Border() const;
    /// <summary>
    ///     Sets the cell border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    ///     Gets the cell have border.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsNoBorder() const;
    /// <summary>
    ///     Sets the cell have border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsNoBorder(bool value);
    /// <summary>
    ///     Gets the padding.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MarginInfo> get_Margin() const;
    /// <summary>
    ///     Sets the padding.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    ///     Gets the cell alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API HorizontalAlignment get_Alignment() const;
    /// <summary>
    ///     Sets the cell alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Alignment(HorizontalAlignment value);
    /// <summary>
    ///     Gets the default cell text state.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    /// <summary>
    ///     Sets the default cell text state.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    ///     Gets the cell's text word wrapped.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsWordWrapped() const;
    /// <summary>
    ///     Sets the cell's text word wrapped.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsWordWrapped(bool value);
    /// <summary>
    ///     Gets the vertical alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_VerticalAlignment() const;
    /// <summary>
    ///     Sets the vertical alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    ///     Gets the column span.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ColSpan() const;
    /// <summary>
    ///     Sets the column span.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ColSpan(int32_t value);
    /// <summary>
    ///     Gets the row span.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_RowSpan() const;
    /// <summary>
    ///     Sets the row span.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RowSpan(int32_t value);
    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState"></see> object for current element.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState"></see> object for current element.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> get_StructureTextState() override;
    
    /// <summary>
    ///     Appends text content to current text element.
    /// </summary>
    /// <param name="text">Text content</param>
    ASPOSE_PDF_SHARED_API void SetText(System::String text) override;
    
protected:

    System::SharedPtr<Aspose::Pdf::Cell> get_Cell() const;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_TextFragment() const;
    
    TableCellElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureTypeStandard, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    ASPOSE_PDF_SHARED_API void PreSave() override;
    ASPOSE_PDF_SHARED_API void Save() override;
    
    virtual ASPOSE_PDF_SHARED_API ~TableCellElement();
    
private:

    System::SharedPtr<Aspose::Pdf::Cell> _cell;
    System::SharedPtr<Color> _backgroundColor;
    System::SharedPtr<BorderInfo> _border;
    bool _isNoBorder;
    System::SharedPtr<MarginInfo> _margin;
    HorizontalAlignment _alignment;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _defaultCellTextState;
    bool _isWordWrapped;
    Aspose::Pdf::VerticalAlignment _verticalAlignment;
    int32_t _colSpan;
    int32_t _rowSpan;
    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> _structureTextState;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> _textFragment;
    
};

/// <summary>
///     Represents TH structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TableTHElement final : public Aspose::Pdf::LogicalStructure::TableCellElement
{
    typedef TableTHElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableCellElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TableTHElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TableTHElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents TD structure element in logical structure of the table.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TableTDElement final : public Aspose::Pdf::LogicalStructure::TableCellElement
{
    typedef TableTDElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::TableCellElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TableTDElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TableTDElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


