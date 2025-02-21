#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace Data
{
class IPdfArray;
class IPdfPrimitive;
} // namespace Data
class IPdfDocument;
} // namespace Engine
class OutputIntent;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class HashSet;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the collection of <see cref="OutputIntent"></see>.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OutputIntents final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutputIntent>>
{
    typedef OutputIntents ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutputIntent>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    
protected:

    class OutputIntentsEnumerator final : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::OutputIntent>>
    {
        typedef OutputIntentsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::OutputIntent>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<OutputIntent>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<OutputIntent>& get_Current() const override;
        
        OutputIntentsEnumerator(System::SharedPtr<OutputIntents> collection);
        
        void Dispose() override;
        bool MoveNext() override;
        void Reset() override;
        
    private:
    
        System::SharedPtr<OutputIntents> _outputIntents;
        int32_t _index;
        
        bool MoveNextImplementation();
        System::SharedPtr<OutputIntent>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of output intents contained in the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Adds an output intent to the collection.
    /// </summary>
    /// <param name="item">The output intent to add to the collection.</param>
    /// <exception cref="ArgumentNullException">The <paramref name="item"></paramref> is null.</exception>
    /// <exception cref="InvalidOperationException">
    /// The document that contains the collection has no catalog to access the OutputIntents.
    /// </exception>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<OutputIntent>& item) override;
    /// <summary>
    /// Removes all output intents from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the collection contains a specific output intent.
    /// </summary>
    /// <param name="item">The output intent to locate in the collection.</param>
    /// <returns>
    /// <see langword="true"></see> if <paramref name="item"></paramref> is found in the collection; otherwise, <see langword="false"></see>.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<OutputIntent>& item) const override;
    /// <summary>
    /// Copies the elements of the collection to the <paramref name="array"></paramref>,starting
    /// at the particular <paramref name="arrayIndex"></paramref> into the array.
    /// </summary>
    /// <param name="array">
    /// The one-dimensional array that is the destination of the output intents copied
    /// from the collection. The array must have zero-based indexing.
    /// </param>
    /// <param name="arrayIndex">The zero-based index in <paramref name="array"></paramref> at which copying begins.</param>
    /// <exception cref="ArgumentNullException"><paramref name="array"></paramref> is null.</exception>
    /// <exception cref="ArgumentOutOfRangeException"><paramref name="arrayIndex"></paramref> is less than 0.</exception>
    /// <exception cref="ArgumentException">
    /// The number of elements in the source <see cref="OutputIntents"></see> is greater than the available space
    /// from <paramref name="arrayIndex"></paramref> to the end of the destination <paramref name="array"></paramref>.
    /// </exception>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<OutputIntent>> array, int32_t arrayIndex) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An enumerator that can be used to iterate through the collection.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutputIntent>>> GetEnumerator() override;
    /// <summary>
    /// Removes the first occurrence of a specific output intent from the collection.
    /// </summary>
    /// <param name="item">The output intent to remove from the collection.</param>
    /// <returns>
    /// <see langword="true"></see> if <paramref name="item"></paramref> was successfully removed from the collection;
    /// <see langword="false"></see> if <paramref name="item"></paramref> was not found in the original collection.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<OutputIntent>& item) override;
    
    /// <summary>
    /// Gets the output intent at the specified <paramref name="index"></paramref>.
    /// </summary>
    /// <param name="index">The zero-based index of the output intent to get.</param>
    /// <returns>The output intent at the specified <paramref name="index"></paramref>.</returns>
    /// <exception cref="ArgumentOutOfRangeException">
    /// <paramref name="index"></paramref> is less than 0 or <paramref name="index"></paramref> is equal to or greater
    /// than <see cref="Count"></see>.
    /// </exception>
    /// <exception cref="InvalidOperationException">
    /// The document that contains the collection has no catalog to access the OutputIntents.
    /// </exception>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OutputIntent> idx_get(int32_t index);
    
protected:

    const System::SharedPtr<Engine::Data::IPdfArray>& get_EngineIntents() const;
    
    /// <summary>
    /// Initializes new <see cref="OutputIntents"></see> from a document.
    /// </summary>
    /// <param name="document">The document that contains output intents.</param>
    OutputIntents(System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OutputIntents, CODEPORTING_ARGS(System::SharedPtr<Document> document));
    
    virtual ASPOSE_PDF_SHARED_API ~OutputIntents();
    
private:

    System::WeakPtr<Document> _document;
    System::WeakPtr<Engine::IPdfDocument> _engineDoc;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<OutputIntent>>> _intentsCache;
    System::SharedPtr<System::Collections::Generic::HashSet<System::String>> _intentIdentifiers;
    System::SharedPtr<Engine::Data::IPdfArray> pr_EngineIntents;
    
    void set_EngineIntents(System::SharedPtr<Engine::Data::IPdfArray> value);
    
    void EnsureCacheInitialized();
    void AddIntentSubtypeToCache(System::SharedPtr<Engine::Data::IPdfPrimitive> outputIntent);
    bool EnsureEngineIntentsInitialized();
    System::SharedPtr<OutputIntent> CreateIntent(System::SharedPtr<Engine::Data::IPdfPrimitive> engineIntent);
    
};

} // namespace Pdf
} // namespace Aspose


