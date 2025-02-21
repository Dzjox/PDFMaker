#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/keyvalue_pair.h>
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
class ExplicitDestination;
} // namespace Annotations
class ApsUsingConverter;
class Document;
namespace Engine
{
class IPdfDocument;
} // namespace Engine
class PdfToApsConverter;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents the collection of all destinations (a name tree mapping name strings to destinations (see 12.3.2.3, "Named Destinations") and (see 7.7.4, "Name Dictionary")) in the pdf document. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DestinationCollection final : public System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>
{
    typedef DestinationCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PdfToApsConverter;
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::Document;
    
protected:

    /// <summary>
    /// Class represents enumerator of the collection.
    /// </summary>
    class DestinationEnumerator : public System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>
    {
        typedef DestinationEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        /// <summary>
        /// Gets the current destination in the collection.
        /// </summary>
        //[Obfuscation(Feature = "virtualization", Exclude = false)]
        System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> get_Current() const override;
        
        /// <summary>
        /// Initializes new DestinationEnumerator collection instance from the <paramref name="destinations" ></paramref>.
        /// </summary>
        /// <param name="destinations">The collection of destinations.</param>
        DestinationEnumerator(System::SharedPtr<DestinationCollection> parent, System::SharedPtr<System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> destinations);
        
        /// <summary>
        /// Advances the enumerator to the next destination of the collection.
        /// </summary>
        /// <returns>True if the enumerator was successfully advanced to the next destination; false if the enumerator has passed the end of the collection.</returns>
        //[Obfuscation(Feature = "virtualization", Exclude = false)]
        bool MoveNext() override;
        /// <summary>
        /// Sets the enumerator to the initial position, which is before the first destination 
        /// in the collection.
        /// </summary>
        void Reset() override;
        void Dispose() override;
        
    private:
    
        bool initialized;
        System::SharedPtr<System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> destinations;
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> enumerator;
        int32_t viewed;
        System::SharedPtr<DestinationCollection> _parent;
        
        bool MoveNextImplementation();
        System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of elements contained in the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Gets the destination object by index.
    /// </summary>
    /// <param name="index">The index of destination to get.</param>
    /// <returns>Destination.</returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> idx_get(int32_t index);
    
    /// <summary>
    /// Returns the page number of destination by the name.
    /// </summary>
    /// <param name="destinameName">The name of destination.</param>
    /// <param name="useCache">Determines whether cached version of collection is used or not.</param>
    /// <returns>The page number if destination was found; otherwise, -1.</returns>
    ASPOSE_PDF_SHARED_API int32_t GetPageNumber(System::String destinameName, bool useCache);
    /// <summary>
    /// Returns the explicit destination by the name.
    /// </summary>
    /// <param name="destinameName">The name of destination.</param>
    /// <param name="useCache">Determines whether cached version of collection is used or not.</param>
    /// <returns>The ExplicitDestination object for destination found; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotations::ExplicitDestination> GetExplicitDestination(System::String destinameName, bool useCache);
    /// <summary>
    /// Returns the enumerator.
    /// </summary>
    /// <returns>The enumerator.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> GetEnumerator() override;
    /// <summary>
    /// Returns the index of destination in collection.
    /// </summary>
    /// <param name="value">The value to find.</param>
    /// <returns>The index of destination in collection.</returns>
    ASPOSE_PDF_SHARED_API int32_t IndexOf(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> value) const;
    /// <summary>
    /// Determines whether this instance contains the object.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <returns>
    ///   <c>true</c> if [contains] [the specified value]; otherwise, <c>false</c>.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>& value) const override;
    /// <summary>
    /// Copies the elements of the collection to an Array, starting at a particular Array index.
    /// </summary>
    /// <param name="array">The one-dimensional Array that is the destination of the elements copied from collection</param>
    /// <param name="arrayIndex">The zero-based index in array at which copying begins.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>> array, int32_t arrayIndex) override;
    /// <summary>
    /// Adds the specified item.
    /// Collection is read-only. Always throws NotSupportedException exception.
    /// </summary>
    /// <param name="item">The item.</param>
    /// <exception cref="NotSupportedException"></exception>
    ASPOSE_PDF_SHARED_API void Add(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>& item) override;
    /// <summary>
    /// Collection is read-only. Always throws NotSupportedException exception.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Removes the specified item.
    /// Collection is read-only. Always throws NotSupportedException exception.
    /// </summary>
    /// <param name="item">The item.</param>
    /// <returns></returns>
    /// <exception cref="NotSupportedException"></exception>
    ASPOSE_PDF_SHARED_API bool Remove(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>& item) override;
    
protected:

    /// <summary>
    /// Initializes new Destination collection instance from the <paramref name="document" ></paramref>.
    /// </summary>
    /// <param name="document">Document contained destinations.</param>
    DestinationCollection(System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DestinationCollection, CODEPORTING_ARGS(System::SharedPtr<Document> document));
    
    virtual ASPOSE_PDF_SHARED_API ~DestinationCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> InnerList;
    /// <summary>
    /// Stores pdf document contained destinations.
    /// </summary>
    System::SharedPtr<Engine::IPdfDocument> _document;
    
    /// <summary>
    /// Initializes the collection of destinations.
    /// </summary>
    void Init();
    
};

} // namespace Pdf
} // namespace Aspose


