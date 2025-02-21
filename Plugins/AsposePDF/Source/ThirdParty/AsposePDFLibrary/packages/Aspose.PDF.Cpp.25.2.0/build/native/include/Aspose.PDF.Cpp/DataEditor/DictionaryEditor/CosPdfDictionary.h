#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/details/pointer_collection_helpers.h>
#include <system/collections/idictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/DataEditor/DictionaryEditor/CosPdfPrimitive.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace DataEditor
{
class DictionaryEditor;
class ICosPdfPrimitive;
} // namespace DataEditor
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
} // namespace Engine
class Page;
class Resources;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class ICollection;
template <typename> class IEnumerator;
template <typename, typename> class KeyValuePair;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace DataEditor {

/// <summary>
/// A class for accessing an object's dictionary. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CosPdfDictionary : public Aspose::Pdf::DataEditor::CosPdfPrimitive, public System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::DataEditor::ICosPdfPrimitive>>
{
    typedef CosPdfDictionary ThisType;
    typedef Aspose::Pdf::DataEditor::CosPdfPrimitive BaseType;
    typedef System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::DataEditor::ICosPdfPrimitive>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::DataEditor::DictionaryEditor;
    
public:

    /// <summary>
    /// Full collection of keys. 
    /// Contains editable and not editable keys.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_AllKeys() const;
    /// <summary>
    /// Collection of editable keys.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_Keys() const override;
    /// <summary>
    /// Gets an <see cref="ICollection"></see> containing the values in the <see cref="CosPdfDictionary"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<ICosPdfPrimitive>>> get_Values() const override;
    /// <summary>
    /// Gets the number of elements contained in the <see cref="CosPdfDictionary"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets a value indicating whether the <see cref="CosPdfDictionary"></see> is read-only.
    /// </summary>
    /// <returns>true if the <see cref="CosPdfDictionary"></see> is read-only; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>Creates an empty dictionary that will be attached to the page.</summary>
    /// <param name="page">Result dictionary will be attached to this page.</param>
    /// <exception cref="ArgumentNullException">The page is null.</exception>
    /// <returns>An empty dictionary.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<CosPdfDictionary> CreateEmptyDictionary(System::SharedPtr<Page> page);
    /// <summary>
    /// Creates an empty dictionary that will be attached to the document.
    /// </summary>
    /// <param name="document">Result dictionary will be attached to this document.</param>
    /// <exception cref="ArgumentNullException">The document is null.</exception>
    /// <returns>An empty dictionary.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<CosPdfDictionary> CreateEmptyDictionary(System::SharedPtr<Document> document);
    
    /// <summary>
    /// Creates a dictionary from resources.
    /// </summary>
    /// <param name="resources">Resources with a dictionary for work.</param>
    /// <exception cref="ArgumentNullException">The resources are null.</exception>
    ASPOSE_PDF_SHARED_API CosPdfDictionary(System::SharedPtr<Resources> resources);
    
    /// <summary>
    /// Gets the element with the specified key.
    /// </summary>
    /// <param name="key">The key of the element to get or set.</param>
    /// <returns>The element with the specified key.</returns>
    /// <exception cref="ArgumentNullException">The key is null.</exception>
    /// <exception cref="KeyNotFoundException">The property is retrieved and key is not found.</exception>
    /// <exception cref="ArgumentException">Throw exception if key can't be edited/set.</exception>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ICosPdfPrimitive> idx_get(const System::String& key) const override;
    /// <summary>
    /// Sets the element with the specified key.
    /// </summary>
    /// <param name="key">The key of the element to get or set.</param>
    /// <param name="value">The element with the specified key.</param>
    /// <exception cref="ArgumentNullException">The key is null.</exception>
    /// <exception cref="KeyNotFoundException">The property is retrieved and key is not found.</exception>
    /// <exception cref="ArgumentException">Throw exception if key can't be edited/set.</exception>
    ASPOSE_PDF_SHARED_API void idx_set(const System::String& key, System::SharedPtr<ICosPdfPrimitive> value) override;
    
    /// <summary>
    /// Determines whether the <see cref="CosPdfDictionary"></see> contains an element with the specified key.
    /// </summary>
    /// <param name="key">The key to locate in the  <see cref="CosPdfDictionary"></see>.</param>
    /// <returns> 
    /// true if the <see cref="CosPdfDictionary"></see> contains an editable element with the key; otherwise, false.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool ContainsKey(const System::String& key) const override;
    /// <summary>
    /// Removes the element with the specified key from the <see cref="CosPdfDictionary"></see>.
    /// </summary>
    /// <param name="key">The key of the element to remove.</param>
    /// <returns>
    /// True if the element is successfully removed; otherwise, false. 
    /// This method also returns false if key was not found in the original dictionary or key the key is not editable
    /// </returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::String& key) override;
    /// <summary>
    /// For access to simple data type like string, name, bool, number.
    /// Returns null for other types.
    /// </summary>
    /// <param name="key">Key value</param>
    /// <param name="value">returns <see cref="ICosPdfPrimitive"></see> for key or null.</param>
    /// <returns>
    /// Returns true if <see cref="ICosPdfPrimitive"></see> is like string, name, bool, number. 
    /// Returns false for all other types.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool TryGetValue(const System::String& key, System::SharedPtr<ICosPdfPrimitive>& value) const override;
    /// <summary>
    /// Set <see cref="ICosPdfPrimitive"></see> to dictionary.
    /// </summary>
    /// <param name="key">Key.</param>
    /// <param name="value">Value.</param>
    /// <exception cref="ArgumentException">Throw exception if key/value can't be edited or removed.</exception>
    ASPOSE_PDF_SHARED_API void Add(const System::String& key, const System::SharedPtr<ICosPdfPrimitive>& value) override;
    /// <summary>
    /// Set <see cref="ICosPdfPrimitive"></see> to dictionary.
    /// </summary>
    /// <param name="item">The pair with a key and a value.</param>
    /// <exception cref="ArgumentException">Throw exception if key/value can't be edited or removed.</exception>
    ASPOSE_PDF_SHARED_API void Add(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<ICosPdfPrimitive>>& item) override;
    /// <summary>
    /// Removes all items from the <see cref="CosPdfDictionary"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the <see cref="CosPdfDictionary"></see> contains a specific value.
    /// </summary>
    /// <param name="item">The desired object.</param>
    /// <returns>
    /// true if item is found in the <see cref="CosPdfDictionary"></see>; 
    /// otherwise, false.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<ICosPdfPrimitive>>& item) const override;
    /// <summary>
    /// Copies the elements of the <see cref="CosPdfDictionary"></see> to an <see cref="Array"></see>,
    /// starting at a particular <see cref="Array"></see> index.
    /// </summary>
    /// <param name="array">
    /// The one-dimensional <see cref="Array"></see> that is the destination of the elements copied
    /// from <see cref="CosPdfDictionary"></see>. The <see cref="Array"></see> must have zero-based
    /// indexing.
    /// </param>
    /// <param name="arrayIndex">The zero-based index in array at which copying begins.</param>
    /// <exception cref="ArgumentNullException">The array is null.</exception>
    /// <exception cref="ArgumentOutOfRangeException">The arrayIndex is less than 0.</exception>
    /// <exception cref="ArgumentException">
    /// The number of elements in the source <see cref="CosPdfDictionary"></see>
    /// is greater than the available space from arrayIndex to the end of the destination array.
    /// </exception>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<ICosPdfPrimitive>>> array, int32_t arrayIndex) override;
    /// <summary>
    /// Removes the first occurrence of a specific object from the <see cref="CosPdfDictionary"></see>.
    /// </summary>
    /// <param name="item">The object to remove from the <see cref="CosPdfDictionary"></see>.</param>
    /// <returns>
    /// true if item was successfully removed from the <see cref="CosPdfDictionary"></see>;
    /// otherwise, false. This method also returns false if item is not found in the
    /// original <see cref="CosPdfDictionary"></see>.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<ICosPdfPrimitive>>& item) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An enumerator that can be used to iterate through the collection.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<ICosPdfPrimitive>>>> GetEnumerator() override;
    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfDictionary"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfDictionary"></see> else <see cref="CosPdfDictionary"></see>.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<CosPdfDictionary> ToCosPdfDictionary() override;
    ASPOSE_PDF_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// <summary>
    /// Creates an empty dictionary.
    /// </summary>
    /// <param name="trailerable">The <seealso cref="ITrailerable"></seealso>.</param>
    CosPdfDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CosPdfDictionary, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable));
    
    /// <param name="dictionary">A dictionary for work.</param>
    /// <exception cref="ArgumentNullException">The dictionary is null.</exception>
    CosPdfDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictionary);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CosPdfDictionary, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictionary));
    /// <summary>
    /// Create data with internal classes
    /// </summary>
    /// <param name="trailerable"></param>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> CreateIPdfPrimitive(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable) override;
    
    virtual ASPOSE_PDF_SHARED_API ~CosPdfDictionary();
    
private:

    /// <summary>
    /// Dictionary for editing.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _dictionary;
    /// <summary>
    /// ITrailerable for creating some <see cref="IPdfPrimitive"></see>.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _trailerable;
    
    /// <summary>
    /// Inits resources for .ctor.
    /// </summary>
    /// <param name="trailerable">ITrailerable value.</param>
    /// <param name="dictionary">IPdfDictionary value.</param>
    void InitResources(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictionary);
    /// <summary>
    /// Checks the availability of a primitive for editing.
    /// </summary>
    /// <param name="key"></param>
    /// <returns></returns>
    bool IsPrimitiveEditable(const System::String& key) const;
    
};

} // namespace DataEditor
} // namespace Pdf
} // namespace Aspose


