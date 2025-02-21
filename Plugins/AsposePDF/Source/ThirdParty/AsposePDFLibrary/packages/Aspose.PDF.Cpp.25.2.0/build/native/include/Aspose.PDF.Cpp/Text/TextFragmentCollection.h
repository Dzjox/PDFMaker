#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/eventhandler.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class TextMarkupAnnotation;
} // namespace Annotations
class PageGenerator;
namespace Tests
{
class RegressionTests_v24_02;
class RegressionTests_v9_9;
} // namespace Tests
namespace Text
{
class AbsorbedCell;
class MarkupParagraph;
class TextBuilder;
class TextFragment;
class TextFragmentAbsorber;
class TextParagraph;
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
/// Represents a text fragments collection
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextFragmentCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextFragment>>
{
    typedef TextFragmentCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextFragment>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::MarkupParagraph;
    friend class Aspose::Pdf::Text::AbsorbedCell;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Annotations::TextMarkupAnnotation;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_02;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    
private:

    class TextFragmentsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextFragment>>
    {
        typedef TextFragmentsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextFragment>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<TextFragment>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<TextFragment>& get_Current() const override;
        
        TextFragmentsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> textFragments);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextFragment>>> cursor;
        int32_t viewed;
        static uint64_t key;
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
        bool MoveNextImplementation();
        System::SharedPtr<TextFragment>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of <see cref="TextFragment"></see> object elements actually contained in the collection. 
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
    /// Adds the text fragment element at the specified index.
    /// </summary>
    /// <param name="fragment">Text fragment element to add.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<TextFragment>& fragment) override;
    /// <summary>
    /// Returns an enumerator for the entire collection.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextFragment>>> GetEnumerator() override;
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<TextFragment>> array, int32_t index) override;
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<TextFragment>& item) const override;
    /// <summary>
    /// Deletes specified item from collection.
    /// </summary>
    /// <param name="item">The object to delete</param>
    /// <returns>true if item was deleted from collection; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<TextFragment>& item) override;
    
    /// <summary>
    /// Gets the text fragment element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>TextFragment object.</returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextFragment> idx_get(int32_t index);
    
protected:

    System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<TextFragment>>> get_Unrestricted();
    
    System::EventHandler<> OnCollectionChanged;
    
    /// <summary>
    /// Initializes a new instance of <see cref="TextFragmentCollection"></see> collection class
    /// </summary>
    TextFragmentCollection();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextFragmentCollection, CODEPORTING_ARGS());
    void AddRange(System::SharedPtr<TextFragmentCollection> fragmentCollection);
    /// <summary>
    /// Deletes the text fragment element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    
    virtual ASPOSE_PDF_SHARED_API ~TextFragmentCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> fragments;
    System::SharedPtr<System::Object> syncRoot;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


