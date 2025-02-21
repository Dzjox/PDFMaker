#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <cstdint>

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
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
} // namespace Data
} // namespace Engine
class FileSpecification;
class Page;
class Point;
class Rectangle;
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a movie annotation that contains animated graphics and sound to be presented on the computer screen and through the speakers. When the annotation is activated, the movie is played.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MovieAnnotation final : public Aspose::Pdf::Annotations::Annotation, public Aspose::Pdf::Annotations::Annotation::ITitledAnnotation
{
    typedef MovieAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    typedef Aspose::Pdf::Annotations::Annotation::ITitledAnnotation BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    
public:

    /// <summary>
    /// Gets the title of the movie annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Title() override;
    /// <summary>
    /// Sets the title of the movie annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::String value) override;
    /// <summary>
    /// Gets a file specification identifying a self-describing movie file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FileSpecification> get_File();
    /// <summary>
    /// Sets a file specification identifying a self-describing movie file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_File(System::SharedPtr<FileSpecification> value);
    /// <summary>
    /// Gets a flag or stream specifying whether and how a poster image representing the movie shall be displayed. If true, the poster image shall be retrieved from the movie file; if it is false, no poster shall be displayed.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Poster();
    /// <summary>
    /// Sets a flag or stream specifying whether and how a poster image representing the movie shall be displayed. If true, the poster image shall be retrieved from the movie file; if it is false, no poster shall be displayed.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Poster(bool value);
    /// <summary>
    /// Gets the width and height of the movie's bounding box, in pixels.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> get_Aspect();
    /// <summary>
    /// Sets the width and height of the movie's bounding box, in pixels.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Aspect(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets the number of degrees by which the movie shall be rotated clockwise relative to the page. The value shall be a multiple of 90.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Rotate();
    /// <summary>
    /// Sets the number of degrees by which the movie shall be rotated clockwise relative to the page. The value shall be a multiple of 90.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rotate(int32_t value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Constructor for using with Generator.
    /// </summary>
    /// <param name="document">Document where movie annotation will be created.</param>
    /// <param name="movieFile">Name of movie file. </param>
    ASPOSE_PDF_SHARED_API MovieAnnotation(System::SharedPtr<Document> document, System::String movieFile);
    /// <summary>
    /// Creates new Sound annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="movieFile">A movie file to be played when the annotation is activated.</param>
    ASPOSE_PDF_SHARED_API MovieAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String movieFile);
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
protected:

    MovieAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MovieAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    
    virtual ASPOSE_PDF_SHARED_API ~MovieAnnotation();
    
private:

    System::SharedPtr<FileSpecification> _fileSpec;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_Movie();
    
    void Initialize();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


