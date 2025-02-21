#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using System.Runtime.Remoting;

#include <system/collections/keyvalue_pair.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Font
{
class TransformationMatrix;
} // namespace Font
namespace Pdf
{
class BaseOperatorCollection;
class Document;
class Operator;
namespace Operators
{
class ConcatenateMatrix;
class LineTo;
class MoveTo;
class Re;
} // namespace Operators
class Page;
class Rectangle;
class Resources;
class Table;
namespace Text
{
class AbsorbedCell;
class AbsorbedRow;
class AbsorbedTable;
class TextFragment;
class TextPostReplaceFixer;
class TextSearchOptions;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
template <typename> class List;
template <typename, typename> class SortedList;
template <typename> class Stack;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of table elements.
/// Performs search and provides access to search results via <see cref="TableAbsorber::TableList"></see> collection.
/// </summary>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS TableAbsorber : public System::Object
{
    typedef TableAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Text::TextFragment;
    
public:

    /// <summary>
    /// Gets text search options.
    /// </summary>
    /// <remarks>
    /// Allows to define several options that will be used during search text containing in tables.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> get_TextSearchOptions();
    /// <summary>
    /// Sets text search options.
    /// </summary>
    /// <remarks>
    /// Allows to define several options that will be used during search text containing in tables.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> value);
    /// <summary>
    /// Returns readonly IList containing tables that were found
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<AbsorbedTable>>> get_TableList();
    /// <summary>        
    /// * Enable an alternative table recognition engine that is superior in numerous scenarios and is capable of 
    /// recognizing tables without borders.
    /// Doesn't support editing tables and getting text styles yet. Default value is false; 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseFlowEngine() const;
    /// <summary>        
    /// * Enable an alternative table recognition engine that is superior in numerous scenarios and is capable of 
    /// recognizing tables without borders.
    /// Doesn't support editing tables and getting text styles yet. Default value is false; 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseFlowEngine(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TableAbsorber"></see> with text search options.
    /// </summary>
    /// <remarks>
    /// Performs searching for tables and provides access to the tables via <see cref="TableList"></see> object.
    /// </remarks>
    /// <param name="textSearchOptions">Text search options</param>
    ASPOSE_PDF_SHARED_API TableAbsorber(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TableAbsorber"></see>.
    /// </summary>
    /// <remarks>
    /// Performs searching for tables and provides access to the tables via <see cref="TableList"></see> object.
    /// </remarks>
    ASPOSE_PDF_SHARED_API TableAbsorber();
    
    /// <summary>
    /// Extracts tables on the specified page
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="page">Pdf pocument page object.</param>
    virtual ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<Page> page);
    /// <summary>
    /// Extracts tables in the specified document.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="pdf">Pdf pocument object.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<Document> pdf);
    /// <summary>
    /// Removes an <see cref="AbsorbedTable"></see> from the page.
    /// </summary>
    /// <param name="table"><see cref="AbsorbedTable"></see> to remove.</param>
    /// <remarks>
    /// Please take into account it changes TableList collection. In case removing/replacing tables in loop please use copy of TableList collection.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void Remove(System::SharedPtr<AbsorbedTable> table);
    /// <summary>
    /// Replaces an <see cref="AbsorbedTable"></see> with <see cref="Table"></see> on the page.
    /// </summary>
    /// <param name="page">Pdf pocument page object.</param>
    /// <param name="oldTable"><see cref="AbsorbedTable"></see> to be replaced.</param>
    /// <param name="newTable"><see cref="Table"></see> to replace old table.</param>
    /// <remarks>
    /// Please take into account it changes TableList collection. In case removing/replacing tables in loop please use copy of TableList collection.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void Replace(System::SharedPtr<Page> page, System::SharedPtr<AbsorbedTable> oldTable, System::SharedPtr<Table> newTable);
    
protected:

    /// <summary>
    /// Gets reactangles array representing table cells found on the page.
    /// Internal usage of TableAbsorber for TextPostReplaceFixer (PDFNET-45252).
    /// </summary>
    /// <param name="page">Pdf pocument page object.</param>
    /// <returns>Array of reactangles representing table cells.</returns>
    System::ArrayPtr<System::SharedPtr<Rectangle>> GetCellsToRectArray(System::SharedPtr<Page> page);
    
private:

    static const int32_t MinimalOpenCellDimension;
    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> _textSearchOptions;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedTable>>> _tables;
    bool _useFlowEngine;
    System::SharedPtr<Page> _page;
    System::SharedPtr<BaseOperatorCollection> _operators;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Rectangle>>> _initialRects;
    System::SharedPtr<System::Collections::Generic::List<System::Collections::Generic::KeyValuePair<System::SharedPtr<Rectangle>, System::SharedPtr<Operator>>>> _tableOps;
    System::SharedPtr<Rectangle> _potentialRect;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Aspose::Font::TransformationMatrix>>> _transformationMatrices;
    System::SharedPtr<Aspose::Font::TransformationMatrix> _currentMatrix;
    
    void Init();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> VisitForCells(System::SharedPtr<Page> page);
    void ParsePageContent(System::SharedPtr<Page> page);
    void ParseOperators(System::SharedPtr<BaseOperatorCollection> operators, System::SharedPtr<Resources> resources);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedTable>>> GetTablesFromRows(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedRow>>> rows, int32_t pageNum);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedRow>>> GetRowsFromCells(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> cells);
    static bool IsSameRow(System::SharedPtr<AbsorbedRow> currentRow, System::SharedPtr<AbsorbedCell> currentCell, System::SharedPtr<Rectangle>& mergedCell);
    static void ExpandLines(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> lines);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> GetCells(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> horizontalLines, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> verticalLines);
    static void ParseCells(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> horizontalLines, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> verticalLines, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> cells, int32_t hIndex, int32_t vIndex, int32_t hNextIndex, int32_t vNextIndex);
    static System::SharedPtr<Rectangle> GetIntersection(System::SharedPtr<Rectangle> hLine, System::SharedPtr<Rectangle> vLine);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> AggregateVLines(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> vLineFragList);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> AggregateHLines(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> hLineFragList);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> SortHFragments(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> unsorted);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> SortVFragments(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> unsorted);
    /// <summary>
    /// Distribute rectangles (lines) for ranges along the coordinate specified as 'primary'
    /// </summary>
    /// <param name="unsorted">List of unsorted rectangles</param>
    /// <param name="IsAbscissa">True when 'primary coordinate' is abscissa. False when 'primary coordinate' is ordinate.</param>
    /// <returns>SortedList where key is aproximate range coordinate and value is list containing rectangles falling within the given range</returns>
    static System::SharedPtr<System::Collections::Generic::SortedList<double, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>>>> GetRangesSortedByPrimaryCoordinate(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> unsorted, bool IsAbscissa);
    static void GetLineFragments(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> rectangles, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>>& hLineFragList, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>>& vLineFragList);
    void FillWithText(System::SharedPtr<Page> page);
    void ClearTextFragments(System::SharedPtr<Page> page);
    void NoOpPath();
    void OpStroke(System::SharedPtr<Operator> op);
    void OpFill(System::SharedPtr<Operator> op);
    void OpRe(System::SharedPtr<Aspose::Pdf::Operators::Re> op);
    void OpPoint(System::SharedPtr<Aspose::Pdf::Operators::MoveTo> op);
    void OpLine(System::SharedPtr<Aspose::Pdf::Operators::LineTo> op);
    /// <summary>
    /// Restore state
    /// </summary>
    void Q(int32_t opIndex, System::SharedPtr<Operator> op);
    /// <summary>
    /// Save state
    /// </summary>
    void q(int32_t opIndex, System::SharedPtr<Operator> op);
    void cm(System::SharedPtr<Aspose::Pdf::Operators::ConcatenateMatrix> op);
    void opDo(System::SharedPtr<Operator> op, System::SharedPtr<Resources> resources);
    bool RemoveTableOpsFromRectange(System::SharedPtr<Rectangle> rect, System::SharedPtr<Page> page);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


