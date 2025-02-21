#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using System.Diagnostics.PerformanceData;

#include <system/array.h>
#include <drawing/color.h>

#include "Aspose.PDF.Cpp/Outlines/Outlines.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class IAppointment;
class PdfAction;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
class ITrailerable;
} // namespace Data
class IPdfDocument;
} // namespace Engine
namespace Facades
{
class Bookmark;
class PdfFileEditor;
} // namespace Facades
class OutlineCollection;
namespace Tests
{
namespace Facades
{
class PdfBookmarkEditorTests;
} // namespace Facades
class RegressionTests_v17_12;
class RegressionTests_v20_03;
class RegressionTests_v21_9;
class RegressionTests_v8_0;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerable;
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents outline entry in outline hierarchy of PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OutlineItemCollection final : public Aspose::Pdf::Outlines
{
    typedef OutlineItemCollection ThisType;
    typedef Aspose::Pdf::Outlines BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Bookmark;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_03;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_9;
    friend class Aspose::Pdf::Tests::Facades::PdfBookmarkEditorTests;
    
public:

    /// <summary>
    /// Gets the title for this outline item.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Title();
    /// <summary>
    /// Sets the title for this outline item.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::String value);
    /// <summary>
    /// Gets the destination for this outline item.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotations::IAppointment> get_Destination();
    /// <summary>
    /// Sets the destination for this outline item.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Destination(System::SharedPtr<Annotations::IAppointment> value);
    /// <summary>
    /// Gets the action for this outline item.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotations::PdfAction> get_Action();
    /// <summary>
    /// Sets the action for this outline item.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Action(System::SharedPtr<Annotations::PdfAction> value);
    /// <summary>
    /// Gets the color for the title text of this outline item.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Color get_Color();
    /// <summary>
    /// Sets the color for the title text of this outline item.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Color(System::Drawing::Color value);
    /// <summary>
    /// Gets italic flag for the title text of this outline item
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Italic();
    /// <summary>
    /// Sets italic flag for the title text of this outline item
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Italic(bool value);
    /// <summary>
    /// Gets bold flag for the title text of this outline item
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Bold();
    /// <summary>
    /// Sets bold flag for the title text of this outline item
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Bold(bool value);
    /// <summary>
    /// Gets the outline item representing the first top-level item in the outline hierarchy.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OutlineItemCollection> get_First() const;
    /// <summary>
    /// Gets the outline item representing the last top-level item in the outline hierarchy.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OutlineItemCollection> get_Last();
    /// <summary>
    /// Gets the outline item representing previous item relatively this item in the outline hierarchy.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OutlineItemCollection> get_Prev();
    /// <summary>
    /// Gets the outline item representing next item relatively this item in the outline hierarchy.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OutlineItemCollection> get_Next();
    /// <summary>
    /// Check if outline item representing next item relatively this item in the outline hierarchy.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_HasNext();
    /// <summary>
    /// Gets the parent object of this outline item in the outline hierarchy.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Outlines> get_Parent();
    /// <summary>
    /// Gets the total number of outline items at all levels in the document outline hierarchy.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_VisibleCount() override;
    /// <summary>
    /// Gets the value indicating whether access to this collection is synchronized (thread safe).
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets the object that can be used to synchronize access to this collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    /// <summary>
    /// Get or sets open status (true/false) for outline item.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Open();
    /// <summary>
    /// Get or sets open status (true/false) for outline item.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Open(bool value);
    /// <summary>
    /// Count of collection items. Please dont confuse with VisibleCount: VisibleCount gets number of visible outline item on all levels.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets hierarchy level of outline item.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Level();
    
    /// <summary>
    /// Deletes this outline item from the document outline hierarchy.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Delete();
    
    /// <summary>
    /// Initializes outline item instance using root hierarchy object.
    /// </summary>
    /// <param name="outlines">Outlune collection.</param>
    ASPOSE_PDF_SHARED_API OutlineItemCollection(System::SharedPtr<OutlineCollection> outlines);
    
    /// <summary>
    /// Deletes outline entry with specified name from the document outline hierarchy.
    /// </summary>
    /// <param name="name">Title of outline entry will be deleted.</param>
    ASPOSE_PDF_SHARED_API void Delete(System::String name);
    /// <summary>
    /// Copies the outline entries to an System.Array, starting at a particular System.Array index.
    /// </summary>
    /// <param name="array">The one-dimensional System.Array that is the destination. Must have zero-based indexing.</param>
    /// <param name="index">The zero-based index in array at which copying begins.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<OutlineItemCollection>> array, int32_t index) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An System.Collections.IEnumerator object that can be used to iterate through the collection.</returns>
    //!System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    //!{
    //!    return new OutlineCollection.OutlinesEnumerator(EngineDict, document);
    //!}
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An System.Collections.IEnumerator object that can be used to iterate through the collection.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumerator() override;
    /// <summary>
    /// Adds outline item to collection.
    /// </summary>
    /// <param name="outline">The outline item to be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<OutlineItemCollection>& outline) override;
    /// <summary>
    /// Inserts the outline item into collection at the specified place.
    /// </summary>
    /// <param name="index">The index specifying place for inserting.</param>
    /// <param name="outline">The outline item should be inserted.</param>
    ASPOSE_PDF_SHARED_API void Insert(int32_t index, System::SharedPtr<OutlineItemCollection> outline);
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Checks if collection contains given item.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>True - if item found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<OutlineItemCollection>& item) const override;
    /// <summary>
    /// Remove outline collection item.
    /// </summary>
    /// <param name="item">Item to delete.</param>
    /// <returns>True - if item removed; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<OutlineItemCollection>& item) override;
    /// <summary>
    /// Remove item by index.
    /// </summary>
    /// <param name="index">Index of item to be deleted.</param>
    ASPOSE_PDF_SHARED_API void Remove(int32_t index);
    
