#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/collections/icomparer.h>
#include <DOM/ISlideCollection.h>

#include "DOM/Presentation.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class GroupShape;
class IComment;
class ILayoutSlide;
class IMasterSlide;
namespace Import
{
class IExternalResourceResolver;
class PdfImportOptions;
} // namespace Import
class ISection;
class IShape;
class IShapeCollection;
class ISlide;
class LayoutSlide;
class MasterSlide;
namespace OdpSerialization
{
namespace PartParser
{
class PresentationOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptSerialization
{
class PptSlideDeserializationContext;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class PresentationPartParser;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
class PresentationTemplate;
class SectionCollection;
class Slide;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
class TextReader;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of a slides.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SlideCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>>, public Aspose::Slides::ISlideCollection
{
    typedef SlideCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>> BaseType;
    typedef Aspose::Slides::ISlideCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::SectionCollection;
    friend class Aspose::Slides::PptSerialization::PptSlideDeserializationContext;
    friend class Aspose::Slides::OdpSerialization::PartParser::PresentationOdpSerialization;
    friend class Aspose::Slides::LayoutSlide;
    friend class Aspose::Slides::MasterSlide;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptxSerialization::PartParser::PresentationPartParser;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PresentationTemplate;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<ISlide>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
private:

    class ASPOSE_SLIDES_LOCAL_API CommentAuthorIndexComparer : public System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Slides::IComment>>
    {
        typedef CommentAuthorIndexComparer ThisType;
        typedef System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Slides::IComment>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// @cond
        static System::SharedPtr<SlideCollection::CommentAuthorIndexComparer> Comparer;
        /// @endcond
        
        int32_t Compare(const System::SharedPtr<IComment>& a, const System::SharedPtr<IComment>& b) const override;
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() override;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::Slide">Slide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> idx_get(int32_t index) override;
    
