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
} // namespace Annotations
class Operator;
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
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a Page Information annotation in a PDF document. This annotation contains the file name, 
/// page number, and the date and time of the annotation creation.
/// </summary>
/// <remarks>
/// This class is primarily used to add metadata to a specific page in the PDF document, which can be useful
/// for tracking and referencing purposes. For instance, it can be used to mark pages during the printing process
/// or to provide additional information about the page when viewing the document.
/// </remarks>
class ASPOSE_PDF_SHARED_CLASS PageInformationAnnotation final : public Aspose::Pdf::Annotations::PrinterMarkAnnotation
{
    typedef PageInformationAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::PrinterMarkAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PageInformationAnnotation"></see> class on the given page in the given location.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API PageInformationAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
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
    
    virtual ASPOSE_PDF_SHARED_API ~PageInformationAnnotation();
    
private:

    static void AddTextBlock(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::String text, double x, double y);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


