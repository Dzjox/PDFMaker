#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/idisposable.h>
#include <system/array.h>
#include <cstdint>

#include "DOM/IPresentationComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IRenderingOptions;
class ISaveOptions;
enum class SaveFormat;
namespace Xaml
{
class IXamlOptions;
} // namespace Xaml
} // namespace Export
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
enum class SourceFormat;
namespace Theme
{
class IMasterTheme;
} // namespace Theme
namespace Vba
{
class IVbaProject;
} // namespace Vba
} // namespace Slides
} // namespace Aspose
namespace System
{
class DateTime;
namespace Drawing
{
class Bitmap;
class Color;
class Size;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
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
/// Presentation document
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPresentation : public Aspose::Slides::IPresentationComponent, public System::IDisposable
{
    typedef IPresentation ThisType;
    typedef Aspose::Slides::IPresentationComponent BaseType;
    typedef System::IDisposable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns date and time which will substitute content of datetime fields.
    /// Time of this Presentation object creation by default.
    /// Read <see cref="System::DateTime"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::DateTime get_CurrentDateTime() = 0;
    /// <summary>
    /// Sets date and time which will substitute content of datetime fields.
    /// Time of this Presentation object creation by default.
    /// Write <see cref="System::DateTime"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CurrentDateTime(System::DateTime value) = 0;
    /// <summary>
    /// Returns HeaderFooter manager of the presentation.
    /// Read-only <see cref="Aspose::Slides::IPresentationHeaderFooterManager">IPresentationHeaderFooterManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentationHeaderFooterManager> get_HeaderFooterManager() = 0;
    /// <summary>
    /// Gets manager of the permissions for this presentation. 
    /// Read-only <see cref="Aspose::Slides::IProtectionManager">IProtectionManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IProtectionManager> get_ProtectionManager() = 0;
    /// <summary>
    /// Returns a list of all slides that are defined in the presentation.
    /// Read-only <see cref="Aspose::Slides::ISlideCollection">ISlideCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlideCollection> get_Slides() = 0;
    /// <summary>
    /// Returns a list of all slides sections that are defined in the presentation.
    /// Read-only <see cref="Aspose::Slides::ISectionCollection">ISectionCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISectionCollection> get_Sections() = 0;
    /// <summary>
    /// Returns slide size object.
    /// Read-only <see cref="Aspose::Slides::ISlideSize">ISlideSize</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlideSize> get_SlideSize() = 0;
    /// <summary>
    /// Returns notes slide size object.
    /// Read-only <see cref="Aspose::Slides::INotesSize">INotesSize</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<INotesSize> get_NotesSize() = 0;
    /// <summary>
    /// Returns a list of all layout slides that are defined in the presentation.
    /// Read-only <see cref="Aspose::Slides::IGlobalLayoutSlideCollection">IGlobalLayoutSlideCollection</see>.
    /// </summary>
    /// <remarks>
    /// You can access to alternative API for adding/inserting/removing/cloning layout slides 
    /// by using IMasterSlide::get_LayoutSlides property.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGlobalLayoutSlideCollection> get_LayoutSlides() = 0;
    /// <summary>
    /// Returns a list of all master slides that are defined in the presentation.
    /// Read-only <see cref="Aspose::Slides::IMasterSlideCollection">IMasterSlideCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterSlideCollection> get_Masters() = 0;
    /// <summary>
    /// Returns notes master manager.
    /// Read-only <see cref="Aspose::Slides::IMasterNotesSlideManager">IMasterNotesSlideManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterNotesSlideManager> get_MasterNotesSlideManager() = 0;
    /// <summary>
    /// Returns handout master manager.
    /// Read-only <see cref="Aspose::Slides::IMasterHandoutSlideManager">IMasterHandoutSlideManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterHandoutSlideManager> get_MasterHandoutSlideManager() = 0;
    /// <summary>
    /// Returns fonts manager.
    /// Read-only <see cref="Aspose::Slides::IFontsManager">IFontsManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontsManager> get_FontsManager() = 0;
    /// <summary>
    /// Returns default text style for shapes.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextStyle> get_DefaultTextStyle() = 0;
    /// <summary>
    /// Returns the collection of comments autors.
    /// Read-only <see cref="Aspose::Slides::ICommentAuthorCollection">ICommentAuthorCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICommentAuthorCollection> get_CommentAuthors() = 0;
    /// <summary>
    /// Returns DocumentProperties object which contains standard and custom document properties.
    /// Read-only <see cref="Aspose::Slides::IDocumentProperties">IDocumentProperties</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDocumentProperties> get_DocumentProperties() = 0;
    /// <summary>
    /// Returns the collection of all images in the presentation.
    /// Read-only <see cref="Aspose::Slides::IImageCollection">IImageCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImageCollection> get_Images() = 0;
    /// <summary>
    /// Returns the collection of all embedded audio files in the presentation.
    /// Read-only <see cref="Aspose::Slides::IAudioCollection">IAudioCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAudioCollection> get_Audios() = 0;
    /// <summary>
    /// Returns the collection of all embedded video files in the presentation.
    /// Read-only <see cref="Aspose::Slides::IVideoCollection">IVideoCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVideoCollection> get_Videos() = 0;
    /// <summary>
    /// Returns the presentation's custom data.
    /// Read-only <see cref="Aspose::Slides::ICustomData">ICustomData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICustomData> get_CustomData() = 0;
    /// <summary>
    /// Gets VBA project with presentation macros.
    /// Read <see cref="Aspose::Slides::Vba::IVbaProject">Vba::IVbaProject</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Vba::IVbaProject> get_VbaProject() = 0;
    /// <summary>
    /// Gets VBA project with presentation macros.
    /// Write <see cref="Aspose::Slides::Vba::IVbaProject">Vba::IVbaProject</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_VbaProject(System::SharedPtr<Vba::IVbaProject> value) = 0;
    /// <summary>
    /// Returns information about from which format presentation was loaded.
    /// Read-only <see cref="IPresentation::get_SourceFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::SourceFormat get_SourceFormat() = 0;
    /// <summary>
    /// Returns master theme of the presentation.
    /// Read-only <see cref="Aspose::Slides::Theme::IMasterTheme">Theme::IMasterTheme</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Theme::IMasterTheme> get_MasterTheme() = 0;
    /// <summary>
    /// Provides easy access to all hyperlinks contained in all presentation slides (not in master, layout, notes slides).
    /// Read-only <see cref="Aspose::Slides::IHyperlinkQueries">IHyperlinkQueries</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlinkQueries> get_HyperlinkQueries() = 0;
    /// <summary>
    /// Gets presentation wide view properties.
    /// Read-only <see cref="Aspose::Slides::IViewProperties">IViewProperties</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IViewProperties> get_ViewProperties() = 0;
    /// <summary>
    /// Represents the first slide number in the presentation.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_FirstSlideNumber() = 0;
    /// <summary>
    /// Represents the first slide number in the presentation.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FirstSlideNumber(int32_t value) = 0;
    /// <summary>
    /// Returns all custom data parts in the presentaion.
    /// Read-only <see cref="Aspose::Slides::ICustomXmlPart">ICustomXmlPart</see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ICustomXmlPart>> get_AllCustomXmlParts() = 0;
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
    /// 
    ///     if (allSignaturesAreValid)
    ///         System::Console::WriteLine(u"Presentation is genuine, all signatures are valid.");
    ///     else
    ///         System::Console::WriteLine(u"Presentation has been modified since signing.");
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDigitalSignatureCollection> get_DigitalSignatures() = 0;
    
    /// <summary>
    /// Saves all slides of a presentation to a file with the specified format.
    /// </summary>
    /// <param name="fname">Path to the created file.</param>
    /// <param name="format">Format of the exported data.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::String fname, Export::SaveFormat format) = 0;
    /// <summary>
    /// Saves all slides of a presentation to a stream in the specified format.
    /// </summary>
    /// <param name="stream">Output stream.</param>
    /// <param name="format">Format of the exported data.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::SharedPtr<System::IO::Stream> stream, Export::SaveFormat format) = 0;
    /// <summary>
    /// Saves all slides of a presentation to a file with the specified format and with additional options.
    /// </summary>
    /// <param name="fname">Path to the created file.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <param name="options">Additional format options.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::String fname, Export::SaveFormat format, System::SharedPtr<Export::ISaveOptions> options) = 0;
    /// <summary>
    /// Saves all slides of a presentation to a stream in the specified format and with additional options.
    /// </summary>
    /// <param name="stream">Output stream.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <param name="options">Additional format options.</param>
    /// <exception cref="System::NotSupportedException">If you try to save encrypted file in 
    /// none Office 2007-2010 format</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::SharedPtr<System::IO::Stream> stream, Export::SaveFormat format, System::SharedPtr<Export::ISaveOptions> options) = 0;
    /// <summary>
    /// Saves specified slides of a presentation to a file with the specified format.
    /// </summary>
    /// <param name="fname">Path to the created file.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <exception cref="System::ArgumentNullException">When stream or slides parameter is null.</exception>
    /// <exception cref="System::ArgumentOutOfRangeException">When slides parameter contains wrong page numbers.</exception>
    /// <exception cref="System::InvalidOperationException">When an unsupported SaveFormat is used, e.g. PPTX, PPTM, PPSX, PPSM, POTX, POTM, PPT, ODP.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::String fname, System::ArrayPtr<int32_t> slides, Export::SaveFormat format) = 0;
    /// <summary>
    /// Saves specified slides of a presentation to a file with the specified format.
    /// </summary>
    /// <param name="fname">Path to the created file.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <param name="options">Additional format options.</param>
    /// <exception cref="System::ArgumentNullException">When stream or slides parameter is null.</exception>
    /// <exception cref="System::ArgumentOutOfRangeException">When slides parameter contains wrong page numbers.</exception>
    /// <exception cref="System::InvalidOperationException">When an unsupported SaveFormat is used, e.g. PPTX, PPTM, PPSX, PPSM, POTX, POTM, PPT, ODP.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::String fname, System::ArrayPtr<int32_t> slides, Export::SaveFormat format, System::SharedPtr<Export::ISaveOptions> options) = 0;
    /// <summary>
    /// Saves specified slides of a presentation to a stream in the specified format.
    /// </summary>
    /// <param name="stream">Output stream.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <exception cref="System::ArgumentNullException">When stream or slides parameter is null.</exception>
    /// <exception cref="System::ArgumentOutOfRangeException">When slides parameter contains wrong page numbers.</exception>
    /// <exception cref="System::InvalidOperationException">When an unsupported SaveFormat is used, e.g. PPTX, PPTM, PPSX, PPSM, POTX, POTM, PPT, ODP.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::SharedPtr<System::IO::Stream> stream, System::ArrayPtr<int32_t> slides, Export::SaveFormat format) = 0;
    /// <summary>
    /// Saves specified slides of a presentation to a stream in the specified format.
    /// </summary>
    /// <param name="stream">Output stream.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <param name="options">Additional format options.</param>
    /// <exception cref="System::ArgumentNullException">When stream or slides parameter is null.</exception>
    /// <exception cref="System::ArgumentOutOfRangeException">When slides parameter contains wrong page numbers.</exception>
    /// <exception cref="System::InvalidOperationException">When an unsupported SaveFormat is used, e.g. PPTX, PPTM, PPSX, PPSM, POTX, POTM, PPT, ODP.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::SharedPtr<System::IO::Stream> stream, System::ArrayPtr<int32_t> slides, Export::SaveFormat format, System::SharedPtr<Export::ISaveOptions> options) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::SharedPtr<Export::Xaml::IXamlOptions> options) = 0;
    /// @deprecated Use GetImages(IRenderingOptions options) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for all slides of a presentation.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options) = 0;
    /// <summary>
    /// Returns a Thumbnail Image objects for all slides of a presentation.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options) = 0;
    /// @deprecated Use GetImages(IRenderingOptions options, int[] slides) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Image objects for specified slides of a presentation.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides) = 0;
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for specified slides of a presentation.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides) = 0;
    /// @deprecated Use GetImages(IRenderingOptions options, float scaleX, float scaleY) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for all slides of a presentation with custom scaling.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options, float scaleX, float scaleY) = 0;
    /// <summary>
    /// Returns a Thumbnail Image objects for all slides of a presentation with custom scaling.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options, float scaleX, float scaleY) = 0;
    /// @deprecated Use GetImages(IRenderingOptions options, int[] slides, float scaleX, float scaleY) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for specified slides of a presentation with custom scaling.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides, float scaleX, float scaleY) = 0;
    /// <summary>
    /// Returns a Thumbnail Image objects for specified slides of a presentation with custom scaling.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides, float scaleX, float scaleY) = 0;
    /// @deprecated Use GetImages(IRenderingOptions options, Size imageSize) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for all slides of a presentation with specified size.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options, System::Drawing::Size imageSize) = 0;
    /// <summary>
    /// Returns a Thumbnail Image objects for all slides of a presentation with specified size.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options, System::Drawing::Size imageSize) = 0;
    /// @deprecated Use GetImages(IRenderingOptions options, int[] slides, Size imageSize) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap objects for specified slides of a presentation with specified size.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> GetThumbnails(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides, System::Drawing::Size imageSize) = 0;
    /// <summary>
    /// Returns a Thumbnail Image objects for specified slides of a presentation with specified size.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="slides">Array with slide positions, starting from 1.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IImage>> GetImages(System::SharedPtr<Export::IRenderingOptions> options, System::ArrayPtr<int32_t> slides, System::Drawing::Size imageSize) = 0;
    /// @deprecated The method will be removed after release of version 24.7.
    /// <summary>
    /// Sends the presentation to the client browser.
    /// This method is absent in ClientProfile versions of Aspose.Slide.
    /// </summary>
    /// <param name="fname">The name for the presentation that will appear at the client browser. 
    /// The name should not contain path.</param>
    /// <param name="format">Format of the exported data.</param>
    /// <param name="response">Response object where to save the document.</param>
    /// <param name="showInline">True to show an option to open the presentation inside the browser.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::String fname, Export::SaveFormat format, System::SharedPtr<System::Web::HttpResponse> response, bool showInline) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::String fname, Export::SaveFormat format, System::SharedPtr<Export::ISaveOptions> options, System::SharedPtr<System::Web::HttpResponse> response, bool showInline) = 0;
    /// <summary>
    /// Returns a Slide, MasterSlide or LayoutSlide by Id.
    /// </summary>
    /// <param name="id">Id of a slide.</param>
    /// <returns>IBaseSlide object.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBaseSlide> GetSlideById(uint32_t id) = 0;
    /// <summary>
    /// Joins runs with same formatting in all paragraphs in all acceptable shapes in all slides.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void JoinPortionsWithSameFormatting() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void HighlightText(System::String text, System::Drawing::Color highlightColor) = 0;
    /// <summary>
    /// Highlights all matches of the sample text with the specified color.
    /// </summary>
    /// <param name="text">The text to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="options">Text search options <see cref="Aspose::Slides::ITextSearchOptions">ITextSearchOptions</see>.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="Aspose::Slides::IFindResultCallback">IFindResultCallback</see>.</param>
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void HighlightText(System::String text, System::Drawing::Color highlightColor, System::SharedPtr<ITextSearchOptions> options, System::SharedPtr<IFindResultCallback> callback) = 0;
    /// <summary>
    /// Highlights all matches of the regular expression with the specified color.
    /// </summary>
    /// <param name="regex">The regular expression <see cref="System::Text::RegularExpressions::Regex"></see> to get strings to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="Aspose::Slides::IFindResultCallback">IFindResultCallback</see>.</param>
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void HighlightRegex(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::Drawing::Color highlightColor, System::SharedPtr<IFindResultCallback> callback) = 0;
    /// <summary>
    /// Replaces all occurrences of the specified text with another specified text.
    /// </summary>
    /// <param name="oldText">The string to be replaced.</param>
    /// <param name="newText">The string to replace all occurrences of oldText.</param>
    /// <param name="options">Text search options <see cref="Aspose::Slides::ITextSearchOptions">ITextSearchOptions</see>.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="Aspose::Slides::IFindResultCallback">IFindResultCallback</see>.</param>
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReplaceText(System::String oldText, System::String newText, System::SharedPtr<ITextSearchOptions> options, System::SharedPtr<IFindResultCallback> callback) = 0;
    /// <summary>
    /// Replaces all matches of the regular expression with the specified string.
    /// </summary>
    /// <param name="regex">The regular expression <see cref="System::Text::RegularExpressions::Regex"></see> to get strings to replace.</param>
    /// <param name="newText">The string to replace all occurrences of the strings to be replaced.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="Aspose::Slides::IFindResultCallback">IFindResultCallback</see>.</param>
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReplaceRegex(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::String newText, System::SharedPtr<IFindResultCallback> callback) = 0;
    /// <summary>
    /// Returns a slide defined in the presentation at the specified index.
    /// Read-only <see cref="Aspose::Slides::ISlide"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> get_Slide(int32_t index) = 0;
    /// <summary>
    /// Returns a slide section defined in the presentation at the specified index.
    /// Read-only <see cref="Aspose::Slides::ISection"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISection> get_Section(int32_t index) = 0;
    /// <summary>
    /// Returns a master slide defined in the presentation at the specified index.
    /// Read-only <see cref="Aspose::Slides::IMasterSlide"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterSlide> get_Master(int32_t index) = 0;
    /// <summary>
    /// Returns the comment author at the specified index.
    /// Read-only <see cref="Aspose::Slides::ICommentAuthor"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICommentAuthor> get_CommentAuthor(int32_t index) = 0;
    /// <summary>
    /// Returns custom property defined by name.
    /// </summary>
    /// <remarks>
    /// Value can be <b>int</b>, <b>float</b>, <b>double</b>, <b>string</b>, <b>bool</b> or <b>DateTime</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Object> get_DocumentProperty(System::String name) = 0;
    /// <summary>
    /// Set custom property defined by name.
    /// </summary>
    /// <remarks>
    /// Value can be <b>int</b>, <b>float</b>, <b>double</b>, <b>string</b>, <b>bool</b> or <b>DateTime</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DocumentProperty(System::String name, System::SharedPtr<System::Object> value) = 0;
    /// <summary>
    /// Returns image in the presentation at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> get_Image(int32_t index) = 0;
    /// <summary>
    /// Return embedded audio file in the presentation at the specified index.
    /// Read-only <see cref="Aspose::Slides::IAudio"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAudio> get_Audio(int32_t index) = 0;
    /// <summary>
    /// Return embedded video file in the presentation at the specified index.
    /// Read-only <see cref="Aspose::Slides::IVideo"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVideo> get_Video(int32_t index) = 0;
    /// <summary>
    /// Returns digital signature used to sign the presentation at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDigitalSignature> get_DigitalSignature(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