    /// <summary>
    /// Adds a copy of a specified slide to the end of the collection.
    /// </summary>
    /// <param name="sourceSlide">Slide to clone.</param>
    /// <returns>New slide.</returns>
    /// <remarks>
    /// When cloning a slide between different presentations slide's master can be cloned too.
    /// Internal registry is used to track automatically cloned masters to prevent creation of 
    /// multiple clones of the same master slide.
    /// Manual cloning of master slides will be neither prevented nor registered.
    /// If you need more control over cloning process use
    /// <see cref="Aspose::Slides::ISlideCollection::AddClone(System::SharedPtr<ISlide>, System::SharedPtr<ILayoutSlide>)">AddClone(SharedPtr<ISlide>, SharedPtr<ILayoutSlide>)</see> or
    /// <see cref="Aspose::Slides::ISlideCollection::AddClone(System::SharedPtr<ISlide>, System::SharedPtr<IMasterSlide>, bool)">AddClone(SharedPtr<ISlide>, SharedPtr<IMasterSlide>, bool)</see> for cloning slides,
    /// <see cref="Aspose::Slides::IGlobalLayoutSlideCollection::AddClone(System::SharedPtr<ILayoutSlide>)">IGlobalLayoutSlideCollection::AddClone(SharedPtr<ILayoutSlide>)</see> or
    /// <see cref="Aspose::Slides::IGlobalLayoutSlideCollection::AddClone(System::SharedPtr<ILayoutSlide>, System::SharedPtr<IMasterSlide>)">IGlobalLayoutSlideCollection::AddClone(SharedPtr<ILayoutSlide>, SharedPtr<IMasterSlide>)</see> for cloning layouts and
    /// <see cref="Aspose::Slides::IMasterSlideCollection::AddClone(System::SharedPtr<IMasterSlide>)">IMasterSlideCollection::AddClone(SharedPtr<IMasterSlide>)</see> for cloning masters.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> AddClone(System::SharedPtr<ISlide> sourceSlide) override;
    /// <summary>
    /// Adds a copy of a specified slide to the end of the specified section.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = MakeObject<Presentation>();
    /// presentation->get_Slides()->idx_get(0)->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 200.0f, 50.0f, 300.0f, 100.0f);
    /// presentation->get_Sections()->AddSection(u"Section 1", presentation->get_Slides()->idx_get(0));
    /// auto section2 = presentation->get_Sections()->AppendEmptySection(u"Section 2");
    /// presentation->get_Slides()->AddClone(presentation->get_Slides()->idx_get(0), section2);
    /// // Now the second section contains a copy of the first slide.
    /// </code>
    /// </example>
    /// <param name="sourceSlide">Slide to clone.</param>
    /// <param name="section">Section for a new slide.</param>
    /// <returns>New slide.</returns>
    /// <exception cref="System::ArgumentNullException"></exception>
    /// <exception cref="PptxEditException"></exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> AddClone(System::SharedPtr<ISlide> sourceSlide, System::SharedPtr<ISection> section) override;
    /// <summary>
    /// Inserts a copy of a specified slide to specified position of the collection.
    /// </summary>
    /// <param name="index">Index of new slide.</param>
    /// <param name="sourceSlide">Slide to clone.</param>
    /// <remarks>
    /// When cloning a slide between different presentations slide's master can be cloned too.
    /// Internal registry is used to track automatically cloned masters to prevent creation of multiple clones of the same master slide.
    /// Manual cloning of master slides will be neither prevented nor registered.
    /// If you need more control over cloning process use
    /// <see cref="Aspose::Slides::ISlideCollection::InsertClone(int32_t, System::SharedPtr<ISlide>, System::SharedPtr<ILayoutSlide>)">InsertClone(int32_t, SharedPtr<ISlide>, SharedPtr<ILayoutSlide>)</see> or
    /// <see cref="Aspose::Slides::ISlideCollection::InsertClone(int32_t, System::SharedPtr<ISlide>, System::SharedPtr<IMasterSlide>, bool)">InsertClone(int32_t, SharedPtr<ISlide>, SharedPtr<IMasterSlide>, bool)</see> for cloning slides and
    /// <see cref="Aspose::Slides::IMasterSlideCollection::AddClone(System::SharedPtr<IMasterSlide>)">IMasterSlideCollection::AddClone(SharedPtr<IMasterSlide>)</see> for cloning masters.
    /// </remarks>
    /// <returns>Inserted slide.</returns>
    /// <example>
    /// The following example shows how to clone at another position within Presentation.
    /// <code>
    /// // Instantiate Presentation class that represents a presentation file
    /// auto pres = System::MakeObject<Presentation>(u"CloneWithInSamePresentation.pptx");
    /// 
    /// // Clone the desired slide to the end of the collection of slides in the same presentation
    /// System::SharedPtr<ISlideCollection> slides = pres->get_Slides();
    /// // Clone the desired slide to the specified index in the same presentation
    /// slides->InsertClone(2, slides->idx_get(1));
    /// // Write the modified presentation to disk
    /// pres->Save(u"Aspose_CloneWithInSamePresentation_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// The following example shows how to clone at another position within Presentation.
    /// <code>
    /// // Instantiate Presentation class to load the source presentation file
    /// auto srcPres = System::MakeObject<Presentation>(u"CloneAtEndOfAnother.pptx");
    /// 
    /// // Instantiate Presentation class for destination PPTX (where slide is to be cloned)
    /// auto destPres = System::MakeObject<Presentation>();
    /// 
    /// destPres->get_Slides()->InsertClone(2, srcPres->get_Slides()->idx_get(0));
    /// // Write the destination presentation to disk
    /// destPres->Save(u"Aspose2_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> InsertClone(int32_t index, System::SharedPtr<ISlide> sourceSlide) override;
    /// <summary>
    /// Adds a new empty slide to the end of the collection.
    /// </summary>
    /// <param name="layout">Layout for a slide.</param>
    /// <returns>Added slide.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> AddEmptySlide(System::SharedPtr<ILayoutSlide> layout) override;
    /// <summary>
    /// Inserts a copy of a specified slide to specified position of the collection.
    /// </summary>
    /// <param name="index">Index of a new slide.</param>
    /// <param name="layout">Layout for a slide.</param>
    /// <returns>Inserted slide.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> InsertEmptySlide(int32_t index, System::SharedPtr<ILayoutSlide> layout) override;
    /// <summary>
    /// Adds a copy of a specified slide to the end of the collection.
    /// </summary>
    /// <param name="sourceSlide">Slide to clone.</param>
    /// <param name="destLayout">Layout slide for a new slide.</param>
    /// <returns>New slide.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> AddClone(System::SharedPtr<ISlide> sourceSlide, System::SharedPtr<ILayoutSlide> destLayout) override;
    /// <summary>
    /// Inserts a copy of a specified slide to specified position of the collection.
    /// </summary>
    /// <param name="index">Index of new slide.</param>
    /// <param name="sourceSlide">Slide to clone.</param>
    /// <param name="destLayout">Layout slide for a new slide.</param>
    /// <returns>Inserted slide.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> InsertClone(int32_t index, System::SharedPtr<ISlide> sourceSlide, System::SharedPtr<ILayoutSlide> destLayout) override;
    /// <summary>
    /// Adds a copy of a specified source slide to the end of the collection.
    /// Appropriate layout will be selected automatically from the specified 
    /// master (appropriate layout is the layout with the same Type or Name as 
    /// of layout of the source slide). If there is no appropriate layout then
    /// layout of the source slide will be cloned (if allowCloneMissingLayout 
    /// is true) or PptxEditException will be thrown (if allowCloneMissingLayout
    /// is false).
    /// </summary>
    /// <param name="sourceSlide">Slide to clone.</param>
    /// <param name="destMaster">Master slide for a new slide.</param>
    /// <param name="allowCloneMissingLayout">
    /// If there is no appropriate layout in specified master then layout of the 
    /// source slide will be cloned (if allowCloneMissingLayout is true) or 
    /// PptxEditException will be thrown (if allowCloneMissingLayout is false).
    /// </param>
    /// <exception cref="PptxEditException">
    /// Thrown if there is no appropriate layout in specified master and 
    /// allowCloneMissingLayout is false.
    /// </exception>
    /// <returns>New slide.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> AddClone(System::SharedPtr<ISlide> sourceSlide, System::SharedPtr<IMasterSlide> destMaster, bool allowCloneMissingLayout) override;
    /// <summary>
    /// Inserts a copy of a specified source slide to specified position of the collection.
    /// Appropriate layout will be selected automatically from the specified 
    /// master (appropriate layout is the layout with the same Type or Name as 
    /// of layout of the source slide). If there is no appropriate layout then
    /// layout of the source slide will be cloned (if allowCloneMissingLayout 
    /// is true) or PptxEditException will be thrown (if allowCloneMissingLayout
    /// is false).
    /// </summary>
    /// <param name="index">Index of new slide.</param>
    /// <param name="sourceSlide">Slide to clone.</param>
    /// <param name="destMaster">Master slide for a new slide.</param>
    /// <param name="allowCloneMissingLayout">
    /// If there is no appropriate layout in specified master then layout of the 
    /// source slide will be cloned (if allowCloneMissingLayout is true) or 
    /// PptxEditException will be thrown (if allowCloneMissingLayout is false).
    /// </param>
    /// <exception cref="PptxEditException">
    /// Thrown if there is no appropriate layout in specified master and 
    /// allowCloneMissingLayout is false.
    /// </exception>
    /// <returns>Inserted slide.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> InsertClone(int32_t index, System::SharedPtr<ISlide> sourceSlide, System::SharedPtr<IMasterSlide> destMaster, bool allowCloneMissingLayout) override;
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection.
    /// </summary>
    /// <param name="value">The slide to remove from the collection.</param>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<ISlide> value) override;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    /// <exception cref="System::ArgumentOutOfRangeException"></exception>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ISlide>>> GetEnumerator() override;
    /// <summary>
    /// Creates and returns an array with all slides in it.
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::Slide">Slide</see></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> ToArray() override;
    /// <summary>
    /// Creates and returns an array with all slides from the specified range in it.
    /// <param name="startIndex">An index of a first slide to add.</param>
    /// <param name="count">A number of slides to add.</param>
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::Slide">Slide</see></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> ToArray(int32_t startIndex, int32_t count) override;
    /// <summary>
    /// Moves slide from the collection to the specified position.
    /// </summary>
    /// <param name="index">Target index.</param>
    /// <param name="slide">Slide to move.</param>
    ASPOSE_SLIDES_SHARED_API void Reorder(int32_t index, System::SharedPtr<ISlide> slide) override;
    /// <summary>
    /// Moves slides from the collection to the specified position.
    /// Slides will be placed starting from index in order they appear in list.
    /// </summary>
    /// <param name="index">Target index.</param>
    /// <param name="slides">Slides to move.</param>
    ASPOSE_SLIDES_SHARED_API void Reorder(int32_t index, const System::ArrayPtr<System::SharedPtr<ISlide>>& slides) override;
    /// <summary>
    /// Returns an index of the specified slide in the collection.
    /// </summary>
    /// <param name="slide">Slide to find.</param>
    /// <returns>Index of a slide or -1 if slide not from this collection.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<ISlide> slide) override;
    /// <summary>
    /// Creates slides from the PDF document and adds them to the end of the collection.
    /// </summary>
    /// <param name="path">A path to the PDF document</param>
    /// <returns>Added slides</returns>
    /// <example>Example:
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// pres->get_Slides()->AddFromPdf(u"document.pdf");
    /// pres->Save(u"fromPdfDocument.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromPdf(System::String path) override;
    /// <summary>
    /// Creates slides from the PDF document and adds them to the end of the collection considering the pdf import options.
    /// </summary>
    /// <param name="path">A path to the PDF document</param>
    /// <param name="pdfImportOptions">Options for pdf import</param>
    /// <returns>Added slides</returns>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<PdfImportOptions> options = System::MakeObject<PdfImportOptions>();
    /// options->set_DetectTables(true);
    /// 
    /// pres->get_Slides()->AddFromPdf(u"document.pdf", options);
    /// pres->Save(u"fromPdfDocument.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromPdf(System::String path, System::SharedPtr<Import::PdfImportOptions> pdfImportOptions) override;
    /// <summary>
    /// Creates slides from the PDF document and adds them to the end of the collection.
    /// </summary>
    /// <param name="pdfStream">A stream which will be used as a source of the PDF document</param>
    /// <returns>Added slides</returns>
    /// <example>Example:
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// auto stream = MakeObject<IO::FileStream>(u"document.pdf", IO::FileMode::Open, IO::FileAccess::Read, IO::FileShare::Read);
    /// pres->get_Slides()->AddFromPdf(stream);
    /// pres->Save(u"fromPdfDocument.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromPdf(System::SharedPtr<System::IO::Stream> pdfStream) override;
    /// <summary>
    /// Creates slides from the PDF document and adds them to the end of the collection.
    /// </summary>
    /// <param name="pdfStream">A stream which will be used as a source of the PDF document</param>
    /// <param name="pdfImportOptions">Options for pdf import</param>
    /// <returns>Added slides</returns>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<Stream> stream = System::MakeObject<FileStream>(u"document.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read, System::IO::FileShare::Read);
    /// 
    /// System::SharedPtr<PdfImportOptions> options = System::MakeObject<PdfImportOptions>();
    /// options->set_DetectTables(true);
    /// 
    /// // set detecting tables
    /// pres->get_Slides()->AddFromPdf(stream, options);
    /// 
    /// pres->Save(u"fromPdfDocument.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromPdf(System::SharedPtr<System::IO::Stream> pdfStream, System::SharedPtr<Import::PdfImportOptions> pdfImportOptions) override;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlText">Html to add.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::String htmlText, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) override;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlText">Html to add.</param>
    /// <returns>Added slides</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::String htmlText) override;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlReader">TextReader object which will be used as a source of a HTML file.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::SharedPtr<System::IO::TextReader> htmlReader, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) override;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlReader">TextReader object which will be used as a source of a HTML file.</param>
    /// <returns>Added slides</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::SharedPtr<System::IO::TextReader> htmlReader) override;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlStream">A Stream object which will be used as a source of a HTML file.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::SharedPtr<System::IO::Stream> htmlStream, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) override;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlStream">A Stream object which will be used as a source of a HTML file.</param>
    /// <returns>Added slides</returns>
    /// <example>
    /// <code>
    /// // Create an instance of the Presentation class.
    /// auto presentation = System::MakeObject<Presentation>();
    /// 
    /// {
    ///     auto htmlStream = System::IO::File::OpenRead(u"page.html");
    /// 
    ///     // Call the AddFromHtml method and pass the HTML file.
    ///     presentation->get_Slides()->AddFromHtml(htmlStream);
    /// }
    /// 
    /// // Use the Save method to save the file as a PowerPoint document.
    /// presentation->Save(u"MyPresentation.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::SharedPtr<System::IO::Stream> htmlStream) override;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlText">Html to add.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::String htmlText, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) override;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlText">Html to add.</param>
    /// <returns>Added slides</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::String htmlText) override;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlReader">TextReader object which will be used as a source of a HTML file.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::SharedPtr<System::IO::TextReader> htmlReader, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) override;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlReader">TextReader object which will be used as a source of a HTML file.</param>
    /// <returns>Added slides</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::SharedPtr<System::IO::TextReader> htmlReader) override;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlStream">A Stream object which will be used as a source of a HTML file.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::SharedPtr<System::IO::Stream> htmlStream, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) override;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlStream">A Stream object which will be used as a source of a HTML file.</param>
    /// <returns>Added slides</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::SharedPtr<System::IO::Stream> htmlStream) override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<ISlide>> array, int32_t index) override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ISlide>>> m_slides;
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<Slide>> emptySlides;
    
