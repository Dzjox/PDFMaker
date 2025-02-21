#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/nullable.h>
#include <system/multicast_delegate.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/SaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class Direction;
class HtmlConverter;
enum class HtmlDocumentType;
namespace Tests
{
namespace HTML
{
class Pdf2HtmlConverterTests;
} // namespace HTML
class RegressionTests_v11_7;
} // namespace Tests
namespace Text
{
class FontSourceCollection;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to Html format
/// </summary>
class ASPOSE_PDF_SHARED_CLASS HtmlSaveOptions : public Aspose::Pdf::UnifiedSaveOptions, public Aspose::Pdf::IPageSetOptions, public Aspose::Pdf::IPipelineOptions
{
    typedef HtmlSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    typedef Aspose::Pdf::IPageSetOptions BaseType1;
    typedef Aspose::Pdf::IPipelineOptions BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::HtmlConverter;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_7;
    friend class Aspose::Pdf::Tests::HTML::Pdf2HtmlConverterTests;
    
public:

    /// <summary>
    /// Enumerates modes that can be used for saving of fonts
    /// referenced in saved PDF. 
    /// </summary>
    enum class FontSavingModes
    {
        /// <summary>
        /// All referenced fonts will be saved and referenced as WOFF-fonts.
        /// </summary> 
        AlwaysSaveAsWOFF = 0,
        /// <summary>
        /// All referenced fonts will be saved and referenced as TTF-fonts.
        /// </summary> 
        AlwaysSaveAsTTF = 1,
        /// <summary>
        /// All referenced fonts will be saved and referenced as EOT-fonts.
        /// </summary> 
        AlwaysSaveAsEOT = 2,
        /// <summary>
        /// All referenced fonts will be saved (and referenced in CSS) as 3 independent files : EOT, TTH, WOFF.
        /// It increases size of output data but makes output suitable for overwhelming majority of web browsers .
        /// </summary> 
        SaveInAllFormats = 3,
        /// <summary>
        /// All referenced fonts will not be saved.
        /// </summary>
        DontSave = 4
    };
    
    /// <summary>
    /// This enum describes possible antialiasing measures during conversion
    /// </summary>
    enum class AntialiasingProcessingType
    {
        /// <summary>
        /// no special antialiasing processing in use. This is an optimal option 
        /// for overhelming majority of documents and it does not require additional time
        /// during conversion
        /// </summary>
        NoAdditionalProcessing,
        /// <summary>
        /// In such case converter tries to detect places with ajacent background graphical 
        /// elements and correct result HTML in relevant way.
        /// This option allows enhance result of export for documents that contain backgrounds
        /// built from several ajacent graphical elements (for such kind of documents PDF renderers , f.e. Acrobat Reader,
        /// usually try smooth boundaries of elements during rendering.
        /// With this option converter imitates that behaviour of PDF-renderers.
        /// This option allows enhance layout of result of export for some specific documents (that use such compound backgrounds), 
        /// but it requires additional time for processng (usually about 10-15% of additional time).
        /// So usage of this mode in general case is not recommended.  
        /// </summary>
        TryCorrectResultHtml
    };
    
    /// <summary>
    /// It enumerates possible modes of positioning of letters in words in result HTML
    /// </summary>
    enum class LettersPositioningMethods
    {
        /// <summary>
        /// It's default method. It uses EM-units and special alhorithm of compensation of rounding errors
        /// It's preferable for usage in IE10.0 and more fresh versions and gives better scaling of captions when scaling is necessary
        /// </summary>
        UseEmUnitsAndCompensationOfRoundingErrorsInCss,
        /// <summary>
        /// It allows to get sometimes more precise results in old IE browser versions
        /// </summary>
        UsePixelUnitsInCssLetterSpacingForIE
    };
    
    /// <summary>
    /// enumerates possible types of image files
    /// that can be saved as external resources
    /// during Pdf to Html conversion
    /// </summary>
    enum class HtmlImageType
    {
        /// <summary>
        /// Jpeg format
        /// </summary>
        Jpeg = 0,
        /// <summary>
        /// Png format
        /// </summary>
        Png = 1,
        /// <summary>
        /// Bmp format 
        /// </summary>
        Bmp = 2,
        /// <summary>
        /// Gif format 
        /// </summary>
        Gif = 3,
        /// <summary>
        /// Tiff format
        /// </summary>
        Tiff = 4,
        /// <summary>
        /// Svg format 
        /// </summary>
        Svg = 5,
        /// <summary>
        /// Zipped Svg format
        /// </summary>
        ZippedSvg = 6,
        /// <summary>
        /// Unknown - means that converter cannot detect type of content itself
        /// </summary>
        Unknown = 7
    };
    
    /// <summary>
    /// Enumerates possible types of image's parents
    /// Image can pertain to HTML page or to SVG parent image
    /// </summary>
    enum class ImageParentTypes
    {
        /// <summary>
        /// Image pertains to HTML page itself
        /// </summary>
        HtmlPage = 0,
        /// <summary>
        /// Image was embedded in SVG image
        /// </summary>
        SvgImage = 1
    };
    
