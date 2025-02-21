#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/MarkupAnnotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class HighlightAnnotation;
class SquigglyAnnotation;
class StrikeOutAnnotation;
class UnderlineAnnotation;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
class Matrix;
class Page;
class Point;
class Rectangle;
namespace Text
{
class TextFragmentCollection;
} // namespace Text
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Xml
{
class XmlReader;
class XmlWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Abstract base class for text markup annotations.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextMarkupAnnotation : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef TextMarkupAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::HighlightAnnotation;
    friend class Aspose::Pdf::Annotations::SquigglyAnnotation;
    friend class Aspose::Pdf::Annotations::StrikeOutAnnotation;
    friend class Aspose::Pdf::Annotations::UnderlineAnnotation;
    
public:

    /// <summary>
    /// Gets an array of points specifying the coordinates of n quadrilaterals. Each quadrilateral encompasses a word or group of contiguous words in the text underlying the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Point>> get_QuadPoints();
    /// <summary>
    /// Sets an array of points specifying the coordinates of n quadrilaterals. Each quadrilateral encompasses a word or group of contiguous words in the text underlying the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_QuadPoints(System::ArrayPtr<System::SharedPtr<Point>> value);
    
    /// <summary>
    /// Updates the QuadPoints, according to the matrix transform.
    /// </summary>
    /// <param name="transform">Matrix that use for transformation (resize).</param>
    ASPOSE_PDF_SHARED_API void ChangeAfterResize(System::SharedPtr<Matrix> transform) override;
    /// <summary>
    /// Gets text under markup annotation as string.
    /// </summary>
    /// <returns>String containing text that is under markup annotation.</returns>
    ASPOSE_PDF_SHARED_API System::String GetMarkedText();
    /// <summary>
    /// Gets text under markup annotation as <see cref="TextFragmentCollection"></see>.
    /// </summary>
    /// <returns><see cref="TextFragmentCollection"></see> containing <see cref="TextFragment"></see>s that is under markup annotation.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextFragmentCollection> GetMarkedTextFragments();
    
protected:

    TextMarkupAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API TextMarkupAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// When overridden in a derived class, exports annotation attributes into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    ASPOSE_PDF_SHARED_API void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    /// <summary>
    /// When overridden in a derived class, import annotation attributes from XFDF.
    /// </summary>
    /// <param name="reader">Reader of XFDF file.</param>
    ASPOSE_PDF_SHARED_API void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
private:

    System::SharedPtr<Aspose::Pdf::Text::TextFragmentCollection> GetTextFragmentsForMarkedText(System::SharedPtr<XForm> xform = nullptr);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


