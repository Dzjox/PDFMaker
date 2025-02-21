#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/CornerMarkAnnotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class AnnotationSelector;
enum class AnnotationType;
enum class PrinterMarkCornerPosition;
} // namespace Annotations
class Page;
class Rectangle;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a Bleed Mark annotation.
/// </summary>
/// <remarks>
/// Bleed marks are placed at the corners of a printed page to indicate where the page is to be trimmed and how far it is allowed to deviate
/// from the trim marks.
/// </remarks>
class ASPOSE_PDF_SHARED_CLASS BleedMarkAnnotation final : public Aspose::Pdf::Annotations::CornerPrinterMarkAnnotation
{
    typedef BleedMarkAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::CornerPrinterMarkAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="BleedMarkAnnotation"></see> class.
    /// </summary>
    /// <param name="page">The page where the annotation will be added.</param>
    /// <param name="position">The position of the bleed mark on the page.</param>
    /// <remarks>
    /// This constructor creates a BleedMarkAnnotation and adds it to the specified page at the specified position.
    /// </remarks>
    ASPOSE_PDF_SHARED_API BleedMarkAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, PrinterMarkCornerPosition position);
    
    /// <summary>
    /// Accepts visitor for annotation processing.
    /// </summary>
    /// <param name="visitor">AnnotationSelector object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
protected:

    ASPOSE_PDF_SHARED_API double get_MarkLineLength() override;
    ASPOSE_PDF_SHARED_API double get_MarkOffset() override;
    ASPOSE_PDF_SHARED_API double get_DefaultMarkSize() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_DesignatedPageBox() override;
    
    /// <summary>
    /// Checks whether the annotation rectangle is outside the respective page box.
    /// </summary>
    /// <remarks>By default, the annotation should be outside the TrimBox.</remarks>
    /// <returns><see langword="true"></see> if the annotation rectangle is outside the box; <see langword="false"></see> otherwise.</returns>
    ASPOSE_PDF_SHARED_API bool IsOutsideOfPageBox() override;
    
    virtual ASPOSE_PDF_SHARED_API ~BleedMarkAnnotation();
    
private:

    static const double RectangleSize;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