    /// <summary>
    ///  Converted PDF can contain raster images(.png, *.jpeg etc.)
    ///  This enum defines methods of how raster images can be handled
    ///  during conversion of PDF to HTML
    /// </summary>
    enum class RasterImagesSavingModes
    {
        /// <summary>
        /// for each distinct raster file will be generated wrapper SVG image,
        /// and raster image will be embedded as Base64 encoded strings
        /// into that SVG image
        /// </summary>
        AsPngImagesEmbeddedIntoSvg,
        /// <summary>
        /// distinct raster images will be put apart as PNG files but will be referenced through wrapping SVG images,
        /// i.e. will be generated one PNG file and one SVG for each raster image,
        /// and each of such SVGs will contain links to relevant PNG file
        /// </summary>
        AsExternalPngFilesReferencedViaSvg,
        /// <summary>
        /// Will be generated one big PNG background file for each result page.
        /// Raster images will be embedded into that file and rendered as regions of that image.
        /// No external PNG files for each image will be generated,
        /// only one PNG file per page will be present in conversion result set of files.
        /// </summary>
        AsEmbeddedPartsOfPngPageBackground,
        /// <summary>
        /// Do not save images for Fixed Layout
        /// </summary>
        DontSave
    };
    
    /// <summary>
    /// Sometimes specific reqirments to created HTML are present.
    /// This enum defines HTML preparing modes that can be used
    /// during conversion of PDF to HTML to match such specific requirments.
    /// </summary>
    enum class HtmlMarkupGenerationModes
    {
        /// <summary>
        /// Default mode any specific requirments are absent.
        /// Will be generated output that will contain all parts of HTML
        /// without any special additional processing.
        /// </summary>
        WriteAllHtml,
        /// <summary>
        /// will be stripped away all HTML content that is outside HTML's body,
        /// i.e. will be left only content that is inside \c \<body> \c \</body> tags
        /// </summary>
        WriteOnlyBodyContent
    };
    
    /// <summary>
    /// This enum enumerates possible modes of embedding of files referenced in HTML
    /// It allows to control whether referenced files (HTML, Fonts,Images, CSSes)
    /// will be embedded into main HTML file or will be generated as apart binary entities 
    /// </summary>
    enum class PartsEmbeddingModes
    {
        /// <summary>
        /// Enforces embed all referenced files(Css,Images,Fonts) into generated HTML markup (i.e. into HTML itself)
        /// This approach generates one HTML file, but total size of output 
        /// becames bigger(because Base64 encoding of binaries is in use) and not all browsers (especially legacy) 
        /// successfully process binaries embedded into HTML. But it allows get HTML that contains whole result, without any additional files.
        /// </summary>
        EmbedAllIntoHtml,
        /// <summary>
        /// Enforces put apart all referenced files except CSS (Images and Fonts)
        /// I.e. CSS will be embedded into result HTML , and all other referenced files(Images and Fonts)
        /// will be processed as external parts
        /// It generates HTML that is sutable for wide set of browsers
        /// </summary>
        EmbedCssOnly,
        /// <summary>
        /// Enforces put apart referenced files(Css,Images,Fonts) 
        /// This approach generates set of files, but total size of output 
        /// becames smaller(because no Base64 encoding of binaries is in use)
        /// Also such approach generates HTML that is sutable for wide set of browsers
        /// </summary>
        NoEmbedding
    };
    
    /// <summary>
    /// This enumeration defines rules which tune encoding logic
    /// </summary>
    enum class FontEncodingRules : uint8_t
    {
        /// <summary>
        /// Leave encoding logic "as is" - in accordance with PDF specification 
        /// </summary>
        Default,
        /// <summary>
        /// ToUnicode is a special mechanism which helps to decode input codes to unicode symbols.
        /// According to specification it must be used first of all mechanisms to get unicode symbols 
        /// for specific input code. But some documents has non-standard fonts and to convert these
        /// documents correctly it may be necessary to decrease ToUnicode priority and use another
        /// mechanisms to decode input codes.
        /// </summary>
        DecreaseToUnicodePriorityLevel
    };
    
    
public:

    /// <summary>
    /// To this property You can  assign delegate created from custom method that implements processing 
    /// of external resource(Font or Image)
    /// that was extracted from PDF and must be saved as external resource during conversion of PDF to HTML.
    /// In such case  processing (like saving in stream or disk)
    /// can be done in that custom code and that custom code must return path(or any another string without quotemarks)
    /// that will be afterwards incorporated into generated HTML instead of original supposed path to that image resource. 
    /// In such case All the necessary actions for saving of image must be undertaken
    /// in code of supplied method, because saving of result in code of converter will be not in use  . 
    /// If processing for this or that file for some reason must be done by converter's code itself, not in custom code,
    /// please set in custom code flag 'CustomProcessingCancelled' of 'resourceSavingInfo' parameter's variable
    /// It signals to converter that all the necessary steps for processing of that resource 
    /// must be done in converter itself as if there was no any external custom code .
    /// </summary>
    /// <param name="resourceSavingInfo"> represents set of data for saving of resource</param>
    /// <returns> must return URL to saved resource that will be used during generation of HTML </returns>
    using ResourceSavingStrategy = System::MulticastDelegate<System::String(System::SharedPtr<SaveOptions::ResourceSavingInfo>)>;
    
    /// <summary>
    /// Result of conversion can contain one or several HTML-pages ( that also can reference external files like images or fonts)
    /// You can  assign to this property delegate created from custom method that implements processing 
    /// of got HTML-page(HTML itself) that was created during conversion.
    /// In such case  processing (like saving in stream or disk) can be done in that custom code . 
    /// In such case All the necessary actions for saving of HTML page's markup must be undertaken
    /// in code of supplied method, because saving of result in code of converter will be not in use. 
    /// If processing for this or that case for some reason must be done by converter's code itself,
    /// not in custom code, please set in custom code flag 'CustomProcessingCancelled'
    /// of 'htmlSavingInfo' parameter's variable : it signals to converter that all the necessary
    /// steps for processing of that resource  must be done in converter itself in same way 
    /// as if there was no any external custom saving code .
    /// </summary>
    /// <param name="htmlSavingInfo"> represents data that can be used for saving or processing of supplied HTML page</param>
    class HtmlPageMarkupSavingInfo;
    using HtmlPageMarkupSavingStrategy = System::MulticastDelegate<void(System::SharedPtr<HtmlSaveOptions::HtmlPageMarkupSavingInfo>)>;
    
