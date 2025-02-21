#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/nullable.h>
#include <system/idisposable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/ISupportsMemoryCleanup.h"
#include "Aspose.PDF.Cpp/IOperatorContainer.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
class AppearanceDictionary;
class FreeTextAnnotation;
class PDF3DAnnotation;
class WidgetAnnotation;
} // namespace Annotations
class ApsToPdfConverter;
class Artifact;
class ContentsAppender;
class Copier;
class Document;
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Segmenting
{
class TextSegmentBuilder;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
namespace Filters
{
class IEncoder;
} // namespace Filters
namespace IO
{
namespace ConvertStrategies
{
namespace ConvertHelpers
{
class LowLevelFontSubstitutor;
} // namespace ConvertHelpers
namespace PdfA
{
class PdfAOperatorValidator;
} // namespace PdfA
class PdfA1ConvertStrategy;
class PdfConvertStrategy;
class PdfUaConvertStrategy;
class TransparentContentRemoval;
} // namespace ConvertStrategies
} // namespace IO
namespace Presentation
{
namespace IndependentImpl
{
namespace ColorInitializerStrategies
{
class ContentToGrayConversion;
} // namespace ColorInitializerStrategies
} // namespace IndependentImpl
} // namespace Presentation
} // namespace Engine
namespace Facades
{
class LogicalStructureCopier;
class PdfContentEditor;
class PdfExtractor;
class PdfFileEditor;
class PdfPageEditor;
} // namespace Facades
namespace Forms
{
class ButtonField;
class CheckboxField;
class ComboBoxField;
class RadioButtonOptionField;
class RichTextBoxField;
class SignatureField;
class TextBoxField;
} // namespace Forms
class HeaderArtifact;
class ImagePlacementAbsorber;
namespace Interchange
{
class ContentSequenceXForm;
class ContentSequenceXObject;
} // namespace Interchange
namespace LogicalStructure
{
class StructureElement;
} // namespace LogicalStructure
class Matrix;
namespace OFD
{
namespace Converters
{
class AnnotationsConverter;
} // namespace Converters
} // namespace OFD
class OperatorCollection;
class Opi;
namespace Optimization
{
class ImageCompressor;
class ResourceOptimizer;
} // namespace Optimization
class Page;
class PageCollectionExtension;
class PdfPageStamp;
class Rectangle;
class Resources;
namespace Tagged
{
class TaggedContent;
} // namespace Tagged
namespace Tests
{
namespace Annotations
{
class WidgetAnnotationTests;
} // namespace Annotations
namespace Collections
{
class ResourcesTests;
} // namespace Collections
namespace Facades
{
class PdfFileStampTests;
} // namespace Facades
class RegressionTests_v10_8;
class RegressionTests_v11_4;
class RegressionTests_v16_12;
class RegressionTests_v19_5;
class RegressionTests_v20_03;
class RegressionTests_v20_07;
class RegressionTests_v21_7;
class RegressionTests_v21_9;
class RegressionTests_v23_10;
class RegressionTests_v6_3;
class RegressionTests_v6_9;
class RegressionTests_v7_1;
class RegressionTests_v7_2;
class RegressionTests_v7_4;
class RegressionTests_v7_5;
class RegressionTests_v7_7;
class RegressionTests_v7_8;
class RegressionTests_v8_1;
class RegressionTests_v8_3;
class RegressionTests_v8_7;
} // namespace Tests
namespace Text
{
class FontCleanup;
class TableAbsorber;
class TextAbsorber;
class TextBuilder;
class TextExtractionVerifier;
class TextFragmentAbsorber;
} // namespace Text
class TextBoxFieldXfa;
class TextStamp;
namespace Vector
{
class GraphicsAbsorber;
} // namespace Vector
class WatermarkArtifact;
class XFormCollection;
class XmlConverter;
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
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represent XForm
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XForm final : public System::IDisposable, public Aspose::Pdf::ISupportsMemoryCleanup, public Aspose::Pdf::IOperatorContainer
{
    typedef XForm ThisType;
    typedef System::IDisposable BaseType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType1;
    typedef Aspose::Pdf::IOperatorContainer BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Interchange::ContentSequenceXForm;
    friend class Aspose::Pdf::Interchange::ContentSequenceXObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Optimization::ImageCompressor;
    friend class Aspose::Pdf::Optimization::ResourceOptimizer;
    friend class Aspose::Pdf::Opi;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Text::FontCleanup;
    friend class Aspose::Pdf::Text::TableAbsorber;
    friend class Aspose::Pdf::Text::TextExtractionVerifier;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfPageEditor;
    friend class Aspose::Pdf::Annotations::AppearanceDictionary;
    friend class Aspose::Pdf::Annotations::AppearanceDictionary;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Forms::RichTextBoxField;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::PdfPageStamp;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Text::TextAbsorber;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::TextBoxFieldXfa;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::ContentsAppender;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::XmlConverter;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::HeaderArtifact;
    friend class Aspose::Pdf::WatermarkArtifact;
    friend class Aspose::Pdf::Vector::GraphicsAbsorber;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Facades::LogicalStructureCopier;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA::PdfAOperatorValidator;
    friend class Aspose::Pdf::OFD::Converters::AnnotationsConverter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA1ConvertStrategy;
    friend class Aspose::Pdf::Engine::Presentation::IndependentImpl::ColorInitializerStrategies::ContentToGrayConversion;
    friend class Aspose::Pdf::PageCollectionExtension;
    friend class Aspose::Pdf::Tests::Collections::ResourcesTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::Annotations::WidgetAnnotationTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_03;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_10;
    friend class Aspose::Pdf::Tests::Facades::PdfFileStampTests;
    
public:

    /// <summary>
    /// Gets form bounding box.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_BBox();
    /// <summary>
    /// Sets form bounding box.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets form name. Form name is name which used to reference form in XObejct ductionary in page resources.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name();
    /// <summary>
    /// Sets form name. Form name is name which used to reference form in XObejct ductionary in page resources.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    /// <summary>
    /// Gets form IT. Form IT is a name describing the intent of the XObject.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_IT();
    /// <summary>
    /// Gets form Subtype.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Subtype();
    /// <summary>
    /// Gets operators of the form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OperatorCollection> get_Contents() override;
    /// <summary>
    /// Gets The Open Prepress Interface (OPI).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Opi> get_Opi();
    /// <summary>
    /// Gets matrix of the form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix();
    /// <summary>
    /// Sets matrix of the form.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Matrix(System::SharedPtr<Aspose::Pdf::Matrix> value);
    /// <summary>
    /// Gets Form XObject resources.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Resources> get_Resources() override;
    /// <summary>
    /// Gets rectangel of the form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    
    /// <summary>
    /// Returns resources of Form X-Object
    /// </summary>
    /// <param name="allowCreate">If For does not have resources and allowCreate is true, Resources will be automatically created for the form.</param>
    /// <returns>Resources.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Resources> GetResources(bool allowCreate);
    /// <summary>
    /// Returns resources of Form X-Object. If For does not have resources and allowCreate is true, Resources will be automatically created for the form.
    /// </summary>
    /// <returns>Resources object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Resources> GetResources() override;
    /// <summary>
    /// Creates XForm which duplicates contents of the page. 
    /// </summary>
    /// <param name="source">Source page</param>
    /// <param name="document">Document where new XForm will be added.</param>
    /// <returns>Newly created XForm.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Page> source, System::SharedPtr<Document> document);
    /// <summary>
    /// Frees up memory
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    /// <summary>
    /// Clears cached data
    /// </summary>
    ASPOSE_PDF_SHARED_API void FreeMemory() override;
    
protected:

    System::SharedPtr<Aspose::Pdf::Resources> resources;
    System::WeakPtr<Document> _document;
    /// <summary>
    /// Pdf.Kit.Engine obejct decribes form
    /// </summary>
    System::SharedPtr<Engine::Data::IPdfObject> EngineObj;
    
    /// <summary>
    /// Gets the PieceInfo dictionary.
    /// </summary>
    System::SharedPtr<Engine::Data::IPdfDictionary> get_PieceInfo();
    /// <summary>
    /// Gets form index in parent tree.
    /// </summary>
    System::Nullable<int32_t> get_StructParent();
    /// <summary>
    /// Sets form index in parent tree.
    /// </summary>
    void set_StructParent(System::Nullable<int32_t> value);
    /// <summary>
    /// Gets parent collection.
    /// </summary>
    const System::SharedPtr<XFormCollection>& get_Parent() const;
    /// <summary>
    /// Sets parent collection.
    /// </summary>
    void set_Parent(System::SharedPtr<XFormCollection> value);
    
    /// <summary>
    /// Constructor of XForm.Constructs XForm on base of Pdf.Kit.Engine PDf object.
    /// </summary>
    /// <param name="xform"></param>
    XForm(System::SharedPtr<Engine::Data::IPdfObject> xform);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XForm, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfObject> xform));
    
    XForm(System::SharedPtr<Engine::Data::IPdfObject> xform, bool isPattern);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XForm, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfObject> xform, bool isPattern));
    /// <summary>
    /// Creates new XForm in the document.
    /// </summary>
    /// <param name="trailerable">Describes ITrailerable object</param>
    /// <returns>Newly created XForm</returns>
    static System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    bool ContainsOwnResources();
    /// <summary>
    /// Change resources entry for x-form.
    /// </summary>
    /// <param name="resources"></param>
    void setResources(System::SharedPtr<Engine::Data::IPdfPrimitive> resources);
    static System::SharedPtr<XForm> CreateNewForm_OLD(System::SharedPtr<Page> source, System::SharedPtr<Engine::Data::ITrailerable> trailerable, System::SharedPtr<Copier> copier);
    static System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Page> source, System::SharedPtr<Engine::Data::ITrailerable> trailerable, System::SharedPtr<Copier> copier);
    static System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Page> source, System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    System::ArrayPtr<double> GetRectangle();
    /// <summary>
    /// Returns rectangle occupied by text of XForm. 
    /// </summary>
    /// <returns>X-Form object rectangle</returns>
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangleOfText();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> FindReferecnes(System::String name);
    void ReleaseResources();
    
    virtual ASPOSE_PDF_SHARED_API ~XForm();
    
private:

    System::SharedPtr<OperatorCollection> _contents;
    System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
    System::SharedPtr<Aspose::Pdf::Opi> _opi;
    System::WeakPtr<XFormCollection> pr_Parent;
    
    /// <summary>
    /// Encodes stream data using specified encoder.
    /// (TODO: do we need to have IEncoder.Encode(Stream) method? So we dont need to allocate memory for all stream data...
    /// </summary>
    /// <param name="stream"></param>
    /// <param name="encoder"></param>
    /// <returns></returns>
    static System::SharedPtr<System::IO::Stream> EncodeStream(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Filters::IEncoder> encoder);
    /// <summary>
    /// Compares rectnangle with bounding rectangle and update bounding rectangle
    /// </summary>
    /// <param name="rect"></param>
    /// <param name="r"></param>
    /// <returns></returns>
    System::ArrayPtr<double> UpdateBoundRectangle(System::ArrayPtr<double> boundRect, System::SharedPtr<Aspose::Pdf::Rectangle> r);
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangleOfObject(System::String name, System::SharedPtr<Aspose::Pdf::Matrix> matrix);
    void Dispose(bool disposing);
    
};

} // namespace Pdf
} // namespace Aspose


