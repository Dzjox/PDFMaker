#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
class Page;
class XImageCollection;
} // namespace Pdf
} // namespace Aspose
namespace System
{
template <typename> class SmartPtr;
template <typename T0> using SharedPtr = System::SmartPtr<T0>;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Provides additional capabilities for the Document class.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DocumentExtensions
{
    typedef DocumentExtensions ThisType;
    
public:

    /// <summary>
    /// For Images in Resources if two pages checks for common XImages and for similar cases splits them, by creating duplicate XImages.
    /// </summary>
    /// <param name="doc">The document containing both collections.</param>
    /// <param name="page_1">First page for compare.</param>
    /// <param name="page_2">Second page for compare/</param>
    static ASPOSE_PDF_SHARED_API void SplitSharedImages(System::SharedPtr<Document> doc, System::SharedPtr<Page> page_1, System::SharedPtr<Page> page_2);
    
private:

    /// <summary>
    /// For two XImageCollection checks for common XImages and for similar cases splits them, by creating duplicate XImages.
    /// </summary>
    /// <param name="doc">The document containing both collections.</param>
    /// <param name="images_1">First XImageCollection for compare.</param>
    /// <param name="images_2">Second XImageCollection for compare/</param>
    static void SplitSharedImages(System::SharedPtr<Document> doc, System::SharedPtr<XImageCollection> images_1, System::SharedPtr<XImageCollection> images_2);
    
public:
    DocumentExtensions() = delete;
};

} // namespace Pdf
} // namespace Aspose


