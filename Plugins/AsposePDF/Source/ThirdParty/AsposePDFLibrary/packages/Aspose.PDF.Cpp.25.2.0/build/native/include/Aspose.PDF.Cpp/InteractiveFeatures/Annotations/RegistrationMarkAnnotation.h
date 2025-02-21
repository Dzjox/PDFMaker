#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/PrinterMarkAnnotation.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class AnnotationSelector;
enum class AnnotationType;
enum class PrinterMarkSidePosition;
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
/// Represents a Registration Mark annotation.
/// </summary>
/// <remarks>
/// Registration marks are symbols added to printing plates or screens to ensure proper alignment of colors during the printing process.
/// </remarks>
class ASPOSE_PDF_SHARED_CLASS RegistrationMarkAnnotation final : public Aspose::Pdf::Annotations::PrinterMarkAnnotation
{
    typedef RegistrationMarkAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::PrinterMarkAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the position of the registration mark on a page.
    /// </summary>
    ASPOSE_PDF_SHARED_API PrinterMarkSidePosition get_Position() const;
    /// <summary>
    /// Sets the position of the registration mark on a page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Position(PrinterMarkSidePosition value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="RegistrationMarkAnnotation"></see> class on the given page in the given location.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="position">Position of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API RegistrationMarkAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, PrinterMarkSidePosition position);
    
    /// <summary>
    /// Accepts visitor for annotation processing.
    /// </summary>
    /// <param name="visitor">AnnotationSelector object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
protected:

    ASPOSE_PDF_SHARED_API void UpdateAppearances() override;
    /// <summary>
    /// Create program for displaying this annotation.  
    /// </summary>
    /// <param name="parameters">Appearance parameters for this field (normal/mouse moved appearance, pressed/unpressed for button etc)
    /// </param>
    /// <param name="annotation">Annotation of the appearance</param>
    /// <returns>List of appearance program.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    /// <summary>
    /// Sets the annotation <see cref="Annotation::Rect"></see> values such that the annotation is outside the designated page box.
    /// </summary>
    ASPOSE_PDF_SHARED_API void MoveOutsideOfPageBox() override;
    
    virtual ASPOSE_PDF_SHARED_API ~RegistrationMarkAnnotation();
    
private:

    static const double LineWidth;
    static const double MarkOffset;
    static const double CrossSize;
    static const double OuterCircleRadius;
    static const double InnerCircleRadius;
    static const double MarkSize;
    PrinterMarkSidePosition _position;
    
    static System::SharedPtr<Rectangle> MoveToPageMargin(System::SharedPtr<Rectangle> trimBox, System::SharedPtr<Rectangle> mediaBox, PrinterMarkSidePosition position);
    System::SharedPtr<Point> CalculateMarkCenter();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


