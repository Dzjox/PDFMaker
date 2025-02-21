#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/MarkupAnnotation.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
enum class LineEnding;
class Measure;
class PolygonAnnotation;
enum class PolyIntent;
class PolylineAnnotation;
} // namespace Annotations
class Color;
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
class Matrix;
class Operator;
class Page;
class Point;
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
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
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
/// Abstract base class for poly- annotations.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PolyAnnotation : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef PolyAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PolygonAnnotation;
    friend class Aspose::Pdf::Annotations::PolylineAnnotation;
    
public:

    /// <summary>
    /// Measure units specifed for this annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::Measure> get_Measure();
    /// <summary>
    /// Measure units specifed for this annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Measure(System::SharedPtr<Aspose::Pdf::Annotations::Measure> value);
    /// <summary>
    /// Gets an array of points representing the horizontal and vertical coordinates of each vertex.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Point>> get_Vertices();
    /// <summary>
    /// Sets an array of points representing the horizontal and vertical coordinates of each vertex.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Vertices(System::ArrayPtr<System::SharedPtr<Point>> value);
    /// <summary>
    /// Gets the interior color with which to fill the annotation's line endings.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Color> get_InteriorColor();
    /// <summary>
    /// Sets the interior color with which to fill the annotation's line endings.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InteriorColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets the style of first line ending.
    /// </summary>
    ASPOSE_PDF_SHARED_API LineEnding get_StartingStyle();
    /// <summary>
    /// Sets the style of first line ending.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StartingStyle(LineEnding value);
    /// <summary>
    /// Gets the style of second line ending.
    /// </summary>
    ASPOSE_PDF_SHARED_API LineEnding get_EndingStyle();
    /// <summary>
    /// Sets the style of second line ending.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EndingStyle(LineEnding value);
    /// <summary>
    /// Gets the intent of the polygon or polyline annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API PolyIntent get_Intent();
    /// <summary>
    /// Sets the intent of the polygon or polyline annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Intent(PolyIntent value);
    
    /// <summary>
    /// Updates the points in Vertices, according to the matrix transform.
    /// </summary>
    /// <param name="transform">Matrix specifying the transformation.</param>
    ASPOSE_PDF_SHARED_API void ChangeAfterResize(System::SharedPtr<Matrix> transform) override;
    
protected:

    PolyAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    /// <param name="vertices">An array of points representing the horizontal and vertical coordinates of each vertex.</param>
    ASPOSE_PDF_SHARED_API PolyAnnotation(System::SharedPtr<Document> document, System::ArrayPtr<System::SharedPtr<Point>> vertices);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="vertices">An array of points representing the horizontal and vertical coordinates of each vertex.</param>
    ASPOSE_PDF_SHARED_API PolyAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::ArrayPtr<System::SharedPtr<Point>> vertices);
    
    /// <summary>
    /// When overridden in a derived class, exports annotation attributes into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    ASPOSE_PDF_SHARED_API void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    /// <summary>
    /// When overridden in a derived class, exports annotation elements into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    ASPOSE_PDF_SHARED_API void WriteXfdfElements(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    /// <summary>
    /// When overridden in a derived class, import annotation attributes from XFDF.
    /// </summary>
    /// <param name="reader">Reader of XFDF file.</param>
    ASPOSE_PDF_SHARED_API void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader) override;
    /// <summary>
    /// When overridden in a derived class, import annotation elements from XFDF.
    /// </summary>
    /// <param name="table">Hashtable with information parsed from the XFDF file.</param>
    ASPOSE_PDF_SHARED_API void ReadXfdfElements(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> table) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation) override;
    
    virtual ASPOSE_PDF_SHARED_API ~PolyAnnotation();
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::Measure> _measure;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


