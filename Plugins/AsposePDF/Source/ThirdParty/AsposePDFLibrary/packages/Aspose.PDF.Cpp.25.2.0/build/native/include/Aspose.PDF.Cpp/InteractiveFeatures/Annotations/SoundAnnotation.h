#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/MarkupAnnotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
class AnnotationSelector;
enum class AnnotationType;
class SoundData;
enum class SoundIcon;
class SoundSampleData;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
class Page;
class Rectangle;
namespace Tests
{
namespace Annotations
{
class SoundAnnotationTests;
} // namespace Annotations
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
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
/// Represents a sound annotation that contains sound recorded from the computer's microphone or imported from a file.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SoundAnnotation final : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef SoundAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::SoundAnnotationTests;
    
public:

    /// <summary>
    /// Gets an icon to be used in displaying the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API SoundIcon get_Icon();
    /// <summary>
    /// Sets an icon to be used in displaying the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Icon(SoundIcon value);
    /// <summary>
    /// Gets a sound object defining the sound to be played when the annotation is activated.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::SoundData> get_SoundData();
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
    /// <summary>
    /// Creates new Sound annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="soundFile">A sound file defining the sound to be played when the annotation is activated.</param>
    ASPOSE_PDF_SHARED_API SoundAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String soundFile);
    /// <summary>
    /// Creates new Sound annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="soundFile">A sound file defining the sound to be played when the annotation is activated.</param>
    /// <param name="soundSampleData">A sound sample data contains extra of sound parameters such as sampling rate, bits per sample and so on.</param>
    ASPOSE_PDF_SHARED_API SoundAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String soundFile, System::SharedPtr<SoundSampleData> soundSampleData);
    
protected:

    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
    /// <summary>
    /// Ititializes Sound annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    SoundAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SoundAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::SoundData> _soundData;
    
    /// <summary>
    /// Gets a sound object defining the sound to be played when the annotation is activated.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SoundData(System::SharedPtr<Aspose::Pdf::Annotations::SoundData> value);
    
    /// <summary>
    /// Create new Sound annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    SoundAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SoundAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect));
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


