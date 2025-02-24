#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/stream.h>
#include <system/exceptions.h>
#include <system/date_time.h>
#include <system/array.h>
#include <DOM/IPresentation.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Fonts
{
namespace TTF
{
class TTFFont;
} // namespace TTF
} // namespace Fonts
namespace Foundation
{
namespace Blob
{
class BlobManager;
class IBlobHandler;
class RewritableFileStreamWrapper;
} // namespace Blob
namespace ImageCache
{
class ImageCacheInfo;
class ImageCacheKey;
} // namespace ImageCache
namespace Utils
{
template <typename, typename> class Cache;
} // namespace Utils
} // namespace Foundation
namespace Slides
{
class AudioCollection;
class AutoShapeLayout;
class BaseSlide;
namespace Charts
{
class Chart;
class DataWorkbookOptions;
class WorkbookManager;
} // namespace Charts
class CommentAuthorCollection;
namespace CompoundFile
{
class CompoundStream;
class MSCDFileSystem;
} // namespace CompoundFile
class CustomData;
class CustomXmlPart;
class CustomXmlPartCollection;
class DigitalSignatureCollection;
class DocumentProperties;
class DocumentProperties_PPT;
namespace DOM
{
namespace Util
{
class SlideDrawingWrapper;
} // namespace Util
} // namespace DOM
namespace Export
{
class DrawingMLExporter;
class ExportNotesSlides;
class IPptxOptions;
class IRenderingOptions;
class ISaveOptions;
class PptxExporter;
enum class SaveFormat;
namespace Web
{
template <typename> class CompiledTemplateContextOf;
} // namespace Web
namespace Xaml
{
class IXamlOptions;
class XamlExporter;
} // namespace Xaml
} // namespace Export
class ExternalTheme;
class FontsListManager;
class FontsManager;
class FontsManagerInternal;
class FontsManagerRenderingGuard;
class FontSubstitutionModule;
class GlobalLayoutSlideCollection;
class HandoutSlideView;
class HandoutsView;
class HyperlinkQueries;
class IAudio;
class IAudioCollection;
class IBaseSlide;
class ICommentAuthor;
class ICommentAuthorCollection;
class ICustomData;
class ICustomXmlPart;
class IDigitalSignature;
class IDigitalSignatureCollection;
class IDocumentProperties;
class IFindResultCallback;
class IFontsManager;
class IGlobalLayoutSlideCollection;
class IHyperlinkQueries;
class IImage;
class IImageCollection;
class ImageCollection;
class IMasterHandoutSlideManager;
class IMasterNotesSlideManager;
class IMasterSlide;
class IMasterSlideCollection;
class INotesSize;
class IPPImage;
class IPresentationHeaderFooterManager;
class IProtectionManager;
class ISection;
class ISectionCollection;
class ISlide;
class ISlideCollection;
class ISlideSize;
class ITextSearchOptions;
class ITextStyle;
class IVideo;
class IVideoCollection;
class IViewProperties;
namespace Layout
{
namespace MathMixed
{
class MathBlocksSplitter;
} // namespace MathMixed
} // namespace Layout
class LayoutPlaceholderManager;
class LayoutTemplates;
class LayoutTemplatesContext;
class LoadOptions;
namespace LowCode
{
class Compress;
class Convert;
} // namespace LowCode
class MasterHandoutSlideManager;
class MasterNotesSlideManager;
class MasterSlide;
class MasterSlideCollection;
class MasterSlideTemplate;
class NotesSize;
namespace OdpSerialization
{
class OdpDeserializationContext;
class OdpDeserializator;
namespace PartParser
{
class BulletFormatOdpDeserialization;
class ContentPartParser;
class OdpStylesPartParser;
class OleObjectFrameOdpDeserialization;
class SettingsPartParser;
class SlideOdpSerialization;
class StylePartsOdpSerialization;
class StyleTextPropertiesOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class OleObjectFrame;
class Paragraph;
class ParagraphFormat;
class PictureEffectiveData;
class PictureFrame;
class PictureFrameLayout;
class PictureImpl;
class Portion;
class PPImage;
namespace PptSerialization
{
class BaseSlidePPTSerialization;
class CameraPPTSerialization;
class LayoutSlidePPTSerialization;
class LightRigPPTSerialization;
class NotesMasterPPTSerialization;
class OleObjectPptSerialization;
class OuterShadowPPTSerialization;
class PptDeserializationContext;
class PptDeserializator;
class PptSerializationContext;
class PptSerializator;
class PptSlideDeserializationContext;
class ShapePPTSerialization;
class TextFormatPPTSerialization;
class TextFramePPTSerialization;
class ThreeDFormatPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class ActiveXPartParser;
class BaseSlidePartParser;
namespace Chart
{
class WorkbookPPTXSerialization;
} // namespace Chart
class EmbeddedFontsCollectionPPTXSerialization;
class OleObjectFramePPTXSerialization;
class PresentationPartParser;
class SectionListPPTXSerialization;
class ShapePPTXSerialization;
class SlideMasterPartParser;
class SlidePartParser;
class TablePPTXSerialization;
class VbaProjectParser;
class ViewPropertiesPartParser;
} // namespace PartParser
class PptxCloner;
class PptxDeserializationContext;
class PptxDeserializator;
class PptxSerializator;
} // namespace PptxSerialization
class PresentationFactory;
class PresentationHeaderFooterManager;
class PresentationInfo;
class PresentationTemplate;
class ProtectionManager;
enum class PVICachingMode;
class SectionCollection;
namespace Serialization
{
class PresentationPropertiesPartParser;
} // namespace Serialization
class Shape;
class ShapeCollection;
class ShapeLayout;
class Slide;
class SlideCollection;
class SlideShowSettings;
class SlideSize;
class SlideTemplateCreator;
namespace SmartArt
{
class SmartArtShape;
} // namespace SmartArt
enum class SourceFormat;
class Table;
class TableCellTextStyle;
class TableStyleCollection;
namespace TextExtraction
{
class PptTextExtractor;
class PptxExtractor;
} // namespace TextExtraction
class TextFrame;
class TextLayout;
namespace TextLayoutParts
{
class CharIterator_PPT;
class PortionLength;
} // namespace TextLayoutParts
class TextParam;
class TextStyle;
class TextStyleEffectiveData;
namespace Theme
{
class FontScheme;
class IMasterTheme;
class MasterTheme;
} // namespace Theme
namespace ThmxSerialization
{
class ThmxDeserializator;
} // namespace ThmxSerialization
class ThmxTheme;
namespace TypicalValues
{
class TypicalValuesRegistryManager;
} // namespace TypicalValues
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class PresentationODPUnsupportedProps;
class PresentationPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class PresentationPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
enum class PresentationTypeEx;
} // namespace UnsupportedProps
namespace Util
{
template <typename> class CachedItem;
class PresentationInfoProc;
} // namespace Util
namespace Vba
{
class IVbaProject;
} // namespace Vba
namespace VbaBinaryFile
{
class VbaProjectRootStorage;
} // namespace VbaBinaryFile
class VentureLicense;
class VentureLicenser;
class VideoCollection;
namespace View
{
class BaseSlideView;
class NotesSlideView;
class SlideView;
} // namespace View
class ViewProperties;
} // namespace Slides
} // namespace Aspose
namespace PdfImport
{
class PdfSlideHelper;
} // namespace PdfImport
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
namespace Drawing
{
class Bitmap;
class Color;
class Size;
} // namespace Drawing
namespace Text
{
namespace RegularExpressions
{
class Regex;
} // namespace RegularExpressions
} // namespace Text
namespace Web
{
class HttpResponse;
} // namespace Web
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a Microsoft PowerPoint presentation.
/// </summary>
/// <example>
/// The following example shows how to create PowerPoint Presentation.
/// <code>
/// // Instantiate a Presentation object that represents a presentation file
/// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>();
/// 
/// // Get the first slide
/// auto slide = presentation->get_Slides()->idx_get(0);
/// // Add an autoshape of type line
/// slide->get_Shapes()->AddAutoShape(ShapeType::Line, 50.0f, 150.0f, 300.0f, 0.0f);
/// // Save the presentation file.
/// presentation->Save(u"NewPresentation_out.pptx", SaveFormat::Pptx);
/// </code>
/// The following example shows how to open and save Presentation.
/// <code>
/// // Load any supported file in Presentation e.g. ppt, pptx, odp etc.
/// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"Sample.odp");
/// 
/// // Save the presentation file.
/// presentation->Save(u"OutputPresenation.pptx", SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS Presentation final : public Aspose::Slides::IPresentation, public Aspose::Slides::IDOMObject
{
    typedef Presentation ThisType;
    typedef Aspose::Slides::IPresentation BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::HandoutSlideView;
    friend class Aspose::Slides::HandoutsView;
    friend class Aspose::Slides::View::BaseSlideView;
    friend class Aspose::Slides::LayoutPlaceholderManager;
    friend class Aspose::Slides::Layout::MathMixed::MathBlocksSplitter;
    template<typename FT0> friend class Aspose::Slides::Export::Web::CompiledTemplateContextOf;
    friend class Aspose::Slides::LowCode::Compress;
    friend class Aspose::Slides::LowCode::Convert;
    friend class Aspose::Slides::AutoShapeLayout;
    friend class Aspose::Slides::ShapeLayout;
    friend class Aspose::Slides::Charts::DataWorkbookOptions;
    friend class Aspose::Slides::Charts::WorkbookManager;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::PictureFrameLayout;
    friend class Aspose::Slides::View::NotesSlideView;
    friend class Aspose::Slides::View::SlideView;
    friend class Aspose::Slides::Portion;
    friend class Aspose::Slides::PictureEffectiveData;
    friend class Aspose::Slides::Export::Xaml::XamlExporter;
    friend class PdfImport::PdfSlideHelper;
    friend class Aspose::Slides::Serialization::PresentationPropertiesPartParser;
    friend class Aspose::Slides::CustomXmlPart;
    friend class Aspose::Slides::PictureImpl;
    friend class Aspose::Slides::PresentationHeaderFooterManager;
    friend class Aspose::Slides::FontSubstitutionModule;
    friend class Aspose::Slides::TextStyleEffectiveData;
    friend class Aspose::Slides::ThmxTheme;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::TextLayoutParts::CharIterator_PPT;
    friend class Aspose::Slides::TextLayoutParts::PortionLength;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::FontsManager;
    friend class Aspose::Slides::PresentationInfo;
    friend class Aspose::Slides::TableCellTextStyle;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::LayoutTemplatesContext;
    friend class Aspose::Slides::TextParam;
    friend class Aspose::Slides::Theme::FontScheme;
    friend class Aspose::Slides::Export::DrawingMLExporter;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::Export::PptxExporter;
    friend class Aspose::Slides::OdpSerialization::PartParser::OleObjectFrameOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::PptSlideDeserializationContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::SectionListPPTXSerialization;
    friend class Aspose::Slides::OdpSerialization::OdpDeserializationContext;
    friend class Aspose::Slides::OdpSerialization::OdpDeserializator;
    friend class Aspose::Slides::OdpSerialization::PartParser::ContentPartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::BulletFormatOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::SlideOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::StylePartsOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::StyleTextPropertiesOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::OdpStylesPartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::SettingsPartParser;
    friend class Aspose::Slides::PptSerialization::NotesMasterPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::VbaProjectParser;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::TextExtraction::PptxExtractor;
    friend class Aspose::Slides::TextExtraction::PptTextExtractor;
    friend class Aspose::Slides::Util::PresentationInfoProc;
    friend class Aspose::Slides::DOM::Util::SlideDrawingWrapper;
    friend class Aspose::Slides::AudioCollection;
    friend class Aspose::Slides::PictureFrame;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::PPImage;
    friend class Aspose::Slides::ImageCollection;
    friend class Aspose::Slides::MasterSlide;
    friend class Aspose::Slides::MasterSlideCollection;
    friend class Aspose::Slides::OleObjectFrame;
    friend class Aspose::Slides::Paragraph;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::Slide;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::SlideSize;
    friend class Aspose::Slides::SmartArt::SmartArtShape;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::VideoCollection;
    friend class Aspose::Slides::TypicalValues::TypicalValuesRegistryManager;
    friend class Aspose::Slides::VentureLicenser;
    friend class Aspose::Slides::PptSerialization::PptSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptDeserializationContext;
    friend class Aspose::Slides::PptSerialization::CameraPPTSerialization;
    friend class Aspose::Slides::PptSerialization::LightRigPPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFormatPPTSerialization;
    friend class Aspose::Slides::PptSerialization::ThreeDFormatPPTSerialization;
    friend class Aspose::Slides::PptSerialization::OuterShadowPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::EmbeddedFontsCollectionPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptSerialization::PptSerializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::ActiveXPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::BaseSlidePartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::OleObjectFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::TablePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PresentationPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::SlideMasterPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::SlidePartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::ViewPropertiesPartParser;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializationContext;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    friend class Aspose::Slides::PptxSerialization::PptxSerializator;
    friend class Aspose::Slides::PptSerialization::BaseSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::ShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::LayoutSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::OleObjectPptSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::PresentationFactory;
    friend class Aspose::Slides::ProtectionManager;
    friend class Aspose::Slides::PresentationTemplate;
    friend class Aspose::Slides::MasterSlideTemplate;
    friend class Aspose::Slides::SlideTemplateCreator;
    friend class Aspose::Slides::LayoutTemplates;
    /// @endcond
    
public:

    /// <summary>
    /// Returns date and time which will substitute content of datetime fields.
    /// Time of this Presentation object creation by default.
    /// Read <see cref="System::DateTime"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::DateTime get_CurrentDateTime() override;
    /// <summary>
    /// Sets date and time which will substitute content of datetime fields.
    /// Time of this Presentation object creation by default.
    /// Write <see cref="System::DateTime"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CurrentDateTime(System::DateTime value) override;
    /// <summary>
    /// Returns actual HeaderFooter manager.
    /// Read-only <see cref="Aspose::Slides::IPresentationHeaderFooterManager">IPresentationHeaderFooterManager</see>.
    /// </summary>
    /// <example>
    /// The following example shows how to set footer visibility inside Slide of PowerPoint Presentation.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"presentation.ppt");
    /// auto slide = presentation->get_Slides()->idx_get(0);
    /// 
    /// System::SharedPtr<IBaseSlideHeaderFooterManager> headerFooterManager = slide->get_HeaderFooterManager();
    /// // Property IsFooterVisible is used for indicating that a slide footer placeholder is not present.
    /// if (!headerFooterManager->get_IsFooterVisible())
    /// {
    ///     // Method SetFooterVisibility is used for making a slide footer placeholder visible.
    ///     headerFooterManager->SetFooterVisibility(true);
    /// }
    /// 
    /// // Property IsSlideNumberVisible is used for indicating that a slide page number placeholder is not present.
    /// if (!headerFooterManager->get_IsSlideNumberVisible())
    /// {
    ///     // Method SetSlideNumberVisibility is used for making a slide page number placeholder visible.
    ///     headerFooterManager->SetSlideNumberVisibility(true);
    /// }
    /// 
    /// // Property IsDateTimeVisible is used for indicating that a slide date-time placeholder is not present.
    /// if (!headerFooterManager->get_IsDateTimeVisible())
    /// {
    ///     // Method SetFooterVisibility is used for making a slide date-time placeholder visible.
    ///     headerFooterManager->SetDateTimeVisibility(true);
    /// }
    /// 
    /// // Method SetFooterText is used for setting text to slide footer placeholder.
    /// headerFooterManager->SetFooterText(u"Footer text");
    /// // Method SetDateTimeText is used for setting text to slide date-time placeholder.
    /// headerFooterManager->SetDateTimeText(u"Date and time text");
    /// presentation->Save(u"Presentation.ppt", SaveFormat::Ppt);
    /// </code>
    /// The following example shows how to set child footer visibility inside Slide.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"presentation.ppt");
    /// System::SharedPtr<IMasterSlideHeaderFooterManager> headerFooterManager = presentation->get_Masters()->idx_get(0)->get_HeaderFooterManager();
    /// 
    /// // Method SetFooterAndChildFootersVisibility is used for making a master slide and all child footer placeholders visible.
    /// headerFooterManager->SetFooterAndChildFootersVisibility(true);
    /// 
    /// // Method SetSlideNumberAndChildSlideNumbersVisibility is used for making a master slide and all child page number placeholders visible.
    /// headerFooterManager->SetSlideNumberAndChildSlideNumbersVisibility(true);
    /// 
    /// // Method SetDateTimeAndChildDateTimesVisibility is used for making a master slide and all child date-time placeholders visible.
    /// headerFooterManager->SetDateTimeAndChildDateTimesVisibility(true);
    /// 
    /// // Method SetFooterAndChildFootersText is used for setting text to master slide and all child footer placeholders.
    /// headerFooterManager->SetFooterAndChildFootersText(u"Footer text");
    /// 
    /// // Method SetDateTimeAndChildDateTimesText is used for setting text to master slide and all child date-time placeholders.
    /// headerFooterManager->SetDateTimeAndChildDateTimesText(u"Date and time text");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentationHeaderFooterManager> get_HeaderFooterManager() override;
    /// <summary>
    /// Gets manager of the permissions for this presentation.
    /// Read-only <see cref="Aspose::Slides::IProtectionManager">IProtectionManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IProtectionManager> get_ProtectionManager() override;
    /// <summary>
    /// Returns a list of all slides that are defined in the presentation.
    /// Read-only <see cref="Aspose::Slides::ISlideCollection">ISlideCollection</see>.
    /// </summary>
    /// <example>
    /// The following example shows how to set slides' background color of PowerPoint Presentation.
    /// <code>
    /// // Instantiate the Presentation class that represents the presentation file
    /// auto pres = System::MakeObject<Presentation>();
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// 
    /// // Set the background color of the first ISlide to Blue
    /// slide->get_Background()->set_Type(BackgroundType::OwnBackground);
    /// slide->get_Background()->get_FillFormat()->set_FillType(FillType::Solid);
    /// slide->get_Background()->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Blue());
    /// pres->Save(u"ContentBG_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following example shows how to set slides' background image of PowerPoint Presentation.
    /// <code>
    /// // Instantiate the Presentation class that represents the presentation file
    /// auto pres = System::MakeObject<Presentation>(u"SetImageAsBackground.pptx");
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// 
    /// // Set the background with Image
    /// slide->get_Background()->set_Type(BackgroundType::OwnBackground);
    /// slide->get_Background()->get_FillFormat()->set_FillType(FillType::Picture);
    /// slide->get_Background()->get_FillFormat()->get_PictureFillFormat()->set_PictureFillMode(Aspose::Slides::PictureFillMode::Stretch);
    /// // Set the picture
    /// auto img = System::ExplicitCast<System::Drawing::Image>(System::MakeObject<System::Drawing::Bitmap>(dataDir + u"Tulips.jpg"));
    /// // Add image to presentation's images collection
    /// auto imgx = pres->get_Images()->AddImage(img);
    /// slide->get_Background()->get_FillFormat()->get_PictureFillFormat()->get_Picture()->set_Image(imgx);
    /// // Write the presentation to disk
    /// pres->Save(u"ContentBG_Img_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following example shows how to add slide transition Presentation.
    /// <code>
    /// // Instantiate Presentation class to load the source presentation file
    /// auto presentation = System::MakeObject<Presentation>(u"AccessSlides.pptx");
    /// 
    /// // Apply circle type transition on slide 1
    /// presentation->get_Slides()->idx_get(0)->get_SlideShowTransition()->set_Type(SlideShow::TransitionType::Circle);
    /// // Apply comb type transition on slide 2
    /// presentation->get_Slides()->idx_get(1)->get_SlideShowTransition()->set_Type(SlideShow::TransitionType::Comb);
    /// // Write the presentation to disk
    /// presentation->Save(u"SampleTransition_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following example shows how to add advanced slide Transition.
    /// <code>
    /// // Instantiate Presentation class that represents a presentation file
    /// auto pres = System::MakeObject<Presentation>(u"BetterSlideTransitions.pptx");
    /// 
    /// auto slide1 = pres->get_Slides()->idx_get(0);
    /// auto slide2 = pres->get_Slides()->idx_get(1);
    /// auto slide3 = pres->get_Slides()->idx_get(2);
    /// 
    /// // Apply circle type transition on slide 1
    /// slide1->get_SlideShowTransition()->set_Type(SlideShow::TransitionType::Circle);
    /// // Set the transition time of 3 seconds
    /// slide1->get_SlideShowTransition()->set_AdvanceOnClick(true);
    /// slide1->get_SlideShowTransition()->set_AdvanceAfterTime(3000);
    /// // Apply comb type transition on slide 2
    /// slide2->get_SlideShowTransition()->set_Type(SlideShow::TransitionType::Comb);
    /// // Set the transition time of 5 seconds
    /// slide2->get_SlideShowTransition()->set_AdvanceOnClick(true);
    /// slide2->get_SlideShowTransition()->set_AdvanceAfterTime(5000);
    /// // Apply zoom type transition on slide 3
    /// slide3->get_SlideShowTransition()->set_Type(SlideShow::TransitionType::Zoom);
    /// // Set the transition time of 7 seconds
    /// slide3->get_SlideShowTransition()->set_AdvanceOnClick(true);
    /// slide3->get_SlideShowTransition()->set_AdvanceAfterTime(7000);
    /// // Write the presentation to disk
    /// pres->Save(u"SampleTransition_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlideCollection> get_Slides() override;
    /// <summary>
    /// Returns a list of all slides sections that are defined in the presentation.
    /// Read-only <see cref="Aspose::Slides::ISectionCollection">ISectionCollection</see>.
    /// </summary>
    /// <example>
    /// The following examples shows how to create Sections in a PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto defaultSlide = pres->get_Slides()->idx_get(0);
    /// auto layoutSlide = pres->get_LayoutSlides()->idx_get(0);
    /// auto newSlide1 = pres->get_Slides()->AddEmptySlide(layoutSlide);
    /// auto newSlide2 = pres->get_Slides()->AddEmptySlide(layoutSlide);
    /// auto newSlide3 = pres->get_Slides()->AddEmptySlide(layoutSlide);
    /// auto newSlide4 = pres->get_Slides()->AddEmptySlide(layoutSlide);
    /// 
    /// System::SharedPtr<ISection> section1 = pres->get_Sections()->AddSection(u"Section 1", newSlide1);
    /// // section1 will be ended at newSlide2 and after it section2 will start
    /// System::SharedPtr<ISection> section2 = pres->get_Sections()->AddSection(u"Section 2", newSlide3);
    /// 
    /// pres->Save(u"pres-sections.pptx", SaveFormat::Pptx);
    /// pres->get_Sections()->ReorderSectionWithSlides(section2, 0);
    /// pres->Save(u"pres-sections-moved.pptx", SaveFormat::Pptx);
    /// pres->get_Sections()->RemoveSectionWithSlides(section2);
    /// pres->get_Sections()->AppendEmptySection(u"Last empty section");
    /// pres->Save(u"pres-section-with-empty.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following examples shows how to changing the names of Sections.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<ISection> section = pres->get_Sections()->idx_get(0);
    /// section->set_Name(u"My section");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISectionCollection> get_Sections() override;
    /// <summary>
    /// Returns slide size object.
    /// Read-only <see cref="Aspose::Slides::ISlideSize">ISlideSize</see>.
    /// </summary>
    /// <example>
    /// The following example shows how to change the slide size in a PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres-4x3-aspect-ratio.pptx");
    /// 
    /// pres->get_SlideSize()->SetSize(SlideSizeType::OnScreen16x9, SlideSizeScaleType::DoNotScale);
    /// pres->Save(u"pres-4x3-aspect-ratio.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following example shows how to set slide size with respect to content scaling for a PowerPoint Presentation.
    /// <code>
    /// // Instantiate a Presentation object that represents a presentation file
    /// auto presentation = System::MakeObject<Presentation>(u"AccessSlides.pptx");
    /// auto auxPresentation = System::MakeObject<Presentation>();
    /// auto slide = presentation->get_Slides()->idx_get(0);
    /// 
    /// // Set the slide size of generated presentations to that of source
    /// presentation->get_SlideSize()->SetSize(540.0f, 720.0f, SlideSizeScaleType::EnsureFit);
    /// 
    /// // Method SetSize is used for set slide size with scale content to ensure fit
    /// presentation->get_SlideSize()->SetSize(SlideSizeType::A4Paper, SlideSizeScaleType::Maximize);
    /// 
    /// // Method SetSize is used for set slide size with maximize size of content
    /// // Save Presentation to disk
    /// auxPresentation->Save(u"Set_Size_Type_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following example shows how to specifying custom slide sizes in a PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// pres->get_SlideSize()->SetSize(780.0f, 540.0f, SlideSizeScaleType::DoNotScale);
    /// 
    /// // A4 paper size
    /// pres->Save(u"pres-a4-slide-size.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlideSize> get_SlideSize() override;
    /// <summary>
    /// Returns notes slide size object.
    /// Read-only <see cref="Aspose::Slides::INotesSize">INotesSize</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<INotesSize> get_NotesSize() override;
    /// <summary>
    /// Returns a list of all layout slides that are defined in the presentation.
    /// Read-only <see cref="Aspose::Slides::IGlobalLayoutSlideCollection">IGlobalLayoutSlideCollection</see>.
    /// </summary>
    /// <remarks>
    /// You can access to alternative API for adding/inserting/removing/cloning layout slides 
    /// by using IMasterSlide::get_LayoutSlides property.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGlobalLayoutSlideCollection> get_LayoutSlides() override;
    /// <summary>
    /// Returns a list of all master slides that are defined in the presentation.
    /// Read-only <see cref="Aspose::Slides::IMasterSlideCollection">IMasterSlideCollection</see>.
    /// </summary>
    /// <example>
    /// The following examples shows how to adding Images to Master Slides of PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// auto masterSlide = slide->get_LayoutSlide()->get_MasterSlide();
    /// 
    /// auto image = pres->get_Images()->AddImage(System::IO::File::ReadAllBytes(u"image.png"));
    /// masterSlide->get_Shapes()->AddPictureFrame(ShapeType::Rectangle, 10.0f, 10.0f, 100.0f, 100.0f, image);
    /// pres->Save(u"pres.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following examples shows how to change the background color of the master slide of PowerPoint Presentation.
    /// <code>
    /// // Instantiate the Presentation class that represents the presentation file
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// // Set the background color of the Master ISlide to Forest Green
    /// auto masterSlide = pres->get_Masters()->idx_get(0);
    /// auto background = masterSlide->get_Background();
    /// background->set_Type(BackgroundType::OwnBackground);
    /// background->get_FillFormat()->set_FillType(FillType::Solid);
    /// background->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_ForestGreen());
    /// // Write the presentation to disk
    /// pres->Save(u"SetSlideBackgroundMaster_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following examples shows how to add slide layout to PowerPoint Presentation.
    /// <code>
    /// // Instantiate Presentation class that represents the presentation file
    /// auto presentation = System::MakeObject<Presentation>(u"AccessSlides.pptx");
    /// 
    /// // Try to search by layout slide type
    /// auto layoutSlides = presentation->get_Masters()->idx_get(0)->get_LayoutSlides();
    /// auto layoutSlide = System::ObjectExt::Coalesce(
    ///     layoutSlides->GetByType(SlideLayoutType::TitleAndObject),
    ///     [&](){ return layoutSlides->GetByType(SlideLayoutType::Title); });
    /// 
    /// if (layoutSlide == nullptr)
    /// {
    ///     // The situation when a presentation doesn't contain some type of layouts.
    ///     // presentation File only contains Blank and Custom layout types.
    ///     // But layout slides with Custom types has different slide names,
    ///     // like "Title", "Title and Content", etc. And it is possible to use these
    ///     // names for layout slide selection.
    ///     // Also it is possible to use the set of placeholder shape types. For example,
    ///     // Title slide should have only Title pleceholder type, etc.
    ///     for (auto&& titleAndObjectLayoutSlide : layoutSlides)
    ///     {
    ///         if (titleAndObjectLayoutSlide->get_Name() == u"Title and Object")
    ///         {
    ///             layoutSlide = titleAndObjectLayoutSlide;
    ///             break;
    ///         }
    ///     }
    ///     
    ///     if (layoutSlide == nullptr)
    ///     {
    ///         for (auto&& titleLayoutSlide : layoutSlides)
    ///         {
    ///             if (titleLayoutSlide->get_Name() == u"Title")
    ///             {
    ///                 layoutSlide = titleLayoutSlide;
    ///                 break;
    ///             }
    ///         }
    ///         
    ///         if (layoutSlide == nullptr)
    ///         {
    ///             layoutSlide = layoutSlides->GetByType(SlideLayoutType::Blank);
    ///             if (layoutSlide == nullptr)
    ///             {
    ///                 layoutSlide = layoutSlides->Add(SlideLayoutType::TitleAndObject, u"Title and Object");
    ///             }
    ///         }
    ///     }
    /// }
    /// 
    /// // Adding empty slide with added layout slide
    /// presentation->get_Slides()->InsertEmptySlide(0, layoutSlide);
    /// // Save presentation
    /// presentation->Save(u"AddLayoutSlides_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterSlideCollection> get_Masters() override;
    /// <summary>
    /// Returns notes master manager.
    /// Read-only <see cref="Aspose::Slides::IMasterNotesSlideManager">IMasterNotesSlideManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterNotesSlideManager> get_MasterNotesSlideManager() override;
    /// <summary>
    /// Returns handout master manager.
    /// Read-only <see cref="Aspose::Slides::IMasterHandoutSlideManager">IMasterHandoutSlideManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterHandoutSlideManager> get_MasterHandoutSlideManager() override;
    /// <summary>
    /// Returns fonts manager.
    /// Read-only <see cref="Aspose::Slides::IFontsManager">IFontsManager</see>.
    /// </summary>
    /// <example>
    /// The following example shows how to add embedded fonts to PowerPoint Presentation.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"Fonts.pptx");
    /// System::ArrayPtr<System::SharedPtr<IFontData>> allFonts = presentation->get_FontsManager()->GetFonts();
    /// System::ArrayPtr<System::SharedPtr<IFontData>> embeddedFonts = presentation->get_FontsManager()->GetEmbeddedFonts();
    /// 
    /// for (auto&& font : allFonts)
    /// {
    ///     if (!embeddedFonts->Contains(font))
    ///     {
    ///         presentation->get_FontsManager()->AddEmbeddedFont(font, EmbedFontCharacters::All);
    ///     }
    /// }
    /// 
    /// // Save the presentation
    /// presentation->Save(u"AddEmbeddedFont_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontsManager> get_FontsManager() override;
    /// <summary>
    /// Returns default text style for shapes.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextStyle> get_DefaultTextStyle() override;
    /// <summary>
    /// Returns the collection of comments autors.
    /// Read-only <see cref="Aspose::Slides::ICommentAuthorCollection">ICommentAuthorCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICommentAuthorCollection> get_CommentAuthors() override;
    /// <summary>
    /// Returns DocumentProperties object which contains standard and custom document properties.
    /// Read-only <see cref="Aspose::Slides::IDocumentProperties">IDocumentProperties</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDocumentProperties> get_DocumentProperties() override;
    /// <summary>
    /// Returns the collection of all images in the presentation.
    /// Read-only <see cref="Aspose::Slides::IImageCollection">IImageCollection</see>.
    /// </summary>
    /// <example>
    /// The following examples shows how to add image as BLOB in PowerPoint Presentation.
    /// <code>
    /// System::String pathToLargeImage = u"large_image.jpg";
    /// // creates a new presentation to which the image will be added.
    /// auto pres = System::MakeObject<Presentation>();
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// 
    /// auto fileStream = System::MakeObject<System::IO::FileStream>(pathToLargeImage, System::IO::FileMode::Open);
    /// 
    /// // Let's add the image to the presentation - we choose KeepLocked behavior because we do
    /// // NOT intend to access the "largeImage.png" file.
    /// auto img = pres->get_Images()->AddImage(fileStream, LoadingStreamBehavior::KeepLocked);
    /// slide->get_Shapes()->AddPictureFrame(ShapeType::Rectangle, 0.0f, 0.0f, 300.0f, 200.0f, img);
    /// // Saves the presentation. While a large presentation gets outputted, the memory consumption
    /// // stays low through the pres object's lifecycle
    /// pres->Save(u"presentationWithLargeImage.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following examples add a hyperlink to an image in a PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// 
    /// // Adds image to presentation
    /// auto image = pres->get_Images()->AddImage(System::IO::File::ReadAllBytes(u"image.png"));
    /// // Creates picture frame on slide 1 based on previously added image
    /// auto pictureFrame = slide->get_Shapes()->AddPictureFrame(ShapeType::Rectangle, 10.0f, 10.0f, 100.0f, 100.0f, image);
    /// pictureFrame->set_HyperlinkClick(System::MakeObject<Hyperlink>(u"https://www.aspose.com/"));
    /// pictureFrame->get_HyperlinkClick()->set_Tooltip(u"More than 70% Fortune 100 companies trust Aspose APIs");
    /// pres->Save(u"pres-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImageCollection> get_Images() override;
    /// <summary>
    /// Returns the collection of all embedded audio files in the presentation.
    /// Read-only <see cref="Aspose::Slides::IAudioCollection">IAudioCollection</see>.
    /// </summary>
    /// <example>
    /// The following examples shows how to add a hyperlink to an audio file.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// 
    /// System::SharedPtr<IAudio> audio = pres->get_Audios()->AddAudio(System::IO::File::ReadAllBytes(u"audio.mp3"));
    /// System::SharedPtr<IAudioFrame> audioFrame = slide->get_Shapes()->AddAudioFrameEmbedded(10.0f, 10.0f, 100.0f, 100.0f, audio);
    /// audioFrame->set_HyperlinkClick(System::MakeObject<Hyperlink>(u"https://www.aspose.com/"));
    /// audioFrame->get_HyperlinkClick()->set_Tooltip(u"More than 70% Fortune 100 companies trust Aspose APIs");
    /// pres->Save(u"pres-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudioCollection> get_Audios() override;
    /// <summary>
    /// Returns the collection of all embedded video files in the presentation.
    /// Read-only <see cref="Aspose::Slides::IVideoCollection">IVideoCollection</see>.
    /// </summary>
    /// <example>
    /// The following examples shows how to create embedded Video Frame in a PowerPoint Presentation.
    /// <code>
    /// // Instantiate Presentation class that represents the PPTX
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// // Get the first slide
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// 
    /// // Embed video inside presentation
    /// System::SharedPtr<IVideo> video = pres->get_Videos()->AddVideo(System::MakeObject<System::IO::FileStream>(u"Wildlife.mp4", System::IO::FileMode::Open));
    /// 
    /// // Add Video Frame
    /// auto vf = slide->get_Shapes()->AddVideoFrame(50.0f, 150.0f, 300.0f, 350.0f, video);
    /// 
    /// // Set video to Video Frame
    /// vf->set_EmbeddedVideo(video);
    /// // Set Play Mode and Volume of the Video
    /// 
    /// vf->set_PlayMode(VideoPlayModePreset::Auto);
    /// vf->set_Volume(AudioVolumeMode::Loud);
    /// 
    /// // Write the PPTX file to disk
    /// pres->Save(u"VideoFrame_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following examples shows how to add a video passing path to the video file directly into AddVideoFrame method for PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// auto vf = slide->get_Shapes()->AddVideoFrame(50.0f, 150.0f, 300.0f, 150.0f, u"video1.avi");
    /// </code>
    /// The following examples shows how to add large file through BLOB to a Presentation.
    /// <code>
    /// const System::String pathToVeryLargeVideo = u"veryLargeVideo.avi";
    /// // Creates a new presentation to which the video will be added
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto fileStream = System::MakeObject<System::IO::FileStream>(pathToVeryLargeVideo, System::IO::FileMode::Open);
    /// 
    /// // Let's add the video to the presentation - we chose the KeepLocked behavior because we do
    /// // not intend to access the "veryLargeVideo.avi" file.
    /// System::SharedPtr<IVideo> video = pres->get_Videos()->AddVideo(fileStream, LoadingStreamBehavior::KeepLocked);
    /// pres->get_Slides()->idx_get(0)->get_Shapes()->AddVideoFrame(0.0f, 0.0f, 480.0f, 270.0f, video);
    /// 
    /// // Saves the presentation. While a large presentation gets outputted, the memory consumption
    /// // stays low through the pres object's lifecycle
    /// pres->Save(u"presentationWithLargeVideo.pptx", Export::SaveFormat::Pptx);
    /// </code>
    /// The following examples shows how to export large file through BLOB from PowerPoint Presentation.
    /// <code>
    /// const System::String hugePresentationWithAudiosAndVideosFile = u"Large  Video File Test1.pptx";
    /// auto loadOptions = System::MakeObject<LoadOptions>();
    /// loadOptions->set_BlobManagementOptions(System::MakeObject<BlobManagementOptions>());
    /// loadOptions->get_BlobManagementOptions()->set_PresentationLockingBehavior(PresentationLockingBehavior::KeepLocked);
    /// 
    /// // Creates a Presentation's instance, locks the "hugePresentationWithAudiosAndVideos.pptx" file.
    /// auto pres = System::MakeObject<Presentation>(hugePresentationWithAudiosAndVideosFile, loadOptions);
    /// 
    /// // Let's save each video to a file. To prevent high memory usage, we need a buffer that will be used
    /// // to transfer the data from the presentation's video stream to a stream for a newly created video file.
    /// System::ArrayPtr<uint8_t> buffer = System::MakeArray<uint8_t>(8 * 1024, 0);
    /// // Iterates through the videos
    /// for (int32_t index = 0; index < pres->get_Videos()->get_Count(); index++)
    /// {
    ///     System::SharedPtr<IVideo> video = pres->get_Videos()->idx_get(index);
    ///     // Opens the presentation video stream. Please, note that we intentionally avoided accessing properties
    ///     // like video.BinaryData - because this property returns a byte array containing a full video, which then
    ///     // causes bytes to be loaded into memory. We use video.GetStream, which will return Stream - and does NOT
    ///     //  require us to load the whole video into the memory.
    ///     auto presVideoStream = video->GetStream();
    ///     
    ///     auto outputFileStream = System::IO::File::OpenWrite(System::String::Format(u"video{0}.avi", index));
    ///     
    ///     int32_t bytesRead;
    ///     while ((bytesRead = presVideoStream->Read(buffer, 0, buffer->get_Length())) > 0)
    ///     {
    ///         outputFileStream->Write(buffer, 0, bytesRead);
    ///     }
    ///     // Memory consumption will remain low regardless of the size of the video or presentation,
    /// }
    /// // If necessary, you can apply the same steps for audio files.
    /// </code>
    /// The following examples shows how to add a hyperlink to a video in a PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<IVideo> video = pres->get_Videos()->AddVideo(System::IO::File::ReadAllBytes(u"video.avi"));
    /// System::SharedPtr<IVideoFrame> videoFrame = pres->get_Slides()->idx_get(0)->get_Shapes()->AddVideoFrame(10.0f, 10.0f, 100.0f, 100.0f, video);
    /// videoFrame->set_HyperlinkClick(System::MakeObject<Hyperlink>(u"https://www.aspose.com/"));
    /// videoFrame->get_HyperlinkClick()->set_Tooltip(u"More than 70% Fortune 100 companies trust Aspose APIs");
    /// pres->Save(u"pres-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following examples shows how to create Video Frame with Video from Web Source in a PowerPoint Presentation.
    /// <code>
    /// void Run()
    /// {
    ///     auto pres = System::MakeObject<Presentation>();
    /// 
    ///     AddVideoFromYouTube(pres, u"Tj75Arhq5ho");
    ///     pres->Save(u"AddVideoFrameFromWebSource_out.pptx", SaveFormat::Pptx);
    /// }
    /// 
    /// void AddVideoFromYouTube(System::SharedPtr<Presentation> pres, System::String videoId)
    /// {
    ///     // Add videoFrame
    ///     auto slide = pres->get_Slides()->idx_get(0);
    ///     System::SharedPtr<IVideoFrame> videoFrame = slide->get_Shapes()->AddVideoFrame(10.0f, 10.0f, 427.0f, 240.0f, System::String(u"https://www.youtube.com/embed/") + videoId);
    ///     videoFrame->set_PlayMode(Aspose::Slides::VideoPlayModePreset::Auto);
    /// 
    ///     // Load thumbnail
    ///     auto client = System::MakeObject<System::Net::WebClient>();
    ///     System::String thumbnailUri = System::String(u"http://img.youtube.com/vi/") + videoId + u"/hqdefault.jpg";
    ///     videoFrame->get_PictureFormat()->get_Picture()->set_Image(pres->get_Images()->AddImage(client->DownloadData(thumbnailUri)));
    /// }
    /// </code>
    /// The following examples shows how to extract Video from slide of PowerPoint Presentation.
    /// <code>
    /// // Instantiate a Presentation object that represents a presentation file
    /// auto presentation = System::MakeObject<Presentation>(u"Video.pptx");
    /// 
    /// for (auto&& slide : presentation->get_Slides())
    /// {
    ///     for (auto&& shape : slide->get_Shapes())
    ///     {
    ///         if (System::ObjectExt::Is<VideoFrame>(shape))
    ///         {
    ///             System::SharedPtr<IVideoFrame> vf = System::AsCast<Aspose::Slides::IVideoFrame>(shape);
    ///             System::String type = vf->get_EmbeddedVideo()->get_ContentType();
    ///             int32_t ss = type.LastIndexOf(u'/');
    ///             type = type.Remove(0, type.LastIndexOf(u'/') + 1);
    ///             System::ArrayPtr<uint8_t> buffer = vf->get_EmbeddedVideo()->get_BinaryData();
    ///             auto stream = System::MakeObject<System::IO::FileStream>(System::String(u"NewVideo_out.") + type,
    ///                                                                      System::IO::FileMode::Create,
    ///                                                                      System::IO::FileAccess::Write,
    ///                                                                      System::IO::FileShare::Read);
    ///             stream->Write(buffer, 0, buffer->get_Length());
    ///         }
    ///     }
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVideoCollection> get_Videos() override;
    /// <summary>
    /// Returns the slide show settings for the presentation.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::SlideShowSettings> get_SlideShowSettings() const;
    /// <summary>
    /// Returns the collection of signatures used to sign the presentation.
    /// Read-only <see cref="Aspose::Slides::IDigitalSignatureCollection">IDigitalSignatureCollection</see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"SomePresentationSigned.pptx");
    /// if (pres->get_DigitalSignatures()->get_Count() > 0)
    /// {
    ///     bool allSignaturesAreValid = true;
    /// 
    ///     System::Console::WriteLine(u"Signatures used to sign the presentation: ");
    /// 
    ///     for (int i = 0; i < pres->get_DigitalSignatures()->get_Count(); ++i)
    ///     {
    ///         auto signature = pres->get_DigitalSignatures()->idx_get(i);
    ///         System::Console::WriteLine(u"{0}, {1} --- {2}",
    ///             signature->get_Certificate()->get_SubjectName()->get_Name(),
    ///             signature->get_SignTime().ToString(u"yyyy-MM-dd HH:mm"),
    ///             (signature->get_IsValid() ? u"VALID" : u"INVALID")
    ///         );
    ///         allSignaturesAreValid &= signature->get_IsValid();
    ///     }
    /// }
    /// 
    ///     if (allSignaturesAreValid)
    ///         System::Console::WriteLine(u"Presentation is genuine, all signatures are valid.");
    ///     else
    ///         System::Console::WriteLine(u"Presentation has been modified since signing.");
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDigitalSignatureCollection> get_DigitalSignatures() override;
    /// <summary>
    /// Returns the presentation's custom data.
    /// Read-only <see cref="Aspose::Slides::ICustomData">ICustomData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICustomData> get_CustomData() override;
    /// <summary>
    /// Returns all custom data parts in the presentaion.
    /// Read-only <see cref="Aspose::Slides::ICustomXmlPart">ICustomXmlPart</see>[].
    /// </summary>
    /// <example>
    /// The following examples show how to clear all custom xml parts from PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"PresentationWithCustomXml.pptx");
    ///     
    /// // Iterate all custom XML Parts
    /// for (System::SharedPtr<ICustomXmlPart> item : pres->get_AllCustomXmlParts())
    /// {
    ///     item->Remove();
    /// }
    /// 
    /// pres->Save(u"out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ICustomXmlPart>> get_AllCustomXmlParts() override;
    /// <summary>
    /// Gets VBA project with presentation macros.
    /// Read <see cref="Aspose::Slides::Vba::IVbaProject">Vba::IVbaProject</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Vba::IVbaProject> get_VbaProject() override;
    /// <summary>
    /// Sets VBA project with presentation macros.
    /// Write <see cref="Aspose::Slides::Vba::IVbaProject">Vba::IVbaProject</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_VbaProject(System::SharedPtr<Vba::IVbaProject> value) override;
    /// <summary>
    /// Provides easy access to all hyperlinks contained in all presentation slides (not in master, layout, notes slides).
    /// Read-only <see cref="Aspose::Slides::IHyperlinkQueries">IHyperlinkQueries</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlinkQueries> get_HyperlinkQueries() override;
    /// <summary>
    /// Gets presentation wide view properties.
    /// Read-only <see cref="Aspose::Slides::IViewProperties">IViewProperties</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IViewProperties> get_ViewProperties() override;
    /// <summary>
    /// Represents the first slide number in the presentation
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_FirstSlideNumber() override;
    /// <summary>
    /// Represents the first slide number in the presentation
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FirstSlideNumber(int32_t value) override;
    /// <summary>
    /// Returns information about from which format presentation was loaded.
    /// Read-only <see cref="Aspose::Slides::SourceFormat">SourceFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::SourceFormat get_SourceFormat() override;
    /// <summary>
    /// Returns master theme.
    /// Read-only <see cref="Aspose::Slides::Theme::IMasterTheme">Theme::IMasterTheme</see>.
    /// </summary>
    /// <example>
    /// The following examples shows how to change a theme effect by altering parts of elements of PowerPoint Presentation.
    /// <code>
    /// // Instantiate a presentation object that represents a presentation file
    /// auto pres = System::MakeObject<Presentation>(u"Subtle_Moderate_Intense.pptx");
    /// auto masterTheme = pres->get_MasterTheme();
    /// auto formatScheme = masterTheme->get_FormatScheme();
    /// 
    /// formatScheme->get_LineStyles()->idx_get(0)->get_FillFormat()->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Red());
    /// formatScheme->get_FillStyles()->idx_get(2)->set_FillType(FillType::Solid);
    /// formatScheme->get_FillStyles()->idx_get(2)->get_SolidFillColor()->set_Color(System::Drawing::Color::get_ForestGreen());
    /// formatScheme->get_EffectStyles()->idx_get(2)->get_EffectFormat()->get_OuterShadowEffect()->set_Distance(10.0f);
    /// pres->Save(u"Design_04_Subtle_Moderate_Intense-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Theme::IMasterTheme> get_MasterTheme() override;
    
    /// <summary>
    /// This constructor creates new presentation from scratch.
    /// Created presentation has one empty slide.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Presentation();
    /// <summary>
    /// This constructor creates new presentation from scratch.
    /// Created presentation has one empty slide.
    /// </summary>
    /// <param name="loadOptions">Additional load options.</param>
    ASPOSE_SLIDES_SHARED_API Presentation(System::SharedPtr<Aspose::Slides::LoadOptions> loadOptions);
    /// <summary>
    /// This constructor is the primary mechanism for reading an existing Presentation.
    /// </summary>
    /// <param name="stream">Input stream.</param>
    /// <example>
    /// <code>
    /// auto fis = MakeObject&lt;IO::FileStream&gt;(u"demo.pptx", IO::FileMode::Open, IO::FileAccess::Read);
    /// auto pres = MakeObject&lt;Presentation&gt;(fis);
    /// fis->Close();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API Presentation(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// This constructor is the primary mechanism for reading an existing Presentation.
    /// </summary>
    /// <param name="stream">Input stream.</param>
    /// <param name="loadOptions">Additional load options.</param>
    ASPOSE_SLIDES_SHARED_API Presentation(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::Slides::LoadOptions> loadOptions);
    /// <summary>
    /// This constructor gets a source file path from which
    /// the contents of the Presentation are read.
    /// </summary>
    /// <param name="file">Input file.</param>
    /// <exception cref="System::ArgumentException">Thrown when input file has zero length</exception>
    /// <example>
    /// <code>
    /// auto pres = MakeObject&lt;Presentation&gt;(u"demo.pptx");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API Presentation(System::String file);
    /// <summary>
    /// This constructor gets a source file path from which
    /// the contents of the Presentation are read.
    /// </summary>
    /// <param name="file">Input file.</param>
    /// <param name="loadOptions">Additional load options.</param>
    /// <exception cref="System::ArgumentException">Thrown when input file has zero length</exception>
    ASPOSE_SLIDES_SHARED_API Presentation(System::String file, System::SharedPtr<Aspose::Slides::LoadOptions> loadOptions);
    
    /// <summary>
    /// Returns a Slide, MasterSlide or LayoutSlide by Id.
    /// </summary>
    /// <param name="id">Id of a slide.</param>
    /// <returns>IBaseSlide object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> GetSlideById(uint32_t id) override;
    /// <summary>
    /// Saves all slides of a presentation to a file with the specified format.
    /// </summary>
    /// <param name="fname">Path to the created file.</param>
    /// <param name="format">Format of the exported data.</param>
    ASPOSE_SLIDES_SHARED_API void Save(System::String fname, Export::SaveFormat format) override;
    /// <summary>
    /// Saves all slides of a presentation to a stream in the specified format.
    /// </summary>
    /// <param name="stream">Output stream.</param>
    /// <param name="format">Format of the exported data.</param>
    ASPOSE_SLIDES_SHARED_API void Save(System::SharedPtr<System::IO::Stream> stream, Export::SaveFormat format) override;
    /// <summary>
    /// Saves all slides of a presentation to a file with the specified format and with additional options.
    /// </summary>
    /// <param name="fname">Path to the created file.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <param name="options">Additional format options.</param>
    /// <example>
    /// The following example shows how to convert PowerPoint to HTML using C++.
    /// <code>
    /// // Instantiates a presentation object that represents a presentation file e.g. PPT, PPTX, ODP etc.
    /// auto presentation = System::MakeObject<Presentation>(u"Convert_HTML.pptx");
    /// 
    /// System::SharedPtr<HtmlOptions> htmlOpt = System::MakeObject<HtmlOptions>();
    /// System::SharedPtr<NotesCommentsLayoutingOptions> options = System::MakeObject<NotesCommentsLayoutingOptions>();
    /// options->set_NotesPosition(NotesPositions::BottomFull);
    /// htmlOpt->set_SlidesLayoutOptions(options);
    /// htmlOpt->set_HtmlFormatter(HtmlFormatter::CreateDocumentFormatter(u"", false));
    /// 
    /// // Saves the presentation to HTML
    /// presentation->Save(u"ConvertWholePresentationToHTML_out.html", SaveFormat::Html, htmlOpt);
    /// </code>
    /// The following example shows how to convert PowerPoint to responsive HTML using C++.
    /// <code>
    /// // Instantiates a Presentation object that represents a presentation file
    /// auto presentation = System::MakeObject<Presentation>(u"Convert_HTML.pptx");
    /// 
    /// System::SharedPtr<ResponsiveHtmlController> controller = System::MakeObject<ResponsiveHtmlController>();
    /// System::SharedPtr<HtmlOptions> htmlOptions = System::MakeObject<HtmlOptions>();
    /// htmlOptions->set_HtmlFormatter(HtmlFormatter::CreateCustomFormatter(controller));
    /// 
    /// // Saves the presentation to HTML
    /// presentation->Save(u"ConvertPresentationToResponsiveHTML_out.html", SaveFormat::Html, htmlOptions);
    /// </code>
    /// The following example shows how to convert PowerPoint to HTML with notes using C++.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// 
    /// auto opt = System::MakeObject<HtmlOptions>();
    /// System::SharedPtr<NotesCommentsLayoutingOptions> options = System::MakeObject<NotesCommentsLayoutingOptions>();
    /// options->set_NotesPosition(NotesPositions::BottomFull);
    /// opt->set_SlidesLayoutOptions(options);
    /// 
    /// // Saves notes pages
    /// pres->Save(u"Output.html", SaveFormat::Html, opt);
    /// </code>
    /// The following example shows how to convert PowerPoint to HTML with original fonts using C++.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"input.pptx");
    /// 
    /// // Excludes default presentation fonts
    /// System::ArrayPtr<System::String> fontNameExcludeList = System::MakeArray<System::String>({u"Calibri", u"Arial"});
    /// auto embedFontsController = System::MakeObject<EmbedAllFontsHtmlController>(fontNameExcludeList);
    /// auto htmlOptionsEmbed = System::MakeObject<HtmlOptions>();
    /// htmlOptionsEmbed->set_HtmlFormatter(HtmlFormatter::CreateCustomFormatter(embedFontsController));
    /// pres->Save(u"input-PFDinDisplayPro-Regular-installed.html", SaveFormat::Html, htmlOptionsEmbed);
    /// </code>
    /// The following example shows how to convert PowerPoint to HTML with high-quality images at 150 DPI using C++.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"InputDoc.pptx");
    /// 
    /// auto htmlOpts = System::MakeObject<HtmlOptions>();
    /// htmlOpts->set_PicturesCompression(PicturesCompression::Dpi150);
    /// 
    /// pres->Save(u"OutputDoc-dpi150.html", SaveFormat::Html, htmlOpts);
    /// </code>
    /// The following example shows how to convert PowerPoint to HTML with full quality images using C++.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"InputDoc.pptx");
    /// 
    /// auto htmlOpts = System::MakeObject<HtmlOptions>();
    /// htmlOpts->set_DeletePicturesCroppedAreas(false);
    /// 
    /// pres->Save(u"Outputdoc-noCrop.html", SaveFormat::Html, htmlOpts);
    /// </code>
    /// The following example shows how to convert Slide to HTML using C++.
    /// <code>
    /// 
    /// </code>
    /// The following example shows how to save CSS and Images when exporting To HTML using C++.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto htmlController = System::MakeObject<CustomHeaderAndFontsController>(u"styles.css");
    /// auto options = System::MakeObject<HtmlOptions>();
    /// options->set_HtmlFormatter(HtmlFormatter::CreateCustomFormatter(htmlController));
    /// pres->Save(u"pres.html", SaveFormat::Html, options);
    /// </code>
    /// <code>
    /// class CustomHeaderAndFontsController : public EmbedAllFontsHtmlController
    /// {
    /// public:
    ///     CustomHeaderAndFontsController(System::String cssFileName);
    ///     void WriteDocumentStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation) override;
    ///     void WriteAllFonts(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation) override;
    /// 
    /// private:
    ///     static const System::String ms_header;
    ///     System::String m_cssFileName;
    /// };
    /// 
    /// const System::String CustomHeaderAndFontsController::ms_header = System::String(u"<!DOCTYPE html>\n") +
    ///                                                                  u"<html>\n" + u"<head>\n" +
    ///                                                                  u"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">\n" +
    ///                                                                  u"<meta http-equiv=\"X-UA-Compatible\" content=\"IE=9\">\n" +
    ///                                                                  u"<link rel=\"stylesheet\" type=\"text/css\" href=\"{0}\">\n" +
    ///                                                                  u"</head>";
    /// 
    /// CustomHeaderAndFontsController::CustomHeaderAndFontsController(System::String cssFileName) : m_cssFileName(cssFileName)
    /// {}
    /// 
    /// void CustomHeaderAndFontsController::WriteDocumentStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation)
    /// {
    ///     generator->AddHtml(System::String::Format(ms_header, m_cssFileName));
    ///     WriteAllFonts(generator, presentation);
    /// }
    /// 
    /// void CustomHeaderAndFontsController::WriteAllFonts(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation)
    /// {
    ///     generator->AddHtml(u"<!-- Embedded fonts -->");
    ///     EmbedAllFontsHtmlController::WriteAllFonts(generator, presentation);
    /// }
    /// </code>
    /// The following example shows how to link all fonts when converting Presentation to HTML using C++.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// // Excludes default presentation fonts
    /// System::ArrayPtr<System::String> fontNameExcludeList = System::MakeArray<System::String>({u"Calibri", u"Arial"});
    /// auto linkcont = System::MakeObject<LinkAllFontsHtmlController>(fontNameExcludeList, u"C:\\Windows\\Fonts\\");
    /// auto htmlOptionsEmbed = System::MakeObject<HtmlOptions>();
    /// htmlOptionsEmbed->set_HtmlFormatter(HtmlFormatter::CreateCustomFormatter(linkcont));
    /// pres->Save(u"pres.html", SaveFormat::Html, htmlOptionsEmbed);
    /// </code>
    /// The following example shows how to LinkAllFontsHtmlController is implemented using C++.
    /// <code>
    /// class LinkAllFontsHtmlController : public EmbedAllFontsHtmlController
    /// {
    /// public:
    ///     LinkAllFontsHtmlController(System::ArrayPtr<System::String> fontNameExcludeList, System::String basePath);
    ///     void WriteFont(System::SharedPtr<IHtmlGenerator> generator,
    ///                    System::SharedPtr<IFontData> originalFont,
    ///                    System::SharedPtr<IFontData> substitutedFont,
    ///                    System::String fontStyle,
    ///                    System::String fontWeight,
    ///                    System::ArrayPtr<uint8_t> fontData) override;
    /// 
    /// private:
    ///     System::String m_basePath;
    /// };
    /// 
    /// LinkAllFontsHtmlController::LinkAllFontsHtmlController(System::ArrayPtr<System::String> fontNameExcludeList, System::String basePath)
    ///     : EmbedAllFontsHtmlController(fontNameExcludeList), m_basePath(basePath)
    /// {}
    /// 
    /// void LinkAllFontsHtmlController::WriteFont(System::SharedPtr<IHtmlGenerator> generator,
    ///                                            System::SharedPtr<IFontData> originalFont,
    ///                                            System::SharedPtr<IFontData> substitutedFont,
    ///                                            System::String fontStyle,
    ///                                            System::String fontWeight,
    ///                                            System::ArrayPtr<uint8_t> fontData)
    /// {
    ///     try
    ///     {
    ///         System::String fontName = substitutedFont == nullptr ? originalFont->get_FontName() : substitutedFont->get_FontName();
    ///         System::String path = fontName + u".woff";
    /// 
    ///         // Some path sanitize may be needed
    ///         System::IO::File::WriteAllBytes(System::IO::Path::Combine(m_basePath, path), fontData);
    ///         generator->AddHtml(u"<style>");
    ///         generator->AddHtml(u"@font-face { ");
    ///         generator->AddHtml(System::String(u"font-family: '") + fontName + u"'; ");
    ///         generator->AddHtml(System::String(u"src: url('") + path + u"')");
    ///         generator->AddHtml(u" }");
    ///         generator->AddHtml(u"</style>");
    ///     }
    ///     catch (System::Exception& ex)
    ///     {
    ///         System::Console::WriteLine(ex->get_Message());
    ///     }
    /// }
    /// </code>
    /// The following example shows how to convert PowerPoint to responsive HTML using C++.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// 
    /// auto saveOptions = System::MakeObject<HtmlOptions>();
    /// saveOptions->set_SvgResponsiveLayout(true);
    /// presentation->Save(u"SomePresentation-out.html", SaveFormat::Html, saveOptions);
    /// </code>
    /// The following example shows how to export Media files to HTML using C++.
    /// <code>
    /// // Loads a presentation
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// System::String path = u"C:/out/";
    /// const System::String fileName = u"ExportMediaFiles_out.html";
    /// const System::String baseUri = u"http://www.example.com/";
    /// auto fileStream = System::MakeObject<System::IO::FileStream>(u"my_video.avi", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// 
    /// auto video = pres->get_Videos()->AddVideo(fileStream, LoadingStreamBehavior::ReadStreamAndRelease);
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// slide->get_Shapes()->AddVideoFrame(10.0f, 10.0f, 100.0f, 100.0f, video);
    /// auto controller = System::MakeObject<VideoPlayerHtmlController>(path, fileName, baseUri);
    /// 
    /// // Sets HTML options
    /// System::SharedPtr<HtmlOptions> htmlOptions = System::MakeObject<HtmlOptions>(controller);
    /// System::SharedPtr<SVGOptions> svgOptions = System::MakeObject<SVGOptions>(controller);
    /// htmlOptions->set_HtmlFormatter(HtmlFormatter::CreateCustomFormatter(controller));
    /// htmlOptions->set_SlideImageFormat(SlideImageFormat::Svg(svgOptions));
    /// 
    /// // Saves the file
    /// pres->Save(System::IO::Path::Combine(path, fileName), SaveFormat::Html, htmlOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void Save(System::String fname, Export::SaveFormat format, System::SharedPtr<Export::ISaveOptions> options) override;
    /// <summary>
    /// Saves all slides of a presentation to a stream in the specified format and with additional options.
    /// </summary>
    /// <param name="stream">Output stream.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <param name="options">Additional format options.</param>
    /// <exception cref="System::NotSupportedException">If you try to save encrypted file in 
    /// none Office 2007-2010 format</exception>
    ASPOSE_SLIDES_SHARED_API void Save(System::SharedPtr<System::IO::Stream> stream, Export::SaveFormat format, System::SharedPtr<Export::ISaveOptions> options) override;
    /// <summary>
    /// Saves all slides of a presentation to a set of files representing XAML markup.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// SharedPtr<IXamlOptions> options = System::MakeObject<XamlOptions>();
    /// options->set_ExportHiddenSlides(true);
    /// 
    /// pres->Save(options);
    /// </code>
    /// </example>        
    /// <param name="options">The XAML format options.</param>
    ASPOSE_SLIDES_SHARED_API void Save(System::SharedPtr<Export::Xaml::IXamlOptions> options) override;
    void _anonymous_method_0(System::SharedPtr<Presentation> self, System::SharedPtr<System::IO::Stream> stream);
    /// @deprecated Use GetImages(IRenderingOptions options) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for all slides of a presentation.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <returns>Bitmap objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options) override;
    /// <summary>
    /// Returns a Image objects for all slides of a presentation.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <returns>Image objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options) override;
    /// @deprecated Use GetImages(IRenderingOptions options, int[] slides) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for specified slides of a presentation.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <returns>Bitmap objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides) override;
    /// <summary>
    /// Returns a Thumbnail Image objects for specified slides of a presentation.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <returns>Image objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides) override;
    /// @deprecated Use GetImages(IRenderingOptions options, float scaleX, float scaleY) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for all slides of a presentation with custom scaling.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options, float scaleX, float scaleY) override;
    /// <summary>
    /// Returns a Thumbnail Image objects for all slides of a presentation with custom scaling.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Image objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options, float scaleX, float scaleY) override;
    /// @deprecated Use GetImages(IRenderingOptions options, int[] slides, float scaleX, float scaleY) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for specified slides of a presentation with custom scaling.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides, float scaleX, float scaleY) override;
    /// <summary>
    /// Returns a Thumbnail Image objects for specified slides of a presentation with custom scaling.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Image objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides, float scaleX, float scaleY) override;
    /// @deprecated Use GetImages(IRenderingOptions options, Size imageSize) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for all slides of a presentation with specified size.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options, System::Drawing::Size imageSize) override;
    /// <summary>
    /// Returns a Thumbnail Image objects for all slides of a presentation with specified size.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Image objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options, System::Drawing::Size imageSize) override;
    /// @deprecated Use GetImages(IRenderingOptions options, int[] slides, Size imageSize) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for specified slides of a presentation with specified size.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides, System::Drawing::Size imageSize) override;
    /// <summary>
    /// Returns a Thumbnail Image objects for specified slides of a presentation with specified size.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Image objects.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides, System::Drawing::Size imageSize) override;
    /// <summary>
    /// Saves specified slides of a presentation to a file with the specified format with page number keeping.
    /// </summary>
    /// <param name="fname">Path to the created file.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <exception cref="System::ArgumentNullException">When stream or slides parameter is null.</exception>
    /// <exception cref="System::ArgumentOutOfRangeException">When slides parameter contains wrong page numbers.</exception>
    /// <exception cref="System::InvalidOperationException">When an unsupported SaveFormat is used, e.g. PPTX, PPTM, PPSX, PPSM, POTX, POTM, PPT, ODP.</exception>
    ASPOSE_SLIDES_SHARED_API void Save(System::String fname, System::ArrayPtr<int32_t> slides, Export::SaveFormat format) override;
    /// <summary>
    /// Saves specified slides of a presentation to a file with the specified format with page number keeping.
    /// </summary>
    /// <param name="fname">Path to the created file.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <param name="options">Additional format options.</param>
    ASPOSE_SLIDES_SHARED_API void Save(System::String fname, System::ArrayPtr<int32_t> slides, Export::SaveFormat format, System::SharedPtr<Export::ISaveOptions> options) override;
    /// <summary>
    /// Saves specified slides of a presentation to a stream in the specified format with page number keeping.
    /// </summary>
    /// <param name="stream">Output stream.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="format">Format of the exported data.</param>
    ASPOSE_SLIDES_SHARED_API void Save(System::SharedPtr<System::IO::Stream> stream, System::ArrayPtr<int32_t> slides, Export::SaveFormat format) override;
    /// <summary>
    /// Saves specified slides of a presentation to a stream in the specified format with page number keeping.
    /// </summary>
    /// <param name="stream">Output stream.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <param name="options">Additional format options.</param>
    /// <exception cref="System::ArgumentNullException">When stream or slides parameter is null.</exception>
    /// <exception cref="System::ArgumentOutOfRangeException">When slides parameter contains wrong page numbers.</exception>
    /// <exception cref="System::InvalidOperationException">When an unsupported SaveFormat is used, e.g. PPTX, PPTM, PPSX, PPSM, POTX, POTM, PPT, ODP.</exception>
    /// <example>
    /// The following example shows how to convert PowerPoint to PNG.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// for (int32_t index = 0; index < pres->get_Slides()->get_Count(); index++)
    /// {
    ///     auto slide = pres->get_Slides()->idx_get(index);
    ///     slide->GetThumbnail()->Save(System::String::Format(u"slide_{0}.png", index),
    ///                                 System::Drawing::Imaging::ImageFormat::get_Png());
    /// }
    /// </code>
    /// The following example shows how to convert PowerPoint to PNG with custom dimensions.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// float scaleX = 2.0f, scaleY = 2.0f;
    /// for (int32_t index = 0; index < pres->get_Slides()->get_Count(); index++)
    /// {
    ///     auto slide = pres->get_Slides()->idx_get(index);
    ///     slide->GetThumbnail(scaleX, scaleY)->Save(System::String::Format(u"slide_{0}.png", index),
    ///                                               System::Drawing::Imaging::ImageFormat::get_Png());
    /// }
    /// </code>
    /// The following example shows how to convert PowerPoint to PNG with custom size.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::Drawing::Size size(960, 720);
    /// for (int32_t index = 0; index < pres->get_Slides()->get_Count(); index++)
    /// {
    ///     auto slide = pres->get_Slides()->idx_get(index);
    ///     slide->GetThumbnail(size)->Save(System::String::Format(u"slide_{0}.png", index),
    ///                                     System::Drawing::Imaging::ImageFormat::get_Png());
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void Save(System::SharedPtr<System::IO::Stream> stream, System::ArrayPtr<int32_t> slides, Export::SaveFormat format, System::SharedPtr<Export::ISaveOptions> options) override;
    /// @deprecated The method will be removed after release of version 24.7.
    /// <summary>
    /// Sends the presentation to the client browser.
    /// This method is absent in ClientProfile versions of Aspose.Slide.
    /// </summary>
    /// <param name="fname">The name for the presentation that will appear at the client browser. The name should not contain path.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <param name="response">Response object where to save the document.</param>
    /// <param name="showInline">True to show an option to open the presentation inside the browser.</param>
    ASPOSE_SLIDES_SHARED_API void Save(System::String fname, Export::SaveFormat format, System::SharedPtr<System::Web::HttpResponse> response, bool showInline) override;
    /// @deprecated The method will be removed after release of version 24.7.
    /// <summary>
    /// Sends the presentation to the client browser.
    /// This method is absent in ClientProfile versions of Aspose.Slide.
    /// </summary>
    /// <param name="fname">The name for the presentation that will appear at the client browser. The name should not contain path.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <param name="options">Additional format options.</param>
    /// <param name="response">Response object where to save the document.</param>
    /// <param name="showInline">True to show an option to open the presentation inside the browser.</param>
    ASPOSE_SLIDES_SHARED_API void Save(System::String fname, Export::SaveFormat format, System::SharedPtr<Export::ISaveOptions> options, System::SharedPtr<System::Web::HttpResponse> response, bool showInline) override;
    /// <summary>
    /// Joins runs with same formatting in all paragraphs in all acceptable shapes in all slides.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void JoinPortionsWithSameFormatting() override;
    /// <summary>
    /// Releases all resources used by this Presentation object.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Dispose() override;
    /// <summary>
    /// Highlights all matches of the sample text with the specified color.
    /// </summary>
    /// <param name="text">The text to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <example>
    /// The following code sample shows how to highlight text in a PowerPoint presentation.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// 
    /// // highlighting all separate 'the' occurrences
    /// presentation->HighlightText(u"the", System::Drawing::Color::get_Violet());
    /// presentation->Save(u"SomePresentation-out2.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void HighlightText(System::String text, System::Drawing::Color highlightColor) override;
    /// <summary>
    /// Highlights all matches of the sample text with the specified color.
    /// </summary>
    /// <param name="text">The text to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="options">Text search options <see cref="Aspose::Slides::ITextSearchOptions">ITextSearchOptions</see>.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="IFindResultCallback"></see>.</param>
    /// <example>
    /// The following code sample shows how to highlight text in a PowerPoint presentation.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// 
    /// auto textSearchOptions = System::MakeObject<TextSearchOptions>();
    /// textSearchOptions->set_WholeWordsOnly(true);
    /// 
    /// // highlighting all separate 'the' occurrences
    /// presentation->HighlightText(u"the", System::Drawing::Color::get_Violet(), textSearchOptions, nullptr);
    /// presentation->Save(u"SomePresentation-out2.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void HighlightText(System::String text, System::Drawing::Color highlightColor, System::SharedPtr<ITextSearchOptions> options, System::SharedPtr<IFindResultCallback> callback) override;
    /// <summary>
    /// Highlights all matches of the regular expression with the specified color.
    /// </summary>
    /// <param name="regex">The regular expression <see cref="System::Text::RegularExpressions::Regex"></see> to get strings to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="IFindResultCallback"></see>.</param>
    /// <example>
    /// The following code sample shows how to highlight text in a PowerPoint Presentation using a regular expression.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto regex = System::MakeObject<System::Text::RegularExpressions::Regex>(u"\\b[^\\s]{10,}\\b");
    /// 
    /// // highlighting all words with 10 or more characters
    /// presentation->HighlightRegex(regex, System::Drawing::Color::get_Blue(), nullptr);
    /// presentation->Save(u"SomePresentation-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void HighlightRegex(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::Drawing::Color highlightColor, System::SharedPtr<IFindResultCallback> callback) override;
    /// <summary>
    /// Replaces all occurrences of the specified text with another specified text.
    /// </summary>
    /// <param name="oldText">The string to be replaced.</param>
    /// <param name="newText">The string to replace all occurrences of oldText.</param>
    /// <param name="options">Text search options <see cref="Aspose::Slides::ITextSearchOptions">ITextSearchOptions</see>.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="IFindResultCallback"></see>.</param>
    /// <example>
    /// The following sample code shows how to replace one specified string with another specified string.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// 
    /// auto textSearchOptions = System::MakeObject<TextSearchOptions>();
    /// textSearchOptions->set_WholeWordsOnly(true);
    /// 
    /// // Replace all separate 'the' occurrences with '***'
    /// presentation->ReplaceText(u"the", u"***", textSearchOptions, nullptr);
    /// presentation->Save(u"SomePresentation-out2.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void ReplaceText(System::String oldText, System::String newText, System::SharedPtr<ITextSearchOptions> options, System::SharedPtr<IFindResultCallback> callback) override;
    /// <summary>
    /// Replaces all matches of the regular expression with the specified string.
    /// </summary>
    /// <param name="regex">The regular expression <see cref="System::Text::RegularExpressions::Regex"></see> to get strings to replace.</param>
    /// <param name="newText">The string to replace all occurrences of the strings to be replaced.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="IFindResultCallback"></see>.</param>
    /// <example>
    /// The following code sample shows how to replace text using regular expression with the specified string.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto regex = System::MakeObject<System::Text::RegularExpressions::Regex>(u"\\b[^\\s]{10,}\\b");
    /// 
    /// // Replace all words with 10 or more characters with '***'
    /// presentation->ReplaceRegex(regex, u"***", nullptr);
    /// presentation->Save(u"SomePresentation-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void ReplaceRegex(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::String newText, System::SharedPtr<IFindResultCallback> callback) override;
    /// <summary>
    /// Returns a slide defined in the presentation at the specified index.
    /// Read-only <see cref="Aspose::Slides::ISlide"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> get_Slide(int32_t index) override;
    /// <summary>
    /// Returns a slide section defined in the presentation at the specified index.
    /// Read-only <see cref="Aspose::Slides::ISection"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISection> get_Section(int32_t index) override;
    /// <summary>
    /// Returns a master slide defined in the presentation at the specified index.
    /// Read-only <see cref="Aspose::Slides::IMasterSlide"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterSlide> get_Master(int32_t index) override;
    /// <summary>
    /// Returns the comment author at the specified index.
    /// Read-only <see cref="Aspose::Slides::ICommentAuthor"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICommentAuthor> get_CommentAuthor(int32_t index) override;
    /// <summary>
    /// Returns custom property defined by name.
    /// </summary>
    /// <remarks>
    /// Value can be <b>int</b>, <b>float</b>, <b>double</b>, <b>string</b>, <b>bool</b> or <b>DateTime</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_DocumentProperty(System::String name) override;
    /// <summary>
    /// Set custom property defined by name.
    /// </summary>
    /// <remarks>
    /// Value can be <b>int</b>, <b>float</b>, <b>double</b>, <b>string</b>, <b>bool</b> or <b>DateTime</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_DocumentProperty(System::String name, System::SharedPtr<System::Object> value) override;
    /// <summary>
    /// Returns image in the presentation at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> get_Image(int32_t index) override;
    /// <summary>
    /// Return embedded audio file in the presentation at the specified index.
    /// Read-only <see cref="Aspose::Slides::IAudio"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudio> get_Audio(int32_t index) override;
    /// <summary>
    /// Return embedded video file in the presentation at the specified index.
    /// Read-only <see cref="Aspose::Slides::IVideo"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVideo> get_Video(int32_t index) override;
    /// <summary>
    /// Returns digital signature used to sign the presentation at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDigitalSignature> get_DigitalSignature(int32_t index) override;
    
protected:

    /// @cond
    Aspose::Slides::SourceFormat m_sourceFormat;
    System::String m_sourceFile;
    System::SharedPtr<TextStyle> m_defaultTextStyle;
    System::SharedPtr<CommentAuthorCollection> m_commentAuthors;
    System::SharedPtr<System::Collections::Generic::Dictionary<uint64_t, System::SharedPtr<Util::CachedItem<System::SharedPtr<MasterSlide>>>>> m_slidesToClonesMap;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ParagraphFormat> DefaultParaFormat;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Fonts::TTF::TTFFont> get_DefaultMathTtfFont();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::VbaBinaryFile::VbaProjectRootStorage> get_VbaProjectRootStorage();
    ASPOSE_SLIDES_LOCAL_API void set_VbaProjectRootStorage(System::SharedPtr<Aspose::Slides::VbaBinaryFile::VbaProjectRootStorage> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::LoadOptions> get_LoadOptions();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Export::ISaveOptions> get_SaveOptions();
    ASPOSE_SLIDES_LOCAL_API void set_SaveOptions(System::SharedPtr<Export::ISaveOptions> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PictureFrame>>> get_SvgPicFrames();
    ASPOSE_SLIDES_LOCAL_API System::String get_DefaultTextLanguage() const;
    ASPOSE_SLIDES_LOCAL_API void set_DefaultTextLanguage(System::String value);
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version_OldMode();
    ASPOSE_SLIDES_LOCAL_API bool get_IsParsingInProgress();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PresentationPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::PresentationPPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::PresentationODPUnsupportedProps> get_ODPUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::FontsManagerInternal> get_FontsManagerInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::FontsListManager> get_FontsListManager();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Object> get_VentureLicense();
    ASPOSE_SLIDES_LOCAL_API System::String get_FileExtension();
    ASPOSE_SLIDES_LOCAL_API void set_FileExtension(System::String value);
    /// <summary>
    /// Returns the slide show settings for the presentation.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SlideShowSettings(System::SharedPtr<Aspose::Slides::SlideShowSettings> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<CustomXmlPartCollection> get_AllCustomXmlPartsInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TableStyleCollection> get_TableStyles();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Foundation::Blob::BlobManager> get_BlobManager();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Foundation::Utils::Cache<System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheKey>, System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheInfo>>> get_HighDemandTransformedImagesCache();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Foundation::Utils::Cache<System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheKey>, System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheInfo>>> get_HighDemandOriginalImagesCache();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::TypicalValues::TypicalValuesRegistryManager> get_TypicalValuesRegistryManager();
    
    ASPOSE_SLIDES_LOCAL_API void SaveDummySlide(System::SharedPtr<Slide> slide);
    ASPOSE_SLIDES_LOCAL_API bool ShapeUniqueIdUsed();
    ASPOSE_SLIDES_LOCAL_API uint32_t ShapeUniqueIdNext();
    ASPOSE_SLIDES_LOCAL_API uint32_t ShapeUniqueIdUpdate(uint32_t value);
    static ASPOSE_SLIDES_LOCAL_API void PrepareFonts(System::SharedPtr<Aspose::Slides::FontsManagerInternal> fontsManager, bool onlyEmbeddedFonts);
    
    ASPOSE_SLIDES_LOCAL_API Presentation(System::SharedPtr<Aspose::Slides::LoadOptions> loadOptions, System::SharedPtr<ExternalTheme> themeContainer);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Presentation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::LoadOptions> loadOptions, System::SharedPtr<ExternalTheme> themeContainer));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Presentation(System::String file, System::SharedPtr<Aspose::Slides::LoadOptions> loadOptions, System::SharedPtr<ExternalTheme> themeContainer);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Presentation, CODEPORTING_ARGS(System::String file, System::SharedPtr<Aspose::Slides::LoadOptions> loadOptions, System::SharedPtr<ExternalTheme> themeContainer));
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API bool IsOpenXmlDocument(System::SharedPtr<System::IO::Stream> stream);
    static ASPOSE_SLIDES_LOCAL_API bool IsOpcXmlDocument(System::SharedPtr<System::IO::Stream> stream);
    static ASPOSE_SLIDES_LOCAL_API bool IsFlatXmlDocument(System::SharedPtr<System::IO::Stream> stream);
    static ASPOSE_SLIDES_LOCAL_API bool IsZipArchive(System::SharedPtr<System::IO::Stream> stream);
    ASPOSE_SLIDES_LOCAL_API void ReadDocumentPropertiesFromMSCDFileSystem(System::SharedPtr<CompoundFile::MSCDFileSystem> fs);
    ASPOSE_SLIDES_LOCAL_API void Write(System::SharedPtr<System::IO::Stream> stream, UnsupportedProps::PresentationTypeEx type, System::SharedPtr<Export::IPptxOptions> options);
    ASPOSE_SLIDES_LOCAL_API void SetVentureLicense(System::SharedPtr<System::Object> ventureLicense);
    static ASPOSE_SLIDES_LOCAL_API int32_t DecodeVentureLicense(System::SharedPtr<Aspose::Slides::VentureLicense> ventureLicense, System::ArrayPtr<uint8_t>& ventureWatermark);
    static ASPOSE_SLIDES_LOCAL_API bool IsLicensedInternal(System::SharedPtr<Aspose::Slides::VentureLicense> ventureLicense, System::ArrayPtr<System::String>& watermark);
    static ASPOSE_SLIDES_LOCAL_API bool IsLicensedInternal2(System::SharedPtr<Aspose::Slides::VentureLicense> ventureLicense, System::ArrayPtr<System::String>& watermark);
    static ASPOSE_SLIDES_LOCAL_API bool IsLicensedInternal(System::SharedPtr<Aspose::Slides::VentureLicense> ventureLicense, System::String& watermark, int32_t& ventureLicenseState, bool joinWatermarkAsOneLine);
    static ASPOSE_SLIDES_LOCAL_API bool IsLicensedInternal(System::SharedPtr<Aspose::Slides::VentureLicense> ventureLicense, System::String& watermark, bool joinWatermarkAsOneLine);
    static ASPOSE_SLIDES_LOCAL_API System::String DecodeString(System::ArrayPtr<uint8_t> data);
    ASPOSE_SLIDES_LOCAL_API uint64_t CreateSlideInternalId();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Slide> CreateEmptySlide();
    ASPOSE_SLIDES_LOCAL_API void SetMasterTheme(System::SharedPtr<Theme::IMasterTheme> masterTheme);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FontsManagerRenderingGuard> StartRendering();
    ASPOSE_SLIDES_LOCAL_API void ScaleGeometry(float scalingCoefX, float scalingCoefY, float scalingContentCoef);
    ASPOSE_SLIDES_LOCAL_API void LocateGeometry(float locatingCoefX, float locatingCoefY);
    ASPOSE_SLIDES_LOCAL_API int32_t GetImageDemandCount(System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheKey> key);
    ASPOSE_SLIDES_LOCAL_API void AddHighDemandImageRecord(System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheKey> originalCacheKey, System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheKey> transformedCacheKey, System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheInfo> imageInfo);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Presentation();
    
