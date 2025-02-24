#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ILayoutSlide;
class IMasterSlide;
namespace Import
{
class IExternalResourceResolver;
class PdfImportOptions;
} // namespace Import
class ISection;
class ISlide;
} // namespace Slides
} // namespace Aspose
namespace System
{
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
class ASPOSE_SLIDES_API_SHARED_CLASS ISlideCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ISlide>>
{
    typedef ISlideCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ISlide>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::ISlide">ISlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> idx_get(int32_t index) = 0;
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> AddClone(System::SharedPtr<ISlide> sourceSlide) = 0;
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
    /// <exception cref="Aspose::Slides::PptxEditException"></exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> AddClone(System::SharedPtr<ISlide> sourceSlide, System::SharedPtr<ISection> section) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> InsertClone(int32_t index, System::SharedPtr<ISlide> sourceSlide) = 0;
    /// <summary>
    /// Adds a new empty slide to the end of the collection.
    /// </summary>
    /// <param name="layout">Layout for a slide.</param>
    /// <returns>Added slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> AddEmptySlide(System::SharedPtr<ILayoutSlide> layout) = 0;
    /// <summary>
    /// Inserts a copy of a specified slide to specified position of the collection.
    /// </summary>
    /// <param name="index">Index of a new slide.</param>
    /// <param name="layout">Layout for a slide.</param>
    /// <returns>Inserted slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> InsertEmptySlide(int32_t index, System::SharedPtr<ILayoutSlide> layout) = 0;
    /// <summary>
    /// Adds a copy of a specified slide to the end of the collection.
    /// </summary>
    /// <param name="sourceSlide">Slide to clone.</param>
    /// <param name="destLayout">Layout slide for a new slide.</param>
    /// <returns>New slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> AddClone(System::SharedPtr<ISlide> sourceSlide, System::SharedPtr<ILayoutSlide> destLayout) = 0;
    /// <summary>
    /// Inserts a copy of a specified slide to specified position of the collection.
    /// </summary>
    /// <param name="index">Index of new slide.</param>
    /// <param name="sourceSlide">Slide to clone.</param>
    /// <param name="destLayout">Layout slide for a new slide.</param>
    /// <returns>Inserted slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> InsertClone(int32_t index, System::SharedPtr<ISlide> sourceSlide, System::SharedPtr<ILayoutSlide> destLayout) = 0;
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
    /// <exception cref="Aspose::Slides::PptxEditException">
    /// Thrown if there is no appropriate layout in specified master and 
    /// allowCloneMissingLayout is false.
    /// </exception>
    /// <returns>New slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> AddClone(System::SharedPtr<ISlide> sourceSlide, System::SharedPtr<IMasterSlide> destMaster, bool allowCloneMissingLayout) = 0;
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
    /// <exception cref="Aspose::Slides::PptxEditException">
    /// Thrown if there is no appropriate layout in specified master and 
    /// allowCloneMissingLayout is false.
    /// </exception>
    /// <returns>Inserted slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> InsertClone(int32_t index, System::SharedPtr<ISlide> sourceSlide, System::SharedPtr<IMasterSlide> destMaster, bool allowCloneMissingLayout) = 0;
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection.
    /// </summary>
    /// <param name="value">The slide to remove from the collection.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<ISlide> value) = 0;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    /// <exception cref="System::ArgumentOutOfRangeException"></exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Creates and returns an array with all slides in it.
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::ISlide">ISlide</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> ToArray() = 0;
    /// <summary>
    /// Creates and returns an array with all slides from the specified range in it.
    /// </summary>
    /// <param name="startIndex">An index of a first slide to add.</param>
    /// <param name="count">A number of slides to add.</param>
    /// <returns>Array of <see cref="Aspose::Slides::ISlide">ISlide</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> ToArray(int32_t startIndex, int32_t count) = 0;
    /// <summary>
    /// Moves slide from the collection to the specified position.
    /// </summary>
    /// <param name="index">Target index.</param>
    /// <param name="slide">Slide to move.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Reorder(int32_t index, System::SharedPtr<ISlide> slide) = 0;
    /// <summary>
    /// Moves slides from the collection to the specified position.
    /// Slides will be placed starting from index in order they appear in list.
    /// </summary>
    /// <param name="index">Target index.</param>
    /// <param name="slides">Slides to move.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Reorder(int32_t index, const System::ArrayPtr<System::SharedPtr<ISlide>>& slides) = 0;
    /// <summary>
    /// Returns an index of the specified slide in the collection.
    /// </summary>
    /// <param name="slide">Slide to find.</param>
    /// <returns>Index of a slide or -1 if slide not from this collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(System::SharedPtr<ISlide> slide) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromPdf(System::String path) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromPdf(System::String path, System::SharedPtr<Import::PdfImportOptions> pdfImportOptions) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromPdf(System::SharedPtr<System::IO::Stream> pdfStream, System::SharedPtr<Import::PdfImportOptions> pdfImportOptions) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromPdf(System::SharedPtr<System::IO::Stream> pdfStream) = 0;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlText">Html to add.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::String htmlText, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) = 0;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlText">Html to add.</param>
    /// <returns>Added slides</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::String htmlText) = 0;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlReader">TextReader object which will be used as a source of a HTML file.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::SharedPtr<System::IO::TextReader> htmlReader, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) = 0;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlReader">TextReader object which will be used as a source of a HTML file.</param>
    /// <returns>Added slides</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::SharedPtr<System::IO::TextReader> htmlReader) = 0;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlStream">A Stream object which will be used as a source of a HTML file.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::SharedPtr<System::IO::Stream> htmlStream, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) = 0;
    /// <summary>
    /// Creates slides from HTML text and adds them to the end of the collection.
    /// </summary>
    /// <param name="htmlStream">A Stream object which will be used as a source of a HTML file.</param>
    /// <returns>Added slides</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> AddFromHtml(System::SharedPtr<System::IO::Stream> htmlStream) = 0;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlText">Html to add.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::String htmlText, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) = 0;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlText">Html to add.</param>
    /// <returns>Added slides</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::String htmlText) = 0;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlReader">TextReader object which will be used as a source of a HTML file.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::SharedPtr<System::IO::TextReader> htmlReader, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) = 0;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlReader">TextReader object which will be used as a source of a HTML file.</param>
    /// <returns>Added slides</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::SharedPtr<System::IO::TextReader> htmlReader) = 0;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlStream">A Stream object which will be used as a source of a HTML file.</param>
    /// <param name="resolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="uri">An URI of the specified HTML. Used to resolve relative links.</param>
    /// <returns>Added slides.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::SharedPtr<System::IO::Stream> htmlStream, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) = 0;
    /// <summary>
    /// Creates slides from HTML text and inserts them to the collection at the specified position.
    /// </summary>
    /// <param name="index">Position to insert.</param>
    /// <param name="htmlStream">A Stream object which will be used as a source of a HTML file.</param>
    /// <returns>Added slides</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> InsertFromHtml(int32_t index, System::SharedPtr<System::IO::Stream> htmlStream) = 0;
    
};

} // namespace Slides
} // namespace Aspose


