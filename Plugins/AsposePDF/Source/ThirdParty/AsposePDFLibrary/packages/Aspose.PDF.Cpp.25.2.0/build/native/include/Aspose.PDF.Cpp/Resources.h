#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/ISupportsMemoryCleanup.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
class FreeTextAnnotation;
class HighlightAnnotation;
class StampAnnotation;
class WatermarkAnnotation;
} // namespace Annotations
class ApsToPdfConverter;
class Artifact;
namespace DataEditor
{
class CosPdfDictionary;
class DictionaryEditor;
} // namespace DataEditor
class Document;
class DocumentExtensions;
namespace Drawing
{
class Shape;
} // namespace Drawing
namespace Engine
{
namespace CommonData
{
namespace Graphics
{
namespace Patterns
{
class IPattern;
class TilingPattern;
} // namespace Patterns
} // namespace Graphics
namespace PageContent
{
class IResourceDictionary;
namespace Operators
{
namespace InlineImages
{
class EndInlineObject;
} // namespace InlineImages
} // namespace Operators
} // namespace PageContent
namespace Text
{
namespace Fonts
{
namespace Utilities
{
class DocumentFontsCollector;
class FontCreator;
class PageAnnotationProcessor;
} // namespace Utilities
} // namespace Fonts
namespace Segmenting
{
class PhysicalTextSegment;
class TextSegmentBuilder;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
namespace ConvertHelpers
{
class FontUtils;
class LowLevelFontSubstitutor;
} // namespace ConvertHelpers
namespace GlyphWidths
{
class TrueTypeGlyphWidthsProcessor;
} // namespace GlyphWidths
namespace PdfA
{
class PdfAOperatorValidator;
} // namespace PdfA
class PdfA1ConvertStrategy;
class PdfAConvertStrategyBase;
class PdfConvertStrategy;
class PdfUaConvertStrategy;
class PdfXConvertStrategy;
class SearchablePdfConvertStrategy;
class TransparentContentRemoval;
class VersionConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
namespace Presentation
{
class ColorDetectHelper;
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
class FormEditor;
class PdfContentEditor;
class PdfExtractor;
class PdfFileEditor;
} // namespace Facades
namespace Forms
{
class Form;
class TextModel;
} // namespace Forms
class ImagePlacementAbsorber;
namespace Interchange
{
class ContentSequencePage;
class ContentSequenceXForm;
} // namespace Interchange
namespace LogicalStructure
{
class StructureElement;
} // namespace LogicalStructure
namespace OFD
{
namespace Converters
{
class PageBlockConverter;
} // namespace Converters
} // namespace OFD
class OperatorCollection;
namespace Optimization
{
class ImageCompressor;
} // namespace Optimization
class Page;
namespace PageModel
{
class GraphicElement;
class ImageElement;
class TextElement;
} // namespace PageModel
class PdfPageStamp;
class Resources;
class Stamp;
namespace Structure
{
class FigureElement;
} // namespace Structure
namespace Tagged
{
class TaggedContent;
} // namespace Tagged
namespace Tests
{
namespace Collections
{
class ResourcesTests;
} // namespace Collections
namespace Engine
{
namespace CommonData
{
namespace PageContent
{
namespace Operators
{
namespace TextShowing
{
class TextShowingTests;
} // namespace TextShowing
} // namespace Operators
} // namespace PageContent
} // namespace CommonData
} // namespace Engine
namespace Layers
{
class LayersTests;
} // namespace Layers
class PdfFile_2_0Test;
class RegressionTests_v10_5;
class RegressionTests_v11_7;
class RegressionTests_v16_12;
class RegressionTests_v17_2;
class RegressionTests_v19_12;
class RegressionTests_v19_3;
class RegressionTests_v19_5;
class RegressionTests_v20_06;
class RegressionTests_v20_07;
class RegressionTests_v22_10;
class RegressionTests_v23_09;
class RegressionTests_v23_10;
class RegressionTests_v24_09;
class RegressionTests_v6_3;
class RegressionTests_v6_9;
class RegressionTests_v7_0;
class RegressionTests_v7_3;
class RegressionTests_v7_6;
class RegressionTests_v7_8;
class RegressionTests_v8_0;
class RegressionTests_v8_2;
class RegressionTests_v8_6;
class RegressionTests_v8_7;
class RegressionTests_v9_2;
class RegressionTests_v9_9;
namespace Text
{
class TextBuilderTests;
} // namespace Text
} // namespace Tests
namespace Text
{
class FontCollection;
class TextExtractionVerifier;
class TextFragmentAbsorber;
} // namespace Text
namespace Vector
{
class CumulativeGraphicState;
namespace Extraction
{
class ApsSvgRenderer;
} // namespace Extraction
class GraphicState;
} // namespace Vector
class XForm;
class XFormCollection;
class XImage;
class XImageCollection;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Image;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing page resources.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Resources final : public Aspose::Pdf::ISupportsMemoryCleanup
{
    typedef Resources ThisType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsCollector;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontCreator;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::PageAnnotationProcessor;
    friend class Aspose::Pdf::Interchange::ContentSequencePage;
    friend class Aspose::Pdf::Interchange::ContentSequenceXForm;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Optimization::ImageCompressor;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FontUtils;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::GlyphWidths::TrueTypeGlyphWidthsProcessor;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::PageModel::GraphicElement;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Engine::Presentation::ColorDetectHelper;
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::Engine::CommonData::Graphics::Patterns::TilingPattern;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::InlineImages::EndInlineObject;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::VersionConvertStrategy;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Text::TextExtractionVerifier;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::DocumentExtensions;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Stamp;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::HighlightAnnotation;
    friend class Aspose::Pdf::Annotations::StampAnnotation;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::PdfPageStamp;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::XImage;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::Structure::FigureElement;
    friend class Aspose::Pdf::Forms::TextModel;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Vector::GraphicState;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA::PdfAOperatorValidator;
    friend class Aspose::Pdf::OFD::Converters::PageBlockConverter;
    friend class Aspose::Pdf::Vector::Extraction::ApsSvgRenderer;
    friend class Aspose::Pdf::Vector::CumulativeGraphicState;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA1ConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    friend class Aspose::Pdf::Engine::Presentation::IndependentImpl::ColorInitializerStrategies::ContentToGrayConversion;
    friend class Aspose::Pdf::DataEditor::DictionaryEditor;
    friend class Aspose::Pdf::DataEditor::CosPdfDictionary;
    friend class Aspose::Pdf::Tests::Collections::ResourcesTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::Engine::CommonData::PageContent::Operators::TextShowing::TextShowingTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_06;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_09;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_09;
    friend class Aspose::Pdf::Tests::PdfFile_2_0Test;
    friend class Aspose::Pdf::Tests::Layers::LayersTests;
    
public:

