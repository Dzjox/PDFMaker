#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using System.Linq.Expressions;

#include <system/collections/ienumerator.h>

#include "Aspose.PDF.Cpp/Outlines/Outlines.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class GoToAction;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
} // namespace Data
class IPdfDocument;
} // namespace Engine
namespace Facades
{
class PdfFileEditor;
} // namespace Facades
class OutlineItemCollection;
namespace Tests
{
namespace Facades
{
class PdfBookmarkEditorTests;
} // namespace Facades
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents document outline hierarchy.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OutlineCollection final : public Aspose::Pdf::Outlines
{
    typedef OutlineCollection ThisType;
    typedef Aspose::Pdf::Outlines BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::OutlineItemCollection;
    friend class Aspose::Pdf::Tests::Facades::PdfBookmarkEditorTests;
    
protected:

    class OutlinesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>>
    {
        typedef OutlinesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<OutlineItemCollection>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<OutlineItemCollection>& get_Current() const override;
        
        OutlinesEnumerator(System::SharedPtr<Engine::Data::IPdfDictionary> outlines, System::SharedPtr<Engine::IPdfDocument> document);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        bool initialized;
        System::WeakPtr<Engine::IPdfDocument> document;
        System::SharedPtr<Engine::Data::IPdfDictionary> outlines;
        System::SharedPtr<Engine::Data::IPdfObject> cursor;
        
        bool MoveNextImplementation();
        System::SharedPtr<OutlineItemCollection>* GetCurrentElementPointer();
        
    };
    
    class OutlinesEnumeratorUnrestricted : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>>
    {
        typedef OutlinesEnumeratorUnrestricted ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<OutlineItemCollection>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<OutlineItemCollection>& get_Current() const override;
        
        OutlinesEnumeratorUnrestricted(System::SharedPtr<Engine::Data::IPdfDictionary> outlines, System::SharedPtr<Engine::IPdfDocument> document);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        bool initialized;
        System::SharedPtr<Engine::IPdfDocument> document;
        System::SharedPtr<Engine::Data::IPdfDictionary> outlines;
        System::SharedPtr<Engine::Data::IPdfObject> cursor;
        
        bool MoveNextImplementation();
        System::SharedPtr<OutlineItemCollection>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Count is the sum of the number of visible descendent outline items at all levels. Note: please don't confuse with Count which is number if items in collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_VisibleCount() override;
    /// <summary>
    /// Count of collection items. Please dont confuse with VisibleCount: VisibleCount gets number of visible outline item on all levels.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets an outline item representing the first top-level item in the outline.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OutlineItemCollection> get_First() const;
    /// <summary>
    /// Gets an outline item representing the last top-level item in the outline.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OutlineItemCollection> get_Last();
    /// <summary>
    /// Gets a value indicating whether access to this collection is synchronized (thread safe).
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets an object that can be used to synchronize access to this collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Adds outline item to collection.
    /// </summary>
    /// <param name="outline">The outline item to be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<OutlineItemCollection>& outline) override;
    /// <summary>
    /// Deletes all outline items from the document outline.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Delete();
    /// <summary>
    /// Deletes the outline item with specified title from the document outline.
    /// </summary>
    /// <param name="name">The title of outline item to be deleted</param>
    ASPOSE_PDF_SHARED_API void Delete(System::String name);
    /// <summary>
    /// Copies the outline items to an System.Array, starting at a particular System.Array index.
    /// </summary>
    /// <param name="array">The one-dimensional System.Array that is the destination. Must have zero-based indexing.</param>
    /// <param name="index">The zero-based index in array at which copying begins.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<OutlineItemCollection>> array, int32_t index) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An System.Collections.IEnumerator object that can be used to iterate through the collection.</returns>
    //override System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    //{
    //    return new OutlinesEnumerator(document.Catalog.Outlines, document);
    //}
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An System.Collections.IEnumerator object that can be used to iterate through the collection.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumerator() override;
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Checks does collection contains given item.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>True - if item found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<OutlineItemCollection>& item) const override;
    /// <summary>
    /// Always throws <exception cref="NotImplementedException">NotImplementedException</exception>
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns><exception cref="NotImplementedException">NotImplementedException</exception></returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<OutlineItemCollection>& item) override;
    /// <summary>
    /// Remove item by index.
    /// </summary>
    /// <param name="index">Index of the item to be removed.</param>
    ASPOSE_PDF_SHARED_API void Remove(int32_t index);
    
    /// <summary>
    /// Gets outline item from collection by index.
    /// </summary>
    /// <param name="index">Index of requested item.</param>
    /// <returns></returns>
    //        [Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API System::SharedPtr<OutlineItemCollection> idx_get(int32_t index);
    
protected:

    /// <summary>
    /// Document instance.
    /// </summary>
    System::WeakPtr<Engine::IPdfDocument> document;
    
    /// <summary>
    /// Returns true if outlines is empty.
    /// </summary>
    bool get_IsEmpty();
    
    /// <summary>
    /// Initializes a new instance of OutlineCollection class using document object.
    /// </summary>
    /// <param name="document">Document instance.</param>
    OutlineCollection(System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OutlineCollection, CODEPORTING_ARGS(System::SharedPtr<Document> document));
    /// <summary>
    /// Add new bookmark.
    /// </summary>
    /// <param name="outline">Bookmark.</param>
    /// <param name="updateData">If true, required data validation (last and count) will be performed. This should be false for massive operations (when set of multiple bookmarks are added) for performance reasons.</param>
    void Add(System::SharedPtr<OutlineItemCollection> outline, bool updateData);
    void UpdateLast();
    System::SharedPtr<Engine::Data::IPdfObject> GetOutlinesObject() const;
    /// <summary>
    /// Deletes the outline item with specified title from the specified OutlineCollection instance.
    /// </summary>
    /// <param name="outlines">OutlineCollection instance</param>
    /// <param name="name">The title of outline item to be deleted.</param>
    static void Delete(System::SharedPtr<Engine::Data::IPdfDictionary> outlines, System::String name);
    ASPOSE_PDF_SHARED_API void UpdateVisibleCount() override;
    static void Remove(System::SharedPtr<Engine::Data::IPdfObject> parent, System::SharedPtr<Engine::Data::IPdfObject> prev, System::SharedPtr<Engine::Data::IPdfObject> item, System::SharedPtr<Engine::Data::IPdfObject> next);
    
    OutlineCollection(System::SharedPtr<Engine::IPdfDocument> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OutlineCollection, CODEPORTING_ARGS(System::SharedPtr<Engine::IPdfDocument> document));
    
    virtual ASPOSE_PDF_SHARED_API ~OutlineCollection();
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Document> _domDocument;
    
    int32_t CalculateVisibleCount();
    void FixGoToAction(System::SharedPtr<Annotations::GoToAction> destination);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumeratorInternal() const;
    int32_t FindItem(System::SharedPtr<OutlineItemCollection> item) const;
    int32_t FindItem(System::String name);
    
};

} // namespace Pdf
} // namespace Aspose


