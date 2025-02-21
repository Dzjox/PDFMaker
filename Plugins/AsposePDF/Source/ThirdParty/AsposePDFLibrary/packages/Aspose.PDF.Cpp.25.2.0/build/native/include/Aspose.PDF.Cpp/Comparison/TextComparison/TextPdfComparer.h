#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Comparison
{
class ComparisonOptions;
class DiffOperation;
class DocumentComparisonStatistics;
namespace SideBySideComparison
{
class TextFragmentRectanglesComparer;
} // namespace SideBySideComparison
class TextItemComparisonStatistics;
} // namespace Comparison
class Document;
class Page;
class Rectangle;
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Comparison {

/// <summary>
/// Represents a class to comparison two PDF pages or PDF documents.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextPdfComparer : public System::Object
{
    typedef TextPdfComparer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Compares two documents page by page.
    /// </summary>
    /// <param name="document1">First document..</param>
    /// <param name="document2">Second document.</param>
    /// <param name="options">Comparison options.</param>
    /// <returns>List of changes by page.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>>>> CompareDocumentsPageByPage(System::SharedPtr<Document> document1, System::SharedPtr<Document> document2, System::SharedPtr<ComparisonOptions> options);
    /// <summary>
    /// Compares two documents page by page. The result is saved in a PDF file.
    /// </summary>
    /// <param name="document1">First document..</param>
    /// <param name="document2">Second document.</param>
    /// <param name="options">Comparison options.</param>
    /// <param name="resultPdfDocumentPath">Path to the pdf file to save the comparison results.</param>
    /// <returns>List of changes by page.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>>>> CompareDocumentsPageByPage(System::SharedPtr<Document> document1, System::SharedPtr<Document> document2, System::SharedPtr<ComparisonOptions> options, System::String resultPdfDocumentPath);
    /// <summary>
    /// Compares two documents page by page.
    /// The documents are compared as a whole. Before comparing text, the texts of document pages are combined into one text.
    /// </summary>
    /// <param name="document1">First document.</param>
    /// <param name="document2">Second document.</param>
    /// <param name="options">Comparison options.</param>
    /// <returns>List of changes.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> CompareFlatDocuments(System::SharedPtr<Document> document1, System::SharedPtr<Document> document2, System::SharedPtr<ComparisonOptions> options);
    /// <summary>
    /// Compares two documents page by page. The result is saved in a PDF file.
    /// The documents are compared as a whole. Before comparing text, the texts of document pages are combined into one text.
    /// </summary>
    /// <param name="document1">First document.</param>
    /// <param name="document2">Second document.</param>
    /// <param name="options">Comparison options.</param>
    /// <param name="resultPdfDocumentPath">Path to the pdf file to save the comparison results.</param>
    /// <returns>List of changes.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> CompareFlatDocuments(System::SharedPtr<Document> document1, System::SharedPtr<Document> document2, System::SharedPtr<ComparisonOptions> options, System::String resultPdfDocumentPath);
    /// <summary>
    /// Compares document pages.
    /// </summary>
    /// <param name="page1">First page.</param>
    /// <param name="page2">Second page.</param>
    /// <param name="options">Comparison options.</param>
    /// <returns>The list of changes.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> ComparePages(System::SharedPtr<Page> page1, System::SharedPtr<Page> page2, System::SharedPtr<ComparisonOptions> options);
    /// <summary>
    /// Gets comparison statistics.
    /// </summary>
    /// <param name="diffs">The list of changes.</param>
    /// <returns>The statistics.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<TextItemComparisonStatistics> CreateComparisonStatistics(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> diffs);
    /// <summary>
    /// Gets documents comparison statistics.
    /// </summary>
    /// <param name="diffs">The list of changes.</param>
    /// <returns>The statistics.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentComparisonStatistics> CreateComparisonStatistics(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>>>> diffs);
    /// <summary>
    /// Restores the original text from the list of changes.
    /// </summary>
    /// <param name="diffs">The list of changes.</param>
    /// <returns>Original text.</returns>
    static ASPOSE_PDF_SHARED_API System::String AssemblySourcePageText(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> diffs);
    /// <summary>
    /// Restores changed text from the list of changes.
    /// </summary>
    /// <param name="diffs">The list of changes.</param>
    /// <returns>Original text.</returns>
    static ASPOSE_PDF_SHARED_API System::String AssemblyDestinationPageText(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> diffs);
    
private:

    static System::SharedPtr<SideBySideComparison::TextFragmentRectanglesComparer> RectanglesComparer;
    
    static System::String GetDocumentText(System::SharedPtr<Document> document, System::SharedPtr<Rectangle> extractionArea, System::ArrayPtr<System::SharedPtr<Rectangle>> excludeAreas, bool excludeTables);
    static System::String GetPageText(System::SharedPtr<Page> page, System::SharedPtr<Rectangle> extractionArea, System::ArrayPtr<System::SharedPtr<Rectangle>> excludeAreas, bool excludeTables);
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


