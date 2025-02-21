#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/ISupportsMemoryCleanup.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class AnnotationSelector;
class WidgetAnnotation;
} // namespace Annotations
class Copier;
class Document;
namespace Engine
{
namespace CommonData
{
class IPage;
class IPages;
class IPageTreeNode;
namespace Text
{
namespace Fonts
{
namespace Utilities
{
class DocumentCIDType2FontContentUpdater;
class DocumentFontsCollector;
class DocumentFontsSubsetter;
class DocumentFontsSubstitutor;
class DocumentFontsUnembedder;
template <typename> class FontsRemover;
} // namespace Utilities
} // namespace Fonts
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfDictionary;
class IPdfObject;
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
class PdfAConvertStrategyBase;
class PdfConvertStrategy;
class PdfXConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
namespace Facades
{
class PdfFileEditor;
class PdfFileSignature;
class PdfFileStamp;
class Stamp;
} // namespace Facades
namespace Forms
{
class Form;
} // namespace Forms
class ImagePlacementAbsorber;
namespace LogicalStructure
{
class MCRElement;
class StructureElement;
} // namespace LogicalStructure
class Page;
class PageCollection;
class PageInfo;
class PageTreeBalancer;
class Paragraphs;
class Rectangle;
namespace Tagged
{
class TaggedContent;
class TaggedContext;
} // namespace Tagged
namespace Tests
{
namespace Facades
{
class DocumentTest;
} // namespace Facades
class RegressionTests_v11_2;
class RegressionTests_v12_0;
class RegressionTests_v12_1;
class RegressionTests_v17_9;
class RegressionTests_v20_09;
class RegressionTests_v24_11;
class RegressionTests_v24_12;
class RegressionTests_v7_0;
class RegressionTests_v8_6;
class RegressionTests_v8_9;
class RegressionTests_v9_0;
class RegressionTests_v9_1;
class RegressionTests_v9_9;
} // namespace Tests
namespace Text
{
class TextAbsorber;
class TextFragmentAbsorber;
} // namespace Text
class XmlConverter;
} // namespace Pdf
namespace Utils
{
class UnrestrictedPageTreeNodeEnumerator;
} // namespace Utils
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
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Collection of PDF document pages.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Page>>, public Aspose::Pdf::ISupportsMemoryCleanup
{
    typedef PageCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Page>> BaseType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsCollector;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubsetter;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsUnembedder;
    template<typename FT0> friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontsRemover;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FontUtils;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Facades::PdfFileStamp;
    friend class Aspose::Pdf::Facades::Stamp;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::XmlConverter;
    friend class Aspose::Pdf::PageTreeBalancer;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    friend class Aspose::Pdf::Tests::Facades::DocumentTest;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v12_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v12_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_09;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_12;
    
protected:

    class PagesEnumerableUnrestricted : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Page>>
    {
        typedef PagesEnumerableUnrestricted ThisType;
        typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Page>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        PagesEnumerableUnrestricted(System::SharedPtr<PageCollection> pageCollection);
        
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Page>>> GetEnumerator() override;
        
    protected:
    
        virtual ~PagesEnumerableUnrestricted();
        
    private:
    
        System::WeakPtr<PageCollection> _pageCollection;
        
    };
    
    
private:

    class PagesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Page>>
    {
        typedef PagesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Page>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<Page>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<Page>& get_Current() const override;
        
        PagesEnumerator(System::SharedPtr<PageCollection> pageCollection);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<PageCollection> _pageCollection;
        int32_t cursor;
        System::SharedPtr<Aspose::Utils::UnrestrictedPageTreeNodeEnumerator> _nodeEnumerator;
        
        bool MoveNextImplementation();
        System::SharedPtr<Page>* GetCurrentElementPointer();
        
    };
    
    class PagesEnumeratorUnrestricted : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Page>>
    {
        typedef PagesEnumeratorUnrestricted ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Page>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<Page>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<Page>& get_Current() const override;
        
        PagesEnumeratorUnrestricted(System::SharedPtr<PageCollection> pageCollection);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<PageCollection> _pageCollection;
        int32_t cursor;
        System::SharedPtr<Aspose::Utils::UnrestrictedPageTreeNodeEnumerator> _nodeEnumerator;
        
        bool MoveNextImplementation();
        System::SharedPtr<Page>* GetCurrentElementPointer();
        
    };
    
    class GeneratorInformation : public System::Object
    {
        typedef GeneratorInformation ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        GeneratorInformation(System::SharedPtr<Page> page);
        
        void Assign(System::SharedPtr<Page> page);
        
    private:
    
        System::SharedPtr<Paragraphs> _paragraphs;
        System::SharedPtr<PageInfo> _pageInfo;
        
    };
    
    
public:

    /// <summary>
    /// Gets count of pages in the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Returns true of object is synchorinzed.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets synchronization object of the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets value indicating of collection is readonly. Always returns false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Adds page to collection. 
    /// </summary>
    /// <param name="entity">Page which should be added.</param>
    /// <returns>Added page.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Page> CopyPage(System::SharedPtr<Page> entity);
    /// <summary>
    /// Clear page collection. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Delete specified page.
    /// </summary>
    /// <param name="index">Number of page that will be deleted. Pages numbers start from 1.</param>
    ASPOSE_PDF_SHARED_API void Delete(int32_t index);
    /// <summary>
    /// Deletes all pages from collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Delete();
    /// <summary>
    /// Returns index of the specified page.
    /// </summary>
    /// <remarks>
    /// Pages numbers start from 1.
    /// Returns 0 in case collection doesn't contain the page.
    /// </remarks>
    /// <param name="entity">Page object. Pages numbers start from 1.</param>
    /// <returns>Index of the page in collection.</returns>
    ASPOSE_PDF_SHARED_API int32_t IndexOf(System::SharedPtr<Page> entity) const;
    /// <summary>
    /// Copyies pages into document. 
    /// </summary>
    /// <param name="array">Array containing Pages object to insert into document. It must be Object[] or Page[].</param>
    /// <param name="index">Starting index where pages will be inserted</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<Page>> array, int32_t index) override;
    /// <summary>
    /// Returns enumerator of pages.
    /// </summary>
    /// <returns>Enumerator of pages</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Page>>> GetEnumerator() override;
    /// <summary>
    /// Accepts <see cref="AnnotationSelector"></see> visitor object that provides functionality to work with annotations.
    /// </summary>
    /// <param name="visitor">AnnotationSelector Visitor</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<Annotations::AnnotationSelector> visitor);
    /// <summary>
    /// Delete pages specified which numbers are specified in array.
    /// </summary>
    /// <param name="pages">Array of pages to be deleted.</param>
    ASPOSE_PDF_SHARED_API void Delete(System::ArrayPtr<int32_t> pages);
    /// <summary>
    /// Insert an empty page into the collection at the specified position.
    /// If the document already contains pages with varying sizes,
    /// the size of the most frequently occurring page will be selected.
    /// In the case there are only two different pages, the size of the first page will be used.
    /// </summary>
    /// <param name="pageNumber">Position of the new page.</param>
    /// <returns>Inserted page.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Page> Insert(int32_t pageNumber);
    /// <summary>
    /// Adds an empty page.
    /// If the document already contains pages with varying sizes,
    /// the size of the most frequently occurring page will be selected.
    /// In the case there are only two different pages, the size of the first page will be used.
    /// </summary>
    /// <returns>Added page.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Page> Add();
    /// <summary>
    /// Adds to collection all pages from list.
    /// </summary>
    /// <param name="pages">List which contains all pages which must be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Page>>>& pages);
    /// <summary>
    /// Inserts page into page collection at specified place. 
    /// </summary>
    /// <param name="pageNumber">Required page index in collection.</param>
    /// <param name="entity">Page to be inserted.</param>
    /// <returns>Inserted page.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Page> Insert(int32_t pageNumber, System::SharedPtr<Page> entity);
    
    /// <summary>
    /// Gets page by index.
    /// </summary>
    /// <param name="index">Index of page.</param>
    /// <returns>Retreived page.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Page> idx_get(int32_t index);
    
    /// <summary>
    /// Accepts <see cref="ImagePlacementAbsorber"></see> visitor object that provides functionality to work with image placement objects.
    /// </summary>
    /// <param name="visitor">Image placement object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<ImagePlacementAbsorber> visitor);
    /// <summary>
    /// Accepts <see cref="TextFragmentAbsorber"></see> visitor object that provides functionality to work with text objects.
    /// </summary>
    /// <param name="visitor">Text fragment absorber object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<Text::TextFragmentAbsorber> visitor);
    /// <summary>
    /// Accepts <see cref="TextAbsorber"></see> visitor object that provides functionality to work with text objects.
    /// </summary>
    /// <param name="visitor">Text absorber object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<Text::TextAbsorber> visitor);
    /// <summary>
    /// Adds to collection all pages from array.
    /// </summary>
    /// <param name="pages">Array of pages which will be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::ArrayPtr<System::SharedPtr<Page>>& pages);
    /// <summary>
    /// Inserts pages from the collection into document. 
    /// </summary>
    /// <param name="pageNumber">Starting position of the new pages.</param>
    /// <param name="pages">Pages collection.</param>
    ASPOSE_PDF_SHARED_API void Insert(int32_t pageNumber, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Page>>> pages);
    /// <summary>
    /// Inserts pages of the array into document.
    /// </summary>
    /// <param name="pageNumber">Starting number of the new pages. </param>
    /// <param name="pages">Array of pages which will be inserted.</param>
    ASPOSE_PDF_SHARED_API void Insert(int32_t pageNumber, System::ArrayPtr<System::SharedPtr<Page>> pages);
    /// <summary>
    /// Removes all fields located on the pages and place their values instead.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Flatten();
    /// <summary>
    /// Clears cached data
    /// </summary>
    ASPOSE_PDF_SHARED_API void FreeMemory() override;
    /// <summary>
    /// Determines whether this instance contains the object.
    /// </summary>
    /// <param name="item">The item.</param>
    /// <returns>
    ///   <c>true</c> if [contains] [the specified item]; otherwise, <c>false</c>.
    /// </returns>
    /// <exception cref="NotSupportedException"></exception>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<Page>& item) const override;
    /// <summary>
    /// Removes the specified item, throws <exception cref="NotSupportedException">NotSupportedException</exception>.
    /// </summary>
    /// <param name="item">The item.</param>
    /// <returns><exception cref="NotSupportedException">NotSupportedException</exception></returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<Page>& item) override;
    
protected:

    System::SharedPtr<PageCollection::PagesEnumerableUnrestricted> get_Unrestricted();
    
    System::WeakPtr<Document> _document;
    /// <summary>
    /// PageCollection object from Pdf Engine
    /// </summary>
    System::SharedPtr<Engine::CommonData::IPages> pages;
    
    bool get_AnnotationsAdded() const;
    void set_AnnotationsAdded(bool value);
    
    bool FreezeNumbersCache;
    
    /// <summary>
    /// Constructor of PageCollection class. 
    /// </summary>
    /// <param name="document">Document instance</param>
    PageCollection(System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageCollection, CODEPORTING_ARGS(System::SharedPtr<Document> document));
    System::SharedPtr<Page> GetUnrestricted(System::SharedPtr<Engine::CommonData::IPageTreeNode> pageNode, int32_t index);
    /// <summary>
    /// Returns page by its index.
    /// <see cref="Page"></see>
    /// </summary>
    /// <param name="index">Index of requested page. Pages are numbered from 1.</param>
    /// <returns>Requested page</returns>
    System::SharedPtr<Page> GetUnrestricted(int32_t index);
    /// <summary>
    /// Adds empty page without page count restriction.
    /// But the watermark will still be present on all pages.
    /// </summary>
    /// <returns>Added page.</returns>
    System::SharedPtr<Page> AddUnrestricted();
    /// <summary>
    /// Inserts page into document using specified copier.
    /// </summary>
    /// <param name="pageNumber">Starting position of the new pages.</param>
    /// <param name="entity">Page to be inserted.</param>
    /// <param name="copier">Copier object.</param>
    System::SharedPtr<Page> Insert(int32_t pageNumber, System::SharedPtr<Page> entity, System::SharedPtr<Copier> copier);
    /// <summary>
    /// Adds page to document using passed copier object.
    /// </summary>
    /// <param name="entity"></param>
    /// <param name="copier"></param>
    System::SharedPtr<Page> Add(System::SharedPtr<Page> entity, System::SharedPtr<Copier> copier);
    void Add(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Page>>> srcPages, System::SharedPtr<Copier> copier);
    /// <summary>
    /// frees up memory
    /// </summary>
    void Dispose();
    System::SharedPtr<Page> FindByObjectId(int32_t objectID);
    System::SharedPtr<Page> FindByPdfObject(System::SharedPtr<Engine::Data::IPdfObject> pdfObject);
    
    virtual ASPOSE_PDF_SHARED_API ~PageCollection();
    
private:

    static const int32_t DefaultIndex;
    System::SharedPtr<PageCollection::PagesEnumerableUnrestricted> _pagesEnumerableUnrestricted;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<PageCollection::GeneratorInformation>>> _storedGeneratorInformation;
    bool _isDisposed;
    /// <summary>
    /// Cache of initialized pages.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Page>>> cache;
    System::SharedPtr<Rectangle> _selectedMediaBoxRectangle;
    bool _isMediaBoxSelected;
    bool _annotationsAdded;
    
    /// <summary>
    /// Initializes cache array
    /// </summary>
    void InitCache();
    /// <summary>
    /// Returns page by its index.
    /// <see cref="Page"></see>
    /// </summary>
    /// <param name="index">Index of requested page. Pages are numbered from 1.</param>
    /// <returns>Requested page</returns>
    System::SharedPtr<Page> Get(int32_t index);
    System::SharedPtr<Page> Get(System::SharedPtr<Engine::CommonData::IPageTreeNode> pageNode, int32_t index);
    void Invalidate(int32_t number);
    /// <summary>
    /// Create a page copy. For example , to add page to other document etc.
    /// </summary>
    /// <param name="srcPage"></param>
    /// <param name="dest"></param>
    /// <param name="copier">Copier object to copy page; If null then new copier will be created.</param>
    void DuplicatePage(System::SharedPtr<Page> srcPage, System::SharedPtr<Engine::Data::IPdfObject> dest, System::SharedPtr<Copier> copier);
    /// <summary>
    /// After coping page from other document, fields from page annotations must be added to AcroForm
    /// </summary>
    /// <param name="page"></param>
    void bindFields(System::SharedPtr<Page> page);
    bool IsKidAnnotationOnPage(System::SharedPtr<Page> page, System::SharedPtr<Annotations::WidgetAnnotation> field);
    void SetMostFrequentMediaBox(System::SharedPtr<Engine::CommonData::IPage> page);
    void InitialSelectOfMostFrequentMediaBox();
    System::SharedPtr<Page> CreateNewPage(System::SharedPtr<Engine::CommonData::IPage> newPage, int32_t index, System::SharedPtr<Page> templatePage);
    System::SharedPtr<Page> CreateNewPage(System::SharedPtr<Engine::CommonData::IPage> newPage, int32_t index, System::SharedPtr<Page> templatePage, bool unrestricted);
    void MergeAcroForm(System::SharedPtr<Engine::Data::IPdfDictionary> source, System::SharedPtr<Engine::Data::IPdfDictionary> dest, System::SharedPtr<Copier> copier);
    System::SharedPtr<Engine::CommonData::IPageTreeNode> CopyCollectionPagesToPageTree(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Page>>> srcPages, System::SharedPtr<Copier> copier);
    System::SharedPtr<Engine::CommonData::IPageTreeNode> CopyPagesTree(System::SharedPtr<PageCollection> srcPages, System::SharedPtr<Copier> copier);
    bool MergeAcroForm(System::SharedPtr<Document> srcDocument, System::SharedPtr<Copier> copier);
    void assertObject() const;
    /// <summary>
    /// Adds page to collection. 
    /// </summary>
    /// <param name="entity">Page which should be added.</param>
    /// <returns>Added page.</returns>
    void Add(const System::SharedPtr<Page>& entity) override;
    
};

} // namespace Pdf
} // namespace Aspose