    /// <summary>
    /// Gets outline item from the collection using index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>OutlineItemCollection object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OutlineItemCollection> idx_get(int32_t index);
    
protected:

    System::SharedPtr<Engine::IPdfDocument> document;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict() const;
    
    /// <summary>
    /// Internal engine object of outline entry.
    /// </summary>
    System::SharedPtr<Engine::Data::IPdfObject> _engineObj;
    
    ASPOSE_PDF_SHARED_API void UpdateVisibleCount() override;
    
    /// <summary>
    /// Initializes new instance of this class using internal engine outline entry object.
    /// </summary>
    /// <param name="outline">Internal engine object of outline entry.</param>
    OutlineItemCollection(System::SharedPtr<Engine::Data::IPdfObject> outline);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OutlineItemCollection, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfObject> outline));
    /// <summary>
    /// Creates new outline entry object in document outline hierarchy.
    /// </summary>
    /// <param name="trailer">Internal engine trailer object.</param>
    /// <returns>New created outline entry object.</returns>
    System::SharedPtr<Engine::Data::IPdfObject> createOutline(System::SharedPtr<Engine::Data::ITrailerable> trailer);
    void SetParent(System::SharedPtr<OutlineCollection> parent);
    void SetParent(System::SharedPtr<OutlineItemCollection> parent);
    /// <summary>
    /// Sets parent to this outline entry.
    /// </summary>
    /// <param name="prev">New parent object of this outline entry.</param>
    void setPrev(System::SharedPtr<OutlineItemCollection> prev);
    /// <summary>
    /// Inserts the specified outline entry before this entry in the document outline hierarchy.
    /// </summary>
    /// <param name="next">Outline entry will be inserted.</param>
    void SetNext(System::SharedPtr<Engine::Data::IPdfObject> next);
    /// <summary>
    /// Adds a collection of outlines as children of this outline.
    /// </summary>
    /// <param name="outlines">A collection of outlines to be added.</param>
    void AddRange(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<OutlineItemCollection>>> outlines);
    
    virtual ASPOSE_PDF_SHARED_API ~OutlineItemCollection();
    
private:

    static const int32_t _Italic;
    static const int32_t _Bold;
    System::SharedPtr<Annotations::IAppointment> destination;
    System::SharedPtr<Annotations::PdfAction> action;
    System::Drawing::Color color;
    bool italic;
    bool bold;
    int32_t _increment;
    System::SharedPtr<System::Object> syncRoot;
    
    int32_t get_InnerCount() const;
    
    void Close(System::SharedPtr<OutlineItemCollection> outline);
    int32_t CalculateVisibleCount();
    /// <summary>
    /// Needed for C++. Used in Count property
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumeratorInternal() const;
    int32_t Increment();
    int32_t FindItem(System::SharedPtr<OutlineItemCollection> item) const;
    void Remove(System::SharedPtr<Engine::Data::IPdfObject> parent, System::SharedPtr<Engine::Data::IPdfObject> prev, System::SharedPtr<Engine::Data::IPdfObject> item, System::SharedPtr<Engine::Data::IPdfObject> next);
    
};

} // namespace Pdf
} // namespace Aspose


