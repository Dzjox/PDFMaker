#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using ImageFormat = Aspose.Pdf.Drawing.ImageFormat;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/MarkupAnnotation.h"
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
enum class StampIcon;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
class Operator;
class Page;
class Rectangle;
namespace Tests
{
namespace Annotations
{
class StampAnnotationTests;
} // namespace Annotations
} // namespace Tests
class XForm;
class XImage;
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
namespace IO
{
class Stream;
} // namespace IO
class String;
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
/// Represents rubber stamp annotation. 
/// This type of annotation displays text or graphics intended to look as if they were stamped on the page with a rubber stamp.
/// </summary>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS StampAnnotation final : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef StampAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::StampAnnotationTests;
    
public:

    /// <summary>
    /// Gets icon for rubber stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API StampIcon get_Icon();
    /// <summary>
    /// Sets icon for rubber stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Icon(StampIcon value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    /// <summary>
    /// Gets image of the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_Image();
    /// <summary>
    /// Sets image of the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Image(System::SharedPtr<System::IO::Stream> value);
    
    /// <summary>
    /// Acepts <see cref="AnnotationSelector"></see> visitor when browsing annotation collection.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    ASPOSE_PDF_SHARED_API StampAnnotation(System::SharedPtr<Document> document);
    /// <summary>
    /// Creates new Stamp annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API StampAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
    /// <summary>
    /// Ititializes Stamp annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    StampAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StampAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation) override;
    
    virtual ASPOSE_PDF_SHARED_API ~StampAnnotation();
    
private:

    System::SharedPtr<System::IO::Stream> _image;
    System::SharedPtr<XImage> _ximage;
    
    System::SharedPtr<XImage> GetXImage();
    System::SharedPtr<System::IO::Stream> ExtractImage();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