private:

    System::WeakPtr<ExternalTheme> m_themeParentContainer;
    System::SharedPtr<Aspose::Fonts::TTF::TTFFont> m_defaultMathTtfFont;
    System::SharedPtr<System::IO::Stream> m_sourceStream;
    System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> m_sourceBlobHandler;
    System::SharedPtr<Aspose::Slides::ProtectionManager> m_protectionManager;
    System::SharedPtr<SlideCollection> m_slides;
    System::SharedPtr<GlobalLayoutSlideCollection> m_layouts;
    System::SharedPtr<MasterSlideCollection> m_masters;
    System::SharedPtr<SectionCollection> m_sections;
    System::SharedPtr<Aspose::Slides::FontsManager> m_fontsManager;
    System::SharedPtr<Aspose::Foundation::Blob::BlobManager> m_blobManager;
    System::SharedPtr<Aspose::Foundation::Utils::Cache<System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheKey>, System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheInfo>>> m_highDemandTransformedImagesCache;
    System::SharedPtr<Aspose::Foundation::Utils::Cache<System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheKey>, System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheInfo>>> m_highDemandOriginalImagesCache;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheKey>, int32_t>> m_imagesDemandCounter;
    System::SharedPtr<Aspose::Slides::FontsManagerInternal> m_fontsManagerInternal;
    System::SharedPtr<Aspose::Slides::FontsListManager> m_fontsListManager;
    System::SharedPtr<Aspose::Slides::MasterNotesSlideManager> m_masterNotesSlideManager;
    System::SharedPtr<Aspose::Slides::MasterHandoutSlideManager> m_masterHandoutSlideManager;
    System::SharedPtr<ImageCollection> m_images;
    System::SharedPtr<AudioCollection> m_audios;
    System::SharedPtr<IVideoCollection> m_videos;
    System::SharedPtr<DigitalSignatureCollection> m_signatures;
    System::SharedPtr<Aspose::Slides::SlideSize> m_slideSize;
    System::SharedPtr<Aspose::Slides::CustomData> m_customData;
    System::SharedPtr<CustomXmlPartCollection> m_allCustomXmlParts;
    System::SharedPtr<Aspose::Slides::Theme::MasterTheme> m_theme;
    System::SharedPtr<PresentationHeaderFooterManager> m_headerFooterManager;
    System::SharedPtr<Aspose::Slides::DocumentProperties> m_docProp;
    System::SharedPtr<Aspose::Slides::NotesSize> m_notesSize;
    uint32_t m_internalPresentationId;
    uint64_t m_nextSlideInternalId;
    bool m_isParsingInProgress;
    System::SharedPtr<Aspose::Slides::LoadOptions> m_loadOptions;
    System::SharedPtr<Export::ISaveOptions> m_saveOptions;
    System::DateTime _dateTime;
    uint32_t m_version_OldMode;
    System::SharedPtr<Aspose::Slides::HyperlinkQueries> m_hyperlinkQueries;
    System::SharedPtr<Aspose::Slides::ViewProperties> m_viewProperties;
    int32_t m_firstSlideNumber;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PresentationPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::PresentationPPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::PresentationODPUnsupportedProps> m_odpUnsupportedProps;
    System::SharedPtr<Vba::IVbaProject> m_vbaProject;
    System::SharedPtr<Aspose::Slides::VbaBinaryFile::VbaProjectRootStorage> m_vbaProjectRootStorage;
    System::SharedPtr<Aspose::Slides::TypicalValues::TypicalValuesRegistryManager> m_typicalValuesRegistryManager;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PictureFrame>>> m_picFrames;
    bool disposed;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Slide>>> m_dummySlideCollection;
    int32_t m_shapeUniqueIdSeq;
    System::SharedPtr<System::Collections::Generic::Dictionary<uint32_t, System::SharedPtr<System::Object>>> m_shapeUniqueIdValues;
    System::String pr_DefaultTextLanguage;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<System::Object> m_ventureLicense;
    System::SharedPtr<Aspose::Slides::SlideShowSettings> pr_SlideShowSettings;
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<char16_t> delims;
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint32_t> NextPresentationInternalID;
    
    /// <summary>
    /// Returns the parent presentation of a text.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
    ASPOSE_SLIDES_LOCAL_API void ResetFonts();
    ASPOSE_SLIDES_LOCAL_API void DisposeHighDemandImages();
    ASPOSE_SLIDES_LOCAL_API void SetSignToPresentation();
    ASPOSE_SLIDES_LOCAL_API void Load(System::String file, bool isThmx);
    ASPOSE_SLIDES_LOCAL_API void DecodeAndParse(System::SharedPtr<System::IO::Stream> stream, bool isThmx);
    static ASPOSE_SLIDES_LOCAL_API bool IsOperationCanceledException(System::Exception ex);
    ASPOSE_SLIDES_LOCAL_API void ParseEncryptedOpenXmlDocumentStream(System::SharedPtr<System::IO::Stream> seekableStream);
    ASPOSE_SLIDES_LOCAL_API void ParseOpcXmlDocumentStream(System::SharedPtr<System::IO::Stream> seekableStream);
    ASPOSE_SLIDES_LOCAL_API void ParseOpenXmlDocumentStream(System::SharedPtr<System::IO::Stream> seekableStream, bool isThmx);
    ASPOSE_SLIDES_LOCAL_API void ParseFlatXmlDocumentStream(System::SharedPtr<System::IO::Stream> seekableStream);
    ASPOSE_SLIDES_LOCAL_API void ParsePptDocumentStream(System::SharedPtr<CompoundFile::MSCDFileSystem> fileSystem);
    ASPOSE_SLIDES_LOCAL_API void DecryptPpt(System::SharedPtr<CompoundFile::MSCDFileSystem> fileSystem, System::SharedPtr<CompoundFile::CompoundStream> powerPointDocStream);
    ASPOSE_SLIDES_LOCAL_API void AfterLoad();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DocumentProperties_PPT> GetOldFormatCustomProps();
    static ASPOSE_SLIDES_LOCAL_API bool IsLicensedInternal(System::SharedPtr<Aspose::Slides::VentureLicense> ventureLicense, System::ArrayPtr<System::String>& watermark, int32_t& ventureLicenseState);
    ASPOSE_SLIDES_LOCAL_API void WriteOpenOffice(System::SharedPtr<System::IO::Stream> stream, bool isTemplate, bool isFlatXml);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Foundation::Blob::RewritableFileStreamWrapper> CreateRewritableWrapper(System::String fname);
    ASPOSE_SLIDES_LOCAL_API void Changed_OldMode();
    ASPOSE_SLIDES_LOCAL_API void UpdateDateTime();
    ASPOSE_SLIDES_LOCAL_API void Dispose(bool disposing);
    ASPOSE_SLIDES_LOCAL_API void ThrowIfDisposed();
    
};

} // namespace Slides
} // namespace Aspose


