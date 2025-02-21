#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/PrinterMarkAnnotation.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class BleedMarkAnnotation;
enum class PrinterMarkCornerPosition;
class TrimMarkAnnotation;
} // namespace Annotations
class Operator;
class Page;
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents annotation types that are placed in the corners of the printed page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CornerPrinterMarkAnnotation : public Aspose::Pdf::Annotations::PrinterMarkAnnotation
{
    typedef CornerPrinterMarkAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::PrinterMarkAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::BleedMarkAnnotation;
    friend class Aspose::Pdf::Annotations::TrimMarkAnnotation;
    
public:

    /// <summary>
    /// Get or sets the position of the mark on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API PrinterMarkCornerPosition get_Position() const;
    /// <summary>
    /// Get or sets the position of the mark on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Position(PrinterMarkCornerPosition value);
    
protected:

    virtual ASPOSE_PDF_SHARED_API double get_MarkLineLength() = 0;
    virtual ASPOSE_PDF_SHARED_API double get_MarkOffset() = 0;
    virtual ASPOSE_PDF_SHARED_API double get_DefaultMarkSize() = 0;
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_DesignatedPageBox() = 0;
    
    /// <summary>
    /// Initializes a new <see cref="CornerPrinterMarkAnnotation"></see> in the given corner position on the given page.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="position">The corner of the <paramref name="page"></paramref> where to put the annotation.</param>
    /// <param name="markSize">The size (width and height) of the mark rectangle.</param>
    /// <param name="pageBox">
    /// The page box that the annotation should be outside (<see cref="Page::BleedBox"></see> for a <see cref="BleedMarkAnnotation"></see>;
    /// <see cref="Page::TrimBox"></see> for a <see cref="TrimMarkAnnotation"></see>).
    /// </param>
    ASPOSE_PDF_SHARED_API CornerPrinterMarkAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, PrinterMarkCornerPosition position, double markSize, System::SharedPtr<Rectangle> pageBox);
    
    ASPOSE_PDF_SHARED_API void UpdateAppearances() override;
    /// <summary>
    /// Setting Rect values such that the annotation is outside the TrimBox.
    /// </summary>
    ASPOSE_PDF_SHARED_API void MoveOutsideOfPageBox() override;
    /// <summary>
    /// Create program for displaying this annotation.  
    /// </summary>
    /// <param name="parameters">Appearance parameters for this field (normal/mouse moved appearance, pressed/unpressed for button etc)
    /// </param>
    /// <param name="annotation">Annotation of the appearance</param>
    /// <returns>List of appearance program.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    
private:

    PrinterMarkCornerPosition _position;
    static const double LineWidth;
    
    static System::SharedPtr<Rectangle> MoveToCorner(System::SharedPtr<Rectangle> pageBox, System::SharedPtr<Rectangle> mediaBox, PrinterMarkCornerPosition corner, double markSize);
    System::ArrayPtr<System::SharedPtr<Point>> GenerateMarkPoints(bool isVertical);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


