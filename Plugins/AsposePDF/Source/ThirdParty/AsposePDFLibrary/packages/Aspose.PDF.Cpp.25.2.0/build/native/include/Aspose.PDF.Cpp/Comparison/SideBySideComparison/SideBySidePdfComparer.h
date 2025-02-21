#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Comparison
{
namespace SideBySideComparison
{
class ExtractedFragmentsProcessorBase;
} // namespace SideBySideComparison
class SideBySideComparisonOptions;
} // namespace Comparison
class Document;
class Page;
} // namespace Pdf
} // namespace Aspose
namespace System
{
template <typename> class SmartPtr;
template <typename T0> using SharedPtr = System::SmartPtr<T0>;
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Comparison {

class ASPOSE_PDF_SHARED_CLASS SideBySidePdfComparer
{
    typedef SideBySidePdfComparer ThisType;
    
public:

    /// <summary>
    /// Compares two pages. The result is saved in a PDF document in which the first page is written first, and then the second.
    /// You can open it in Adobe Acrobat in Two-page view to see the changes side by side.
    /// Deletions are noted on the page on the left, and insertions are noted on the page on the right.
    /// </summary>
    /// <param name="page1">The first page to compare.</param>
    /// <param name="page2">The first page to compare.</param>
    /// <param name="targetPdfPath">The path to PDF-file to save a comparison result.</param>
    /// <param name="options">The comparison options.</param>
    static ASPOSE_PDF_SHARED_API void Compare(System::SharedPtr<Page> page1, System::SharedPtr<Page> page2, System::String targetPdfPath, System::SharedPtr<SideBySideComparisonOptions> options);
    /// <summary>
    /// Compares two documents. The pages are compared one by one. The pages of the compared documents are copied one after another into the resulting document.
    /// First the first page from the first document, then the first page from the second document. Next is the second one from the first document and then the second one from the second document, etc.
    /// You can open it in Adobe Acrobat in Two-page view to see the changes side by side.
    /// Deletions are noted on the page on the left, and insertions are noted on the page on the right.
    /// </summary>
    /// <param name="document1">The first document to compare.</param>
    /// <param name="document2">The second document to compare.</param>
    /// <param name="targetPdfPath">The path to PDF-file to save a comparison result.</param>
    /// <param name="options">The comparison options.</param>
    static ASPOSE_PDF_SHARED_API void Compare(System::SharedPtr<Document> document1, System::SharedPtr<Document> document2, System::String targetPdfPath, System::SharedPtr<SideBySideComparisonOptions> options);
    
private:

    static System::SharedPtr<SideBySideComparison::ExtractedFragmentsProcessorBase> CreateFragmentsProcessor(System::SharedPtr<SideBySideComparisonOptions> options);
    
public:
    SideBySidePdfComparer() = delete;
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


