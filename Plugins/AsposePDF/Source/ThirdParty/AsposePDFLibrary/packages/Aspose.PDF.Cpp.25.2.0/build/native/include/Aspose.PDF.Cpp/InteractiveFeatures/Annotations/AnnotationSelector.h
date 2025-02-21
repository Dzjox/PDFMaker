#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/IAnnotationVisitor.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
class BleedMarkAnnotation;
class CaretAnnotation;
class CircleAnnotation;
class ColorBarAnnotation;
class FileAttachmentAnnotation;
class FreeTextAnnotation;
class HighlightAnnotation;
class InkAnnotation;
class LineAnnotation;
class LinkAnnotation;
class MovieAnnotation;
class PageInformationAnnotation;
class PDF3DAnnotation;
class PolygonAnnotation;
class PolylineAnnotation;
class PopupAnnotation;
class RedactionAnnotation;
class RegistrationMarkAnnotation;
class RichMediaAnnotation;
class ScreenAnnotation;
class SquareAnnotation;
class SquigglyAnnotation;
class StampAnnotation;
class StrikeOutAnnotation;
class TextAnnotation;
class TrimMarkAnnotation;
class UnderlineAnnotation;
class WatermarkAnnotation;
class WidgetAnnotation;
} // namespace Annotations
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// This class is used for selecting annotations using Visitor template idea.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AnnotationSelector final : public Aspose::Pdf::Annotations::IAnnotationVisitor
{
    typedef AnnotationSelector ThisType;
    typedef Aspose::Pdf::Annotations::IAnnotationVisitor BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The list of selected objects.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Annotation>>> get_Selected() const;
    
    /// <summary>
    /// Initializes new instance of the AnnotationSelector class.
    /// </summary>
    ASPOSE_PDF_SHARED_API AnnotationSelector();
    
    /// <summary>
    /// Select link annotation if AnnotationSelector was initialized with LinkAnnotation object.
    /// </summary>
    /// <param name="link">
    /// LinkAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<LinkAnnotation> link) override;
    
    /// <summary>
    /// Initializes new <see cref="AnnotationSelector"></see> object.
    /// </summary>
    /// <param name="annotation">
    /// Annotation to be selected. 
    /// This object only describes some characteristics we want found annotations to have, e.g. the type of annotation.
    /// </param>
    ASPOSE_PDF_SHARED_API AnnotationSelector(System::SharedPtr<Annotation> annotation);
    
    /// <summary>
    /// Select attachment annotation if AnnotationSelector was initialized with FileAttachmentAnnotation object.
    /// </summary>
    /// <param name="attachment">
    /// FileAttachmentAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<FileAttachmentAnnotation> attachment) override;
    /// <summary>
    /// Select text annotation if AnnotationSelector was initialized with TextAnnotation object.
    /// </summary>
    /// <param name="text">
    /// TextAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<TextAnnotation> text) override;
    /// <summary>
    /// Select redact annotation if AnnotationSelector was initialized with RedactAnnotation object.
    /// </summary>
    /// <param name="redact">RedactAnnotation object for selecting.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<RedactionAnnotation> redact);
    /// <summary>
    /// Select freetext annotation if AnnotationSelector was initialized with FreeTextAnnotation object.
    /// </summary>
    /// <param name="freetext">
    /// FreeTextAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<FreeTextAnnotation> freetext) override;
    /// <summary>
    /// Select attachment annotation if AnnotationSelector was initialized with FreeTextAnnotation object.
    /// </summary>
    /// <param name="highlight">
    /// HighlightAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<HighlightAnnotation> highlight) override;
    /// <summary>
    /// Select underline annotation if AnnotationSelector was initialized with UnderlineAnnotation object.
    /// </summary>
    /// <param name="underline">
    /// UnderlineAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<UnderlineAnnotation> underline) override;
    /// <summary>
    /// Select strikeOut annotation if AnnotationSelector was initialized with StrikeOutAnnotation object.
    /// </summary>
    /// <param name="strikeOut">
    /// StrikeOutAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<StrikeOutAnnotation> strikeOut) override;
    /// <summary>
    /// Select squiggly annotation if AnnotationSelector was initialized with SquigglyAnnotation object.
    /// </summary>
    /// <param name="squiggly">
    /// SquigglyAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<SquigglyAnnotation> squiggly) override;
    /// <summary>
    /// Select popup annotation if AnnotationSelector was initialized with PopupAnnotation object.
    /// </summary>
    /// <param name="popup">
    /// PopupAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<PopupAnnotation> popup) override;
    /// <summary>
    /// Select line annotation if AnnotationSelector was initialized with LineAnnotation object.
    /// </summary>
    /// <param name="line">
    /// LineAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<LineAnnotation> line) override;
    /// <summary>
    /// Select circle annotation if AnnotationSelector was initialized with CircleAnnotation object.
    /// </summary>
    /// <param name="circle">
    /// CircleAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<CircleAnnotation> circle) override;
    /// <summary>
    /// Select square annotation if AnnotationSelector was initialized with SquareAnnotation object.
    /// </summary>
    /// <param name="square">
    /// SquareAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<SquareAnnotation> square) override;
    /// <summary>
    /// Select ink annotation if AnnotationSelector was initialized with InkAnnotation object.
    /// </summary>
    /// <param name="ink">
    /// InkAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<InkAnnotation> ink) override;
    /// <summary>
    /// Select polyline annotation if AnnotationSelector was initialized with PolylineAnnotation object.
    /// </summary>
    /// <param name="polyline">
    /// PolylineAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<PolylineAnnotation> polyline) override;
    /// <summary>
    /// Select polygon annotation if AnnotationSelector was initialized with PolygonAnnotation object.
    /// </summary>
    /// <param name="polygon">
    /// PolygonAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<PolygonAnnotation> polygon) override;
    /// <summary>
    /// Select caret annotation if AnnotationSelector was initialized with CaretAnnotation object.
    /// </summary>
    /// <param name="caret">
    /// CaretAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<CaretAnnotation> caret) override;
    /// <summary>
    /// Select stamp annotation if AnnotationSelector was initialized with StampAnnotation object.
    /// </summary>
    /// <param name="stamp">
    /// StampAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<StampAnnotation> stamp) override;
    /// <summary>
    /// Select widget annotation if AnnotationSelector was initialized with WidgetAnnotation object.
    /// </summary>
    /// <param name="widget">
    /// WidgetAnnotation object for selecting.
    /// </param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<WidgetAnnotation> widget) override;
    /// <summary>
    /// Select watermark annotation if AnnotationSelector was initialized with WatermarkAnnotation object.
    /// </summary>
    /// <param name="watermark">WatermarkAnnotation for selecting.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<WatermarkAnnotation> watermark);
    /// <summary>
    /// Select movie annotation if AnnotationSelector was initialized with MovieAnnotation object.
    /// </summary>
    /// <param name="movie">MovieAnnotation object for selecting.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<MovieAnnotation> movie) override;
    /// <summary>
    /// Select movie annotation if AnnotationSelector was initialized with RichMedia annotation object.
    /// </summary>
    /// <param name="richMedia">RichMedia annotation.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<RichMediaAnnotation> richMedia);
    /// <summary>
    /// Select screen annotation if AnnotationSelector was initialized with ScreenAnnotation object.
    /// </summary>
    /// <param name="screen">ScreenAnnotation object for selecting.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<ScreenAnnotation> screen) override;
    /// <summary>
    /// Select PDF3D annotation if AnnotationSelector was initialized with PDF3DAnnotation object.
    /// </summary>
    /// <param name="pdf3D">PDF3DAnnotation object for selecting.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<PDF3DAnnotation> pdf3D);
    /// <summary>
    /// Select ColorBar annotation if AnnotationSelector was initialized with ColorBar object.
    /// </summary>
    /// <param name="colorBar">PDF3DAnnotation object for selecting.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<ColorBarAnnotation> colorBar);
    /// <summary>
    /// Selects the <paramref name="trimMark"></paramref> if the <see cref="AnnotationSelector"></see> was initialized with a <see cref="TrimMarkAnnotation"></see> object.
    /// </summary>
    /// <param name="trimMark">The <see cref="TrimMarkAnnotation"></see> object for selection.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<TrimMarkAnnotation> trimMark) override;
    /// <summary>
    /// Selects the <paramref name="bleedMark"></paramref> if the <see cref="AnnotationSelector"></see> was initialized with a
    /// <see cref="BleedMarkAnnotation"></see> object.
    /// </summary>
    /// <param name="bleedMark">The <see cref="BleedMarkAnnotation"></see> object for selection.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<BleedMarkAnnotation> bleedMark) override;
    /// <summary>
    /// Selects the <paramref name="registrationMark"></paramref> if the <see cref="AnnotationSelector"></see> was initialized with a
    /// <see cref="RegistrationMarkAnnotation"></see> object.
    /// </summary>
    /// <param name="registrationMark">The <see cref="RegistrationMarkAnnotation"></see> object for selection.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<RegistrationMarkAnnotation> registrationMark) override;
    /// <summary>
    /// Selects the <paramref name="pageInformation"></paramref> if the <see cref="AnnotationSelector"></see> was initialized with a
    /// <see cref="PageInformationAnnotation"></see> object.
    /// </summary>
    /// <param name="pageInformation">The <see cref="PageInformationAnnotation"></see> object for selection.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<PageInformationAnnotation> pageInformation) override;
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Annotation>>> selected;
    System::SharedPtr<Annotation> annotation;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


