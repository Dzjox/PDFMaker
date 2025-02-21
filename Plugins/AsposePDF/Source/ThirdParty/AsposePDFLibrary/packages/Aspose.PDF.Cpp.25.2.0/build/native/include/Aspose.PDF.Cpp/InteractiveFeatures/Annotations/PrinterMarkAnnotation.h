#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class ColorBarAnnotation;
class CornerPrinterMarkAnnotation;
class PageInformationAnnotation;
enum class PrinterMarksKind;
class RegistrationMarkAnnotation;
} // namespace Annotations
class Document;
class Page;
class Rectangle;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Abstract class representing printer mark annotation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PrinterMarkAnnotation : public Aspose::Pdf::Annotations::Annotation
{
    typedef PrinterMarkAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::ColorBarAnnotation;
    friend class Aspose::Pdf::Annotations::CornerPrinterMarkAnnotation;
    friend class Aspose::Pdf::Annotations::PageInformationAnnotation;
    friend class Aspose::Pdf::Annotations::RegistrationMarkAnnotation;
    
public:

    /// <summary>
    /// Adds printer's marks to all pages in the specified document.
    /// </summary>
    /// <param name="document">The document to which the printer's marks will be added.</param>
    /// <param name="marksKind">The kind of printer's marks to add.</param>
    /// <exception cref="ArgumentNullException">Thrown when the <paramref name="document"></paramref> is null.</exception>
    /// <remarks>
    /// This method adds various types of printer's marks based on the provided <see cref="PrinterMarksKind"></see> flags. 
    /// If <see cref="PrinterMarksKind::None"></see> is provided, no marks are added.
    /// </remarks>
    static ASPOSE_PDF_SHARED_API void AddPrinterMarks(System::SharedPtr<Document> document, PrinterMarksKind marksKind);
    /// <summary>
    /// Adds printer's marks to the specified page.
    /// </summary>
    /// <param name="page">The page to which the printer's marks will be added.</param>
    /// <param name="marksKind">The kind of printer's marks to add.</param>
    /// <exception cref="ArgumentNullException">Thrown when the <paramref name="page"></paramref> is null.</exception>
    /// <remarks>
    /// This method adds various types of printer's marks based on the provided <see cref="PrinterMarksKind"></see> flags. 
    /// If <see cref="PrinterMarksKind::None"></see> is provided, no marks are added.
    /// </remarks>
    static ASPOSE_PDF_SHARED_API void AddPrinterMarks(System::SharedPtr<Aspose::Pdf::Page> page, PrinterMarksKind marksKind);
    
protected:

    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API PrinterMarkAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    /// <summary>
    /// Checks whether the annotation rectangle is outside the respective page box.
    /// </summary>
    /// <remarks>By default, the annotation should be outside the TrimBox.</remarks>
    /// <returns><see langword="true"></see> if the annotation rectangle is outside the box; <see langword="false"></see> otherwise.</returns>
    virtual ASPOSE_PDF_SHARED_API bool IsOutsideOfPageBox();
    /// <summary>
    /// Check whether the annotation rectangle is outside the given page box.
    /// </summary>
    /// <returns>
    /// Returns <see langword="true"></see> if the annotation rectangle is outside the <paramref name="pageBox"></paramref>; <see langword="false"></see> otherwise.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool IsOutsideOfPageBox(System::SharedPtr<Rectangle> pageBox);
    /// <summary>
    /// Sets the annotation <see cref="Annotation::Rect"></see> values such that the annotation is outside the designated page box.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void MoveOutsideOfPageBox() = 0;
    
private:

    static void AddTrimMarks(System::SharedPtr<Aspose::Pdf::Page> page);
    static void AddBleedMarks(System::SharedPtr<Aspose::Pdf::Page> page);
    static void AddRegistrationMarks(System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Creates four <see cref="ColorBarAnnotation"></see>, one for each of the CMYK colors, along the top margin of the page.
    /// </summary>
    /// <param name="page">The page to place color bars on.</param>
    static void AddColorBars(System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Creates a <see cref="PageInformationAnnotation"></see> and places it in the bottom margin of the page.
    /// </summary>
    /// <param name="page">The page to place a page information annotation on.</param>
    static void AddPageInformation(System::SharedPtr<Aspose::Pdf::Page> page);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