    /// <summary>
    /// You can  assign to this property custom strategy that implements processing
    /// or/and saving of one CSS's part that was created during conversion of PDF to HTML .
    /// In such case  processing (like saving to stream or disk)
    /// must be done in that custom code 
    /// </summary>
    /// <param name="partSavingInfo"> represents set of data that can be used for saving of supplied CSS part</param>
    class CssSavingInfo;
    using CssSavingStrategy = System::MulticastDelegate<void(System::SharedPtr<HtmlSaveOptions::CssSavingInfo>)>;
    
    /// <summary>
    /// You can  assign to this property  delegate created from custom method that implements creation of URL of CSS referenced 
    /// in generated HTML document. F.e. if You want to make CSS referenced in HTML f.e. as "otherPage.ASPX?CssID=zjjkklj"
    /// Then such custom strategy must return "otherPage.ASPX?CssID=zjjkklj"
    /// </summary>
    /// <param name="cssUrlRequestInfo"> represents set of data that can be used for generation of CSS' URL</param>
    /// <returns> must return string that represents CSS's URL or URL's template</returns>
    class CssUrlRequestInfo;
    using CssUrlMakingStrategy = System::MulticastDelegate<System::String(System::SharedPtr<HtmlSaveOptions::CssUrlRequestInfo>)>;
    
    
public:

    /// <summary>
    ///  This class represents set of data 
    ///  that related to custom saving of CSS  during conversion
    ///  of PDF to HTML format
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS CssSavingInfo : public System::Object
    {
        typedef CssSavingInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::HtmlConverter;
        
    public:
    
        /// <summary>
        /// Set by converter.
        /// During conversion several CSS-files are created . This properties shows ordinal
        /// of saved CSS-file during conversion.
        /// It can be used in logic of custom code to decide how to process or where to save CSS content
        /// </summary>
        int32_t CssNumber;
        /// <summary>
        ///  Set by converter.
        ///  Supposed file name that goes from converter to code of custom method
        ///  Can be used in custom code to decide how to process or where to save content
        /// </summary>
        System::String SupposedURL;
        /// <summary>
        ///    Set by converter.
        ///    Represents binary content of saved CSS  
        /// </summary>
        System::SharedPtr<System::IO::Stream> ContentStream;
        
    protected:
    
        ///////// <summary>
        /////////    Set by converter.
        /////////    Tells to custom code that will implement custom CSS-saving,
        /////////    whether supplied supposed CSS's URL is template
        /////////    Path treated by conveter as template when option  HtmlSaveInfo.SplitCssIntoPages
        /////////    So, this flag is set in converter according to current state of HtmlSaveInfo.SplitCssIntoPages
        /////////    is true
        ///////// </summary>
        /// ///public bool SuppliedPathIsTemplate;
        // Ctors
        CssSavingInfo();
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CssSavingInfo, CODEPORTING_ARGS());
        
    };
    
    /// <summary>
    /// If SplitToPages property of HtmlSaveOptions, then several HTML-files (one HTML file per converted page)
    /// are created during conversion of PDF to HTML. 
    /// This class represents set of data  that related to custom saving of one HTML-page's markup 
    /// during conversion of PDF to HTML 
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS HtmlPageMarkupSavingInfo : public System::Object
    {
        typedef HtmlPageMarkupSavingInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::HtmlConverter;
        
    public:
    
        /// <summary>
        /// Set by converter.
        /// Supposed file name that goes from converter to code of custom method
        /// Can be used in custom code to decide how to process or where to save content
        /// </summary>
        System::String SupposedFileName;
        /// <summary>
        /// Set by converter.
        /// Represents saved HTML as stream
        /// </summary>
        System::SharedPtr<System::IO::Stream> ContentStream;
        /// <summary>
        /// Set by converter.
        /// If SplitToPages property set, then several HTML-files(one HTML file per converted page)
        /// are created during conversion  created .
        /// This property tells to custom code from what page of original PDF was created saved HTML-markup.
        /// If original page number for some reason is inknown or SplitOnPages=false,then this property allways contains '0'
        /// that signals that converter cannot supply exact original PDF's page number for supplied HTML-markup file.
        /// </summary>
        int32_t PdfHostPageNumber;
        /// <summary>
        /// Set by converter.
        /// If set SplitToPages property, then several HTML-files(one HTML file per converted page)
        /// are created during conversion  created . This property contains ordinal of saved HTML page's file.
        /// The property can be used in logic of custom code
        /// to decide how to process or where to save HTML page and 
        /// If splitting on pages turned off this value always contains '1'
        /// since in such case  only one big HTML page is generated
        /// for whole source document.
        /// </summary>
        int32_t HtmlHostPageNumber;
        /// <summary>
        /// Should be set in custom code when necessary.
        /// This flag must be set to "true" in custom code if for some reasons
        /// supplied html-markup should be processed not with custom code but 
        /// with converter's code itself in standard for converter way. 
        /// So, setting if this flag in custom code  means that
        /// custom code did not process referenced file and 
        /// converter must handle it itself 
        /// </summary>
        bool CustomProcessingCancelled;
        
    protected:
    
        HtmlPageMarkupSavingInfo();
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HtmlPageMarkupSavingInfo, CODEPORTING_ARGS());
        
    };
    
    /// <summary>
    /// Represents set of data 
    /// that related to request from converter to 
    /// custom code aimed to get desirable URL (or URL template)of subject CSS 
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS CssUrlRequestInfo : public System::Object
    {
        typedef CssUrlRequestInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Should be set by custom code if it cannot or should not define URL that 
        /// will be used in generated HTML for referencing of that CSS.
        /// If it's 'true', then CSS file will be saved in standard way in standard place. 
        /// </summary>
        bool CustomProcessingCancelled;
        
        /// <summary>
        /// Creates instance of CssUrlRequestInfo
        /// </summary>
        ASPOSE_PDF_SHARED_API CssUrlRequestInfo();
        
    };
    
    /// <summary>
    /// This class represents set of data 
    /// that related to external resource image file's saving
    /// during PDF to HTML conversion.  
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS HtmlImageSavingInfo : public Aspose::Pdf::SaveOptions::ResourceSavingInfo
    {
        typedef HtmlImageSavingInfo ThisType;
        typedef Aspose::Pdf::SaveOptions::ResourceSavingInfo BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Represents type of saved image referenced in HTML.
        /// Set by converter and can be used in custom code 
        /// to decide what should be done
        /// </summary>
        HtmlSaveOptions::HtmlImageType ImageType;
        /// <summary>
        /// Saved image can pertain to HTML itself or can be extracted.
        /// from SVG embedded to HTML. 
        /// This property can tell to custom code what's that type of parent of processed image.  
        /// It set by converter and can be used in custom code 
        /// to decide what should be done with that image 
        /// (f.e. custom code can decide where to save image
        /// or how it must be referenced in parent's content). 
        /// </summary>
        HtmlSaveOptions::ImageParentTypes ParentType;
        /// <summary>
        /// Tells to custom code to what page of original PDF document pertains saved image
        /// Since it's possible that will be saved not all pages of original document,
        /// this value tells us about host page number in original PDF. If original page number for some reason
        /// is inknown, it allways return '1'
        /// </summary>
        int32_t PdfHostPageNumber;
        /// <summary>
        /// Tells to custom code to what page of generated set of HTML page-files pertains saved image.
        /// If splitting on pages turned off this value always contains '1' since in such case 
        /// Only one HTML page is generated.
        /// </summary>
        int32_t HtmlHostPageNumber;
        
        /// <summary>
        ///  creates new instance of SaveOptions.ResourceSavingInfo
        /// </summary>
        ASPOSE_PDF_SHARED_API HtmlImageSavingInfo();
        
    };
    
    
