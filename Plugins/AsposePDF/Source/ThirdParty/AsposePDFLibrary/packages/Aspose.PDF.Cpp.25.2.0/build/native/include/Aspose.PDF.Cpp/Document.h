#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if DEBUG

// C# INACTIVE CODE:
// using Aspose.Pdf.Diagnostics;

// C# preprocessor directive: #endif


// C# preprocessor directive: #if !NETCORE


// C# preprocessor directive: #endif


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif


// C# preprocessor directive: #if !CPLUSPLUS && !NET40

// C# INACTIVE CODE:
// using System.Threading.Tasks;
// using Aspose.Html.IO;
// using Aspose.Pcl.Parser;
// using Aspose.Pdf.Engine.IO.ConvertStrategies.ConvertHelpers;

// C# preprocessor directive: #endif


#include <system/reflection/assembly_type_registration.h>
#include <system/nullable.h>
#include <system/multicast_delegate.h>
#include <system/idisposable.h>
#include <system/guid.h>
#include <system/event.h>
#include <system/enum_helpers.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Text/TextOptions/TextEditOptions.h"
#include "Aspose.PDF.Cpp/Security/CryptoAlgorithm.h"
#include "Aspose.PDF.Cpp/Optimization/OptimizationOptions.h"
#include "Aspose.PDF.Cpp/License/IVentureLicenseTarget.h"
#include "Aspose.PDF.Cpp/ISupportsMemoryCleanup.h"
#include "Aspose.PDF.Cpp/IO/ConvertStrategies/PdfFormat.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/Form.h"
#include "Aspose.PDF.Cpp/HtmlSaveOptions.h"
#include "Aspose.PDF.Cpp/CommonData/Text/Fonts/FontSubstitutions/IFontSubstitutionRegistrator.h"
#include "Aspose.PDF.Cpp/CommonData/IDocumentSecondaryStrategies.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pcl
{
namespace Parser
{
class PCLParser;
} // namespace Parser
} // namespace Pcl
namespace Pdf
{
namespace Annotations
{
class Annotation;
class AnnotationCollection;
class DocumentActionCollection;
class FdfReader;
class FitRExplicitDestination;
class GoToAction;
class IAppointment;
class LaunchAction;
class MarkupAnnotation;
class NamedDestination;
class PDF3DAnnotation;
class PDF3DArtwork;
class PDF3DCrossSection;
class PDF3DCrossSectionArray;
class PDF3DStream;
class PDF3DView;
class PDF3DViewArray;
class RedactionAnnotation;
class WidgetAnnotation;
class XYZExplicitDestination;
} // namespace Annotations
class ApsFragment;
class ApsFragmentCollection;
class ApsPageFilter;
class ApsToPdfConverter;
class ApsUsingConverter;
class Artifact;
class ArtifactCollection;
class Collection;
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
class Color;
enum class ContentDisposition;
class ConversionPipeline;
enum class ConvertErrorAction;
enum class ConvertTransparencyAction;
class Copier;
namespace DataEditor
{
class CosPdfDictionary;
class DictionaryEditor;
} // namespace DataEditor
class DestinationCollection;
namespace Devices
{
class DocumentDevice;
class ImageGenerator;
} // namespace Devices
enum class Direction;
class DocConverter;
class DocOutOfMemoryHandler;
class Document;
class DocumentExtensions;
class DocumentFactory;
class DocumentInfo;
namespace Drawing
{
class Shape;
} // namespace Drawing
class EmbeddedFileCollection;
namespace Engine
{
namespace Addressing
{
class IRegistrar;
} // namespace Addressing
namespace CommonData
{
class IDocumentSecondaryStrategiesDefaults;
namespace PageContent
{
class IResourceDictionary;
class ResourceDictionary;
} // namespace PageContent
namespace Text
{
namespace Encoding
{
namespace PdfFontEncoding
{
class CIDFontEncodingBase;
class SimpleFontEncodingBase;
enum class SimpleFontEncodingRules : uint8_t;
class SimpleFontEncodingStrategy;
} // namespace PdfFontEncoding
} // namespace Encoding
namespace Fonts
{
class CIDFont;
class FontFactory;
class IPdfFontDescriptor;
class PdfFont;
namespace Utilities
{
class DocumentCIDType2FontContentUpdater;
class DocumentFontsIterator;
class DocumentFontsSubsetter;
class DocumentFontsUnembedder;
template <typename> class FontsRemover;
class IDocumentFontSaveOptions;
class XObjectsProcessor;
} // namespace Utilities
} // namespace Fonts
namespace Segmenting
{
class PhysicalTextSegment;
class TextSegmentBuilder;
class TextSegmenter;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfArray;
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
class ITrailerable;
namespace Types
{
class IPdfStreamAccessor;
} // namespace Types
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
namespace ConvertHelpers
{
class DocumentMetadataProviderBase;
class FontSharedObjectsUpdateManager;
class FontUtils;
class LowLevelFontSubstitutor;
} // namespace ConvertHelpers
namespace GlyphWidths
{
class TrueTypeGlyphWidthsProcessor;
} // namespace GlyphWidths
class PdfA1ConvertStrategy;
class PdfA3ConvertStrategy;
class PdfA4ConvertStrategy;
class PdfAConvertStrategyBase;
class PdfConvertStrategy;
class PdfUaConvertStrategy;
class PdfXConvertStrategy;
namespace PdfXHelpers
{
class PdfX4FormatIdentifierProvider;
} // namespace PdfXHelpers
class TaggedPdfConvertStrategy;
class TransparentContentRemoval;
class VersionConvertStrategy;
} // namespace ConvertStrategies
namespace SaveStrategies
{
class SimpleSaveStrategy;
} // namespace SaveStrategies
} // namespace IO
class IPdfDocument;
class PdfDocument;
namespace Presentation
{
namespace APSImpl
{
class APSPresenter;
} // namespace APSImpl
namespace IndependentImpl
{
namespace ColorInitializerStrategies
{
class RgbColorConversionStrategy;
} // namespace ColorInitializerStrategies
} // namespace IndependentImpl
} // namespace Presentation
} // namespace Engine
class EpubConverter;
namespace Facades
{
class DocumentPrivilege;
class Form;
class FormEditor;
class LogicalStructureConcatenation;
class LogicalStructureCopier;
class PdfAnnotationEditor;
class PdfContentEditor;
class PdfConverter;
class PdfExtractor;
class PdfFileEditor;
class PdfFileInfo;
class PdfFileMend;
class PdfFileSignature;
class PdfFileStamp;
class PdfJavaScriptStripper;
class PdfPageEditor;
class PdfXmpMetadata;
} // namespace Facades
enum class Fixup;
class FlowToTableAbsorber;
enum class FontSubsetStrategy : uint8_t;
class FormattedFragment;
namespace Forms
{
class ButtonField;
class CheckboxField;
class ComboBoxField;
class Field;
class Form;
class ListBoxField;
class RadioButtonField;
class RadioButtonOptionField;
class RichTextBoxField;
class SignatureField;
class TextBoxField;
class XFA;
} // namespace Forms
class HeaderFooter;
class HtmlConverter;
class Id;
class ImagePlacement;
class ImagePlacementAbsorber;
class ImageStamp;
namespace Interchange
{
class DocumentInterchange;
namespace Helpers
{
class MetadataHelper;
} // namespace Helpers
} // namespace Interchange
class JavaScriptCollection;
class Layer;
namespace LicenseManagement
{
class VentureLicense;
} // namespace LicenseManagement
class LoadOptions;
class Metadata;
class MobiXmlConverter;
class NamedDestinationCollection;
class Operator;
namespace Optimization
{
class BrokenObjectReferencesScanner;
class ImageCompressor2;
class ResourceOptimizer;
class UnusedObjectsScanner;
} // namespace Optimization
class OutlineCollection;
class OutputIntents;
class Page;
class PageCollection;
class PageInfo;
class PageLabelCollection;
enum class PageLayout;
enum class PageMode;
namespace PageModel
{
class AnnotationElement;
class GraphicElement;
class ImageElement;
class TextElement;
} // namespace PageModel
class PageTreeBalancer;
class Paragraphs;
class PclConverter;
class PdfFormatConversionOptions;
class PdfPageStamp;
class PdfToApsConverter;
class PdfToXmlSerializer;
enum class PdfVersion;
enum class Permissions;
class PptxExporter;
enum class PrintDuplex;
enum class PrintScaling;
class PsConverter;
class Resources;
enum class SaveFormat;
class SaveOptions;
class Stamp;
namespace Structure
{
class RootElement;
} // namespace Structure
class SvgConverter;
namespace Tagged
{
class ITaggedContent;
class TaggedContent;
class TaggedContext;
} // namespace Tagged
namespace Tests
{
namespace Annotations
{
class PdfActionTests;
} // namespace Annotations
namespace Collections
{
class OperatorCollectionTests;
} // namespace Collections
namespace Engine
{
namespace CommonData
{
namespace PageContent
{
namespace Operators
{
class CommonOperationTests;
} // namespace Operators
} // namespace PageContent
namespace Text
{
namespace Fonts
{
class FontSubstitutionRegistratorTests;
} // namespace Fonts
} // namespace Text
} // namespace CommonData
namespace IO
{
class PdfAConvertTests;
class PdfUaConvertTests;
class PdfUaGenerateTests;
class PdfXConvertTests;
class VersionsTests;
} // namespace IO
} // namespace Engine
namespace Facades
{
class DocumentTest;
class PdfFileEditorTests;
class PdfFileSecurityTests;
} // namespace Facades
namespace Layers
{
class LayersTests;
} // namespace Layers
namespace Lic
{
class MeteredPluginsTests;
} // namespace Lic
class MergePagesTests;
namespace OriginalKit
{
namespace New
{
class FunctionalTests_v4_8;
class RegressionTests_v4_4;
class RegressionTests_v4_5;
} // namespace New
} // namespace OriginalKit
class PageTreeBalancerTests;
class PdfFile_2_0Test;
namespace PDFUA
{
class PDFUA_CreatingTests;
} // namespace PDFUA
namespace Plugins
{
class FormEditorTests;
class PdfFormTests;
} // namespace Plugins
class RegressionTests_v10_0;
class RegressionTests_v10_2;
class RegressionTests_v10_3;
class RegressionTests_v10_4;
class RegressionTests_v10_5;
class RegressionTests_v10_8;
class RegressionTests_v10_9;
class RegressionTests_v11_1;
class RegressionTests_v11_4;
class RegressionTests_v11_5;
class RegressionTests_v11_6;
class RegressionTests_v11_7;
class RegressionTests_v11_8;
class RegressionTests_v11_9;
class RegressionTests_v16_11;
class RegressionTests_v16_12;
class RegressionTests_v17_10;
class RegressionTests_v17_11;
class RegressionTests_v17_12;
class RegressionTests_v17_2;
class RegressionTests_v17_4;
class RegressionTests_v17_9;
class RegressionTests_v18_11;
class RegressionTests_v18_2;
class RegressionTests_v18_3;
class RegressionTests_v18_5;
class RegressionTests_v18_7;
class RegressionTests_v18_9;
class RegressionTests_v19_1;
class RegressionTests_v19_10;
class RegressionTests_v19_12;
class RegressionTests_v19_2;
class RegressionTests_v19_4;
class RegressionTests_v19_5;
class RegressionTests_v19_6;
class RegressionTests_v19_7;
class RegressionTests_v19_8;
class RegressionTests_v19_9;
class RegressionTests_v20_01;
class RegressionTests_v20_04;
class RegressionTests_v20_05;
class RegressionTests_v20_06;
class RegressionTests_v20_07;
class RegressionTests_v20_08;
class RegressionTests_v20_10;
class RegressionTests_v20_11;
class RegressionTests_v21_2;
class RegressionTests_v21_7;
class RegressionTests_v21_8;
class RegressionTests_v22_07;
class RegressionTests_v22_08;
class RegressionTests_v22_11;
class RegressionTests_v23_07;
class RegressionTests_v23_08;
class RegressionTests_v23_09;
class RegressionTests_v23_10;
class RegressionTests_v23_11;
class RegressionTests_v23_12;
class RegressionTests_v24_02;
class RegressionTests_v24_06;
class RegressionTests_v24_08;
class RegressionTests_v24_09;
class RegressionTests_v24_12;
class RegressionTests_v6_1;
class RegressionTests_v6_7;
class RegressionTests_v6_8;
class RegressionTests_v6_9;
class RegressionTests_v7_0;
class RegressionTests_v7_1;
class RegressionTests_v7_2;
class RegressionTests_v7_3;
class RegressionTests_v7_4;
class RegressionTests_v7_5;
class RegressionTests_v7_6;
class RegressionTests_v7_7;
class RegressionTests_v7_8;
class RegressionTests_v8_1;
class RegressionTests_v8_3;
class RegressionTests_v8_4;
class RegressionTests_v8_5;
class RegressionTests_v8_6;
class RegressionTests_v8_7;
class RegressionTests_v8_8;
class RegressionTests_v8_9;
class RegressionTests_v9_0;
class RegressionTests_v9_1;
class RegressionTests_v9_2;
class RegressionTests_v9_3;
class RegressionTests_v9_4;
class RegressionTests_v9_5;
class RegressionTests_v9_6;
class RegressionTests_v9_8;
class RegressionTests_v9_9;
class TestBase;
namespace Text
{
class TextFragmentAbsorberTests;
class TextFragmentTests;
class TextSegmentTests;
} // namespace Text
namespace Utils
{
class DocumentComparer;
} // namespace Utils
class XfaRendererTests;
} // namespace Tests
class TeXConverter;
namespace Text
{
class Font;
class FontAbsorber;
class IFontSubstitutionRegistrator;
class TextAbsorber;
class TextFragmentAbsorber;
} // namespace Text
class TextBoxFieldXfa;
class TeXToPdfConverter;
class TextStamp;
class UnifiedSaveOptions;
enum class UsageMode;
namespace Vector
{
namespace Extraction
{
class ApsSvgRenderer;
} // namespace Extraction
} // namespace Vector
class XfaMerge;
class XForm;
class XFormCollection;
class XImage;
class XpsConverter;
} // namespace Pdf
namespace Rendering
{
class ApsPage;
} // namespace Rendering
namespace src
{
class TreeNamedDestinations;
} // namespace src
} // namespace Aspose
namespace Documentize
{
namespace Tests
{
class MeteredPluginsTests;
class SignatureTests;
} // namespace Tests
} // namespace Documentize
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename, typename> class IDictionary;
template <typename> class IEnumerable;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Image;
class RectangleF;
} // namespace Drawing
namespace IO
{
class MemoryStream;
class Stream;
} // namespace IO
namespace Web
{
class HttpResponse;
} // namespace Web
namespace Xml
{
class XmlReaderSettings;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf</b> is a root namespace for all classes of Aspose.Pdf library which are either directly in it like <b>Document</b> or indirectly through several subnamespaces.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
/// Class representing PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Document final : public System::IDisposable, public Aspose::Pdf::ISupportsMemoryCleanup, public Aspose::Pdf::LicenseManagement::IVentureLicenseTarget
{
    typedef Document ThisType;
    typedef System::IDisposable BaseType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType1;
    typedef Aspose::Pdf::LicenseManagement::IVentureLicenseTarget BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    ASSEMBLY_TYPE_DECL();
    
    friend class Aspose::Pdf::UnifiedSaveOptions;
    friend class Aspose::Pdf::PdfToXmlSerializer;
    friend class Aspose::Pdf::ApsFragment;
    friend class Aspose::Pdf::ApsFragmentCollection;
    friend class Aspose::Pdf::ApsFragmentCollection;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::FontFactory;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsIterator;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubsetter;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsUnembedder;
    template<typename FT0> friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontsRemover;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::XObjectsProcessor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::DocumentFactory;
    friend class Aspose::Pdf::FormattedFragment;
    friend class Aspose::Pdf::Interchange::DocumentInterchange;
    friend class Aspose::Pdf::Interchange::Helpers::MetadataHelper;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::NamedDestinationCollection;
    friend class Aspose::Pdf::Optimization::ImageCompressor2;
    friend class Aspose::Pdf::Optimization::ResourceOptimizer;
    friend class Aspose::Pdf::Optimization::UnusedObjectsScanner;
    friend class Aspose::Pdf::PdfToApsConverter;
    friend class Aspose::Pdf::ApsPageFilter;
    friend class Aspose::Pdf::Engine::Presentation::IndependentImpl::ColorInitializerStrategies::RgbColorConversionStrategy;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::PDF3DArtwork;
    friend class Aspose::Pdf::Annotations::PDF3DCrossSectionArray;
    friend class Aspose::Pdf::Annotations::PDF3DStream;
    friend class Aspose::Pdf::Annotations::PDF3DView;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    friend class Aspose::Pdf::Annotations::PDF3DCrossSection;
    friend class Aspose::Pdf::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::Annotations::MarkupAnnotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FontUtils;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FontSharedObjectsUpdateManager;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::GlyphWidths::TrueTypeGlyphWidthsProcessor;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::PageModel::AnnotationElement;
    friend class Aspose::Pdf::PageModel::GraphicElement;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::Facades::LogicalStructureConcatenation;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::ResourceDictionary;
    friend class Aspose::Pdf::Engine::CommonData::Text::Encoding::PdfFontEncoding::CIDFontEncodingBase;
    friend class Aspose::Pdf::Engine::CommonData::Text::Encoding::PdfFontEncoding::SimpleFontEncodingBase;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::CIDFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::PdfFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TaggedPdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::VersionConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::SaveStrategies::SimpleSaveStrategy;
    friend class Aspose::Pdf::Engine::PdfDocument;
    friend class Aspose::Pdf::Engine::Presentation::APSImpl::APSPresenter;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::HeaderFooter;
    friend class Aspose::Pdf::MobiXmlConverter;
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::DestinationCollection;
    friend class Aspose::Pdf::DestinationCollection;
    friend class Aspose::Pdf::HtmlConverter;
    friend class Aspose::Pdf::Text::FontAbsorber;
    friend class Aspose::src::TreeNamedDestinations;
    friend class Aspose::Pdf::Devices::ImageGenerator;
    friend class Aspose::Pdf::DocumentExtensions;
    friend class Aspose::Pdf::DocumentInfo;
    friend class Aspose::Pdf::EmbeddedFileCollection;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfAnnotationEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfConverter;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfFileInfo;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Facades::PdfFileStamp;
    friend class Aspose::Pdf::Facades::PdfJavaScriptStripper;
    friend class Aspose::Pdf::Facades::PdfPageEditor;
    friend class Aspose::Pdf::Facades::PdfXmpMetadata;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Stamp;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Annotations::DocumentActionCollection;
    friend class Aspose::Pdf::Forms::XFA;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Forms::RichTextBoxField;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Annotations::GoToAction;
    friend class Aspose::Pdf::Annotations::LaunchAction;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::PdfPageStamp;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacement;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Text::TextAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::TextBoxFieldXfa;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::XImage;
    friend class Aspose::Pdf::DocOutOfMemoryHandler;
    friend class Aspose::Pdf::DocConverter;
    friend class Aspose::Pdf::Annotations::NamedDestination;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::XpsConverter;
    friend class Aspose::Pdf::XfaMerge;
    friend class Aspose::Pdf::TeXConverter;
    friend class Aspose::Pdf::TeXToPdfConverter;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::EpubConverter;
    friend class Aspose::Pdf::PclConverter;
    friend class Aspose::Pdf::SvgConverter;
    friend class Aspose::Pdf::PptxExporter;
    friend class Aspose::Pdf::PsConverter;
    friend class Aspose::Pdf::OutputIntents;
    friend class Aspose::Pdf::Facades::LogicalStructureCopier;
    friend class Aspose::Pdf::PageTreeBalancer;
    friend class Aspose::Pdf::Annotations::FdfReader;
    friend class Aspose::Pdf::Vector::Extraction::ApsSvgRenderer;
    friend class Aspose::Pdf::Layer;
    friend class Aspose::Pdf::Optimization::BrokenObjectReferencesScanner;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA1ConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA3ConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA4ConvertStrategy;
    friend class Aspose::Pdf::DataEditor::DictionaryEditor;
    friend class Aspose::Pdf::DataEditor::CosPdfDictionary;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::DocumentMetadataProviderBase;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXHelpers::PdfX4FormatIdentifierProvider;
    friend class Aspose::Pdf::FlowToTableAbsorber;
    friend class Aspose::Pdf::Tests::TestBase;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::Text::TextSegmentTests;
    friend class Aspose::Pdf::Tests::Text::TextFragmentAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextFragmentTests;
    friend class Aspose::Pdf::Tests::Engine::IO::VersionsTests;
    friend class Aspose::Pdf::Tests::Facades::DocumentTest;
    friend class Aspose::Pdf::Tests::Facades::PdfFileEditorTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfAConvertTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfXConvertTests;
    friend class Aspose::Pdf::Tests::OriginalKit::New::FunctionalTests_v4_8;
    friend class Aspose::Pdf::Tests::OriginalKit::New::RegressionTests_v4_4;
    friend class Aspose::Pdf::Tests::OriginalKit::New::RegressionTests_v4_5;
    friend class Aspose::Pdf::Tests::XfaRendererTests;
    friend class Aspose::Pdf::Tests::Engine::CommonData::PageContent::Operators::CommonOperationTests;
    friend class Aspose::Pdf::Tests::Annotations::PdfActionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_08;
    friend class Aspose::Pdf::Tests::Engine::CommonData::Text::Fonts::FontSubstitutionRegistratorTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfUaConvertTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfUaGenerateTests;
    friend class Aspose::Pdf::Tests::PDFUA::PDFUA_CreatingTests;
    friend class Aspose::Pdf::Tests::Utils::DocumentComparer;
    friend class Documentize::Tests::MeteredPluginsTests;
    friend class Documentize::Tests::SignatureTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_01;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_04;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_05;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_06;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_08;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_08;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_09;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_02;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_06;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_08;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_09;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_12;
    friend class Aspose::Pdf::Tests::Facades::PdfFileSecurityTests;
    friend class Aspose::Pdf::Tests::PdfFile_2_0Test;
    friend class Aspose::Pdf::Tests::Plugins::PdfFormTests;
    friend class Aspose::Pdf::Tests::Lic::MeteredPluginsTests;
    friend class Aspose::Pdf::Tests::MergePagesTests;
    friend class Aspose::Pdf::Tests::PageTreeBalancerTests;
    friend class Aspose::Pdf::Tests::Plugins::FormEditorTests;
    friend class Aspose::Pdf::Tests::Layers::LayersTests;
    
public:

    /// <summary>
    /// Represents the method that will handle FontSubstitution event.
    /// </summary>
    /// <param name="oldFont">original font</param>
    /// <param name="newFont">new font</param>
    using FontSubstitutionHandler = System::MulticastDelegate<void(System::SharedPtr<Text::Font>, System::SharedPtr<Text::Font>)>;
    /// <summary>
    /// The call back procedure for hocr recognize.
    /// </summary>
    using CallBackGetHocr = System::MulticastDelegate<System::String(System::SharedPtr<System::Drawing::Image>)>;
    /// <summary>
    /// The call back procedure for hocr recognize.
    /// </summary>
    using CallBackGetHocrWithPage = System::MulticastDelegate<System::String(System::SharedPtr<System::Drawing::Image>, System::SharedPtr<Page>)>;
    
public:

    /// <summary>
    /// Holds functionality to tune fonts
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS IDocumentFontUtilities : public virtual System::Object
    {
        typedef IDocumentFontUtilities ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Subsets all fonts in document
        /// </summary>
        /// <param name="subsetStrategy">strategy</param>
        virtual void SubsetFonts(FontSubsetStrategy subsetStrategy) = 0;
        /// <summary>
        /// Returns all fonts from document
        /// </summary>
        /// <returns>fonts</returns>
        virtual System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Text::Font>> GetAllFonts() = 0;
        
    };
    
    /// @deprecated This class is obsolete. Please use Aspose.Pdf.Optimization.OptimizationOptions instead.
    /// <summary>
    /// Class which describes document optimization algorithm.
    /// Instance of this class may be used as parameter of OptimizeResources() method.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS OptimizationOptions : public Aspose::Pdf::Optimization::OptimizationOptions
    {
        typedef OptimizationOptions ThisType;
        typedef Aspose::Pdf::Optimization::OptimizationOptions BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates optimization strategy will all options activated.
        /// </summary>
        /// <returns>OptimizationOptions object.</returns>
        static ASPOSE_PDF_SHARED_API System::SharedPtr<Document::OptimizationOptions> All();
        
    };
    
    /// <summary>
    /// Represents the options to Merge methods.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS MergeOptions : public System::Object
    {
        typedef MergeOptions ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets and sets the maximum nodes in pages tree level.
        /// Default is 10.
        /// </summary>
        ASPOSE_PDF_SHARED_API uint8_t get_MaximumNodesInLevel() const;
        /// <summary>
        /// Gets and sets the maximum nodes in pages tree level.
        /// Default is 10.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_MaximumNodesInLevel(uint8_t value);
        /// <summary>
        /// Gets and sets the requirement for page tree balancing
        /// The entire page tree in the resulting document will be rebalanced.
        /// It creates balanced pages tree to speed up pages access.
        /// </summary>
        ASPOSE_PDF_SHARED_API bool get_IsNeedPageTreeBalance() const;
        /// <summary>
        /// Gets and sets the requirement for page tree balancing
        /// The entire page tree in the resulting document will be rebalanced.
        /// It creates balanced pages tree to speed up pages access.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_IsNeedPageTreeBalance(bool value);
        
        ASPOSE_PDF_SHARED_API MergeOptions();
        
    private:
    
        uint8_t _maximumNodesInLevel;
        bool _isNeedPageTreeBalance;
        
    };
    
    /// <summary>
    /// Represents options for repairing a PDF document.
    /// </summary>
    /// <remarks>
    /// This class provides a way to customize the repair process of a PDF document. 
    /// </remarks>
    class ASPOSE_PDF_SHARED_CLASS RepairOptions final : public System::Object
    {
        typedef RepairOptions ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets a value indicating whether to restore wrong generation numbers in references to indirect objects
        /// during the repair process.
        /// </summary>
        ASPOSE_PDF_SHARED_API bool get_RestoreIndirectObjectGenerations() const;
        /// <summary>
        /// Sets a value indicating whether to restore wrong generation numbers in references to indirect objects
        /// during the repair process.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_RestoreIndirectObjectGenerations(bool value);
        
        ASPOSE_PDF_SHARED_API RepairOptions();
        
    private:
    
        bool pr_RestoreIndirectObjectGenerations;
        
    };
    
    
protected:

    template<typename T>
    class CutByRestrictionWrapper : public System::Object
    {
        typedef CutByRestrictionWrapper<T> ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
        
        friend class Aspose::Pdf::Document;
        
    public:
    
        static void CutByRestriction(System::SharedPtr<Document> doc, System::SharedPtr<System::Collections::Generic::IList<T>> list)
        {
            if (!get__IsLicensed() && !doc->get__IsObjectLicensed() && !get_Indivisible() && !list->get_IsReadOnly())
            {
                while (list->get_Count() > 4)
                {
                    list->RemoveAt(list->get_Count() - 1);
                }
            }
        }
        
        void SetTemplateWeakPtr(uint32_t argument) override
        {
            switch (argument)
            {
                case 0:
                    break;
                    
            }
        }
        
    };
    
    
private:

    class FontSubstitutionCallback : public Aspose::Pdf::Text::IFontSubstitutionCallback
    {
        typedef FontSubstitutionCallback ThisType;
        typedef Aspose::Pdf::Text::IFontSubstitutionCallback BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        bool get_NotifyAboutFontSubstitutions() override;
        System::SharedPtr<Engine::Addressing::IRegistrar> get_Registrar() override;
        
        FontSubstitutionCallback(System::SharedPtr<Document> owner);
        
        void NotifyAboutSubstitution(System::SharedPtr<Text::Font> oldFont, System::SharedPtr<Text::Font> newFont) override;
        
    private:
    
        System::WeakPtr<Document> _owner;
        
    };
    
    class DocumentFontUtilities : public Aspose::Pdf::Document::IDocumentFontUtilities
    {
        typedef DocumentFontUtilities ThisType;
        typedef Aspose::Pdf::Document::IDocumentFontUtilities BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        DocumentFontUtilities(System::SharedPtr<Document> doc);
        
        /// <summary>
        /// Subsets all fonts in document
        /// </summary>
        void SubsetFonts(FontSubsetStrategy subsetStrategy) override;
        /// <summary>
        /// Returns all fonts from document
        /// </summary>
        /// <returns>fonts</returns>
        System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Text::Font>> GetAllFonts() override;
        
    private:
    
        System::WeakPtr<Document> _doc;
        
    };
    
    class SecondaryStrategies : public Aspose::Pdf::Engine::CommonData::IDocumentSecondaryStrategies
    {
        typedef SecondaryStrategies ThisType;
        typedef Aspose::Pdf::Engine::CommonData::IDocumentSecondaryStrategies BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        Engine::CommonData::Text::Encoding::PdfFontEncoding::SimpleFontEncodingRules get_SimpleFontEncodingRule() override;
        void set_SimpleFontEncodingRule(Engine::CommonData::Text::Encoding::PdfFontEncoding::SimpleFontEncodingRules value);
        
        SecondaryStrategies();
        
    private:
    
        System::SharedPtr<Engine::CommonData::IDocumentSecondaryStrategiesDefaults> _strategiesDefaults;
        System::SharedPtr<Engine::CommonData::Text::Encoding::PdfFontEncoding::SimpleFontEncodingStrategy> _simpleFontEncodingStrategy;
        
    };
    
    
public:

    static const ASPOSE_PDF_SHARED_API uint8_t DefaultNodesNumInSubtrees;
    
    /// <summary>
    /// Collection of JavaScript of document level.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<JavaScriptCollection> get_JavaScript();
    /// <summary>
    /// Gets the collection of Output intents in the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::OutputIntents> get_OutputIntents();
    /// <summary>
    /// Gets licensed state of the system. Returns true is system works in licensed mode and false otherwise. 
    /// </summary>
    static ASPOSE_PDF_SHARED_API bool get_IsLicensed();
    /// <summary>
    /// Gets the page info.(for generator only, not filled in when reading document)
    /// </summary>
    /// <value>The page info.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::PageInfo> get_PageInfo();
    /// <summary>
    /// Sets the page info.(for generator only, not filled in when reading document)
    /// </summary>
    /// <value>The page info.</value>
    ASPOSE_PDF_SHARED_API void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    /// <summary>
    /// Gets flag to manage signature fields sanitization. Enabled by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_EnableSignatureSanitization() const;
    /// <summary>
    /// Sets flag to manage signature fields sanitization. Enabled by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EnableSignatureSanitization(bool value);
    /// <summary>
    /// Gets the is document pdfa compliant.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsPdfaCompliant();
    /// <summary>
    /// Gets the is document pdfua compliant.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsPdfUaCompliant();
    /// <summary>
    /// Gets  the is document pdfa compliant.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsXrefGapsAllowed();
    /// <summary>
    /// Sets  the is document pdfa compliant.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsXrefGapsAllowed(bool value);
    /// <summary>
    /// Collection of Named Destination in the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<NamedDestinationCollection> get_NamedDestinations();
    /// <summary>
    /// Gets the collection of destinations.
    /// Obsolete. Please use NamedDestinations.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<DestinationCollection> get_Destinations();
    /// <summary>
    /// Gets PDF format
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::PdfFormat get_PdfFormat();
    /// <summary>
    /// Property which declares that document must embed all standard Type1 fonts 
    /// which  has flag IsEmbedded set into true. All PDF fonts can be embedded 
    /// into document simply via setting of flag IsEmbedded into true, but PDF standard Type1 fonts is an exception from this rule.
    /// Standard Type1 font embedding requires much time, so to embed these fonts it's necessary
    /// not only set flag IsEmbedded into true for specified font but also set 
    /// an additiona flag on document's level - EmbedStandardFonts = true;
    /// This property can be set only one time for all fonts.
    /// By default false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_EmbedStandardFonts() const;
    /// <summary>
    /// Property which declares that document must embed all standard Type1 fonts 
    /// which  has flag IsEmbedded set into true. All PDF fonts can be embedded 
    /// into document simply via setting of flag IsEmbedded into true, but PDF standard Type1 fonts is an exception from this rule.
    /// Standard Type1 font embedding requires much time, so to embed these fonts it's necessary
    /// not only set flag IsEmbedded into true for specified font but also set 
    /// an additiona flag on document's level - EmbedStandardFonts = true;
    /// This property can be set only one time for all fonts.
    /// By default false.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EmbedStandardFonts(bool value);
    /// <summary>
    /// Many operations with font can't be executed if these operations are prohibited by license of this font. 
    /// For example some font can't be embedded into PDF document if license rules disable embedding for this font. 
    /// This flag is used to disable any license restrictions for all fonts in current PDF document.
    /// Be careful when using this flag. When it is set it means that person who sets this flag, 
    /// takes all responsibility of possible license/law violations on himself. 
    /// So He takes it on it's own risk. 
    /// It's strongly recommended to use this flag only when you are fully confident that you are not breaking 
    /// the copyright law. 
    /// By default false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_DisableFontLicenseVerifications() const;
    /// <summary>
    /// Many operations with font can't be executed if these operations are prohibited by license of this font. 
    /// For example some font can't be embedded into PDF document if license rules disable embedding for this font. 
    /// This flag is used to disable any license restrictions for all fonts in current PDF document.
    /// Be careful when using this flag. When it is set it means that person who sets this flag, 
    /// takes all responsibility of possible license/law violations on himself. 
    /// So He takes it on it's own risk. 
    /// It's strongly recommended to use this flag only when you are fully confident that you are not breaking 
    /// the copyright law. 
    /// By default false.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DisableFontLicenseVerifications(bool value);
    /// <summary>
    /// IDocumentFontUtilities instance
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document::IDocumentFontUtilities> get_FontUtilities();
    /// <summary>
    /// Gets collection of document. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Collection> get_Collection();
    /// <summary>
    /// Gets collection of document. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Collection(System::SharedPtr<Aspose::Pdf::Collection> value);
    /// <summary>
    /// Gets a version of Pdf from Pdf file header.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Version();
    /// <summary>
    /// Gets action performed at document opening. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotations::IAppointment> get_OpenAction();
    /// <summary>
    /// Sets action performed at document opening. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_OpenAction(System::SharedPtr<Annotations::IAppointment> value);
    /// <summary>
    /// Gets flag specifying whether toolbar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool get_HideToolBar();
    /// <summary>
    /// Sets flag specifying whether toolbar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_HideToolBar(bool value);
    /// <summary>
    /// Gets flag specifying whether menu bar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool get_HideMenubar();
    /// <summary>
    /// Sets flag specifying whether menu bar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_HideMenubar(bool value);
    /// <summary>
    /// Gets flag specifying whether user interface elements should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool get_HideWindowUI();
    /// <summary>
    /// Sets flag specifying whether user interface elements should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_HideWindowUI(bool value);
    /// <summary>
    /// Gets flag specifying whether document window must be resized to fit the first displayed page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool get_FitWindow();
    /// <summary>
    /// Sets flag specifying whether document window must be resized to fit the first displayed page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_FitWindow(bool value);
    /// <summary>
    /// Gets flag specifying whether position of the document's window will be centerd on the screen.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool get_CenterWindow();
    /// <summary>
    /// Sets flag specifying whether position of the document's window will be centerd on the screen.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_CenterWindow(bool value);
    /// <summary>
    /// Gets flag specifying whether document's window title bar should display document title.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool get_DisplayDocTitle();
    /// <summary>
    /// Sets flag specifying whether document's window title bar should display document title.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_DisplayDocTitle(bool value);
    /// <summary>
    /// Gets collection of document pages.
    /// Note that pages are numbered from 1 in collection.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PageCollection> get_Pages();
    /// <summary>
    /// Gets document outlines.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OutlineCollection> get_Outlines();
    /// <summary>
    /// Gets document actions. This property is instance of DocumentActions class which allows to get/set BeforClosing, BeforSaving, etc. actions. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotations::DocumentActionCollection> get_Actions();
    /// <summary>
    /// Gets Acro Form of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Forms::Form> get_Form();
    /// <summary>
    /// Gets collection of files embedded to document. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<EmbeddedFileCollection> get_EmbeddedFiles();
    /// <summary>
    /// Gets reading order of text: L2R (left to right) or R2L (right to left).
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Direction get_Direction();
    /// <summary>
    /// Sets reading order of text: L2R (left to right) or R2L (right to left).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Direction(Aspose::Pdf::Direction value);
    /// <summary>
    /// Gets page mode, specifying how document should be displayed when opened. 
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::PageMode get_PageMode();
    /// <summary>
    /// Sets page mode, specifying how document should be displayed when opened. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageMode(Aspose::Pdf::PageMode value);
    /// <summary>
    /// Gets page mode, specifying how to display the document on exiting full-screen mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::PageMode get_NonFullScreenPageMode();
    /// <summary>
    /// Sets page mode, specifying how to display the document on exiting full-screen mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NonFullScreenPageMode(Aspose::Pdf::PageMode value);
    /// <summary>
    /// Gets page layout which shall be used when the document is opened.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::PageLayout get_PageLayout();
    /// <summary>
    /// Sets page layout which shall be used when the document is opened.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageLayout(Aspose::Pdf::PageLayout value);
    /// <summary>
    /// Gets print duplex mode handling option to use when printing the file from the print dialog.
    /// </summary>
    ASPOSE_PDF_SHARED_API PrintDuplex get_Duplex();
    /// <summary>
    /// Sets print duplex mode handling option to use when printing the file from the print dialog.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Duplex(PrintDuplex value);
    /// <summary>
    /// Gets the page scaling option that shall be selected when a print dialog is displayed for this document.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::PrintScaling get_PrintScaling();
    /// <summary>
    /// Sets the page scaling option that shall be selected when a print dialog is displayed for this document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PrintScaling(Aspose::Pdf::PrintScaling value);
    /// <summary>
    /// Gets a flag specifying whether the PDF page size shall be used to select the input paper tray.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_PickTrayByPdfSize();
    /// <summary>
    /// Sets a flag specifying whether the PDF page size shall be used to select the input paper tray.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PickTrayByPdfSize(bool value);
    /// <summary>
    /// Name of the PDF file that caused this document
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FileName();
    /// <summary>
    /// Gets document info.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentInfo> get_Info();
    /// <summary>
    /// Document metadata.
    /// (A PDF document may include general information,
    ///  such as the document's title, author, and creation and modification dates.
    ///  Such global information about the document (as opposed to its content or structure) is called metadata
    ///  and is intended to assist in cataloguing and searching for documents in external databases.)
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Metadata> get_Metadata();
    /// <summary>
    /// Gets logical structure of the document. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Structure::RootElement> get_LogicalStructure();
    /// <summary>
    /// Throw Exception if the document will save with changes and have signature
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_HandleSignatureChange() const;
    /// <summary>
    /// Throw Exception if the document will save with changes and have signature
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HandleSignatureChange(bool value);
    /// <summary>
    /// Gets security settings if document is encrypted. 
    /// If document is not encrypted then corresponding exception will be raised in .net 1.1
    /// or CryptoAlgorithm will be null for other .net versions.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Nullable<Aspose::Pdf::CryptoAlgorithm> get_CryptoAlgorithm();
    /// <summary>
    /// Gets a value indicating whether document is linearized.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsLinearized();
    /// <summary>
    /// Sets a value indicating whether document is linearized.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsLinearized(bool value);
    /// <summary>
    /// Gets permissions of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Permissions();
    /// <summary>
    /// Gets encrypted status of the document. True if document is encrypted.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsEncrypted();
    /// <summary>
    /// Gets the ID.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Id> get_Id();
    /// <summary>
    /// Gets the background color of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Background();
    /// <summary>
    /// Sets the background color of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Background(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets optimization flag. When pages are added to document, equal resource streams in resultant file are
    /// merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_OptimizeSize();
    /// <summary>
    /// Sets optimization flag. When pages are added to document, equal resource streams in resultant file are
    /// merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OptimizeSize(bool value);
    /// <summary>
    /// Allows to merge page contents to optimize docuement size. If used then differnet but duplicated pages may reference to the 
    /// same content object. Please note that this mode may cause side effects like changing page content when other page is changed.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowReusePageContent();
    /// <summary>
    /// Allows to merge page contents to optimize docuement size. If used then differnet but duplicated pages may reference to the 
    /// same content object. Please note that this mode may cause side effects like changing page content when other page is changed.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowReusePageContent(bool value);
    /// <summary>
    /// Gets flag of ignoring errors in source files. 
    /// When pages from source document copied into destination document, copying process is stopped with exception 
    /// if some objects in source files are corrupted when this flag is false. 
    /// example: dest.Pages.Add(src.Pages);
    /// If this flag is set to true then corrupted objects will be replaced with empty values.
    /// By default: true.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IgnoreCorruptedObjects();
    /// <summary>
    /// Sets flag of ignoring errors in source files. 
    /// When pages from source document copied into destination document, copying process is stopped with exception 
    /// if some objects in source files are corrupted when this flag is false. 
    /// example: dest.Pages.Add(src.Pages);
    /// If this flag is set to true then corrupted objects will be replaced with empty values.
    /// By default: true.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IgnoreCorruptedObjects(bool value);
    /// <summary>
    /// Gets page labels in the document. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PageLabelCollection> get_PageLabels();
    /// <summary>
    /// Get or sets flag which enables document partially be unloaded from memory. 
    /// This allow to decrease memory usage but may have negative effect on perfomance.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_EnableObjectUnload();
    /// <summary>
    /// Get or sets flag which enables document partially be unloaded from memory. 
    /// This allow to decrease memory usage but may have negative effect on perfomance.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EnableObjectUnload(bool value);
    /// <summary>
    ///     <para>Gets access to TaggedPdf content.</para>
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Tagged::ITaggedContent> get_TaggedContent();
    /// <summary>
    /// Get and set the file size limit for loading an entire file into memory.
    /// The value is set in megabytes.
    /// The default value is 210 Mb.
    /// </summary>
    static ASPOSE_PDF_SHARED_API int32_t get_FileSizeLimitToMemoryLoading();
    /// <summary>
    /// Get and set the file size limit for loading an entire file into memory.
    /// The value is set in megabytes.
    /// The default value is 210 Mb.
    /// </summary>
    static ASPOSE_PDF_SHARED_API void set_FileSizeLimitToMemoryLoading(int32_t value);
    
    /// <summary>
    /// Occurs when font replaces another font in document.
    /// </summary>
    System::Event<void(System::SharedPtr<Text::Font>, System::SharedPtr<Text::Font>)> FontSubstitution;
    
    /// <summary>
    /// Remove pdfa compliance from the document
    /// </summary>
    ASPOSE_PDF_SHARED_API void RemovePdfaCompliance();
    /// <summary>
    /// Remove pdfUa compliance from the document
    /// </summary>
    ASPOSE_PDF_SHARED_API void RemovePdfUaCompliance();
    /// <summary>
    /// Set Title for Pdf Document
    /// </summary>
    /// <param name="title">Document's title</param>
    ASPOSE_PDF_SHARED_API void SetTitle(System::String title);
    
    /// <summary>
    /// Initialize new Document instance from the <paramref name="input" ></paramref> stream.
    /// </summary>
    /// <param name="input">Stream with pdf document. </param>
    ASPOSE_PDF_SHARED_API Document(System::SharedPtr<System::IO::Stream> input);
    /// <summary>
    /// Initialize new Document instance from the <paramref name="input" ></paramref> stream.
    /// </summary>
    /// <param name="input">Stream with pdf document. </param>
    /// <param name="isManagedStream">if set to <c>true</c> inner stream is closed before exit; otherwise, is not.</param>
    ASPOSE_PDF_SHARED_API Document(System::SharedPtr<System::IO::Stream> input, bool isManagedStream);
    /// <summary>
    /// Initialize new Document instance from the <paramref name="input" ></paramref> stream.
    /// </summary>
    /// <param name="input">Input stream object, corresponding pdf is password protected.</param>
    /// <param name="password">User or owner password.</param>
    ASPOSE_PDF_SHARED_API Document(System::SharedPtr<System::IO::Stream> input, System::String password);
    /// <summary>
    /// Initialize new Document instance from the <paramref name="input" ></paramref> stream.
    /// </summary>
    /// <param name="input">Stream with pdf document. </param>
    /// <param name="password">User or owner password.</param>
    /// <param name="isManagedStream">If set to <c>true</c> inner stream is closed before exit; otherwise, is not.</param>
    ASPOSE_PDF_SHARED_API Document(System::SharedPtr<System::IO::Stream> input, System::String password, bool isManagedStream);
    /// <summary>
    /// Just init Document using <paramref name="filename" ></paramref>. The same as <see cref="Document(Stream)"></see>.
    /// </summary>
    /// <param name="filename">The name of the pdf document file. </param>
    ASPOSE_PDF_SHARED_API Document(System::String filename);
    /// <summary>
    /// Just init Document using <paramref name="filename" ></paramref>. The same as <see cref="Document(Stream)"></see>.
    /// </summary>
    /// <param name="filename">The name of the pdf document file. </param>
    /// <param name="isManagedStream">If set to <c>true</c> inner stream is closed before exit; otherwise, is not.</param>
    ASPOSE_PDF_SHARED_API Document(System::String filename, bool isManagedStream);
    /// <summary>
    /// Initializes new instance of the <see cref="Document"></see> class for working with encrypted document. 
    /// </summary>
    /// <param name="filename">Document file name.</param>
    /// <param name="password">User or owner password.</param>
    ASPOSE_PDF_SHARED_API Document(System::String filename, System::String password);
    /// <summary>
    /// Initializes new instance of the <see cref="Document"></see> class for working with encrypted document. 
    /// </summary>
    /// <param name="filename">Document file name.</param>
    /// <param name="password">User or owner password.</param>
    /// <param name="isManagedStream">if set to <c>true</c> inner stream is closed before exit; otherwise, is not.</param>
    ASPOSE_PDF_SHARED_API Document(System::String filename, System::String password, bool isManagedStream);
    /// <summary>
    /// Initializes empty document.
    /// </summary>
    ASPOSE_PDF_SHARED_API Document();
    /// <summary>
    /// Initializes empty document by version.
    /// </summary>
    /// <param name="version">The PDF version.</param>
    ASPOSE_PDF_SHARED_API Document(PdfVersion version);
    
    /// <summary>
    /// Process paragraphs for generator.
    /// </summary>
    ASPOSE_PDF_SHARED_API void ProcessParagraphs();
    /// <summary>
    /// Stores document into stream.
    /// </summary>
    /// <param name="output">Stream where document shell be stored.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> output);
    /// <summary>
    /// Saves document into the specified file.
    /// </summary>
    /// <param name="outputFileName">Path to file where the document will be stored.</param>
    ASPOSE_PDF_SHARED_API void Save(System::String outputFileName);
    /// <summary>
    /// Exports all document annotations to XFDF file
    /// </summary>
    /// <param name="fileName">XFDF file name</param>
    ASPOSE_PDF_SHARED_API void ExportAnnotationsToXfdf(System::String fileName);
    /// <summary>
    /// Export all document annotations into stream.
    /// </summary>
    /// <param name="stream">Stream where store XFDF.</param>
    ASPOSE_PDF_SHARED_API void ExportAnnotationsToXfdf(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Sends the whole document to the document device for processing.
    /// </summary>
    /// <param name="device">
    /// Document device which is used to process the document.
    /// </param>
    /// <param name="output">
    /// Output stream contains the results of the document processing with given device.
    /// </param>
    ASPOSE_PDF_SHARED_API void SendTo(System::SharedPtr<Devices::DocumentDevice> device, System::SharedPtr<System::IO::Stream> output);
    /// <summary>
    /// Sends the certain pages of the document to the document device for processing.
    /// </summary>
    /// <param name="device">
    /// Document device which is used to process the document.
    /// </param>
    /// <param name="fromPage">
    /// The first page for processing.
    /// </param>
    /// <param name="toPage">
    /// The last page for processing.
    /// </param>
    /// <param name="output">
    /// Output stream contains the results of the document pages processing with given device.
    /// </param>
    ASPOSE_PDF_SHARED_API void SendTo(System::SharedPtr<Devices::DocumentDevice> device, int32_t fromPage, int32_t toPage, System::SharedPtr<System::IO::Stream> output);
    /// <summary>
    /// Sends the whole document to the document device for processing.
    /// </summary>
    /// <param name="device">
    /// Document device which is used to process the document.
    /// </param>
    /// <param name="outputFileName">
    /// Output file name with the results of processing.
    /// </param>
    ASPOSE_PDF_SHARED_API void SendTo(System::SharedPtr<Devices::DocumentDevice> device, System::String outputFileName);
    /// <summary>
    /// Sends the whole document to the document device for processing.
    /// </summary>
    /// <param name="device">
    /// Document device which is used to process the document.
    /// </param>
    /// <param name="fromPage">
    /// The first page for processing.
    /// </param>
    /// <param name="toPage">
    /// The last page for processing.
    /// </param>
    /// <param name="outputFileName">
    /// Output file name with the results of processing.
    /// </param>
    ASPOSE_PDF_SHARED_API void SendTo(System::SharedPtr<Devices::DocumentDevice> device, int32_t fromPage, int32_t toPage, System::String outputFileName);
    /// <summary>
    /// Removes metadata from the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void RemoveMetadata();
    /// <summary>
    /// Imports annotations from XFDF file to document.
    /// </summary>
    /// <param name="fileName">XFDF file name</param>
    ASPOSE_PDF_SHARED_API void ImportAnnotationsFromXfdf(System::String fileName);
    /// <summary>
    /// Imports annotations from stream to document.
    /// </summary>
    /// <param name="stream">Stream contains XFDF data.</param>
    ASPOSE_PDF_SHARED_API void ImportAnnotationsFromXfdf(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Validate document into the specified file.
    /// </summary>
    /// <param name="outputLogFileName">Path to file where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <returns>The operation result</returns>
    ASPOSE_PDF_SHARED_API bool Validate(System::String outputLogFileName, Aspose::Pdf::PdfFormat format);
    /// <summary>
    /// Convert document and save errors into the specified file.
    /// </summary>
    /// <param name="outputLogFileName">Path to file where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <param name="transparencyAction">Action for image masked objects</param>
    /// <returns>The operation result</returns>
    ASPOSE_PDF_SHARED_API bool Convert(System::String outputLogFileName, Aspose::Pdf::PdfFormat format, ConvertErrorAction action, ConvertTransparencyAction transparencyAction);
    /// <summary>
    /// Convert document and save errors into the specified file.
    /// </summary>
    /// <param name="outputLogStream">Stream where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <param name="transparencyAction">Action for image masked objects</param>
    /// <returns>The operation result</returns>
    ASPOSE_PDF_SHARED_API bool Convert(System::SharedPtr<System::IO::Stream> outputLogStream, Aspose::Pdf::PdfFormat format, ConvertErrorAction action, ConvertTransparencyAction transparencyAction);
    /// <summary>
    /// Convert document and save errors into the specified file.
    /// </summary>
    /// <param name="outputLogFileName">Path to file where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <returns>The operation result</returns>
    ASPOSE_PDF_SHARED_API bool Convert(System::String outputLogFileName, Aspose::Pdf::PdfFormat format, ConvertErrorAction action);
    /// <summary>
    /// Convert document using specified conversion options
    /// </summary>
    /// <param name="options">set of options for convert PDF document</param>
    /// <returns>The operation result</returns>
    ASPOSE_PDF_SHARED_API bool Convert(System::SharedPtr<PdfFormatConversionOptions> options);
    /// <summary>
    /// Convert page to PNG for DSR, OMR, OCR image stream.
    /// </summary>
    /// <param name="page">Page to convert.</param>
    /// <returns>Image stream.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::MemoryStream> ConvertPageToPNGMemoryStream(System::SharedPtr<Page> page);
    /// <summary>
    /// Validate document into the specified file.
    /// </summary>
    /// <param name="outputLogStream">Stream where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <returns>The operation result</returns>
    ASPOSE_PDF_SHARED_API bool Validate(System::SharedPtr<System::IO::Stream> outputLogStream, Aspose::Pdf::PdfFormat format);
    /// <summary>
    /// Validate document into the specified file.
    /// </summary>
    /// <param name="options">set of options for convert PDF document</param>
    /// <returns>The operation result</returns>
    ASPOSE_PDF_SHARED_API bool Validate(System::SharedPtr<PdfFormatConversionOptions> options);
    /// <summary>
    /// Recognize images inside the document and add hocr strings over it.
    /// </summary>
    /// <param name="callback">Action for images that will be processed by hocr recognize.</param>
    /// <param name="flattenImages">Text in pdf images can be painted using the mechanics of masks, in which case the images must be flattened.</param>
    /// <returns>The operation result. If there are no images in the document returns <see cref="false"></see>.</returns>
    ASPOSE_PDF_SHARED_API bool Convert(Document::CallBackGetHocrWithPage callback, bool flattenImages = false);
    /// <summary>
    /// Recognize images inside the document and add hocr strings over it.
    /// </summary>
    /// <param name="callback">Action for images that will be processed by hocr recognize.</param>
    /// <param name="flattenImages">Text in pdf images can be painted using the mechanics of masks, in which case the images must be flattened.</param>
    /// <returns>The operation result. If there are no images in the document returns <see cref="false"></see>.</returns>
    ASPOSE_PDF_SHARED_API bool Convert(Document::CallBackGetHocr callback, bool flattenImages = false);
    /// <summary>
    /// Convert document and save errors into the specified stream.
    /// </summary>
    /// <param name="outputLogStream">Stream where the comments will be stored.</param>
    /// <param name="format">Pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <returns>The operation result</returns>
    ASPOSE_PDF_SHARED_API bool Convert(System::SharedPtr<System::IO::Stream> outputLogStream, Aspose::Pdf::PdfFormat format, ConvertErrorAction action);
    /// <summary>
    /// Convert document by applying the Fixup.
    /// </summary>
    /// <param name="fixup">The Fixup type.</param>
    /// <param name="outputLog">The log of process.</param>
    /// <param name="onlyValidation">Only document validation.</param>
    /// <param name="parameters">Properties for Fixup that can not be set.</param>
    /// <returns>The operation result.</returns>
    ASPOSE_PDF_SHARED_API bool Convert(Fixup fixup, System::SharedPtr<System::IO::Stream> outputLog, bool onlyValidation = false, System::ArrayPtr<System::SharedPtr<System::Object>> parameters = nullptr);
    /// <summary>
    /// Convert document by applying the Fixup.
    /// </summary>
    /// <param name="fixup">The Fixup type.</param>
    /// <param name="outputLog">The log of process.</param>
    /// <param name="onlyValidation">Only document validation.</param>
    /// <param name="parameters">Properties for Fixup that can not be set.</param>
    /// <returns>The operation result.</returns>
    ASPOSE_PDF_SHARED_API bool Convert(Fixup fixup, System::String outputLog, bool onlyValidation = false, System::ArrayPtr<System::SharedPtr<System::Object>> parameters = nullptr);
    /// <summary>
    /// Loads a file, converting it to PDF.
    /// </summary>
    /// <param name="filename">The path to the file to open.</param>
    /// <param name="options">The load options.</param>
    /// <exception cref="PdfException">If the file cannot be loaded.</exception>
    /// <exception cref="FileNotFoundException">If the file is not found.</exception>
    ASPOSE_PDF_SHARED_API void LoadFrom(System::String filename, System::SharedPtr<LoadOptions> options);
    
    /// <summary>
    /// Opens an existing document from a file providing necessary converting options to get pdf document.
    /// </summary>
    /// <param name="filename">
    /// Input file to convert into pdf document.
    /// </param>
    /// <param name="options">
    /// Represents properties for converting <paramref name="filename"></paramref> into pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API Document(System::String filename, System::SharedPtr<LoadOptions> options);
    
    /// <summary>
    /// Converts source file in source format into destination file in destination format.
    /// </summary>
    /// <param name="srcFileName">The source file name.</param>
    /// <param name="loadOptions">The source file format.</param>
    /// <param name="dstFileName">The destination file name.</param>
    /// <param name="saveOptions">The destination file format.</param>
    static ASPOSE_PDF_SHARED_API void Convert(System::String srcFileName, System::SharedPtr<LoadOptions> loadOptions, System::String dstFileName, System::SharedPtr<SaveOptions> saveOptions);
    /// <summary>
    /// Converts stream in source format into destination file in destination format.
    /// </summary>
    /// <param name="srcStream">The source stream.</param>
    /// <param name="loadOptions">The source stream format.</param>
    /// <param name="dstFileName">The destination file name.</param>
    /// <param name="saveOptions">The destination file format.</param>
    static ASPOSE_PDF_SHARED_API void Convert(System::SharedPtr<System::IO::Stream> srcStream, System::SharedPtr<LoadOptions> loadOptions, System::String dstFileName, System::SharedPtr<SaveOptions> saveOptions);
    /// <summary>
    /// Converts source file in source format into stream in destination format.
    /// </summary>
    /// <param name="srcFileName">The source file name.</param>
    /// <param name="loadOptions">The source file format.</param>
    /// <param name="dstStream">The destination stream.</param>
    /// <param name="saveOptions">The destination stream format.</param>
    static ASPOSE_PDF_SHARED_API void Convert(System::String srcFileName, System::SharedPtr<LoadOptions> loadOptions, System::SharedPtr<System::IO::Stream> dstStream, System::SharedPtr<SaveOptions> saveOptions);
    /// <summary>
    /// Converts stream in source format into stream in destination format.
    /// </summary>
    /// <param name="srcStream">The source stream.</param>
    /// <param name="loadOptions">The source stream format.</param>
    /// <param name="dstStream">The destination stream.</param>
    /// <param name="saveOptions">The destination file format.</param>
    static ASPOSE_PDF_SHARED_API void Convert(System::SharedPtr<System::IO::Stream> srcStream, System::SharedPtr<LoadOptions> loadOptions, System::SharedPtr<System::IO::Stream> dstStream, System::SharedPtr<SaveOptions> saveOptions);
    
    /// <summary>
    /// Opens an existing document from a stream providing necessary converting to get pdf document.
    /// </summary>
    /// <param name="input">
    /// Input stream to convert into pdf document.
    /// </param>
    /// <param name="options">
    /// Represents properties for converting <paramref name="input"></paramref> into pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API Document(System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    
    /// <summary>
    /// Removes all fields from the document and place their values instead.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Flatten();
    /// <summary>
    /// Removes all fields (and annotations) from the document and place their values instead.
    /// </summary>
    /// <param name="flattenSettings">Settings for flattening process.</param>
    ASPOSE_PDF_SHARED_API void Flatten(System::SharedPtr<Aspose::Pdf::Forms::Form::FlattenSettings> flattenSettings);
    /// <summary>
    /// Replaces transparent content with non-transparent raster and vector graphics.
    /// </summary>
    ASPOSE_PDF_SHARED_API void FlattenTransparency();
    /// <summary>
    /// Encrypts the document. Call then Save to get encrypted version of the document.
    /// </summary>
    /// <param name="userPassword">User password.</param>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="privileges">Document permissions, see <see cref="Permissions"></see> for details.</param>
    /// <param name="cryptoAlgorithm">Cryptographic algorithm, see <see cref="CryptoAlgorithm"></see> for details.</param>
    /// <param name="usePdf20">Support for revision 6 (Extension 8).</param>
    ASPOSE_PDF_SHARED_API void Encrypt(System::String userPassword, System::String ownerPassword, System::SharedPtr<Facades::DocumentPrivilege> privileges, Aspose::Pdf::CryptoAlgorithm cryptoAlgorithm, bool usePdf20);
    /// <summary>
    /// Encrypts the document. Call then Save to get encrypted version of the document.
    /// </summary>
    /// <param name="userPassword">User password.</param>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="permissions">Document permissions, see <see cref="Permissions"></see> for details.</param>
    /// <param name="cryptoAlgorithm">Cryptographic algorithm, see <see cref="CryptoAlgorithm"></see> for details.</param>
    ASPOSE_PDF_SHARED_API void Encrypt(System::String userPassword, System::String ownerPassword, Aspose::Pdf::Permissions permissions, Aspose::Pdf::CryptoAlgorithm cryptoAlgorithm);
    /// <summary>
    /// Encrypts the document. Call then Save to get encrypted version of the document.
    /// </summary>
    /// <param name="userPassword">User password.</param>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="permissions">Document permissions, see <see cref="Permissions"></see> for details.</param>
    /// <param name="cryptoAlgorithm">Cryptographic algorithm, see <see cref="CryptoAlgorithm"></see> for details.</param>
    /// <param name="usePdf20">Support for revision 6 (Extension 8).</param>
    ASPOSE_PDF_SHARED_API void Encrypt(System::String userPassword, System::String ownerPassword, Aspose::Pdf::Permissions permissions, Aspose::Pdf::CryptoAlgorithm cryptoAlgorithm, bool usePdf20);
    /// <summary>
    /// Changes document passwords. This action can be done only using owner password.
    /// </summary>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="newUserPassword">New user password.</param>
    /// <param name="newOwnerPassword">New owner password.</param>
    ASPOSE_PDF_SHARED_API void ChangePasswords(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword);
    /// <summary>
    /// Decrypts the document. Call then Save to obtain decrypted version of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Decrypt();
    /// <summary>
    /// Linearize the document in order to
    /// - open the first page as quickly as possible;
    /// - display next page or follow by link to the next page as quickly as possible;
    /// - display the page incrementally as it arrives when data for a page is delivered over a slow channel (display the most useful data first);
    /// - permit user interaction, such as following a link, to be performed even before the entire page has been received and displayed.
    /// Invoking this method doesn't actually saves the document. On the contrary the document only is prepared to have optimized structure,
    /// call then Save to get optimized document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Optimize();
    /// <summary>
    /// Save document incrementally (i.e. using incremental update technique).
    /// </summary>
    /// <remarks>
    /// In order to save document incrementally we should open the document file for writing. 
    /// Therefore Document must be initialized with writable stream like in the next code snippet:
    /// Document doc = new Document(new FileStream("document.pdf", FileMode.Open, FileAccess.ReadWrite));
    /// // make some changes and save the document incrementally
    /// doc.Save();
    /// </remarks>
    ASPOSE_PDF_SHARED_API void Save();
    /// <summary>
    /// Saves the document with save options.
    /// </summary>
    /// <param name="options">Save options.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<SaveOptions> options);
    /// <summary>
    /// Saves the document with a new name along with a file format.
    /// </summary>
    /// <param name="outputFileName">Path to file where the document will be stored.</param>
    /// <param name="format">Format options.</param>
    ASPOSE_PDF_SHARED_API void Save(System::String outputFileName, SaveFormat format);
    /// <summary>
    /// Saves the document with a new name along with a file format.
    /// </summary>
    /// <exception cref="ArgumentException"><see cref="ArgumentException"></see> when <see cref="HtmlSaveOptions"></see> is passed to a method. Save a document to the html stream is not supported. Please use method save to the file.</exception>
    /// <param name="outputStream">Stream where the document will be stored.</param>
    /// <param name="format">Format options.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> outputStream, SaveFormat format);
    /// <summary>
    /// Saves the document with a new name setting its save options.
    /// </summary>
    /// <param name="outputFileName">Path to file where the document will be stored.</param>
    /// <param name="options">Save options.</param>
    ASPOSE_PDF_SHARED_API void Save(System::String outputFileName, System::SharedPtr<SaveOptions> options);
    /// <summary>
    /// Saves the document to a stream with a save options.
    /// </summary>
    /// <exception cref="ArgumentException"><see cref="ArgumentException"></see> when <see cref="HtmlSaveOptions"></see> is passed to a method. Save a document to the html stream is not supported. Please use method save to the file.</exception>
    /// <param name="outputStream">Stream where the document will be stored.</param>
    /// <param name="options">Save options.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<SaveOptions> options);
    /// <summary>
    /// Saves the document to a response stream with a save options.
    /// </summary>
    /// <param name="response">Encapsulates HTTP-response information.</param>
    /// <param name="outputFileName">Simple file name, i.e. without path.</param>
    /// <param name="disposition">Represents a MIME protocol Content-Disposition header.</param>
    /// <param name="options">Save options.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::Web::HttpResponse> response, System::String outputFileName, ContentDisposition disposition, System::SharedPtr<SaveOptions> options);
    /// <summary>
    /// Closes all resources used by this document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    /// <summary>
    /// Optimize resources in the document:
    /// 1. Resources which are not used on the document pages are removed;
    /// 2. Equal resources are joined into one object; 
    /// 3. Unused objects are deleted.
    /// </summary>
    ASPOSE_PDF_SHARED_API void OptimizeResources();
    /// <summary>
    /// Optimize resources in the document according to defined optimization strategy.
    /// </summary>
    /// <param name="strategy">Optimization strategy.</param>
    ASPOSE_PDF_SHARED_API void OptimizeResources(System::SharedPtr<Aspose::Pdf::Optimization::OptimizationOptions> strategy);
    /// <summary>
    /// Returns item value from catalog dictionary.
    /// </summary>
    /// <param name="key">The key of item.</param>
    /// <returns>Item value - if key was successfully found; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> GetCatalogValue(System::String key);
    /// <summary>
    /// Clears memory
    /// </summary>
    ASPOSE_PDF_SHARED_API void FreeMemory() override;
    /// <summary>
    ///  Save document to XML.
    /// </summary>
    /// <param name="file">The document model xml file</param>
    ASPOSE_PDF_SHARED_API void SaveXml(System::String file);
    /// <summary>
    /// Gets a object with specified ID in the document.
    /// </summary>
    /// <param name="id">The object id.</param>
    /// <returns>The object with specified id. Null if the id is not found.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> GetObjectById(System::String id);
    /// <summary>
    /// Bind xml to document
    /// </summary>
    /// <param name="file">The xml file</param>
    ASPOSE_PDF_SHARED_API void BindXml(System::String file);
    /// <summary>
    /// Checks if document requires Repair method call.
    /// </summary>
    /// <param name="options">Filled RepairOptions recommended to be used in Repair method</param>
    /// <returns>Returns filled options to be used in Repair method</returns>
    ASPOSE_PDF_SHARED_API bool IsRepairNeeded(System::SharedPtr<Document::RepairOptions>& options);
    /// <summary>
    /// Repairs broken document. 
    /// </summary>
    /// <param name="options">
    /// An optional parameter of type <see cref="RepairOptions"></see> to specify repair settings.
    /// If not provided, default settings will be used.
    /// </param>
    ASPOSE_PDF_SHARED_API void Repair(System::SharedPtr<Document::RepairOptions> options = nullptr);
    /// <summary>
    /// Bind xml/xsl to document
    /// </summary>
    /// <param name="xmlFile">The xml file.</param>
    /// <param name="xslFile">The xsl file if XSLT is used.</param>
    ASPOSE_PDF_SHARED_API void BindXml(System::String xmlFile, System::String xslFile);
    /// <summary>
    /// Bind xml/xsl to document
    /// </summary>
    /// <param name="xmlStream">The xml stream.</param>
    /// <param name="xslStream">The xsl stream if XSLT is used.</param>
    ASPOSE_PDF_SHARED_API void BindXml(System::SharedPtr<System::IO::Stream> xmlStream, System::SharedPtr<System::IO::Stream> xslStream);
    /// <summary>
    /// Bind xml/xsl to document
    /// </summary>
    /// <param name="xmlStream">The xml stream.</param>
    /// <param name="xslStream">The xsl stream if XSLT is used.</param>
    /// <param name="settings">The xml reader settings.</param>
    ASPOSE_PDF_SHARED_API void BindXml(System::SharedPtr<System::IO::Stream> xmlStream, System::SharedPtr<System::IO::Stream> xslStream, System::SharedPtr<System::Xml::XmlReaderSettings> settings);
    /// <summary>
    /// Bind xml to document
    /// </summary>
    /// <param name="stream">The xml stream.</param>
    ASPOSE_PDF_SHARED_API void BindXml(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Get XMP metadata from document.
    /// </summary>
    /// <param name="stream">Stream where metadata will be stored.</param>
    ASPOSE_PDF_SHARED_API void GetXmpMetadata(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Set XMP metadata of document.
    /// </summary>
    /// <param name="stream">Stream which contains XMP metadata.</param>
    ASPOSE_PDF_SHARED_API void SetXmpMetadata(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Validates document.
    /// </summary>
    /// <param name="doRepair">If true found issues will be repaired.</param>
    /// <returns>True - if document repaired; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Check(bool doRepair);
    /// <summary>
    /// Organizes page tree nodes in a document into a balanced tree.
    /// Only if the document has more than nodesNumInSubtrees page objects, otherwise it does nothing.
    /// Do not call this method while iterating over Pages elements, it may give unpredictable results
    /// </summary>
    /// <param name="nodesNumInSubtrees">Desired number of subnodes. Default value is ten.</param>
    ASPOSE_PDF_SHARED_API void PageNodesToBalancedTree(uint8_t nodesNumInSubtrees = DefaultNodesNumInSubtrees);
    /// <summary>
    /// Merges documents.
    /// </summary>
    /// <param name="mergeOptions">The merge options.</param>
    /// <param name="documents">The documents to merge.</param>
    ASPOSE_PDF_SHARED_API void Merge(System::SharedPtr<Document::MergeOptions> mergeOptions, const System::ArrayPtr<System::SharedPtr<Document>>& documents);
    /// <summary>
    /// Merges documents.
    /// </summary>
    /// <param name="mergeOptions">The merge options.</param>
    /// <param name="files">The pdf-files to merge.</param>
    ASPOSE_PDF_SHARED_API void Merge(System::SharedPtr<Document::MergeOptions> mergeOptions, const System::ArrayPtr<System::String>& files);
    /// <summary>
    /// Merges documents.
    /// </summary>
    /// <param name="documents">The documents to merge.</param>
    ASPOSE_PDF_SHARED_API void Merge(const System::ArrayPtr<System::SharedPtr<Document>>& documents);
    /// <summary>
    /// Merges pdf files.
    /// </summary>
    /// <param name="files">The pdf-files to merge.</param>
    ASPOSE_PDF_SHARED_API void Merge(const System::ArrayPtr<System::String>& files);
    /// <summary>
    /// Merges documents.
    /// </summary>
    /// <param name="mergeOptions">The merge options.</param>
    /// <param name="files">The pdf-files to merge.</param>
    /// <returns>The merged document.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Document> MergeDocuments(System::SharedPtr<Document::MergeOptions> mergeOptions, const System::ArrayPtr<System::String>& files);
    /// <summary>
    /// Merges documents.
    /// </summary>
    /// <param name="mergeOptions"></param>
    /// <param name="files">The documents to merge.</param>
    /// <returns>The merged document.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Document> MergeDocuments(System::SharedPtr<Document::MergeOptions> mergeOptions, const System::ArrayPtr<System::SharedPtr<Document>>& files);
    /// <summary>
    /// Merges pdf files.
    /// </summary>
    /// <param name="files">The pdf-files to merge.</param>
    /// <returns>The merged document.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Document> MergeDocuments(const System::ArrayPtr<System::String>& files);
    /// <summary>
    /// Merges documents.
    /// </summary>
    /// <param name="documents">The documents to merge.</param>
    /// <returns>The merged document.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Document> MergeDocuments(const System::ArrayPtr<System::SharedPtr<Document>>& documents);
    /// <summary>
    /// Sets the file size limit for loading an entire file into memory to default value equals 210 Mb.
    /// </summary>
    static ASPOSE_PDF_SHARED_API void SetDefaultFileSizeLimitToMemoryLoading();
    /// <summary>
    /// Checks if the current PDF document has been saved with incremental updates.
    /// </summary>
    /// <returns>
    ///   <c>true</c> if the PDF document has incremental updates; otherwise, <c>false</c>.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool HasIncrementalUpdate();
    
protected:

    System::SharedPtr<ConversionPipeline> Pipeline;
    bool ReloadAfterLinearization;
    bool IsEvaluationMarkSet;
    
    /// <summary>
    /// The unique document ID to internal purpose. it allows differentiate document instances.
    /// </summary>
    System::Guid get_DocumentId() const;
    /// <summary>
    /// List of APS pages for the case of F1-to-F2 conversion when neither F1 nor F2 is PDF.
    /// </summary>
    const System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Rendering::ApsPage>>>& get_ApsPages() const;
    /// <summary>
    /// List of APS pages for the case of F1-to-F2 conversion when neither F1 nor F2 is PDF.
    /// </summary>
    void set_ApsPages(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Rendering::ApsPage>>> value);
    /// <summary>
    /// Gets licensed state of the system. Returns true is system works in licensed mode and false otherwise. 
    /// </summary>
    static bool get__IsLicensed();
    /// <summary>
    /// Gets licensed state of the system. Returns true is system works in licensed mode and false otherwise. 
    /// </summary>
    bool get__IsObjectLicensed();
    static bool get_Indivisible();
    bool get_IsParagraphsAdded() const;
    void set_IsParagraphsAdded(bool value);
    bool get_IsLayersAdded();
    Text::TextEditOptions::FontReplace get_FontReplaceBehavior() const;
    void set_FontReplaceBehavior(Text::TextEditOptions::FontReplace value);
    
    static int32_t& IndivisibleLevel();
    
    static System::SharedPtr<System::Object> syncRoot;
    
    static bool get___Indivisible();
    
    bool IsPdfAConversionMode;
    
    bool get_NotifyAboutFontSubstitutions();
    System::SharedPtr<Text::IFontSubstitutionRegistrator> get_FontSubstitutionRegistrator() const;
    
    System::SharedPtr<Engine::CommonData::Text::Fonts::Utilities::IDocumentFontSaveOptions> FontSaveOptions;
    
    System::SharedPtr<Engine::CommonData::IDocumentSecondaryStrategies> get_DocumentStrategies() const;
    System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::Drawing::RectangleF>>>> get_InternalHyperlinkTargets() const;
    void set_InternalHyperlinkTargets(System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::Drawing::RectangleF>>>> value);
    
    /// <summary>
    /// Instance of IPdfDocument used to access to internal document structure. 
    /// </summary>
    System::SharedPtr<Engine::IPdfDocument> _engineDoc;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<Engine::CommonData::Text::Segmenting::TextSegmentBuilder>>> _commonXObjects;
    
    /// <summary>
    /// Gets a metadata check for pdf/a(validation should pass this because it updates after on save).
    /// </summary>
    bool get_IsNotCheckMetadata() const;
    /// <summary>
    /// Gets convert parameter for pdf/ua converter (Convert only Metadata and Document Catalog if set true)
    /// </summary>
    bool get_IsConvertMetadataAndCatalogOnly() const;
    /// <summary>
    /// Gets convert parameter for pdf/ua converter (Convert only Metadata and Document Catalog if set true)
    /// </summary>
    void set_IsConvertMetadataAndCatalogOnly(bool value);
    int32_t get_ParentTreeNextKey();
    void set_ParentTreeNextKey(int32_t value);
    Aspose::Pdf::UsageMode get_UsageMode() const;
    /// <summary>
    /// Returns copier used for coping pages to this document. 
    /// </summary>
    System::SharedPtr<Copier> get_DefaultCopier();
    bool get_IsConverted() const;
    
    void ResetRestrictions();
    static uint64_t TransformRestrictionKey(uint64_t key);
    static bool Restricted(System::SharedPtr<Engine::Data::ITrailerable> tr, int32_t index);
    static bool Restricted(System::SharedPtr<Document> doc, int32_t index);
    static void Restrict(System::SharedPtr<Engine::Data::ITrailerable> tr, int32_t index);
    static void Restrict(System::SharedPtr<Document> doc, int32_t index);
    static bool IsVentureLicenseValid(System::SharedPtr<LicenseManagement::VentureLicense> _ventureLicense);
    static bool Restricted(System::SharedPtr<LicenseManagement::VentureLicense> ventureLicense, int32_t index);
    static void StartOperation();
    static void EndOperation();
    /// <summary>
    /// Gets the PDF/A compliance level of the current document.
    /// </summary>
    /// <returns>
    /// The PDF/A format of the current document if it complies with any of the PDF/A standards, otherwise null.
    /// </returns>
    /// <remarks>
    /// This method checks the metadata of the document to determine its PDF/A compliance level.
    /// It supports PDF/A-1a\b, PDF/A-2a\b\u, PDF/A-3a\b\u, and PDF/A-4\4e\4f formats.
    /// </remarks>
    System::Nullable<Aspose::Pdf::PdfFormat> GetPdfACompliance();
    void NotifyAboutSubstitution(System::SharedPtr<Aspose::Pdf::Text::Font> oldFont, System::SharedPtr<Aspose::Pdf::Text::Font> newFont);
    void SetSimpleFontEncodingRule(HtmlSaveOptions::FontEncodingRules rule);
    /// <summary>
    /// Initializes the internal hyperlinks targets data on document loading.
    /// </summary>
    void InitInternalHyperlinksTargetsData(System::SharedPtr<UnifiedSaveOptions> options);
    void RegisterMetadata(System::SharedPtr<Aspose::Pdf::Metadata> metadata);
    static void UpdateMetadata(System::SharedPtr<Engine::PdfDocument> document, System::SharedPtr<Aspose::Pdf::Metadata> metadata);
    static void PreSave(System::SharedPtr<PageCollection> pages, System::SharedPtr<SaveOptions> saveOptions);
    static void SetEvaluationWarning(System::SharedPtr<PageCollection> pages);
    /// <summary>
    /// Process layers for generator.
    /// </summary>
    void ProcessLayers();
    /// <summary>
    /// Adds layers to the document.
    /// </summary>
    void AddLayers();
    void ValidateAnnotations();
    void UncompressObject(System::SharedPtr<Engine::Data::IPdfObject> obj);
    /// <summary>
    /// Copies shared resources into pages.
    /// </summary>
    void UpdatePagesResources();
    /// <summary>
    /// Copies resources from Page into its XForm.
    /// </summary>
    void UpdateXFormResources();
    /// <summary>
    /// Convert the PDF Document and log results.
    /// </summary>
    /// <param name="xml">The log.</param>
    /// <param name="format">Pdf format.</param>
    /// <param name="onlyValidation">Only document validation.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <param name="transparencyAction">Action for image masked objects</param>
    /// <returns>The operation result</returns>
    bool Convert(System::SharedPtr<System::Xml::XmlTextWriter> xml, Aspose::Pdf::PdfFormat format, bool onlyValidation, ConvertErrorAction action, ConvertTransparencyAction transparencyAction);
    /// <summary>
    /// Convert the PDF Document and log results.
    /// </summary>
    /// <param name="xml">The log.</param>
    /// <param name="format">Pdf format.</param>
    /// <param name="onlyValidation">Only document validation.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <returns>The operation result</returns>
    bool Convert(System::SharedPtr<System::Xml::XmlTextWriter> xml, Aspose::Pdf::PdfFormat format, bool onlyValidation, ConvertErrorAction action);
    bool Convert(System::SharedPtr<PdfFormatConversionOptions> options, bool onlyValidation);
    bool Convert(Fixup fixup, System::SharedPtr<System::Xml::XmlTextWriter> outputLog, bool onlyValidation = false, System::ArrayPtr<System::SharedPtr<System::Object>> parameters = nullptr);
    /// <summary>
    /// If the document has at least 1 signature - true
    /// </summary>
    /// <returns></returns>
    bool ContainSignature();
    void LoadDocument(System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    void FlattenA();
    void FlattenB();
    bool IsCertified();
    /// <summary>
    /// Returns raw metadata stream
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Engine::Data::Types::IPdfStreamAccessor> GetMetadataStream();
    void UpdatePages();
    /// <summary> 
    /// Suppresses update contents data for all pages
    /// The contents is not updated until ResumeUpdate is called
    /// </summary>
    void SuppressUpdate();
    /// <summary>
    /// resumes document update
    /// </summary>
    void ResumeUpdate();
    System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<Engine::Data::IPdfObject> obj);
    void ReleaseResourcesFor(System::SharedPtr<Engine::Data::IPdfObject> obj);
    void SetResourcesFor(System::SharedPtr<Engine::Data::IPdfObject> obj, System::SharedPtr<Resources> res);
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> OptimizeResourceInternal(System::SharedPtr<Aspose::Pdf::Optimization::OptimizationOptions> strategy);
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> OptimizeResourceInternal();
    /// <summary>
    /// Register annotation for which AfterImport method must be called after import finished.
    /// </summary>
    /// <param name="annotation"></param>
    void RegisterAfterImportAnnotation(System::SharedPtr<Annotations::Annotation> annotation);
    /// <summary>
    /// Enumerate all registered annotations and call AfterImport for each of them.
    /// </summary>
    void AfterImport();
    static System::SharedPtr<System::Object> GetObjectById(System::String id, System::SharedPtr<Paragraphs> paragraphs);
    bool Check(bool doRepair, System::SharedPtr<System::IO::Stream> log);
    /// <summary>
    /// Removes the optional content property with the specified name from the document.
    /// </summary>
    /// <param name="objectId">The object id of the optional content property to be removed.</param>
    void RemoveOptionalContentPropertyWithObject(int32_t objectId);
    /// <summary>
    /// Removes the specified PDF object from the document.
    /// </summary>
    /// <param name="pdfObject">The PDF object to be removed.</param>
    void RemoveObject(System::SharedPtr<Engine::Data::IPdfObject> pdfObject);
    void cpp_keep_trailerable(System::SharedPtr<Engine::Data::ITrailerable> keep);
    void cpp_keep_text_segment_builder(System::SharedPtr<Engine::CommonData::Text::Segmenting::TextSegmentBuilder> builder);
    void cpp_keep_pcl_parser(System::SharedPtr<Aspose::Pcl::Parser::PCLParser> parser);
    
    virtual ASPOSE_PDF_SHARED_API ~Document();
    
private:

    /// <summary>
    /// Description for the first part of the standard.
    /// </summary>
    static const int32_t PdfAPartOne;
    /// <summary>
    /// Description for the second part of the standard.
    /// </summary>
    static const int32_t PdfAPartTwo;
    /// <summary>
    /// Description for the third part of the standard.
    /// </summary>
    static const int32_t PdfAPartThree;
    /// <summary>
    /// Description for the fourth part of the standard.
    /// </summary>
    static const int32_t PdfAPartFour;
    /// <summary>
    /// Used for deafult set PdfAPart.
    /// </summary>
    static const int32_t PdfAPartDefault;
    System::SharedPtr<PageCollection> pages;
    System::SharedPtr<Aspose::Pdf::Collection> collection;
    System::SharedPtr<OutlineCollection> outlines;
    System::SharedPtr<Annotations::DocumentActionCollection> actions;
    System::SharedPtr<Aspose::Pdf::Forms::Form> form;
    System::SharedPtr<DocumentInfo> info;
    System::String fileName;
    System::SharedPtr<Aspose::Pdf::Metadata> metadata;
    System::SharedPtr<Copier> defualtCopier;
    System::SharedPtr<Collections::AsposeHashDictionary<int32_t, System::SharedPtr<Resources>>> resources;
    Text::TextEditOptions::FontReplace fontReplaceBehavior;
    System::SharedPtr<PageLabelCollection> pageLabelList;
    System::SharedPtr<Aspose::Pdf::PageInfo> pageInfo;
    bool isLowMemoryMode;
    bool isNotCheckMetadata;
    bool isConvertMetadataAndCatalogOnly;
    bool isParagraphsAdded;
    bool isTransferInfo;
    System::SharedPtr<DestinationCollection> destinations;
    System::SharedPtr<JavaScriptCollection> _javaScript;
    System::SharedPtr<Aspose::Pdf::OutputIntents> _outputIntents;
    bool _enableSignatureSanitization;
    bool _overrideMetadata;
    System::Guid _documentId;
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Rendering::ApsPage>>> pr_ApsPages;
    System::SharedPtr<System::Collections::Generic::Dictionary<uint64_t, uint64_t>> restrictionMap;
    static uint64_t hashValue;
    System::SharedPtr<LicenseManagement::VentureLicense> _ventureLicense;
    System::SharedPtr<NamedDestinationCollection> _namedDestinations;
    bool pr_EmbedStandardFonts;
    bool pr_DisableFontLicenseVerifications;
    System::SharedPtr<Aspose::Pdf::Text::IFontSubstitutionRegistrator> _fontSubstitutionRegistrator;
    System::SharedPtr<Document::IDocumentFontUtilities> _documentFontUtilities;
    System::SharedPtr<Document::SecondaryStrategies> _secondaryStrategies;
    /// <summary>
    /// The collection of internal hyperlink targets.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::Drawing::RectangleF>>>> _internalHyperlinkTargets;
    System::String _password;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Metadata>>> _loadedMetadata;
    bool _isDisposed;
    int32_t _parentTreeNextKey;
    System::SharedPtr<Structure::RootElement> _rootElement;
    bool pr_HandleSignatureChange;
    /// <summary>
    /// Describes the usage mode.
    /// </summary>
    Aspose::Pdf::UsageMode _usageMode;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Annotations::Annotation>>> _afterImportList;
    bool _isConverted;
    System::SharedPtr<Tagged::ITaggedContent> _taggedContent;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::Data::ITrailerable>>> cpp_trailerable;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::CommonData::Text::Segmenting::TextSegmentBuilder>>> cpp_ts_builders;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pcl::Parser::PCLParser>>> cpp_pcl_parsers;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> provideViewerPreferencesEntry(bool createIfNotExists);
    System::SharedPtr<Engine::Data::IPdfDictionary> provideMarkingsEntry();
    static bool GetIsLicensed();
    void SetVentureLicense(System::SharedPtr<LicenseManagement::VentureLicense> license) override;
    System::SharedPtr<LicenseManagement::VentureLicense> GetVentureLicense() override;
    void RemoveMetadataItem(System::String nsPrefix, System::String name);
    System::SharedPtr<Text::IFontSubstitutionRegistrator> CreateFontSubstitutionRegistrator();
    static void SubstituteStandartFonts(System::SharedPtr<PageCollection> pages);
    static void SubstituteStandartFontsOnPage(System::SharedPtr<Page> Page);
    void Init();
    void AddInternalHyperlinkTarget(System::SharedPtr<Annotations::XYZExplicitDestination> destination);
    void AddInternalHyperlinkTarget(System::SharedPtr<Annotations::FitRExplicitDestination> destination);
    void Init(System::SharedPtr<System::IO::Stream> input, System::String password);
    void ReplaceNonSeekableStream(System::SharedPtr<System::IO::Stream>& input);
    void Init(System::String fileName, System::String password);
    void Init(System::SharedPtr<System::IO::Stream> input, System::String password, bool isManagedStream);
    System::SharedPtr<Engine::Data::IPdfDictionary> GetOcPropertiesDictionary();
    System::SharedPtr<Engine::Data::IPdfArray> GetOptionalContentGroupsArray();
    System::SharedPtr<Engine::Data::IPdfDictionary> GetDDictionary();
    System::SharedPtr<Engine::Data::IPdfArray> GetOrdersArray();
    System::SharedPtr<Engine::Data::IPdfDictionary> GetPageMcProperties(System::SharedPtr<Page> page);
    void ProcessToc(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Page>>> tocPages);
    void ProcessLinks();
    void CopyToOutlines(System::SharedPtr<Paragraphs> paragraphs);
    void InternalSaveDocument(System::SharedPtr<System::IO::Stream> output, System::SharedPtr<SaveOptions> saveOptions);
    System::SharedPtr<System::IO::Stream> BeforeSave(System::SharedPtr<System::IO::Stream> output, System::SharedPtr<SaveOptions> saveOptions);
    void PrepareDocumentActions();
    void PrepareOutlinesActions();
    void AfterSave(System::SharedPtr<System::IO::Stream> output);
    void InternalSave(System::String outputFileName);
    void AddConformance(bool result, Aspose::Pdf::PdfFormat format);
    void PreparePdfAConversion();
    /// <summary>
    /// Conversion into PDF/A require allocation of specific resources, also this conversion 
    /// puts some document's data into special state. 
    /// So conversion functionality is needed in pair of methods, 
    /// when the first method is responsible about resource allocation,
    /// and the last method in this pair is responsible for cleaning resources, 
    /// allocated by first method at the end of PDF/A conversion process.
    /// Method <see cref="PreparePdfAConversion()"></see> is a first method in pair described above.
    /// This method <see cref="FinishPdfAConversion()"></see> is a second method for this pair. 
    /// It is designed to be called at the end of any PDF/A conversion process and this 
    /// method must have all the functionality to clear relevant resources, which were 
    /// created by method <see cref="PreparePdfAConversion()"></see>.
    /// </summary>
    void FinishPdfAConversion();
    void assertObject();
    void AssertSignedDocument();
    void LoadDocument(System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options, bool needDocumentInit);
    void InitDocument();
    void InitUsageMode(System::SharedPtr<LoadOptions> options);
    static Aspose::Pdf::UsageMode GetUsageModeForConversion(System::SharedPtr<LoadOptions> loadOptions, System::SharedPtr<SaveOptions> saveOptions);
    void FixAnnotations(System::SharedPtr<Page> page);
    void CallFormatEvent(System::String fieldName);
    void CallFormatEvents(System::String root, System::SharedPtr<Engine::Data::IPdfDictionary> field);
    void CallFormatEvents();
    void UpdateAppearances(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Annotations::WidgetAnnotation>>> fields);
    void ApplyRedactions();
    System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Page>>> CheckAndRepairPages();
    static void ProcessExtGStates(System::SharedPtr<Engine::CommonData::PageContent::IResourceDictionary> resourceDict);
    void InternalSave(System::SharedPtr<SaveOptions> saveOptions);
    void InternalSave(System::String outputFileName, SaveFormat format);
    void InternalSave(System::SharedPtr<System::IO::Stream> outputStream, SaveFormat format);
    System::SharedPtr<SaveOptions> CreateSaveOptions(SaveFormat format);
    /// <summary>
    /// Saves the document with a new name setting its save options.
    /// </summary>
    /// <param name="outputFileName">Path to file where the document will be stored.</param>
    /// <param name="options">Save options.</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void InternalSave(System::String outputFileName, System::SharedPtr<SaveOptions> options);
    void SaveFormats(System::String outputFileName, System::SharedPtr<SaveOptions> options);
    bool IsStreamSavableFormat(System::SharedPtr<SaveOptions> options);
    void InternalSave(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<SaveOptions> options);
    void Report(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<SaveOptions> options);
    System::SharedPtr<System::IO::Stream> SaveNonPdf(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<SaveOptions> options);
    void InternalSave(System::SharedPtr<System::Web::HttpResponse> response, System::String outputFileName, ContentDisposition disposition, System::SharedPtr<SaveOptions> options);
    /// <summary>
    /// Substitutes all not accessible fonts in document using default font name passed
    /// </summary>
    /// <param name="doc">document</param>
    /// <param name="defaultFontName">default font name</param>
    static void SubstituteFontsWithDefaultFont(System::SharedPtr<Document> doc, System::String defaultFontName);
    /// <summary>
    /// Removed unused fonts from document
    /// </summary>
    /// <param name="pages"></param>
    static void RemoveUnusedFonts(System::SharedPtr<PageCollection> pages);
    void RepairAnnotations();
    /// <summary>
    /// Repairs uncorrect parameters in Fonts descriptors.
    /// </summary>
    void RepairFontsDescriptors();
    bool ScanFontsDescriptors();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::CommonData::Text::Fonts::IPdfFontDescriptor>>> CollectFontDescriptors(System::SharedPtr<Page> page);
    /// <summary>
    /// Remove broken operators.
    /// </summary>
    void RemoveBrokenOperators();
    /// <summary>
    /// Checks page for broken operators.
    /// </summary>
    bool CheckBrokenOperators();
    /// <summary>
    /// Collects list of redundant operators
    /// </summary>
    /// <param name="page">Page that needs to be scanned for broken operators</param>
    /// <returns>List of broken page operators</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CollectBrokenOperators(System::SharedPtr<Page> page);
    /// <summary>
    /// Creates map of unlinked objects.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, bool>> DetectLostLinks();
    /// <summary>
    /// Checks objects links.
    /// </summary>
    void MarkNodes(System::SharedPtr<Engine::Data::IPdfPrimitive> pdfObject, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, bool>>& isLinkedDictionary);
    void CleanUpOrderArray(System::SharedPtr<Engine::Data::IPdfArray> orderArray, System::SharedPtr<Engine::Data::IPdfArray> subArray, int32_t index);
    bool IsDictionaryHasName(System::SharedPtr<Engine::Data::IPdfPrimitive> obj, System::String name);
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Pdf
} // namespace Aspose