    /// <summary>
    /// Represents ExtGStates with some values.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS ExtGStateValue : public System::Object
    {
        typedef ExtGStateValue ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::Resources;
        
    public:
    
        ASPOSE_PDF_SHARED_API System::String get_Name() const;
        ASPOSE_PDF_SHARED_API double get_CA() const;
        ASPOSE_PDF_SHARED_API double get_ca() const;
        
        ASPOSE_PDF_SHARED_API ExtGStateValue(System::String name);
        
    protected:
    
        ASPOSE_PDF_SHARED_API void set_CA(double value);
        ASPOSE_PDF_SHARED_API void set_ca(double value);
        
    private:
    
        System::String _name;
        double _ca1;
        double _ca2;
        
    };
    
    
public:

    /// <summary>
    /// Gets <see cref="Forms"></see> forms collection
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XFormCollection> get_Forms();
    /// <summary>
    /// Gets <see cref="Images"></see> images collection
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XImageCollection> get_Images();
    /// <summary>
    /// Gets <see cref="Fonts"></see> resources collection
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Text::FontCollection> get_Fonts();
    
    /// <summary>
    /// Returns fonts collection. If resources don't contain fonts entry it will be created in depends of CreateIfAbsent flag.
    /// </summary>
    /// <param name="CreateIfAbsent">If this flag is true then fonts will be created if this entry is absent.</param>
    /// <returns>Fonts collection.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Text::FontCollection> GetFonts(bool CreateIfAbsent);
    /// <summary>
    /// Gets all ExGStates from resources.
    /// </summary>
    /// <returns>Returns dictionary with ExGStates names keys.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<Resources::ExtGStateValue>>> GetExtGStates();
    ASPOSE_PDF_SHARED_API void cpp_set_xfrom_weak(System::SharedPtr<XForm> from);
    /// <summary>
    /// Clears cached data, frees memory etc.
    /// </summary>
    ASPOSE_PDF_SHARED_API void FreeMemory() override;
    
protected:

