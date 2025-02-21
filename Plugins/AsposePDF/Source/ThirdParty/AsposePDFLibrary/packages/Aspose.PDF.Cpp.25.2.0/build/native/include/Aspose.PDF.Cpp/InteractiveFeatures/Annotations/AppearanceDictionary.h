#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/keyvalue_pair.h>
#include <system/collections/ienumerator.h>
#include <system/collections/idictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/XForm.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
class PDF3DAnnotation;
} // namespace Annotations
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
namespace Facades
{
class Form;
} // namespace Facades
namespace Forms
{
class RadioButtonOptionField;
} // namespace Forms
namespace Tests
{
class RegressionTests_v7_4;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class ICollection;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Annotation appearance dictionary specifying how the annotation shall be presented visually on the page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AppearanceDictionary final : public System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XForm>>
{
    typedef AppearanceDictionary ThisType;
    typedef System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XForm>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    
private:

    class AppearanceDictionaryEnumerator : public System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::XForm>>>
    {
        typedef AppearanceDictionaryEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::XForm>>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ABSTRACT_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>> get_Current() const override;
        
        AppearanceDictionaryEnumerator(System::SharedPtr<AppearanceDictionary> bridge);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>>> enumerator;
        int32_t viewed;
        System::SharedPtr<AppearanceDictionary> _bridge;
        
    };
    
    
public:

    /// <summary>
    /// Gets a value indicating whether dictionary is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    /// <summary>
    /// Gets a value indicating whether dictionary has a fixed size.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsFixedSize() const;
    /// <summary>
    /// Gets keys of the dictionary. If appearance dictionary has subditionaries, then <see cref="Keys"></see> contains (N|R|D).state values,
    /// where N - normal appearance, R - rollover appearance, D - down appearance and state - the name of the state
    /// (e.g. On, Off for checkboxes).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_Keys() const override;
    /// <summary>
    /// Gets the list of the dictionary values. 
    /// Result collection contains the list of XForm objects.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XForm>>> get_Values() const override;
    /// <summary>
    /// Gets a value indicating whether access to the dictionary is synchronized (thread safe).
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets an object that can be used to synchronize access to the dictionary.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets the number of elements contained in the dictionary. 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    
    /// <summary>
    /// Removes all elements from the dictionary.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Returns an IDictionaryEnumerator object for the dictionary.
    /// </summary>
    /// <returns>Enumerator of the dictionary.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>>>> GetEnumerator() override;
    /// <summary>
    /// Copies the elements of the dictionary to an Array, starting at a particular Array index.
    /// </summary>
    /// <param name="array">Array where items must be copied.</param>
    /// <param name="index">Index where items must be copied.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<XForm>> array, int32_t index);
    
    /// <summary>
    /// Represents convenient form for getting appearance streams.
    /// </summary>
    /// <param name="key">
    /// Represents path to appearance stream. 
    /// If appearance dictionary has subdictionaries, then path must contain 2 parts (<see cref="Keys"></see>), 
    /// else path has only one part.
    /// </param>
    /// <returns>
    /// XForm object (appearance stream) which corresponds to the given key.
    /// </returns>
    /// 
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> idx_get(const System::String& key) const override;
    /// <summary>
    /// Represents convenient form for getting appearance streams.
    /// </summary>
    /// <param name="key">
    /// Represents path to appearance stream. 
    /// If appearance dictionary has subdictionaries, then path must contain 2 parts (<see cref="Keys"></see>), 
    /// else path has only one part.
    /// </param>
    /// <returns>
    /// XForm object (appearance stream) which corresponds to the given key.
    /// </returns>
    /// 
    ASPOSE_PDF_SHARED_API void idx_set(const System::String& key, System::SharedPtr<XForm> value) override;
    
    /// <summary>
    /// Add X form for specifed key.
    /// </summary>
    /// <param name="key">
    /// Element key.
    /// </param>
    /// <param name="value">
    /// XForm object value.
    /// </param>
    ASPOSE_PDF_SHARED_API void Add(const System::String& key, const System::SharedPtr<XForm>& value) override;
    /// <summary>
    /// Determines does this dictionary contasins specified key.
    /// </summary>
    /// <param name="key">Key to search in the dictionary.</param>
    /// <returns>true if key is found.</returns>
    ASPOSE_PDF_SHARED_API bool ContainsKey(const System::String& key) const override;
    /// <summary>
    /// Removes key from the dictionary.
    /// </summary>
    /// <param name="key">Key to be removed from the dictionary.</param>
    /// <returns>true if key was successfully removed.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::String& key) override;
    /// <summary>
    /// Tries to find key in the dictionary and retreives value if found.
    /// </summary>
    /// <param name="key">Key to search in the dictionary.</param>
    /// <param name="value">Retreived value.</param>
    /// <returns>true if key was found.</returns>
    ASPOSE_PDF_SHARED_API bool TryGetValue(const System::String& key, System::SharedPtr<XForm>& value) const override;
    /// <summary>
    /// Adds pair with key and value into the dictionary.
    /// </summary>
    /// <param name="item">Item to be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>>& item) override;
    /// <summary>
    /// Checks does specified key-value pair is contained in the dictionary.
    /// </summary>
    /// <param name="item">Key-value pair.</param>
    /// <returns>true if this pauir was found.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>>& item) const override;
    /// <summary>
    /// Copies the elements of the ICollection to an Array, starting at a particular Array index.
    /// </summary>
    /// <param name="array">The one-dimensional Array that is the destination of the elements copied from ICollection. The Array must have zero-based indexing.</param>
    /// <param name="arrayIndex">The zero-based index in array at which copying begins.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>>> array, int32_t arrayIndex) override;
    /// <summary>
    /// Removes key/value pair from the collection.
    /// </summary>
    /// <param name="item">Key/value pair to be removed.</param>
    /// <returns>true if pair was found and removed.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>>& item) override;
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict;
    
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_KeysInternal() const;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XForm>>> get_ValuesInternal() const;
    
    AppearanceDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AppearanceDictionary, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict));
    /// <summary>
    /// Retreives form by the string key.
    /// </summary>
    /// <param name="key">String key.</param>
    /// <returns>Retreived form.</returns>
    System::SharedPtr<XForm> GetForm(System::String key) const;
    /// <summary>
    /// Sets form for given key.
    /// </summary>
    /// <param name="key">String key.</param>
    /// <param name="form">Form to be associated with the key.</param>
    void SetForm(System::String key, System::SharedPtr<XForm> form);
    void SetForm(System::ArrayPtr<System::String> key, System::SharedPtr<XForm> form);
    
    virtual ASPOSE_PDF_SHARED_API ~AppearanceDictionary();
    
private:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<XForm>>> _cache;
    System::SharedPtr<System::Object> syncRoot;
    
    static void ParseKey(System::String key, System::String& head, System::String& tail);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> GetNode(System::String key) const;
    void SetForm(System::String head, System::String tail, System::SharedPtr<XForm> form);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