public:

    /// <summary>
    /// This handler can be used to handle conversion progress events
    /// f.e. it can be used to show progress bar or messages about current amount
    /// of processed  pages, example of handler's code that shows progress on console is :
    /// </summary>
    /// <example>
    /// </example>
    UnifiedSaveOptions::ConversionProgressEventHandler CustomProgressHandler;
    
    /// <summary>
    /// Indicates that full font will be saved, supports only True Type Fonts.
    /// By default SaveFullFont = false and the converter saves the subset of the initial font
    /// needed to display the text of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SaveFullFont() const;
    /// <summary>
    /// Indicates that full font will be saved, supports only True Type Fonts.
    /// By default SaveFullFont = false and the converter saves the subset of the initial font
    /// needed to display the text of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SaveFullFont(bool value);
    
    /// <summary>
    /// This parameter defines required antialiasing measures during conversion of compound background images from PDF to HTML
    /// </summary>
    HtmlSaveOptions::AntialiasingProcessingType AntialiasingProcessing;
    /// <summary>
    /// Pdf can contain transparent texts that can be selected to clipboard (usually it happen when document contains images and OCRed texts extracted from it).
    /// This settings tells to converter whether we need save such texts as transparent
    /// selectable texts in result HTML
    /// </summary>
    bool SaveTransparentTexts;
    /// <summary>
    /// Pdf can contain texts that are shadowed by another elements (f.e. by images) but 
    /// can be selected to clipboard in Acrobat Reader (usually it happen when document contains images and OCRed texts extracted from it).
    /// This settings tells to converter whether we need save such texts as transparent
    /// selectable texts in result HTML to mimic behaviour of Acrobat Reader (othervise such texts are usually saved as hidden, not available for copying to clipboard)
    /// </summary>
    bool SaveShadowedTextsAsTransparentTexts;
    /// <summary>
    /// Defines font saving mode that will be used during saving of PDF to desirable format
    /// </summary>      
    HtmlSaveOptions::FontSavingModes FontSavingMode;
    /// <summary>
    /// This attribute represents set of settings used for drawing border (if any)
    /// in result HTML document around area that represent source PDF page.
    /// In essence it concerns of showing of page's paper edges,
    /// not page border referenced in PDF page itself. 
    /// </summary>
    System::SharedPtr<SaveOptions::BorderInfo> PageBorderIfAny;
    /// <summary>
    /// This attribute represents set of extra page margin (if any)
    /// in result HTML document around area that represent source PDF page.
    /// </summary>
    System::SharedPtr<SaveOptions::MarginInfo> PageMarginIfAny;
    /// <summary>
    /// Sets mode of positioning of letters in words in result HTML
    /// </summary>
    HtmlSaveOptions::LettersPositioningMethods LettersPositioningMethod;
    /// <summary>
    /// List of PDF embedded font names that not be embedded in HTML.
    /// </summary>
    System::ArrayPtr<System::String> ExcludeFontNameList;
    /// <summary>
    /// This field can contain saving strategy
    /// that must be used (if present) during conversion 
    /// for customized handling of created referenced resource
    /// files (like images and fonts) related  to nodes of saved HTML.
    /// That strategy must process resources 
    /// and return string that represents desirable URL of saved resource
    /// in generated HTML.
    /// </summary>
    HtmlSaveOptions::ResourceSavingStrategy CustomResourceSavingStrategy;
    /// <summary>
    /// This field can contain saving strategy
    /// that must be used (if present) during conversion 
    /// of Pdf to Html for handling of saving of CSSes related
    /// to created HTML document as whole or to it's pages(if several HTMLpages are generated)
    /// If You want handle CSS file in some specific way, that just please create relevant method and 
    /// assign delegate created from it to this property.    
    /// </summary>
    HtmlSaveOptions::CssSavingStrategy CustomCssSavingStrategy;
    /// <summary>
    /// Result of conversion can contain one or several  HTML-pages
    /// You can  assign to this property delegate created from custom method that implements processing 
    /// of one HTML-page(to be accurately - markup-HTML, without exteranl linked files if any)
    /// that was created during conversion.
    /// In such case  processing (like saving of paage's HTML in stream or disk) can be done in that custom code . 
    /// In such case all the necessary actions for saving of HTML page must be undertaken
    /// in code of supplied method, because saving of result in code of converter will be not in use  . 
    /// If processing for this or that case for some reason must be done by converter's code itself,
    /// not in custom code, please set in custom code flag 'CustomProcessingCancelled'
    /// of 'htmlSavingInfo' parameter's variable : it will signal to converter that all the necessary
    /// steps for processing of that resource  must be done in converter itself in same way 
    /// as if there was no any external custom code for procesing .
    /// </summary>
    HtmlSaveOptions::HtmlPageMarkupSavingStrategy CustomHtmlSavingStrategy;
    /// <summary>
    /// This field can contain custom method that returns
    /// URL (Or URL template if multipage generation is on - see details below) of subject
    /// CSS as it should be put in generated result HTML.
    /// F.e. if You  want converter put some specific URL instead of standard
    /// CSS file name into generated CSS, then You should just create and put into this property method
    /// that generates desirable URL.
    /// If flag  'SplitCssIntoPages' set, then this custom strategy (if any)
    /// must return not exact URL of CSS but rather template string that
    /// (after substitution of placeholder with page number with string.Format() 
    /// function inside converter) can be resolved into URL for this or that page's CSS' URL. 
    /// Examples of expected return string in such case are:
    /// 'SomeTargetLocation-page_{0}.css','../PartHandlers/GetCss.aspx?DocumentId=45654&amp;CssPage={0}')
    /// </summary>
    HtmlSaveOptions::CssUrlMakingStrategy CustomStrategyOfCssUrlCreation;
    
    /// <summary>
    /// Gets the <see cref="HtmlDocumentType"></see>.
    /// </summary>
    /// <value>
    /// The <see cref="HtmlDocumentType"></see>.
    /// </value>
    ASPOSE_PDF_SHARED_API HtmlDocumentType get_DocumentType() const;
    /// <summary>
    /// Sets the <see cref="HtmlDocumentType"></see>.
    /// </summary>
    /// <value>
    /// The <see cref="HtmlDocumentType"></see>.
    /// </value>
    ASPOSE_PDF_SHARED_API void set_DocumentType(HtmlDocumentType value);
    /// <summary>
    /// Gets the flag that indicates whether
    /// found SVG graphics(if any) will be compressed(zipped) 
    /// into SVGZ format during saving
    /// </summary>
    /// <value>
    /// The <see cref="HtmlDocumentType"></see>.
    /// </value>
    ASPOSE_PDF_SHARED_API bool get_CompressSvgGraphicsIfAny() const;
    /// <summary>
    /// Sets the flag that indicates whether
    /// found SVG graphics(if any) will be compressed(zipped) 
    /// into SVGZ format during saving
    /// </summary>
    /// <value>
    /// The <see cref="HtmlDocumentType"></see>.
    /// </value>
    ASPOSE_PDF_SHARED_API void set_CompressSvgGraphicsIfAny(bool value);
    
    /// <summary>
    /// Gets or sets path to directory to which must be saved only SVG-images if they 
    /// are encountered during saving of document as HTML. If parameter is empty or null
    /// then SVG files(if any) wil be saved together with other image-files (near to output file)
    /// or in special folder for images (if it specified in SpecialImagesFolderIfAny option).
    /// It does not affect anything if CustomImageSavingStrategy
    /// property was successfully used to process relevant image file.  
    /// </summary>
    System::String SpecialFolderForSvgImages;
    /// <summary>
    /// Gets or sets path to directory to which must be saved any images if they 
    /// are encountered during saving of document as HTML. If parameter is empty or null
    /// then image files(if any) wil be saved together with other files linked to HTML
    /// It does not affect anything if CustomImageSavingStrategy
    /// property was successfully used to process relevant image file. 
    /// </summary>
    System::String SpecialFolderForAllImages;
    
    /// <summary>
    /// When multipage-mode selected(i.e 'SplitIntoPages' is 'true'), 
    /// then this attribute defines whether should be created separate CSS-file
    /// for each result HTML page.
    /// By default this attribute is false, so, will be created
    /// one  big common CSS for all created pages. Summary size of all
    /// CSSes generated in this mode(one CSS per page) usually
    /// much more than size of one big CSS file, because in former case 
    /// CSS classes are duplicates in such case in several CSS files for each page.
    /// So, this setting is worse to be used only when You are interested
    /// in future processing of each HTML page independently, and therefore size
    /// of CSS of each one page taken apart is the most critical issue.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SplitCssIntoPages() const;
    /// <summary>
    /// When multipage-mode selected(i.e 'SplitIntoPages' is 'true'), 
    /// then this attribute defines whether should be created separate CSS-file
    /// for each result HTML page.
    /// By default this attribute is false, so, will be created
    /// one  big common CSS for all created pages. Summary size of all
    /// CSSes generated in this mode(one CSS per page) usually
    /// much more than size of one big CSS file, because in former case 
    /// CSS classes are duplicates in such case in several CSS files for each page.
    /// So, this setting is worse to be used only when You are interested
    /// in future processing of each HTML page independently, and therefore size
    /// of CSS of each one page taken apart is the most critical issue.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SplitCssIntoPages(bool value);
    
    /// <summary>
    ///  When PDFtoHTML converter generates result CSSs, CSS class names
    /// (something like ".stl_01 {}" ... ".stl_NN {}) are generated
    /// and used in result CSS. This property allows forcibly set class name prefix
    /// For example, if You want that all class names start with 'my_prefix_'
    /// (i.e. were something like 'my_prefix_1' ... 'my_prefix_NNN' ) , 
    /// then just assign 'my_prefix_' to this property before conversion.
    /// If this property will stay untouched(i.e. null will be leaved as value ), then
    /// converter will generate class names itself 
    /// (it wil be something like ".stl_01 {}" ... ".stl_NN {}")
    /// </summary>
    System::String CssClassNamesPrefix;
    
    /// <summary>
    /// Gets the flag that indicates whether each page of source 
    /// document will be converted into it's own target HTML document, 
    /// i.e whether result HTML will be splitted into several HTML-pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SplitIntoPages() const;
    /// <summary>
    /// Sets the flag that indicates whether each page of source 
    /// document will be converted into it's own target HTML document, 
    /// i.e whether result HTML will be splitted into several HTML-pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SplitIntoPages(bool value);
    
    /// <summary>
    /// It defines whether referenced files (HTML, Fonts,Images, CSSes)
    /// will be embedded into main HTML file or will be generated as apart binary entities 
    /// </summary>
    HtmlSaveOptions::PartsEmbeddingModes PartsEmbeddingMode;
    /// <summary>
    /// Sometimes specific reqirments to generation of HTML markup are present.
    /// This parameter defines HTML preparing modes that can be used
    /// during conversion of PDF to HTML to match such specific requirments.
    /// </summary>
    HtmlSaveOptions::HtmlMarkupGenerationModes HtmlMarkupGenerationMode;
    /// <summary>
    /// Converted PDF can contain raster images
    /// This parameter defines how they should be handled
    /// during conversion of PDF to HTML
    /// </summary>
    HtmlSaveOptions::RasterImagesSavingModes RasterImagesSavingMode;
    /// <summary>
    /// Defines whether in created HTML will be removed top and bottom empty area without any content (if any).
    /// </summary>
    bool RemoveEmptyAreasOnTopAndBottom;
    
    /// <summary>
    /// With this property You can explicitely define 
    /// what pages of document should be converted.
    /// Pages in this list must have 1-based numbers. I.e. 
    /// valid numbers of pages must be taken from range (1...[NumberOfPagesInConvertedDocument])
    /// Order of appearing of pages in this list does not affect their
    /// order in result HTML page(s) - in result pages allways will go in order in which they are 
    /// present in source PDF.
    /// If this list is null (as it is by default), all pages will be converted.
    /// If any page number of this list will go out of range of present pages(1-[amountOfPagesInDocument])
    /// exception will be thrown. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<int32_t> get_ExplicitListOfSavedPages() override;
    /// <summary>
    /// With this property You can explicitely define 
    /// what pages of document should be converted.
    /// Pages in this list must have 1-based numbers. I.e. 
    /// valid numbers of pages must be taken from range (1...[NumberOfPagesInConvertedDocument])
    /// Order of appearing of pages in this list does not affect their
    /// order in result HTML page(s) - in result pages allways will go in order in which they are 
    /// present in source PDF.
    /// If this list is null (as it is by default), all pages will be converted.
    /// If any page number of this list will go out of range of present pages(1-[amountOfPagesInDocument])
    /// exception will be thrown. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExplicitListOfSavedPages(System::ArrayPtr<int32_t> value) override;
    /// <summary>
    /// Gets a value indicating whether that HTML is created as fixed layout.
    /// </summary>
    /// <value><c>true</c> if [fixed layout]; otherwise, <c>false</c>.</value>
    ASPOSE_PDF_SHARED_API bool get_FixedLayout() const;
    /// <summary>
    /// Sets a value indicating whether that HTML is created as fixed layout.
    /// </summary>
    /// <value><c>true</c> if [fixed layout]; otherwise, <c>false</c>.</value>
    ASPOSE_PDF_SHARED_API void set_FixedLayout(bool value);
    /// <summary>
    /// Gets resolution for image rendering.
    /// </summary>
    /// <value>Resolution</value>
    ASPOSE_PDF_SHARED_API int32_t get_ImageResolution() const;
    /// <summary>
    /// Sets resolution for image rendering.
    /// </summary>
    /// <value>Resolution</value>
    ASPOSE_PDF_SHARED_API void set_ImageResolution(int32_t value);
    /// <summary>
    /// Specifies the name of an installed font which is used to substitute
    /// any document font that is not embedded and not installed in the system. 
    /// If null then default substitution font is used.
    /// </summary>
    /// <value>Font name</value>
    ASPOSE_PDF_SHARED_API System::String get_DefaultFontName() const;
    /// <summary>
    /// Specifies the name of an installed font which is used to substitute
    /// any document font that is not embedded and not installed in the system. 
    /// If null then default substitution font is used.
    /// </summary>
    /// <value>Font name</value>
    ASPOSE_PDF_SHARED_API void set_DefaultFontName(System::String value);
    /// <summary>
    /// Gets indication that errors related to absence of font will be ignored.
    /// true - means that errors of absence of font will be ignored. Text segments that refer to incorrect resources will be skipped during processing.
    /// false by default
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IgnoreResourceFontErrors() const;
    /// <summary>
    /// Sets indication that errors related to absence of font will be ignored.
    /// true - means that errors of absence of font will be ignored. Text segments that refer to incorrect resources will be skipped during processing.
    /// false by default
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IgnoreResourceFontErrors(bool value);
    /// <summary>
    /// Defines batch size if batched conversion is applicable
    /// to source and destination formats pair.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_BatchSize() override;
    /// <summary>
    /// Defines batch size if batched conversion is applicable
    /// to source and destination formats pair.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BatchSize(int32_t value) override;
    /// <summary>
    /// Text with the specified size or less will be ignored during conversion.
    /// We do not remove this text, we ignore it and do not transfer it to the output file
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Nullable<float> get_IgnoredTextFontSize() const;
    /// <summary>
    /// Text with the specified size or less will be ignored during conversion.
    /// We do not remove this text, we ignore it and do not transfer it to the output file
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IgnoredTextFontSize(System::Nullable<float> value);
    /// <summary>
    /// The flag for combining image fragments into one picture.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_TryMergeFragments() const;
    /// <summary>
    /// The flag for combining image fragments into one picture.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TryMergeFragments(bool value);
    /// <summary>
    /// Font sources of pre-saved fonts. 
    /// </summary>
    /// <remarks>
    /// Fonts may be saved preliminarily for cache purpose and then passed into Html conversion process.
    /// For example it may be useful in document splitting scenario and processing document pages in multiple threads with single set of fonts.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Text::FontSourceCollection> get_FontSources() const;
    
    /// <summary>
    /// Defines encoding special rule to tune PDF decoding for current document
    /// </summary>
    HtmlSaveOptions::FontEncodingRules FontEncodingStrategy;
    /// <summary>
    /// If attribute 'SplitOnPages=false', than whole HTML representing all input PDF pages will be 
    /// put into one big result HTML file. 
    /// This flag defines whether result HTML will be generated in such way
    /// that flow of areas that represent PDF pages in result HTML will depend
    /// on screen resolution of viewer. 
    /// Suppose width of screen on viewer side is big enough to put 2 or more pages one near
    /// other in horizontal direction. If this flag set to true, then this opportunity
    /// will be used (as many pages will be shown  in horizontal direction one near another
    /// as it possible, then next horizontal group of pages will be shown under first one ).
    /// Otherwise pages will flow in such way: next page goes always under previous one.
    /// </summary>
    bool PagesFlowTypeDependsOnViewersScreenSize;
    /// <summary>
    /// PDF itself does not contain underlining markers for texts. It emulated with line situated under text.
    /// This option allows converter try guess that this or that line is a text's underlining
    /// and put this info into CSS instead of drawing of underlining graphically
    /// </summary>
    bool TrySaveTextUnderliningAndStrikeoutingInCss;
    
    /// @deprecated AdditionalMarginWidthInPoints is deprecated, please use PageMarginIfAny instead.
    /// <summary>
    /// If attribute 'SplitOnPages=false', than whole HTML representing all input PDF pages wont
    /// be not split into different HTML pages, but will be put into one big result HTML file.
    /// But each source PDF page will be represented with it's own 
    /// rectangle  area in HTML (if necessary that areas can be bordered to show page paper edges
    /// with special attribute 'PageBorderIfAny'.
    /// This parameter defines width of margin that will be forcibly left around that output HTML-areas
    /// that represent pages of source PDF document.In essence it defines guaranteed interval between
    /// HTML-representations of PDF "paper" pages such mode of conversion.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_AdditionalMarginWidthInPoints() const;
    /// @deprecated AdditionalMarginWidthInPoints is deprecated, please use PageMarginIfAny instead.
    /// <summary>
    /// If attribute 'SplitOnPages=false', than whole HTML representing all input PDF pages wont
    /// be not split into different HTML pages, but will be put into one big result HTML file.
    /// But each source PDF page will be represented with it's own 
    /// rectangle  area in HTML (if necessary that areas can be bordered to show page paper edges
    /// with special attribute 'PageBorderIfAny'.
    /// This parameter defines width of margin that will be forcibly left around that output HTML-areas
    /// that represent pages of source PDF document.In essence it defines guaranteed interval between
    /// HTML-representations of PDF "paper" pages such mode of conversion.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AdditionalMarginWidthInPoints(int32_t value);
    /// <summary>
    /// If attribute UseZORder set to true, graphics and text are added to resultant HTML document
    /// accordingly Z-order in original PDF document. If this attribute is false all graphics is put
    /// as single layer which may cause some unnecessary effects for overlapped objects.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseZOrder() const;
    /// <summary>
    /// If attribute UseZORder set to true, graphics and text are added to resultant HTML document
    /// accordingly Z-order in original PDF document. If this attribute is false all graphics is put
    /// as single layer which may cause some unnecessary effects for overlapped objects.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseZOrder(bool value);
    /// <summary>
    /// If attribute ConvertMarkedContentToLayers set to true then an all elements inside a PDF marked
    /// content (layer) will be put into an HTML div with "data-pdflayer" attribute specifying a layer name.
    /// This layer name will be extracted from optional properties of PDF marked content.
    /// If this attribute is false (by default) then no any layers will be created from PDF marked content.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ConvertMarkedContentToLayers() const;
    /// <summary>
    /// If attribute ConvertMarkedContentToLayers set to true then an all elements inside a PDF marked
    /// content (layer) will be put into an HTML div with "data-pdflayer" attribute specifying a layer name.
    /// This layer name will be extracted from optional properties of PDF marked content.
    /// If this attribute is false (by default) then no any layers will be created from PDF marked content.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ConvertMarkedContentToLayers(bool value);
    /// <summary>
    /// This attribute sets minimal width of graphic path line.
    /// If thickness of line is less than 1px Adobe Acrobat rounds it to this value. So this attribute can
    /// be used to emulate this behavior for HTML browsers.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_MinimalLineWidth() const;
    /// <summary>
    /// This attribute sets minimal width of graphic path line.
    /// If thickness of line is less than 1px Adobe Acrobat rounds it to this value. So this attribute can
    /// be used to emulate this behavior for HTML browsers.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MinimalLineWidth(float value);
    /// <summary>
    /// This attribute switch on the mode when text glyphs will not be grouped into words and strings
    /// This mode allows to keep maximum precision during positioning of glyphs on the page and it can be
    /// used for conversion documents with music notes or glyphs that should be placed separately each other.
    /// This parameter will be applied to document only when the value of FixedLayout attribute is true.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_PreventGlyphsGrouping() const;
    /// <summary>
    /// This attribute switch on the mode when text glyphs will not be grouped into words and strings
    /// This mode allows to keep maximum precision during positioning of glyphs on the page and it can be
    /// used for conversion documents with music notes or glyphs that should be placed separately each other.
    /// This parameter will be applied to document only when the value of FixedLayout attribute is true.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PreventGlyphsGrouping(bool value);
    /// <summary>
    /// This attribute specifies a sequential grouping of glyphs and words into strings
    /// For example tags and words has different order in converted HTML and you want them to match.
    /// This parameter will be applied to document only when the value of FixedLayout attribute is true.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SimpleTextboxModeGrouping() const;
    /// <summary>
    /// This attribute specifies a sequential grouping of glyphs and words into strings
    /// For example tags and words has different order in converted HTML and you want them to match.
    /// This parameter will be applied to document only when the value of FixedLayout attribute is true.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SimpleTextboxModeGrouping(bool value);
    /// <summary>
    /// This attribute specifies full width paragraph text for Flow mode, FixedLayout = false
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_FlowLayoutParagraphFullWidth() const;
    /// <summary>
    /// This attribute specifies full width paragraph text for Flow mode, FixedLayout = false
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FlowLayoutParagraphFullWidth(bool value);
    /// <summary>
    /// If attribute RenderTextAsImage set to true, the text from the source becomes an image in HTML.
    /// May be useful to make text unselectable
    /// or HTML text is not rendered properly.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_RenderTextAsImage() const;
    /// <summary>
    /// If attribute RenderTextAsImage set to true, the text from the source becomes an image in HTML.
    /// May be useful to make text unselectable
    /// or HTML text is not rendered properly.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RenderTextAsImage(bool value);
    /// <summary>
    /// Gets HTML page title.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Title() const;
    /// <summary>
    /// Sets HTML page title.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="HtmlSaveOptions"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API HtmlSaveOptions();
    /// <summary>
    /// Initializes a new instance of the <see cref="HtmlSaveOptions"></see> class.
    /// </summary>
    /// <param name="documentType">The <see cref="HtmlDocumentType"></see>.</param>
    ASPOSE_PDF_SHARED_API HtmlSaveOptions(HtmlDocumentType documentType);
    /// <summary>
    /// Initializes a new instance of the <see cref="HtmlSaveOptions"></see> class.
    /// </summary>
    /// <param name="fixedLayout">if set to <c>true</c> HTML is created as fixed layout.</param>
    ASPOSE_PDF_SHARED_API HtmlSaveOptions(bool fixedLayout);
    /// <summary>
    /// Initializes a new instance of the <see cref="HtmlSaveOptions"></see> class.
    /// </summary>
    /// <param name="documentType">The <see cref="HtmlDocumentType"></see>.</param>
    /// <param name="fixedLayout">if set to <c>true</c> HTML is created as fixed layout.</param>
    ASPOSE_PDF_SHARED_API HtmlSaveOptions(HtmlDocumentType documentType, bool fixedLayout);
    