    bool _isIgnoreResourceFontErrors;
    System::SharedPtr<Engine::Data::IPdfDictionary> _EngineDict;
    System::SharedPtr<Engine::CommonData::PageContent::IResourceDictionary> _ResourceDictionary;
    System::SharedPtr<OperatorCollection> _Contents;
    
    System::SharedPtr<Engine::CommonData::PageContent::IResourceDictionary> get_ResourceDictionary() const;
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict() const;
    System::SharedPtr<OperatorCollection> get_Contents() const;
    void set_Contents(System::SharedPtr<OperatorCollection> value);
    System::SharedPtr<Aspose::Pdf::Document> get_Document() const;
    /// <summary>
    /// True if this resources are common i.e. are shared for several pages 
    /// (placed in pages dictionary as inherited resouirces or in every page as object reference)
    /// Manipulation with common resources must be performed very carefully for example 
    /// deleting object form common resources in one page may cause errors on other pages if deleted object
    /// was used for other pages.
    /// </summary>
    bool get_IsCommonResource();
    /// <summary>
    /// True if this resources are common i.e. are shared for several pages 
    /// (placed in pages dictionary as inherited resouirces or in every page as object reference)
    /// Manipulation with common resources must be performed very carefully for example 
    /// deleting object form common resources in one page may cause errors on other pages if deleted object
    /// was used for other pages.
    /// </summary>
    void set_IsCommonResource(bool value);
    System::SharedPtr<Engine::Data::IPdfObject> get_Source() const;
    void set_Source(System::SharedPtr<Engine::Data::IPdfObject> value);
    
    /// <summary>
    /// Clears cached forms (this required when fields are flattened)
    /// </summary>
    void ClearFormsCache();
    void ClearImagesCache();
    void ClearFontsCache();
    void InvalidateForms();
    static System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<Page> page);
    static void ReleaseResourcesFor(const System::SharedPtr<Page>& page);
    static System::SharedPtr<Resources> Create(System::SharedPtr<Aspose::Pdf::Document> doc, System::SharedPtr<Engine::CommonData::PageContent::IResourceDictionary> res);
    static System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<Forms::Form> form);
    static System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<XForm> xform);
    static void ReleaseResourcesFor(System::SharedPtr<XForm> xform);
    static System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<Engine::CommonData::Graphics::Patterns::TilingPattern> pattern);
    static System::SharedPtr<System::Drawing::Image> GetImage(System::String name, System::SharedPtr<Engine::Data::IPdfDictionary> resources);
    /// <summary>
    /// Create resource entry in the desired section
    /// </summary>
    /// <param name="section">Section name ("XObject, ExtGState etc.)</param>
    /// <param name="name">Desired name of the entry.</param>
    /// <returns></returns>
    System::SharedPtr<Engine::Data::IPdfDictionary> CreateEntry(System::String section, System::String& name);
    /// <summary>
    /// Determines whether common images are existed in the document.
    /// </summary>
    /// <param name="imageObjectId">The image object id to validate.</param>
    /// <returns>True - the image is common resource; otherwise, false.</returns>
    bool IsXObjectCommon(int32_t imageObjectId);
    System::SharedPtr<Engine::CommonData::Graphics::Patterns::IPattern> FindPattern(System::String patternName);
    
    virtual ASPOSE_PDF_SHARED_API ~Resources();
    
private:

    System::SharedPtr<XImageCollection> images;
    System::SharedPtr<Text::FontCollection> fonts;
    System::SharedPtr<XFormCollection> xforms;
    bool _fontsInitialized;
    bool _imagesInitialized;
    bool _xformsInitialized;
    System::SharedPtr<System::Object> _sync1;
    System::SharedPtr<System::Object> _sync2;
    System::SharedPtr<System::Object> _sync3;
    static const int32_t FALSE;
    static const int32_t TRUE;
    static const int32_t UNKNOWN;
    int32_t _IsCommonResource;
    System::WeakPtr<Aspose::Pdf::Document> _document;
    System::SharedPtr<Engine::Data::IPdfObject> _source;
    
    Resources(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<Engine::Data::IPdfDictionary> resources);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Resources, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<Engine::Data::IPdfDictionary> resources));
    static System::SharedPtr<Engine::Data::IPdfPrimitive> CreateResourcesFor(System::SharedPtr<XForm> xForm);
    
};

} // namespace Pdf
} // namespace Aspose


