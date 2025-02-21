#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/details/pointer_collection_helpers.h>
#include <system/collections/idictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Facades
{
enum class DefaultMetadataProperties;
} // namespace Facades
namespace Tests
{
namespace Facades
{
class PdfXmpMetadataTests;
} // namespace Facades
} // namespace Tests
class XmpPdfAExtensionObject;
class XmpPdfAExtensionSchema;
class XmpValue;
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

namespace Facades {

/// <summary>
/// Class for manipulation with XMP metadata.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfXmpMetadata final : public Aspose::Pdf::Facades::SaveableFacade, public System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XmpValue>>
{
    typedef PdfXmpMetadata ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    typedef System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XmpValue>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::Facades::PdfXmpMetadataTests;
    
public:

    /// <summary>
    /// Gets the dictionary of extension fields.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<XmpPdfAExtensionSchema>>> get_ExtensionFields();
    /// <summary>
    /// Returns true is collection has fixed size.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsFixedSize() const;
    /// <summary>
    /// Returns true if collection is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    /// <summary>
    /// Gets count if items in the collection.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Returns true if collection is synchronized.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    
    /// <summary>
    /// Constructor for PdfXmpMetadata.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API PdfXmpMetadata();
    /// <summary>
    /// Initializes new <see cref="PdfXmpMetadata"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfXmpMetadata(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Registers the namespace URI.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="namespaceURI">The namespace URI.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void RegisterNamespaceURI(System::String prefix, System::String namespaceURI);
    /// <summary>
    /// Gets namespace URI by prefix.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <returns>Namespace URI.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::String GetNamespaceURIByPrefix(System::String prefix);
    /// <summary>
    /// Gets the prefix by namespace URI.
    /// </summary>
    /// <param name="namespaceURI">Namespace URI.</param>
    /// <returns>The prefix value.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::String GetPrefixByNamespaceURI(System::String namespaceURI);
    /// <summary>
    /// Adds value to XMP metadata.
    /// </summary>
    /// <param name="key">The key name.</param>
    /// <param name="value">Value which will be added.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Add(const DefaultMetadataProperties& key, const System::SharedPtr<XmpValue>& value);
    /// <summary>
    /// Adds extension field into metadata.
    /// </summary>
    /// <param name="xmpPdfAExtensionObject">The pdf extension object to add.</param>
    /// <param name="namespacePrefix">The prefix of schema.</param>
    /// <param name="namespaceUri">The namespace uri of schema.</param>
    /// <param name="schemaDescription">The optional description of schema.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<XmpPdfAExtensionObject> xmpPdfAExtensionObject, System::String namespacePrefix, System::String namespaceUri, System::String schemaDescription);
    /// <summary>
    /// Removes all elements from the object.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Removes element with specified key.
    /// </summary>
    /// <param name="key">Key of the element which will be deleted.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Remove(DefaultMetadataProperties key);
    /// <summary>
    /// Adds new element to the dictionary object.
    /// </summary>
    /// <param name="key">Key of new element.</param>
    /// <param name="value">Value of the element.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Add(const System::String& key, const System::SharedPtr<XmpValue>& value) override;
    /// <summary>
    /// Adds new element to the dictionary object.
    /// </summary>
    /// <param name="key">Key of new element.</param>
    /// <param name="value">Value of the element.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::String& key, const System::SharedPtr<System::Object>& value);
    /// <summary>
    /// Checks if dictionary contains the specified key.
    /// </summary>
    /// <param name="key">Key which will be checked.</param>
    /// <returns>True - if the dictionary contains the specified key; otherwise, false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Contains(const System::String& key) const;
    /// <summary>
    /// Checks if dictionary contains the specified property.
    /// </summary>
    /// <param name="property">Property which will be checked.</param>
    /// <returns>True - if the dictionary contains the specified property; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const DefaultMetadataProperties& property) const;
    /// <summary>
    /// Gets enumerator object of the dictionary.
    /// </summary>
    /// <returns>The enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>>> GetEnumerator() override;
    /// <summary>
    /// Removes key from the dictionary.
    /// </summary>
    /// <param name="key">Key which will be removed.</param>
    /// <example>
    /// </example>
    /// <returns>True - if key removed; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::String& key) override;
    
    /// <summary>
    /// Gets value by key.
    /// </summary>
    /// <param name="key">The key name to get/set.</param>
    /// <returns>Object by key</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XmpValue> idx_get(const System::String& key) const override;
    /// <summary>
    /// Sets value by key.
    /// </summary>
    /// <param name="key">The key name to get/set.</param>
    /// <param name="value">Object by key</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void idx_set(const System::String& key, System::SharedPtr<XmpValue> value) override;
    
    /// <summary>
    /// Copy metadata into array.
    /// </summary>
    /// <param name="array">The destination array.</param>
    /// <param name="index">The starting index.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> array, int32_t index) override;
    
    /// <summary>
    /// Gets value of XMP metadata by key.
    /// </summary>
    /// <param name="key">Key of the value.</param>
    /// <returns>Value from XMP metadata.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XmpValue> idx_get(const DefaultMetadataProperties& key) const;
    /// <summary>
    /// Gets value of XMP metadata by key.
    /// </summary>
    /// <param name="key">Key of the value.</param>
    /// <param name="value">Value from XMP metadata.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void idx_set(const DefaultMetadataProperties& key, System::SharedPtr<XmpValue> value);
    
    /// <summary>
    /// Get the XmpMetadata of the input pdf in a xml format.
    /// </summary>
    /// <returns>The bytes of the XmpMetadata.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<uint8_t> GetXmpMetadata();
    /// <summary>
    /// Get a part of the XmpMetadata of the input pdf according to a meta name.
    /// </summary>
    /// <param name="name">Metadata name.</param>
    /// <returns>Bytes of metadata.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<uint8_t> GetXmpMetadata(System::String name);
    /// <summary>
    /// Determines does this dictionary contasins specified key.
    /// </summary>
    /// <param name="key">Key to search in the dictionary.</param>
    /// <returns>true if key is found.</returns>
    ASPOSE_PDF_SHARED_API bool ContainsKey(const System::String& key) const override;
    /// <summary>
    /// Tries to find key in the dictionary and retreives value if found.
    /// </summary>
    /// <param name="key">Key to search in the dictionary.</param>
    /// <param name="value">Retreived value.</param>
    /// <returns>true if key was found.</returns>
    ASPOSE_PDF_SHARED_API bool TryGetValue(const System::String& key, System::SharedPtr<XmpValue>& value) const override;
    /// <summary>
    /// Adds pair with key and value into the dictionary.
    /// </summary>
    /// <param name="item">Item to be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>& item) override;
    /// <summary>
    /// Checks does specified key-value pair is contained in the dictionary.
    /// </summary>
    /// <param name="item">Key-value pair.</param>
    /// <returns>true if this pauir was found.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>& item) const override;
    /// <summary>
    /// Removes key/value pair from the collection.
    /// </summary>
    /// <param name="item">Key/value pair to be removed.</param>
    /// <returns>true if pair was found and removed.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>& item) override;
    ASPOSE_PDF_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_KeysInternal() const;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XmpValue>>> get_ValuesInternal() const;
    
    virtual ASPOSE_PDF_SHARED_API ~PdfXmpMetadata();
    
private:

    static const System::String DefaultXmpNamespacePrefix;
    static const System::String DefaultXmpNamespaceUri;
    
    /// <summary>
    /// Registers the namespace URI of pdf extension.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="namespaceURI">The namespace URI.</param>
    /// <param name="schemaDescription">The optional description value.</param>
    /// <example>
    /// </example>
    void RegisterNamespaceURI(System::String prefix, System::String namespaceURI, System::String schemaDescription);
    System::String getStringKey(DefaultMetadataProperties key) const;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


