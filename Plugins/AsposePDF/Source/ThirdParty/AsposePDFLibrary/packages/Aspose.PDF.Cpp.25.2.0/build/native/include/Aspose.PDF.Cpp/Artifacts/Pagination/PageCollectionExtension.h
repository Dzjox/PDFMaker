#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Artifact;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
class HeaderFooterSettings;
class Page;
class PageCollection;
class PageRange;
class Point;
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
template <typename> class SmartPtr;
template <typename T0> using SharedPtr = System::SmartPtr<T0>;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the extension method for updating header and footer pagination.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageCollectionExtension
{
    typedef PageCollectionExtension ThisType;
    
public:

    /// <summary>
    /// Updates the header and footer page numbers and dates for all pages.
    /// This will work if the document has at least one pagination artifact with special settings data.
    /// All pages in the collection will be updated with the source artifact according to its settings.
    /// </summary>
    /// <param name="pageCollection">The page collection.</param>
    static ASPOSE_PDF_SHARED_API void UpdatePagination(System::SharedPtr<PageCollection> pageCollection);
    
private:

    static void AddArtifactsIfNeeded(System::SharedPtr<PageCollection> pageCollection, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Artifact>>> paginationArtifacts, System::SharedPtr<System::Collections::Generic::List<int32_t>> pagesWithoutArtifacts);
    static void CollectArtifacts(System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Artifact>>>& paginationArtifacts, System::SharedPtr<System::Collections::Generic::List<int32_t>> pagesWithoutArtifacts);
    static void UpdatePagination(System::SharedPtr<Page> page);
    static void UpdateArtifact(System::SharedPtr<Artifact> artifact, System::SharedPtr<Page> page);
    static bool IsPaginationShouldBeSkipped(int32_t number, System::SharedPtr<PageRange> pageRange);
    static bool IsHeaderLeft(System::SharedPtr<Point> artifactPosition, System::SharedPtr<Rectangle> pageRectangle);
    static bool IsHeaderCenter(System::SharedPtr<Point> artifactPosition, System::SharedPtr<Rectangle> pageRectangle);
    static bool IsHeaderRight(System::SharedPtr<Point> artifactPosition, System::SharedPtr<Rectangle> pageRectangle);
    static bool IsFooterLeft(System::SharedPtr<Point> artifactPosition, System::SharedPtr<Rectangle> pageRectangle);
    static bool IsFooterCenter(System::SharedPtr<Point> artifactPosition, System::SharedPtr<Rectangle> pageRectangle);
    static bool IsFooterRight(System::SharedPtr<Point> artifactPosition, System::SharedPtr<Rectangle> pageRectangle);
    static bool IsLeft(System::SharedPtr<Point> artifactPosition, System::SharedPtr<Rectangle> pageRectangle);
    static bool IsCenter(System::SharedPtr<Point> artifactPosition, System::SharedPtr<Rectangle> pageRectangle);
    static bool IsRight(System::SharedPtr<Point> artifactPosition, System::SharedPtr<Rectangle> pageRectangle);
    static bool IsHeader(System::SharedPtr<Point> artifactPosition, System::SharedPtr<Rectangle> pageRectangle);
    static System::SharedPtr<HeaderFooterSettings> GetHeaderFooterSettings(System::SharedPtr<Engine::Data::IPdfDictionary> pieceInfo);
    
public:
    PageCollectionExtension() = delete;
};

} // namespace Pdf
} // namespace Aspose


