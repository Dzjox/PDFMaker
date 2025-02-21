#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/PrinterMarkAnnotation.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/ColorsOfCMYK.h"
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
class Matrix;
class Operator;
class Page;
class Rectangle;
class XForm;
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
/// Class representing ColorBarAnnotation annotation.
/// Property Color ignored, instead used ColorsOfCMYK color.
/// On creation, the ratio of width and height determines the orientation of the annotation - horizontal or vertical.
/// Next, it checks that the annotation rectangle is outside the TrimBox, and if not, then it is shifted to the nearest location outside the TrimBox,
/// taking into account the orientation of the annotation. It is possible to reduce the width (height) so that the annotation fits outside the TrimBox.
/// If there is no space for the layout, the width/height can be set to zero (in this case, the annotation is present on the page, but not displayed).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ColorBarAnnotation final : public Aspose::Pdf::Annotations::PrinterMarkAnnotation
{
    typedef ColorBarAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::PrinterMarkAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets color (one of cyan, magenta, yellow, black) for which the annotation is drawing.
    /// </summary>                
    ASPOSE_PDF_SHARED_API ColorsOfCMYK get_ColorOfCMYK() const;
    /// <summary>
    /// Sets color (one of cyan, magenta, yellow, black) for which the annotation is drawing.
    /// </summary>                
    ASPOSE_PDF_SHARED_API void set_ColorOfCMYK(ColorsOfCMYK value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Creates new ColorBar annotation on the specified page.
    /// </summary>
    /// <param name="page">Document's page where annotation should be created.</param>
    /// <param name="rect">Required rectangle that sets annotation's drawing area.</param>
    /// <param name="colorOfCMYK">Color for which annotation drawing.</param>
    ASPOSE_PDF_SHARED_API ColorBarAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, ColorsOfCMYK colorOfCMYK = Aspose::Pdf::Annotations::ColorsOfCMYK::Black);
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    /// <summary>
    /// Update parameters and appearance, according to the matrix transform and moving outside of TrimBox if nesseary.
    /// </summary>
    /// <param name="transform">Matrix specifying the transformation.</param>
    ASPOSE_PDF_SHARED_API void ChangeAfterResize(System::SharedPtr<Matrix> transform) override;
    
protected:

    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    /// <summary>        
    /// Sets Rect values (taking into account _isVertical), such that the annotation is outside the TrimBox.
    /// It is possible to reduce the width (height) so that the annotation fits outside the TrimBox.
    /// </summary>
    ASPOSE_PDF_SHARED_API void MoveOutsideOfPageBox() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ColorBarAnnotation();
    
private:

    bool _isVertical;
    ColorsOfCMYK _colorOfCMYK;
    uint8_t labelsFontSize;
    
    System::SharedPtr<Operator> GetOperatorForSetCMYKColor(double brightness);
    System::SharedPtr<Operator> GetOperatorForSetCMYKColorStroke(double brightness);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


