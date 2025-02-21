#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using System.Security.Policy;

#include <system/array.h>

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
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
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
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class describes RichMediaAnnotation which allows embed video/audio data into PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RichMediaAnnotation : public Aspose::Pdf::Annotations::Annotation
{
    typedef RichMediaAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    
public:

    /// <summary>
    /// Type of the multimedia. 
    /// </summary>
    enum class ContentType
    {
        /// <summary>
        /// Audio data.
        /// </summary>
        Audio,
        /// <summary>
        /// Video data.
        /// </summary>
        Video,
        /// <summary>
        /// Unknown/unsupported type of data.
        /// </summary>
        Unknown
    };
    
    /// <summary>
    /// Event which activates annotation. 
    /// </summary>
    enum class ActivationEvent
    {
        /// <summary>
        /// Activated by click on the annotation. 
        /// </summary>
        Click,
        /// <summary>
        /// Activated on page open.
        /// </summary>
        PageOpen,
        /// <summary>
        /// Activated when page becames visible. 
        /// </summary>
        PageVisible
    };
    
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    /// <summary>
    /// Sets or gets custom flash player to play video/audio data.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_CustomPlayer() const;
    /// <summary>
    /// Sets or gets custom flash player to play video/audio data.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CustomPlayer(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Sets or gets flash variables which passed to player. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_CustomFlashVariables() const;
    /// <summary>
    /// Sets or gets flash variables which passed to player. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CustomFlashVariables(System::String value);
    /// <summary>
    /// Data of the Rich Media content. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_Content();
    /// <summary>
    /// Gets type of content. Possible values: Audio, Video. 
    /// </summary>
    ASPOSE_PDF_SHARED_API RichMediaAnnotation::ContentType get_Type();
    /// <summary>
    /// Sets type of content. Possible values: Audio, Video. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Type(RichMediaAnnotation::ContentType value);
    /// <summary>
    /// Event which activates application.
    /// </summary>
    ASPOSE_PDF_SHARED_API RichMediaAnnotation::ActivationEvent get_ActivateOn();
    /// <summary>
    /// Event which activates application.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ActivateOn(RichMediaAnnotation::ActivationEvent value);
    
    /// <summary>
    /// Accepts visitor for this annotation. 
    /// </summary>
    /// <param name="visitor">Visitor instance.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
    /// <summary>
    /// Initializes RichMediaAnnotation.
    /// </summary>
    /// <param name="page">Page where object being created.</param>
    /// <param name="rect">Rectangle coordinates.</param>
    ASPOSE_PDF_SHARED_API RichMediaAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Add custom named data (for example required for flash script).
    /// </summary>
    /// <param name="name">Name of the data.</param>
    /// <param name="data">Data.</param>
    ASPOSE_PDF_SHARED_API void AddCustomData(System::String name, System::SharedPtr<System::IO::Stream> data);
    /// <summary>
    /// Set content stream.
    /// </summary>
    /// <param name="fileName">Name of the stream.</param>
    /// <param name="audio">Data stream.</param>
    ASPOSE_PDF_SHARED_API void SetContent(System::String fileName, System::SharedPtr<System::IO::Stream> audio);
    /// <summary>
    /// Set poster of the annotation. 
    /// </summary>
    /// <param name="imageStream">Stream containing poster image.</param>
    ASPOSE_PDF_SHARED_API void SetPoster(System::SharedPtr<System::IO::Stream> imageStream);
    /// <summary>
    /// Updates data with specified parameters.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Update();
    
protected:

    RichMediaAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RichMediaAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    
    virtual ASPOSE_PDF_SHARED_API ~RichMediaAnnotation();
    
private:

    System::String _resourcePath;
    System::String _videoPlayerName;
    System::String _audioPlayerName;
    System::SharedPtr<System::IO::Stream> _content;
    RichMediaAnnotation::ContentType _contentType;
    System::String _contentName;
    System::String _imageName;
    System::SharedPtr<System::IO::Stream> _customPlayer;
    System::String _customFlashVariables;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::IO::Stream>>> _customData;
    RichMediaAnnotation::ActivationEvent _activateOn;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_RichMediaContent();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_RichMediaSettings();
    
    static const System::String Click;
    static const System::String PageOpen;
    static const System::String PageVisible;
    
    System::SharedPtr<System::IO::Stream> LoadResource(System::String name);
    System::String GetPlayerName();
    System::SharedPtr<System::IO::Stream> GetPlayer();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> Select(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> node, System::ArrayPtr<System::String> path);
    System::SharedPtr<System::IO::Stream> GetContent();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetDictionary(System::String key);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> ByRef(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> value);
    RichMediaAnnotation::ActivationEvent TranslateActionCode(System::String code);
    System::String GetActionCode();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