    ASPOSE_SLIDES_LOCAL_API SlideCollection(System::SharedPtr<Presentation> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SlideCollection, CODEPORTING_ARGS(System::SharedPtr<Presentation> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Slide> CreateEmptySlide();
    ASPOSE_SLIDES_LOCAL_API void ApplyConfirmTextFrameIsFittedToShape(System::SharedPtr<IShapeCollection> shapes);
    ASPOSE_SLIDES_LOCAL_API void Add(System::SharedPtr<ISlide> value);
    ASPOSE_SLIDES_LOCAL_API void Insert(int32_t index, System::SharedPtr<ISlide> value);
    ASPOSE_SLIDES_LOCAL_API void Clear();
    ASPOSE_SLIDES_LOCAL_API void ReorderInternal(int32_t index, System::SharedPtr<ISlide> slide);
    ASPOSE_SLIDES_LOCAL_API void UpdateSlideNumbers(int32_t startIndex);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~SlideCollection();
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Slide> CreateEmptySlide(System::SharedPtr<ILayoutSlide> layout);
    ASPOSE_SLIDES_LOCAL_API void RemoveShapes(System::SharedPtr<GroupShape> groupShape, System::SharedPtr<ISlide> checkedSlide, System::SharedPtr<ISlide> removingSlide);
    ASPOSE_SLIDES_LOCAL_API bool RemoveShape(System::SharedPtr<IShape> shape, System::SharedPtr<ISlide> checkedSlide, System::SharedPtr<ISlide> removingSlide);
    ASPOSE_SLIDES_LOCAL_API void ProcessHyperlinks(System::SharedPtr<ISlide> slide, int32_t index);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtmlInternal(int32_t index, System::String htmlText, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri);
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


