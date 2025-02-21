#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class BleedMarkAnnotation;
class CaretAnnotation;
class CircleAnnotation;
class FileAttachmentAnnotation;
class FreeTextAnnotation;
class HighlightAnnotation;
class InkAnnotation;
class LineAnnotation;
class LinkAnnotation;
class MovieAnnotation;
class PageInformationAnnotation;
class PolygonAnnotation;
class PolylineAnnotation;
class PopupAnnotation;
class RegistrationMarkAnnotation;
class ScreenAnnotation;
class SquareAnnotation;
class SquigglyAnnotation;
class StampAnnotation;
class StrikeOutAnnotation;
class TextAnnotation;
class TrimMarkAnnotation;
class UnderlineAnnotation;
class WidgetAnnotation;
} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Defines Visitor for visiting different document annotations.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IAnnotationVisitor : public virtual System::Object
{
    typedef IAnnotationVisitor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Visit/select link annotation.
    /// </summary>
    /// <param name="link">
    /// LinkAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<LinkAnnotation> link) = 0;
    /// <summary>
    /// Visit/select attachment annotation.
    /// </summary>
    /// <param name="attachment">
    /// FileAttachmentAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<FileAttachmentAnnotation> attachment) = 0;
    /// <summary>
    /// Visit/select text annotation.
    /// </summary>
    /// <param name="text">
    /// TextAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<TextAnnotation> text) = 0;
    /// <summary>
    /// Visit/select freetext annotation.
    /// </summary>
    /// <param name="freetext">
    /// FreeTextAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<FreeTextAnnotation> freetext) = 0;
    /// <summary>
    /// Visit/select highlight annotation.
    /// </summary>
    /// <param name="highlight">
    /// HighlightAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<HighlightAnnotation> highlight) = 0;
    /// <summary>
    /// Visit/select underline annotation.
    /// </summary>
    /// <param name="underline">
    /// UnderlineAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<UnderlineAnnotation> underline) = 0;
    /// <summary>
    /// Visit/select strikeOut annotation.
    /// </summary>
    /// <param name="strikeOut">
    /// StrikeOutAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<StrikeOutAnnotation> strikeOut) = 0;
    /// <summary>
    /// Visit/select squiggly annotation.
    /// </summary>
    /// <param name="squiggly">
    /// SquigglyAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<SquigglyAnnotation> squiggly) = 0;
    /// <summary>
    /// Visit/select popup annotation.
    /// </summary>
    /// <param name="popup">
    /// PopupAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<PopupAnnotation> popup) = 0;
    /// <summary>
    /// Visit/select line annotation.
    /// </summary>
    /// <param name="line">
    /// LineAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<LineAnnotation> line) = 0;
    /// <summary>
    /// Visit/select circle annotation.
    /// </summary>
    /// <param name="circle">
    /// CircleAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<CircleAnnotation> circle) = 0;
    /// <summary>
    /// Visit/select square annotation.
    /// </summary>
    /// <param name="square">
    /// SquareAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<SquareAnnotation> square) = 0;
    /// <summary>
    /// Visit/select ink annotation.
    /// </summary>
    /// <param name="ink">
    /// InkAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<InkAnnotation> ink) = 0;
    /// <summary>
    /// Visit/select polyline annotation.
    /// </summary>
    /// <param name="polyline">
    /// PolylineAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<PolylineAnnotation> polyline) = 0;
    /// <summary>
    /// Visit/select polygon annotation.
    /// </summary>
    /// <param name="polygon">
    /// PolygonAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<PolygonAnnotation> polygon) = 0;
    /// <summary>
    /// Visit/select caret annotation.
    /// </summary>
    /// <param name="caret">
    /// CaretAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<CaretAnnotation> caret) = 0;
    /// <summary>
    /// Visit/select stamp annotation.
    /// </summary>
    /// <param name="stamp">
    /// StampAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<StampAnnotation> stamp) = 0;
    /// <summary>
    /// Visit/select widget annotation.
    /// </summary>
    /// <param name="widget">
    /// WidgetAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<WidgetAnnotation> widget) = 0;
    /// <summary>
    /// Visit/select movie annotation.
    /// </summary>
    /// <param name="movie">
    /// MovieAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<MovieAnnotation> movie) = 0;
    /// <summary>
    /// Visit/select screen annotation.
    /// </summary>
    /// <param name="screen">
    /// ScreenAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<ScreenAnnotation> screen) = 0;
    /// <summary>
    /// Visit/select a trim mark annotation.
    /// </summary>
    /// <param name="trimMark">The <see cref="TrimMarkAnnotation"></see> object example/template.</param>
    virtual void Visit(System::SharedPtr<TrimMarkAnnotation> trimMark) = 0;
    /// <summary>
    /// Visit/select a bleed mark annotation.
    /// </summary>
    /// <param name="bleedMark">The <see cref="BleedMarkAnnotation"></see> object example/template.</param>
    virtual void Visit(System::SharedPtr<BleedMarkAnnotation> bleedMark) = 0;
    /// <summary>
    /// Visit/select a registration mark annotation.
    /// </summary>
    /// <param name="registrationMark">The <see cref="RegistrationMarkAnnotation"></see> object example/template.</param>
    virtual void Visit(System::SharedPtr<RegistrationMarkAnnotation> registrationMark) = 0;
    /// <summary>
    /// Visit/select a page information annotation.
    /// </summary>
    /// <param name="pageInformation">The <see cref="PageInformationAnnotation"></see> object example/template.</param>
    virtual void Visit(System::SharedPtr<PageInformationAnnotation> pageInformation) = 0;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


