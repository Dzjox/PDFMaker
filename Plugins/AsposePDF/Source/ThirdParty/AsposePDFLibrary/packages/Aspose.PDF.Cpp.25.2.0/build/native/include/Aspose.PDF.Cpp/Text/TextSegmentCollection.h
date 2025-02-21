#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/multicast_delegate.h>
#include <system/eventargs.h>
#include <system/event.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace LogicalStructure
{
class MCRElement;
} // namespace LogicalStructure
namespace Tests
{
namespace Text
{
class TextBuilderTests;
class TextParagraphAbsorberTests;
} // namespace Text
} // namespace Tests
namespace Text
{
class MarkupParagraph;
class TextBuilder;
class TextFragment;
class TextFragmentAbsorber;
class TextFragmentState;
class TextParagraph;
class TextSegment;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerable;
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a text segments collection
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextSegmentCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextSegment>>
{
    typedef TextSegmentCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextSegment>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::Text::MarkupParagraph;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    
protected:

    class TextSegmentEventArgs;
    using TextSegmentsEventHandler = System::MulticastDelegate<void(System::SharedPtr<System::Object>, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs>)>;
    
    
protected:

    class TextSegmentEventArgs : public System::EventArgs
    {
        typedef TextSegmentEventArgs ThisType;
        typedef System::EventArgs BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<TextSegment> Segment;
        
        TextSegmentEventArgs(System::SharedPtr<TextSegment> segment);
        
    };
    
    
private:

    class TextSegmentsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextSegment>>
    {
        typedef TextSegmentsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextSegment>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<TextSegment>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<TextSegment>& get_Current() const override;
        
        TextSegmentsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegment>>> textSegments);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextSegment>>> cursor;
        int32_t viewed;
        static uint64_t key;
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
        bool MoveNextImplementation();
        System::SharedPtr<TextSegment>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of <see cref="TextSegment"></see> object elements actually contained in the collection. 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets an object that can be used to synchronize access to the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets a value indicating whether access to the collection is synchronized (thread safe). 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets a value indicating whether collection is read-only
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Adds the text segment element at the specified index.
    /// </summary>
    /// <param name="segment">Text segment object</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<TextSegment>& segment) override;
    /// <summary>
    /// Returns an enumerator for the entire collection.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextSegment>>> GetEnumerator() override;
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary>
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<TextSegment>> array, int32_t index) override;
    
    /// <summary>
    /// Gets the text segment element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>TextSegment object.</returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextSegment> idx_get(int32_t index);
    
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<TextSegment>& item) const override;
    /// <summary>
    /// Deletes specified item from collection.
    /// </summary>
    /// <param name="item">The object to delete</param>
    /// <returns>true if item was deleted from collection; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<TextSegment>& item) override;
    
protected:

    System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<TextSegment>>> get_Unrestricted();
    
    System::Event<void(System::SharedPtr<System::Object>, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs>)> OnItemAdded;
    System::Event<void(System::SharedPtr<System::Object>, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs>)> OnItemRemoved;
    
    /// <summary>
    /// Initializes a new instance of <see cref="TextSegmentCollection"></see> collection class
    /// </summary>
    TextSegmentCollection();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextSegmentCollection, CODEPORTING_ARGS());
    /// <summary>
    /// Deletes the text segment element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    /// <summary>
    /// Excludes text segment element at the specified index from coolection. It doesn't remove the segment on physical level unlike of Delete operation.
    /// </summary>
    void ExcludeAt(int32_t index);
    /// <summary>
    /// Excludes specified item from collection. It doesn't remove the segment on physical level unlike of Remove operation.
    /// </summary>
    /// <param name="item">The object to exclude</param>
    /// <returns>true if item was excluded from collection; otherwise, false.</returns>
    bool Exclude(System::SharedPtr<TextSegment> item);
    /// <summary>
    /// Insertes the text segment element at the specified index.
    /// </summary>
    void Insert(int32_t index, System::SharedPtr<TextSegment> segment);
    void CopyToUnrestricted(System::ArrayPtr<System::SharedPtr<TextSegment>> array, int32_t index);
    /// <summary>
    /// internal unrestricted version of indexer
    /// </summary>
    System::SharedPtr<TextSegment> GetUnrestricted(int32_t index);
    
    virtual ASPOSE_PDF_SHARED_API ~TextSegmentCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegment>>> segments;
    System::SharedPtr<System::Object> syncRoot;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