protected:

    /// <summary>
    /// This attribute determines text direction in converted document.
    /// </summary>
    Aspose::Pdf::Direction get_Direction() const;
    /// <summary>
    /// This attribute determines text direction in converted document.
    /// </summary>
    void set_Direction(Aspose::Pdf::Direction value);
    
    void CheckParametersConsistensyAndThrowExceptionOtherwise(bool targetIsStream);
    void ResetInternals();
    
private:

    System::ArrayPtr<int32_t> _explicitListOfSavedPages;
    HtmlDocumentType _documentType;
    bool _fixedLayout;
    int32_t _imageResolution;
    System::String _defaultFontName;
    int32_t _batchSize;
    bool _ignoreResourceFontErrors;
    bool _saveFullFont;
    /// <summary>
    /// Text with the specified size or less will be ignored during conversion.
    /// We do not remove this text, we ignore it and do not transfer it to the output file
    /// </summary>
    System::Nullable<float> _ignoredTextFontSize;
    /// <summary>
    /// The flag for combining image fragments into one picture.
    /// </summary>
    bool _tryMergeFragments;
    bool _compressSVGIfAny;
    bool _splitCssIntoPages;
    bool _splitIntoPages;
    System::SharedPtr<Text::FontSourceCollection> _fontSources;
    int32_t _additionalPageMarginWidth;
    bool _useZOrder;
    bool pr_ConvertMarkedContentToLayers;
    float pr_MinimalLineWidth;
    bool pr_PreventGlyphsGrouping;
    bool _simpleTextboxModeGrouping;
    bool pr_FlowLayoutParagraphFullWidth;
    bool pr_RenderTextAsImage;
    System::String pr_Title;
    Aspose::Pdf::Direction pr_Direction;
    
    void CheckStreamSavingParamsConsistency();
    void CheckFileSavingParamsConsistency();
    
};

} // namespace Pdf
} // namespace Aspose


