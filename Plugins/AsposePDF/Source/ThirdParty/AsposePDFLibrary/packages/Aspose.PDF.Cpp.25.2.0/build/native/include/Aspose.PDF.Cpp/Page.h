#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/multicast_delegate.h>
#include <system/idisposable.h>
#include <system/event.h>
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
class AnnotationCollection;
class AnnotationSelector;
class ExplicitDestination;
class FdfReader;
class FileAttachmentAnnotation;
class HideAction;
class Redaction;
class ScreenAnnotation;
class TextMarkupAnnotation;
class WidgetAnnotation;
} // namespace Annotations
class ApsFragment;
class ApsFragmentCollection;
class ApsToPdfConverter;
class ApsUsingConverter;
class Artifact;
class ArtifactCollection;
class BackgroundArtifact;
class Cell;
class Color;
enum class ColorType;
class CompositingParameters;
class ContentsAppender;
namespace DataEditor
{
class CosPdfDictionary;
class DictionaryEditor;
} // namespace DataEditor
namespace Devices
{
class ImageGenerator;
class PageDevice;
class Resolution;
} // namespace Devices
class DocOutOfMemoryHandler;
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
class IPage;
class IPageTreeNode;
namespace Text
{
namespace Fonts
{
namespace Utilities
{
class DocumentCIDType2FontContentUpdater;
class DocumentFontsSubsetter;
class DocumentFontsSubstitutor;
class DocumentFontsUnembedder;
template <typename> class FontsRemover;
class PageAnnotationProcessor;
} // namespace Utilities
} // namespace Fonts
namespace Segmenting
{
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
} // namespace Data
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
class PdfAConvertStrategyBase;
class PdfConvertStrategy;
class PdfUaConvertStrategy;
class PdfXConvertStrategy;
class SearchablePdfConvertStrategy;
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
class LogicalStructureConcatenation;
class LogicalStructureCopier;
class PdfContentEditor;
class PdfFileEditor;
class PdfFileMend;
class PdfPageEditor;
} // namespace Facades
class FloatingBox;
class FlowConverter;
class FlowToTableAbsorber;
class FormattedFragment;
namespace Forms
{
class ButtonField;
class CheckboxField;
class ComboBoxField;
class DateField;
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
class GraphInfo;
class Group;
namespace GroupProcessor
{
class TextExtractor;
} // namespace GroupProcessor
class HeaderFooter;
class Heading;
class HtmlFragment;
class Image;
class ImagePlacement;
class ImagePlacementAbsorber;
class ImageStamp;
namespace Interchange
{
class ContentSequencePage;
class DocumentInterchange;
} // namespace Interchange
class Layer;
class LayerProcessor;
namespace LogicalStructure
{
class MCRElement;
class StructureElement;
} // namespace LogicalStructure
class Matrix;
namespace OFD
{
namespace Converters
{
class AnnotationsConverter;
class PageBlockConverter;
} // namespace Converters
} // namespace OFD
class Operator;
class OperatorCollection;
namespace Operators
{
class BDC;
} // namespace Operators
namespace Optimization
{
class ImageCompressor;
class ResourceOptimizer;
} // namespace Optimization
class OutlineCollection;
class PageActionCollection;
class PageCollection;
class PageCollectionExtension;
class PageGenerator;
class PageInfo;
namespace PageModel
{
class AnnotationElement;
class GraphicElement;
class ImageElement;
class TextElement;
} // namespace PageModel
class PageSize;
class Paragraphs;
class PdfPageStamp;
class PdfToApsConverter;
namespace PdfToMarkdown
{
class OutlinesHeaderDetector;
class PageContentModel;
class PageLayoutViewer;
} // namespace PdfToMarkdown
class Rectangle;
class Resources;
enum class Rotation;
class Row;
class Stamp;
class Table;
enum class TabOrder;
namespace Tagged
{
class TaggedContent;
class TaggedContext;
} // namespace Tagged
namespace Tests
{
namespace Engine
{
namespace Commands
{
class PageContentCommandProcessorTests;
} // namespace Commands
namespace IO
{
class PdfAConvertTests;
class PdfUaConvertTests;
class PdfUaGenerateTests;
class PdfXConvertTests;
} // namespace IO
} // namespace Engine
namespace Facades
{
class PdfFileStampTests;
} // namespace Facades
namespace Layers
{
class LayersTests;
} // namespace Layers
class PageTreeBalancerTests;
namespace PDFUA
{
class PDFUA_CreatingTests;
} // namespace PDFUA
class RegressionTests_v10_4;
class RegressionTests_v10_8;
class RegressionTests_v11_2;
class RegressionTests_v11_4;
class RegressionTests_v11_8;
class RegressionTests_v17_11;
class RegressionTests_v18_2;
class RegressionTests_v19_11;
class RegressionTests_v20_06;
class RegressionTests_v20_08;
class RegressionTests_v21_11;
class RegressionTests_v21_3;
class RegressionTests_v22_05;
class RegressionTests_v22_11;
class RegressionTests_v23_07;
class RegressionTests_v23_09;
class RegressionTests_v23_10;
class RegressionTests_v23_11;
class RegressionTests_v24_02;
class RegressionTests_v24_06;
class RegressionTests_v6_3;
class RegressionTests_v6_7;
class RegressionTests_v6_9;
class RegressionTests_v7_0;
class RegressionTests_v7_1;
class RegressionTests_v7_2;
class RegressionTests_v7_4;
class RegressionTests_v7_5;
class RegressionTests_v7_7;
class RegressionTests_v7_8;
class RegressionTests_v7_9;
class RegressionTests_v8_0;
class RegressionTests_v8_1;
class RegressionTests_v8_3;
class RegressionTests_v8_4;
class RegressionTests_v8_6;
class RegressionTests_v8_7;
class RegressionTests_v9_0;
class RegressionTests_v9_4;
class RegressionTests_v9_8;
class RegressionTests_v9_9;
class TestBase;
namespace Text
{
class TextParagraphAbsorberTests;
} // namespace Text
} // namespace Tests
class TeXFragment;
namespace Text
{
namespace Adjustment
{
class VirtualPhysicalTextSegment;
} // namespace Adjustment
class FontAbsorber;
class FontCleanup;
class TableAbsorber;
class TextAbsorber;
class TextBuilder;
class TextFragment;
class TextFragmentAbsorber;
class TextFragmentState;
class TextPostReplaceFixer;
class TextState;
} // namespace Text
class TextStamp;
class TocInfo;
namespace Vector
{
namespace Extraction
{
class ApsSvgRenderer;
} // namespace Extraction
class GraphicElementCollection;
class GraphicsAbsorber;
} // namespace Vector
class Watermark;
class XfaToPdfConverter;
class XForm;
class XImageAddingParams;
} // namespace Pdf
namespace Pub
{
class PdfConverter;
class PdfDocumentBuilder;
namespace Utils
{
class PdfUtilities;
} // namespace Utils
} // namespace Pub
namespace Rendering
{
class ApsNode;
} // namespace Rendering
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class RectangleF;
} // namespace Drawing
namespace IO
{
class MemoryStream;
class Stream;
} // namespace IO
namespace Text
{
class StringBuilder;
} // namespace Text
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing page of PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Page final : public System::IDisposable, public Aspose::Pdf::ISupportsMemoryCleanup, public Aspose::Pdf::IOperatorContainer
{
    typedef Page ThisType;
    typedef System::IDisposable BaseType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType1;
    typedef Aspose::Pdf::IOperatorContainer BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsFragment;
    friend class Aspose::Pdf::ApsFragmentCollection;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubsetter;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsUnembedder;
    template<typename FT0> friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontsRemover;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::PageAnnotationProcessor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::FormattedFragment;
    friend class Aspose::Pdf::TeXFragment;
    friend class Aspose::Pdf::Annotations::ExplicitDestination;
    friend class Aspose::Pdf::Interchange::ContentSequencePage;
    friend class Aspose::Pdf::Interchange::DocumentInterchange;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Optimization::ImageCompressor;
    friend class Aspose::Pdf::Optimization::ResourceOptimizer;
    friend class Aspose::Pdf::PdfToApsConverter;
    friend class Aspose::Pdf::Annotations::HideAction;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::PageModel::AnnotationElement;
    friend class Aspose::Pdf::PageModel::GraphicElement;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::Facades::LogicalStructureConcatenation;
    friend class Aspose::Pdf::HtmlFragment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::Text::FontCleanup;
    friend class Aspose::Pdf::GroupProcessor::TextExtractor;
    friend class Aspose::Pdf::Text::TableAbsorber;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::FloatingBox;
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Image;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::Text::FontAbsorber;
    friend class Aspose::Pdf::Devices::ImageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::DocumentExtensions;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::Facades::PdfPageEditor;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Stamp;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::FileAttachmentAnnotation;
    friend class Aspose::Pdf::Annotations::TextMarkupAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::XFA;
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
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::PdfPageStamp;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacement;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Text::TextAbsorber;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::XfaToPdfConverter;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::DocOutOfMemoryHandler;
    friend class Aspose::Pdf::ContentsAppender;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Group;
    friend class Aspose::Pdf::Annotations::ScreenAnnotation;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::BackgroundArtifact;
    friend class Aspose::Pdf::FlowConverter;
    friend class Aspose::Pdf::Forms::DateField;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Vector::GraphicsAbsorber;
    friend class Aspose::Pdf::Facades::LogicalStructureCopier;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA::PdfAOperatorValidator;
    friend class Aspose::Pdf::PdfToMarkdown::OutlinesHeaderDetector;
    friend class Aspose::Pdf::OFD::Converters::AnnotationsConverter;
    friend class Aspose::Pdf::OFD::Converters::PageBlockConverter;
    friend class Aspose::Pdf::PdfToMarkdown::PageContentModel;
    friend class Aspose::Pdf::PdfToMarkdown::PageLayoutViewer;
    friend class Aspose::Pdf::Annotations::FdfReader;
    friend class Aspose::Pdf::Vector::Extraction::ApsSvgRenderer;
    friend class Aspose::Pdf::Layer;
    friend class Aspose::Pdf::LayerProcessor;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA1ConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    friend class Aspose::Pdf::Engine::Presentation::IndependentImpl::ColorInitializerStrategies::ContentToGrayConversion;
    friend class Aspose::Pdf::PageCollectionExtension;
    friend class Aspose::Pdf::DataEditor::DictionaryEditor;
    friend class Aspose::Pdf::Text::Adjustment::VirtualPhysicalTextSegment;
    friend class Aspose::Pdf::DataEditor::CosPdfDictionary;
    friend class Aspose::Pdf::FlowToTableAbsorber;
    friend class Aspose::Pdf::Tests::TestBase;
    friend class Aspose::Pdf::Tests::Engine::Commands::PageContentCommandProcessorTests;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfAConvertTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfXConvertTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfUaConvertTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_11;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfUaGenerateTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_06;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_08;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_05;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_09;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_02;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_06;
    friend class Aspose::Pdf::Tests::Facades::PdfFileStampTests;
    friend class Aspose::Pdf::Tests::PDFUA::PDFUA_CreatingTests;
    friend class Aspose::Pdf::Tests::PageTreeBalancerTests;
    friend class Aspose::Pdf::Tests::Layers::LayersTests;
    friend class Aspose::Pub::Utils::PdfUtilities;
    friend class Aspose::Pub::PdfConverter;
    friend class Aspose::Pub::PdfDocumentBuilder;
    
public:

    /// <summary>
    /// Procedure for customize header and footer.
    /// </summary>
    /// /// <param name="page">The current page.</param>
    using BeforePageGenerate = System::MulticastDelegate<void(System::SharedPtr<Page>)>;
    
    
public:

    /// <summary>
    /// Gets the addition of paragraphs after the last paragraph of the page
    /// </summary>
    /// <value>
    /// Value indicates whether paragraphs will be added after the last paragraph of the page.
    /// Paragraphs will be added after the last paragraph of the page if value is true.
    /// </value>
    ASPOSE_PDF_SHARED_API bool get_IsAddParagraphsAfterLast() const;
    /// <summary>
    /// Sets the addition of paragraphs after the last paragraph of the page
    /// </summary>
    /// <value>
    /// Value indicates whether paragraphs will be added after the last paragraph of the page.
    /// Paragraphs will be added after the last paragraph of the page if value is true.
    /// </value>
    ASPOSE_PDF_SHARED_API void set_IsAddParagraphsAfterLast(bool value);
    /// <summary>
    /// Gets background image for page (for generator only, not filled in when reading document).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Image> get_BackgroundImage() const;
    /// <summary>
    /// Sets background image for page (for generator only, not filled in when reading document).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundImage(System::SharedPtr<Image> value);
    /// <summary>
    /// Gets table of contents info.
    /// </summary>
    /// <value>The table of contents info - default null. If it set this page will contain table of contents.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::TocInfo> get_TocInfo() const;
    /// <summary>
    /// Sets table of contents info.
    /// </summary>
    /// <value>The table of contents info - default null. If it set this page will contain table of contents.</value>
    ASPOSE_PDF_SHARED_API void set_TocInfo(System::SharedPtr<Aspose::Pdf::TocInfo> value);
    /// <summary>
    /// Gets page header.
    /// </summary>
    /// <value>The page header.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<HeaderFooter> get_Header() const;
    /// <summary>
    /// Sets page header.
    /// </summary>
    /// <value>The page header.</value>
    ASPOSE_PDF_SHARED_API void set_Header(System::SharedPtr<HeaderFooter> value);
    /// <summary>
    /// Gets layers collection.
    /// </summary>
    /// <value>The layers collection.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Layer>>> get_Layers();
    /// <summary>
    /// Sets layers collection.
    /// </summary>
    /// <value>The layers collection.</value>
    ASPOSE_PDF_SHARED_API void set_Layers(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Layer>>> value);
    /// <summary>
    /// Gets page footer.
    /// </summary>
    /// <value>The page footer.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<HeaderFooter> get_Footer() const;
    /// <summary>
    /// Sets page footer.
    /// </summary>
    /// <value>The page footer.</value>
    ASPOSE_PDF_SHARED_API void set_Footer(System::SharedPtr<HeaderFooter> value);
    /// <summary>
    /// Gets the paragraphs.
    /// </summary>
    /// <value>The paragraphs.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    /// <summary>
    /// Gets the paragraphs.
    /// </summary>
    /// <value>The paragraphs.</value>
    ASPOSE_PDF_SHARED_API void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets the page info (for generator only, not filled in when reading document).
    /// </summary>
    /// <value>The page info.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::PageInfo> get_PageInfo();
    /// <summary>
    /// Sets the page info (for generator only, not filled in when reading document).
    /// </summary>
    /// <value>The page info.</value>
    ASPOSE_PDF_SHARED_API void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    /// <summary>
    /// Gets rectangle of the page.
    /// For get: page crop box is returned if specified, otherwise page media box is returned.
    /// For set: page media box always set.
    /// Please note that this property don't consider page rotation. To get page rectangle considering rotation please use ActualRect.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rect();
    /// <summary>
    /// Sets rectangle of the page.
    /// For get: page crop box is returned if specified, otherwise page media box is returned.
    /// For set: page media box always set.
    /// Please note that this property don't consider page rotation. To get page rectangle considering rotation please use ActualRect.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_Rect(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Sets color type of the pages based on information getting from operators SetColor,
    /// images and forms.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ColorType get_ColorType();
    /// <summary>
    /// Gets the line style for notes.(for generator only, not filled in when reading document)
    /// </summary>
    /// <value>The note style.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<GraphInfo> get_NoteLineStyle();
    /// <summary>
    /// Sets the line style for notes.(for generator only, not filled in when reading document)
    /// </summary>
    /// <value>The note style.</value>
    ASPOSE_PDF_SHARED_API void set_NoteLineStyle(System::SharedPtr<GraphInfo> value);
    /// <summary>
    /// Gets tab order of the page. 
    /// Possible values: Row, Column. Default, Manual
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::TabOrder get_TabOrder();
    /// <summary>
    /// Sets tab order of the page. 
    /// Possible values: Row, Column. Default, Manual
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TabOrder(Aspose::Pdf::TabOrder value);
    /// <summary>
    /// Gets of set page display duration. This is time in seconds that page shall be displayed during presentation.
    /// Returns -1 if duration is not defined. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API double get_Duration();
    /// <summary>
    /// Gets of set page display duration. This is time in seconds that page shall be displayed during presentation.
    /// Returns -1 if duration is not defined. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_Duration(double value);
    /// <summary>
    /// Gets collection of operators in the content stream of the page.
    /// <see cref="OperatorCollection"></see>
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OperatorCollection> get_Contents() override;
    /// <summary>
    /// Gets a group attributes class specifying the attributes of the page's page group for use in the transparent imaging model.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Group> get_Group();
    /// <summary>
    /// Sets a group attributes class specifying the attributes of the page's page group for use in the transparent imaging model.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Group(System::SharedPtr<Aspose::Pdf::Group> value);
    /// <summary>
    /// Gets collection of page annotations.
    /// <see cref="Annotations"></see>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotations::AnnotationCollection> get_Annotations();
    /// <summary>
    /// Gets page resources. Resources object contains collections of images, forms and fonts.
    /// <see cref="Resources"></see>
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Resources> get_Resources() override;
    /// <summary>
    /// Gets rotation of the page.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Rotation get_Rotate();
    /// <summary>
    /// Sets rotation of the page.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_Rotate(Rotation value);
    /// <summary>
    /// Gets trim box of the page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_TrimBox();
    /// <summary>
    /// Sets trim box of the page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_TrimBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets art box of the page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_ArtBox();
    /// <summary>
    /// Sets art box of the page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_ArtBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets bleed box of the page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_BleedBox();
    /// <summary>
    /// Sets bleed box of the page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_BleedBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets crop box of the page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_CropBox();
    /// <summary>
    /// Sets crop box of the page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_CropBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets media box of the page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_MediaBox();
    /// <summary>
    /// Sets media box of the page. 
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_MediaBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Get number of the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Number();
    /// <summary>
    /// Gets transofmation matrix for the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> get_RotationMatrix();
    /// <summary>
    /// Gets the background color of the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Background();
    /// <summary>
    /// Sets the background color of the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Background(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets the watermark of the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Watermark> get_Watermark();
    /// <summary>
    /// Sets the watermark of the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Watermark(System::SharedPtr<Aspose::Pdf::Watermark> value);
    /// <summary>
    /// Gets collection of artifacts on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ArtifactCollection> get_Artifacts();
    /// <summary>
    /// Gets collection of page properties.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PageActionCollection> get_Actions();
    /// <summary>
    /// Gets list of Field object in Tab order on this page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Forms::Field>>> get_FieldsInTabOrder();
    /// <summary>
    /// Gets UserUnit value. A positive number giving the size of default user space units, in multiples of 1 / 72 inch.
    /// Default value is 1. Please set zero or negative value in order to clear this entry in page.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_UserUnit();
    /// <summary>
    /// Sets UserUnit value. A positive number giving the size of default user space units, in multiples of 1 / 72 inch.
    /// Default value is 1. Please set zero or negative value in order to clear this entry in page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UserUnit(double value);
    
    /// <summary>
    /// Merges all layers on the page into a single layer with the specified new layer name.
    /// </summary>
    /// <param name="newLayerName">The name of the new layer after merging.</param>
    ASPOSE_PDF_SHARED_API void MergeLayers(System::String newLayerName);
    /// <summary>
    /// Merges all layers on the page into a single layer with the specified new layer name and optional content group Id.
    /// </summary>
    /// <param name="newLayerName">The name of the new layer after merging.</param>
    /// <param name="newOptionalContentGroupId">The optional content group Id for the merged layer.</param>
    ASPOSE_PDF_SHARED_API void MergeLayers(System::String newLayerName, System::String newOptionalContentGroupId);
    /// <summary>
    /// Convert page to PNG for DSR, OMR, OCR image stream.
    /// </summary>
    /// <returns>Image stream.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::MemoryStream> ConvertToPNGMemoryStream();
    /// <summary>
    /// Adds graphics to the page.
    /// Works faster than adding elements one by one with <see cref="GraphicElement::AddOnPage(Page)"></see> method.
    /// </summary>
    /// <param name="elements">Graphics collection.</param>
    /// <param name="rectangle">Elements will be added to the page if it's <seealso cref="GraphicElement::Position"></seealso> is inside the rectangle area.
    /// If rectangle is null, all graphic elements will be added</param>
    ASPOSE_PDF_SHARED_API void AddGraphics(System::SharedPtr<Vector::GraphicElementCollection> elements, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle = nullptr);
    /// <summary>
    /// Deletes graphics from the page.
    /// Works faster than deleting elements one by one with <see cref="GraphicElement::Remove"></see> method.
    /// </summary>
    /// <param name="elementsToDelete">Graphics collection that will be deleted from the page.</param>
    ASPOSE_PDF_SHARED_API void DeleteGraphics(System::SharedPtr<Vector::GraphicElementCollection> elementsToDelete);
    /// <summary>
    /// Tries to save vector graphics if they are present on the page. The save format is SVG.
    /// </summary>
    /// <param name="pathToSave">Output file</param>
    /// <returns>True if the page contains path construction operators; otherwise, False.</returns>
    ASPOSE_PDF_SHARED_API bool TrySaveVectorGraphics(System::String pathToSave);
    /// <summary>
    /// Detect of the presence of vector graphics, if it is present on the page.
    /// </summary>
    /// <returns>True if the page contains path construction operators; otherwise, False.</returns>
    ASPOSE_PDF_SHARED_API bool HasVectorGraphics();
    
    /// <summary>
    /// Event for customize header and footer.
    /// </summary>
    System::Event<void(System::SharedPtr<Page>)> OnBeforePageGenerate;
    
    /// <summary>
    /// Gets the flag whether page is blank or not.
    /// </summary>
    /// <param name="fillThresholdFactor">The fill threshold value that manages the sensitivity of detection. Should be equal or greater than 0.01.</param>
    /// <returns>True - if page is blank; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool IsBlank(double fillThresholdFactor);
    /// <summary>        
    /// Returns rectangle of the page according to its CropBox (or MediaBox if CropBox null).
    /// </summary>
    /// <param name="considerRotation">If true then rotation of the page will be considered in rect calculation.</param>
    /// <returns>Rectangle of the page.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> GetPageRect(bool considerRotation);
    /// <summary>
    /// Calculates bbox value - rectangle containing contents without visible margins.
    /// </summary>
    /// <returns>Bbox value - rectangle containing contents without visible margins</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> CalculateContentBBox();
    /// <summary>
    /// Retrieves the resources associated with the page.
    /// </summary>
    /// <returns>A <see cref="Resources"></see> object representing the resources of the page.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Resources> GetResources() override;
    /// <summary>
    /// Sends page to process with given page device.
    /// </summary>
    /// <param name="device">
    /// The device to process page.
    /// </param>
    /// <param name="output">
    /// Result stream which is used with device to save its output.
    /// </param>
    ASPOSE_PDF_SHARED_API void SendTo(System::SharedPtr<Devices::PageDevice> device, System::SharedPtr<System::IO::Stream> output);
    /// <summary>
    /// Accepts <see cref="AnnotationSelector"></see> visitor object that provides functionality to work with annotations.
    /// </summary>
    /// <param name="visitor">Annotation selector sobject.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<Annotations::AnnotationSelector>& visitor);
    /// <summary>
    /// Translates rotation enumeration member into integer value.
    /// </summary>
    /// <param name="rotation">Rotation enumeratioom member.</param>
    /// <returns>Corresponding integer value</returns>
    static ASPOSE_PDF_SHARED_API int32_t RotationToInt(Rotation rotation);
    /// <summary>
    /// Translates integer value into corresponding rotation enumeration member.
    /// </summary>
    /// <param name="rotation">Integer value to convert</param>
    /// <returns>Rotation enumeration member</returns>
    static ASPOSE_PDF_SHARED_API Rotation IntToRotation(int32_t rotation);
    /// <summary>
    /// Put stamp into page. Stamp can be page number, image or simple text, e.g. some logo.
    /// </summary>
    /// <param name="stamp">
    /// Stamp to add on the page. 
    /// Each stamp has its coordinates and corresponding properties regarding to the kind of stamp, 
    /// i.e. image or text value.
    /// </param>
    ASPOSE_PDF_SHARED_API void AddStamp(System::SharedPtr<Stamp> stamp);
    /// <summary>
    /// Adds image onto the page and locates it in the middle of specified rectangle saving image's proportion.
    /// </summary>
    /// <param name="imageStream">The stream of the image.</param>
    /// <param name="imageRect">The position of the image.</param>
    /// <param name="bbox">Bbox of the image.</param>
    /// <param name="autoAdjustRectangle">Adjust image in center of the input rectangle.</param>
    ASPOSE_PDF_SHARED_API void AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::SharedPtr<Aspose::Pdf::Rectangle> imageRect, System::SharedPtr<Aspose::Pdf::Rectangle> bbox = nullptr, bool autoAdjustRectangle = true);
    /// <summary>
    /// Adds searchable image onto the page and locates it in the middle of specified rectangle saving image's proportion.
    /// </summary>
    /// <param name="hocr">The hocr of the image.</param>
    /// <param name="imageStream">The stream of the image.</param>
    /// <param name="imageRect">The position of the image.</param>
    /// <param name="bbox">The bbox of the image.</param>
    ASPOSE_PDF_SHARED_API void AddImage(System::String hocr, System::SharedPtr<System::IO::Stream> imageStream, System::SharedPtr<Aspose::Pdf::Rectangle> imageRect, System::SharedPtr<Aspose::Pdf::Rectangle> bbox = nullptr);
    /// <summary>
    /// Adds image on page and places it depend on image rectangle position.
    /// </summary>
    /// <param name="imageStream">The stream of the image.</param>
    /// <param name="imageRect">The default position of the image on page.</param>
    /// <param name="imageWidth">The width of the image.</param>
    /// <param name="imageHeight">The height of the image.</param>
    /// <param name="saveImageProportions">If the flag set to true than image placed in rectangle position; otherwise, the size of rectange is becoming equal to image size.</param>
    /// <param name="bbox">The bbox of the image.</param>
    ASPOSE_PDF_SHARED_API void AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::SharedPtr<Aspose::Pdf::Rectangle> imageRect, int32_t imageWidth, int32_t imageHeight, bool saveImageProportions, System::SharedPtr<Aspose::Pdf::Rectangle> bbox = nullptr);
    /// <summary>
    /// Adds image onto the page and locates it in the middle of specified rectangle saving image's proportion.
    /// </summary>
    /// <param name="imagePath">The path to image.</param>
    /// <param name="rectangle">The position of the image.</param>
    ASPOSE_PDF_SHARED_API void AddImage(System::String imagePath, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    /// <summary>
    /// Sends page to process with given page device.
    /// </summary>
    /// <param name="device">
    /// The device to process page.
    /// </param>
    /// <param name="outputFileName">
    /// File which is used with device to save its output.
    /// </param>
    ASPOSE_PDF_SHARED_API void SendTo(System::SharedPtr<Devices::PageDevice> device, System::String outputFileName);
    /// <summary>
    /// Removes all fields located on the page and place their values instead.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Flatten();
    /// <summary>
    /// Accepts <see cref="TextFragmentAbsorber"></see> visitor object that provides functionality to work with text objects.
    /// </summary>
    /// <param name="visitor">Text absorber object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<Text::TextFragmentAbsorber>& visitor);
    /// <summary>
    /// Accepts <see cref="ImagePlacementAbsorber"></see> visitor object that provides functionality to work with image placement objects.
    /// </summary>
    /// <param name="visitor">Image placement absorber object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<ImagePlacementAbsorber>& visitor);
    /// <summary>
    /// Accepts <see cref="TextAbsorber"></see> visitor object that provides functionality to work with text objects.
    /// </summary>
    /// <param name="visitor">Text absorber object.</param>
    ASPOSE_PDF_SHARED_API void Accept(const System::SharedPtr<Text::TextAbsorber>& visitor);
    /// <summary>
    /// Sets page size for page. 
    /// </summary>
    /// <param name="width">Page width.</param>
    /// <param name="height">Page size.</param>
    ASPOSE_PDF_SHARED_API void SetPageSize(double width, double height);
    /// <summary>
    /// Frees up memory
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    /// <summary>
    /// Converts the page to grayscale.
    /// </summary>
    ASPOSE_PDF_SHARED_API void MakeGrayscale();
    /// <summary>
    /// Clears cached data
    /// </summary>
    ASPOSE_PDF_SHARED_API void FreeMemory() override;
    /// <summary>
    /// Returns notifications about inside operations with page content. (Only notifications about paragraph events in text adding scenarios are supported now.)
    /// </summary>
    /// <returns>String representing notifications about inside operations with page content.</returns>
    ASPOSE_PDF_SHARED_API System::String GetNotifications();
    /// <summary>
    /// Converts current page as bitmap and than returns array of bytes.
    /// </summary>
    /// <param name="resolution">The resolution.</param>
    /// <returns>Converted array of image bytes.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<uint8_t> AsByteArray(System::SharedPtr<Devices::Resolution> resolution);
    /// <summary>
    /// Converts current page as xml in utf8 encoding.
    /// </summary>
    /// <returns>Converted xml string.</returns>
    ASPOSE_PDF_SHARED_API System::String AsXml();
    /// <summary>
    /// Resizes the page.
    /// </summary>
    /// <param name="targetSize">The target size.</param>
    ASPOSE_PDF_SHARED_API void Resize(System::SharedPtr<PageSize> targetSize);
    
protected:

    bool detached;
    
    bool get_IsDisposed() const;
    bool get_IsRowExceedPageMode() const;
    void set_IsRowExceedPageMode(bool value);
    double get_IsRowExceedPageHeigth() const;
    void set_IsRowExceedPageHeigth(double value);
    /// <summary>
    /// Gets whether text is added on page.
    /// Value indicates if the text operators on the page have been changed.
    /// Need if we use ContentsAppender class to update contents. See PDFNET-47949.
    /// </summary>
    bool get_IsTextAddedOnPage() const;
    /// <summary>
    /// Sets whether text is added on page.
    /// Value indicates if the text operators on the page have been changed.
    /// Need if we use ContentsAppender class to update contents. See PDFNET-47949.
    /// </summary>
    void set_IsTextAddedOnPage(bool value);
    /// <summary>
    /// Gets page current Y coordinate.
    /// </summary>
    double get_CurY() const;
    /// <summary>
    /// Sets page current Y coordinate.
    /// </summary>
    void set_CurY(double value);
    /// <summary>
    /// Determines should be exceptions ignored during processing of annotations.
    /// </summary>
    bool get_IgnoreAnnotationExceptions() const;
    /// <summary>
    /// Determines should be exceptions ignored during processing of annotations.
    /// </summary>
    void set_IgnoreAnnotationExceptions(bool value);
    /// <summary>
    /// Quickly checks if there are any optional content layers on the page.
    /// </summary>
    bool get_HasLayers();
    /// <summary>
    /// Gets the pages collection.
    /// </summary>
    /// <value>The pages collection.</value>
    System::SharedPtr<PageCollection> get_Pages() const;
    /// <summary>
    /// Gets the pages collection.
    /// </summary>
    /// <value>The pages collection.</value>
    void set_Pages(System::SharedPtr<PageCollection> value);
    /// <summary>
    /// Gets the page id
    /// </summary>
    /// <value>The page id.</value>
    System::String get_Id() const;
    /// <summary>
    /// Sets the page id
    /// </summary>
    /// <value>The page id.</value>
    void set_Id(System::String value);
    /// <summary>
    /// Gets if an AnnotationCollection was created for the page.
    /// </summary>
    bool get_HasAnnotations();
    
    System::WeakPtr<Document> _document;
    System::SharedPtr<Engine::CommonData::IPage> EnginePage;
    
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    bool get_IsNoteMoreThanPage() const;
    void set_IsNoteMoreThanPage(bool value);
    int32_t get___BadNumber();
    /// <summary>
    /// Gets current contents appender.
    /// <see cref="ContentsAppender"></see>
    /// </summary>
    System::SharedPtr<Aspose::Pdf::ContentsAppender> get_ContentsAppender();
    
    void _SetPageNumber(int32_t number);
    /// <summary>
    /// Removes the optional content property with the specified name from the document.
    /// </summary>
    /// <param name="name">The name of the optional content property to be removed.</param>
    void RemoveOptionalContentProperty(System::String name);
    /// <summary>
    /// Removes the optional content property associated with the specified XObject from the document.
    /// </summary>
    /// <param name="xObjectName">The name of the XObject whose optional content property will be removed.</param>
    void RemoveOptionalContentPropertyFromXObject(System::String xObjectName);
    /// <summary>
    /// Returns page marked content properties dictionary.
    /// </summary>
    /// <returns>The IPdfDictionary object.</returns>
    System::SharedPtr<Engine::Data::IPdfDictionary> GetMarkedContentProperties();
    /// <summary>
    /// Get next page and apply defaults.
    /// </summary>
    static System::SharedPtr<Page> GetNextPage(System::SharedPtr<Page> page);
    /// <summary>
    /// Process header and footer.
    /// </summary>
    void ProcessHeaderFooters();
    void SetPageInfo();
    static void PrintBackgroundImage(System::SharedPtr<Image> image, double width, double height, double curX, double curY, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Page> page);
    static System::SharedPtr<Page> ProcessPage(System::SharedPtr<Page> page);
    /// <summary>
    /// Process generator paragraphs.
    /// </summary>
    void ProcessParagraphs();
    /// <summary>
    /// Accepts <see cref="ApsNode"></see> aps root node (page, canvas, path, etc) object that needed to add onto the page, the clipping feature is skipped. The content is added onto the page.
    /// </summary>
    /// <param name="node">The aps root node object.</param>
    /// <param name="rectangle">The size of area to add apps node object.</param>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> Accept(System::SharedPtr<Aspose::Rendering::ApsNode> node, System::Drawing::RectangleF rectangle);
    /// <summary>
    ///  Accepts <see cref="ApsNode"></see> aps root node (page, canvas, path, etc) object that needed to add onto the page with clipping feature. The content is added onto the page.        
    /// </summary>
    /// <param name="node">The aps root node object.</param>
    /// <param name="rectangle">The size of area to add apps node object.</param>
    /// <param name="useClipping">The flag determines whether aps fragment is being clipped or not.</param>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> Accept(System::SharedPtr<Aspose::Rendering::ApsNode> node, System::Drawing::RectangleF rectangle, bool useClipping);
    /// <summary>
    /// Accepts <see cref="ApsNode"></see> aps root node (page, canvas, path, etc) object that needed to add onto the page.
    /// </summary>
    /// <param name="node">The aps root node object.</param>
    /// <param name="rectangle">The size of area to add apps node object.</param>
    /// <param name="useClipping">The flag determines whether aps fragment is being clipped or not.</param>
    /// <param name="addContent">The flag determines whether aps fragment is being drawed or not.</param>
    /// <returns>The list of operators that aps fragment conatains.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> Accept(System::SharedPtr<Aspose::Rendering::ApsNode> node, System::Drawing::RectangleF rectangle, bool useClipping, bool addContent);
    /// <summary>
    /// Returns rectangle of the page according to its CropBox and MediaBox; 
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRect();
    void InvalidateAnnotations();
    
    Page(System::SharedPtr<Engine::CommonData::IPage> page);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Page, CODEPORTING_ARGS(System::SharedPtr<Engine::CommonData::IPage> page));
    /// <summary>
    /// Returns dictionary that contains frequencies for every unique rotation angle of text found.
    /// </summary>
    /// <returns>Returns dictionary that contains frequencies for every unique rotation angle of text found.</returns>
    System::SharedPtr<System::Collections::Generic::Dictionary<double, int32_t>> GetTextRotationStatistic();
    void UpdateContents();
    /// <summary>
    /// Updates the resources.
    /// </summary>
    void UpdateResources();
    /// <summary>
    /// Adds image onto the page and locates it in the middle of specified rectangle saving image's proportion.
    /// </summary>
    /// <param name="addingParams">XImage adding parameters.</param>
    /// <param name="rectangle">The position of the image.</param>
    /// <param name="bbox">Bbox of the image.</param>
    /// <param name="compositingParameters">The compositing parameters.</param>
    /// <returns>List of operators that add image.</returns> 
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> AddImage(System::SharedPtr<XImageAddingParams> addingParams, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, System::SharedPtr<Aspose::Pdf::Rectangle> bbox, System::SharedPtr<CompositingParameters> compositingParameters, bool autoAdjustRectangle = true);
    /// <summary>
    /// Adds image onto the page and locates it in the middle of specified rectangle saving image's proportion.
    /// </summary>
    /// <param name="addingParams">XImage adding parameters.</param>
    /// <param name="rectangle">The position of the image.</param>
    /// <param name="bbox">Bbox of the image.</param>
    /// <param name="rotationMatrix">The rotation matrix.</param>
    /// <param name="compositingParameters">The compositing parameters.</param>
    /// <param name="pdfObject">Returns the created image pdf object.</param>
    /// <returns>List of operators that add image.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> AddImage(System::SharedPtr<XImageAddingParams> addingParams, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, System::SharedPtr<Aspose::Pdf::Rectangle> bbox, System::SharedPtr<Matrix> rotationMatrix, System::SharedPtr<CompositingParameters> compositingParameters, System::SharedPtr<Engine::Data::IPdfObject>& pdfObject, bool isTagged = false, int32_t MCID = 0, bool autoAdjustRectangle = true);
    /// <summary>
    /// Adds image onto the page.
    /// </summary>
    /// <param name="addingParams">The stream of the image.</param>
    /// <param name="rectangle">The position of the image. If the rectangle is the point image will be added in original size.</param>
    /// <param name="bbox">Bbox of the image.</param>
    /// <param name="compositingParameters">The compositing parameters.</param>
    /// <param name="addImage">If true image will be added otherwise not.</param>
    /// <returns>List of operators that add image.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> AddImage(System::SharedPtr<XImageAddingParams> addingParams, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, System::SharedPtr<Aspose::Pdf::Rectangle> bbox, System::SharedPtr<CompositingParameters> compositingParameters, bool addImage, System::SharedPtr<System::IO::Stream> predefinedStream, bool isTagged = false, int32_t MCID = 0);
    /// <summary>
    /// Adds image onto the page.
    /// </summary>
    /// <param name="addingParams">XImage adding parameters.</param>
    /// <param name="rectangle">The position of the image. If the rectangle is the point image will be added in original size.</param>
    /// <param name="bbox">Bbox of the image.</param>
    /// <param name="rotationMatrix">The rotation matrix.</param>
    /// <param name="compositingParameters">The compositing parameters.</param>
    /// <param name="addImage">If true image will be added otherwise not.</param>
    /// <param name="pdfObject">Returns the created image pdf object.</param> 
    /// <returns>List of operators that add image.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> AddImage(System::SharedPtr<XImageAddingParams> addingParams, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, System::SharedPtr<Aspose::Pdf::Rectangle> bbox, System::SharedPtr<Matrix> rotationMatrix, System::SharedPtr<CompositingParameters> compositingParameters, bool addImage, System::SharedPtr<Engine::Data::IPdfObject>& pdfObject, System::SharedPtr<System::IO::Stream> predefinedStream = nullptr, bool isTagged = false, int32_t MCID = 0);
    void Flatten4(bool doRemoveFiedls);
    /// <summary>
    /// 
    /// </summary>
    /// <param name="transition"></param>
    void SetTransition(System::SharedPtr<Engine::Data::IPdfDictionary> transition);
    /// <summary>
    /// Remove references to XObject from page contents (i.e. all Do operators which use name of object).
    /// </summary>
    /// <param name="name"></param>
    void RemoveObjectReferences(System::String name);
    static void RemoveObjectReferences(System::SharedPtr<OperatorCollection> contents, System::String name);
    bool IsUsedOnPage(System::String name);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> FindReferences(System::String name);
    /// <summary>
    /// Returns list of operators which uses resource with specified name.
    /// </summary>
    /// <param name="name"></param>
    /// <returns></returns>
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> FindReferences(System::SharedPtr<OperatorCollection> Contents, System::String name);
    void FillUsedObjectsTable(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable, System::SharedPtr<Engine::Data::IPdfDictionary> CommonResources);
    void DeleteUnusedResources(System::SharedPtr<Engine::Data::IPdfDictionary> resources, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable);
    void DeleteUnusedResources(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable);
    void ClearContents();
    void RegisterObservation(System::String message);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    void ReleaseResources();
    void PreSave();
    void RemoveTransparencyGroup();
    
    virtual ASPOSE_PDF_SHARED_API ~Page();
    
private:

    System::SharedPtr<Image> _backgroundImage;
    System::SharedPtr<Aspose::Pdf::Resources> _resources;
    System::SharedPtr<Annotations::AnnotationCollection> _annotations;
    System::SharedPtr<OperatorCollection> _contents;
    System::SharedPtr<Matrix> _rotationMatrix;
    System::SharedPtr<Aspose::Pdf::ContentsAppender> _contentsAppender;
    System::SharedPtr<Aspose::Pdf::Group> _group;
    System::SharedPtr<GraphInfo> noteLineStyle;
    System::String id;
    bool _isDisposed;
    System::SharedPtr<ArtifactCollection> _artifacts;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Layer>>> _layers;
    System::SharedPtr<Aspose::Pdf::Paragraphs> _paragraphs;
    System::SharedPtr<Aspose::Pdf::PageInfo> _pageInfo;
    System::WeakPtr<PageCollection> _pages;
    System::SharedPtr<PageActionCollection> _actions;
    System::SharedPtr<ApsFragmentCollection> _apsFragments;
    System::SharedPtr<Aspose::Pdf::TocInfo> _tocInfo;
    System::SharedPtr<HeaderFooter> _header;
    System::SharedPtr<HeaderFooter> _footer;
    Aspose::Pdf::ColorType _colorType;
    double _curY;
    System::SharedPtr<System::Text::StringBuilder> _observationLog;
    int32_t _number;
    bool pr_IsRowExceedPageMode;
    bool pr_IsAddParagraphsAfterLast;
    double pr_IsRowExceedPageHeigth;
    bool pr_IsTextAddedOnPage;
    bool pr_IgnoreAnnotationExceptions;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    bool pr_IsNoteMoreThanPage;
    
    System::SharedPtr<Layer> GetLayerById(System::String id);
    void InitLayers();
    void MergeLayersPrivate(System::String newLayerName, System::String newOptionalContentGroupId);
    void FillLayerContentFromXObject(System::SharedPtr<Layer> layer);
    /// <summary>
    /// Copy data from this page to another.
    /// </summary>
    /// <value>The source page.</value>
    void AssignData(System::SharedPtr<Page> page);
    static System::ArrayPtr<uint8_t> ReadFully(System::SharedPtr<System::IO::Stream> input);
    void ProcessHeaderFooterGenerators(System::SharedPtr<PageGenerator> generator, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    void ProcessHeaderFooter(System::SharedPtr<HeaderFooter> headerFooter, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    static void ProcessNoteMoreThanPage(System::SharedPtr<Page> page, System::SharedPtr<Page>& newPage, System::SharedPtr<PageGenerator> generator, System::SharedPtr<HeaderFooter> footer, double width, double height, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    static System::SharedPtr<PageGenerator> PrepareFooterGenerator(System::SharedPtr<Page> page, System::SharedPtr<HeaderFooter> footer, double width, double height);
    static void PrepareHeaderGenerator(System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double width, double height);
    static System::SharedPtr<Page> GeneratePageContent(System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double width, double height);
    static System::SharedPtr<Page> GenerateTableOfContents(System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double height);
    static void InvokeBeforePageGenerate(System::SharedPtr<Page> page);
    void UpdateBox(System::String name, System::SharedPtr<Aspose::Pdf::Rectangle> rect);
    int32_t getNodePosition(const System::SharedPtr<Engine::CommonData::IPageTreeNode>& node);
    int32_t getPagesCount(const System::SharedPtr<Engine::CommonData::IPageTreeNode>& node);
    Aspose::Pdf::TabOrder TranslateTabOrder(System::String value);
    /// <summary>
    /// Initializes Annotation appearance if it is not found.
    /// </summary>
    /// <param name="annotation">PDF Object which contains annotation.</param>
    void createAppearance(System::SharedPtr<Engine::Data::IPdfObject> annotation);
    void FixAnnotations();
    void RemoveFields(System::SharedPtr<Engine::Data::IPdfArray> fields, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> toDelete);
    int32_t GetNumber_New();
    /// <summary>
    /// Get number of the page.
    /// </summary>
    int32_t GetNumber_Old();
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetArtifactOperators(System::SharedPtr<OperatorCollection> contents, System::String subtype);
    static bool IsArtifact(System::SharedPtr<Operators::BDC> op, System::String subtype);
    void assertObject();
    /// <summary>
    /// Mark IPdfObject and all its subobjects as used. 
    /// </summary>
    /// <param name="item"></param>
    /// <param name="usageTable"></param>
    void MarkSubitemsUsed(System::SharedPtr<Engine::Data::IPdfPrimitive> item, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable);
    System::SharedPtr<Engine::Data::IPdfObject> FindColorSpaceByName(System::String name);
    void markColorSpaceUsed(System::SharedPtr<Engine::Data::IPdfPrimitive> name, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable);
    void FillUsedObjectsTable(System::SharedPtr<OperatorCollection> operators, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable, System::SharedPtr<Aspose::Pdf::Resources> _Resources, System::SharedPtr<Engine::Data::IPdfDictionary> CommonResources);
    void FillUsedObjectsInAnnotations(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable, System::SharedPtr<Engine::Data::IPdfDictionary> CommonResources);
    
};

} // namespace Pdf
} // namespace Aspose


