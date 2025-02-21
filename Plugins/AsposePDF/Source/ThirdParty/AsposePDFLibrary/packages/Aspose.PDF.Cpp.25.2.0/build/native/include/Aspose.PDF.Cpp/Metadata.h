#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/idictionary.h>
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
class IPdfObject;
namespace XMP
{
class XmpDataCollection;
} // namespace XMP
} // namespace Data
} // namespace Engine
namespace Tests
{
class RegressionTests_v7_6;
class RegressionTests_v8_4;
class RegressionTests_v8_6;
} // namespace Tests
class XImage;
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
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlNamespaceManager;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Provides access to XMP metadata stream.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Metadata final : public System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XmpValue>>
{
    typedef Metadata ThisType;
    typedef System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XmpValue>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::XImage;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    
public:

    /// <summary>
    /// Checks if colleciton has fixed size.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsFixedSize() const;
    /// <summary>
    /// Checks if collection is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    /// <summary>
    /// Gets collection of metadata keys.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_Keys() const override;
    /// <summary>
    /// Gets values in the metadata.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XmpValue>>> get_Values() const override;
    /// <summary>
    /// Gets the dictionary of extension fields.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<XmpPdfAExtensionSchema>>> get_ExtensionFields();
    /// <summary>
    /// Gets count of elements in the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Checks if collection is synchronized.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets collection synchronization object.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets namespace manager.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Xml::XmlNamespaceManager> get_NamespaceManager();
    
    /// <summary>
    /// Registers namespace URI.
    /// </summary>
    /// <param name="prefix">The value of prefix.</param>
    /// <param name="namespaceUri">The value of namespace URI.</param>
    ASPOSE_PDF_SHARED_API void RegisterNamespaceUri(System::String prefix, System::String namespaceUri);
    /// <summary>
    /// Registers namespace URI.
    /// </summary>
    /// <param name="prefix">The value of prefix.</param>
    /// <param name="namespaceUri">The value of namespace URI.</param>
    /// <param name="schemaDescription">The value of schema description.</param>
    ASPOSE_PDF_SHARED_API void RegisterNamespaceUri(System::String prefix, System::String namespaceUri, System::String schemaDescription);
    /// <summary>
    /// Returns  namespace URI by prefix.
    /// </summary>
    /// <param name="prefix">The value of prefix.</param>
    /// <returns>The value of namespace URI.</returns>
    ASPOSE_PDF_SHARED_API System::String GetNamespaceUriByPrefix(System::String prefix);
    /// <summary>
    /// Returns prefix by namespace URI.
    /// </summary>
    /// <param name="namespaceUri">Namespace URI.</param>
    /// <returns>The value of prefix.</returns>
    ASPOSE_PDF_SHARED_API System::String GetPrefixByNamespaceUri(System::String namespaceUri);
    /// <summary>
    /// Adds value to metadata.
    /// </summary>
    /// <param name="key">The key to add.</param>
    /// <param name="value">Value which will be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::String& key, const System::SharedPtr<XmpValue>& value) override;
    /// <summary>
    /// Adds value to metadata.
    /// </summary>
    /// <param name="key">The key to add.</param>
    /// <param name="value">Value which will be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::String& key, const System::SharedPtr<System::Object>& value);
    /// <summary>
    /// Adds pdf extension to metadata.
    /// </summary>
    /// <param name="prefix">The prefix of extension.</param>
    /// <param name="value">Value which will be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::String& prefix, const System::SharedPtr<XmpPdfAExtensionObject>& value);
    /// <summary>
    /// Clears metadata.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Checks does key is contained in metadata.
    /// </summary>
    /// <param name="key">The key of entry to find.</param>
    /// <returns>True if key is contained in the metadata.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::String& key) const;
    /// <summary>
    /// Returns dictionary enumerator.
    /// </summary>
    /// <returns>Enumerator.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>>> GetEnumerator() override;
    /// <summary>
    /// Removes entry from metadata. 
    /// </summary>
    /// <param name="key">The key of entry to remove.</param>
    /// <returns>True - if key removed; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::String& key) override;
    
    /// <summary>
    /// Gets data from metadata.
    /// </summary>
    /// <param name="key">The key name.</param>
    /// <returns>Metadata object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XmpValue> idx_get(const System::String& key) const override;
    /// <summary>
    /// Sets data from metadata.
    /// </summary>
    /// <param name="key">The key name.</param>
    /// <param name="value">Metadata object.</param>
    ASPOSE_PDF_SHARED_API void idx_set(const System::String& key, System::SharedPtr<XmpValue> value) override;
    
    /// <summary>
    /// Copies elements of the collection into array.
    /// </summary>
    /// <param name="array">Destination array.</param>
    /// <param name="index">Starting index.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> array, int32_t index) override;
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
    /// Removes key/value pair from the colleciton.
    /// </summary>
    /// <param name="item">Key/value pair to be removed.</param>
    /// <returns>true if pair was found and removed.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>& item) override;
    
protected:

    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_KeysInternal() const;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XmpValue>>> get_ValuesInternal() const;
    
    /// <summary>
    /// Constructor of the Metadata.
    /// </summary>
    /// <param name="stream"></param>
    Metadata(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Data::IPdfObject> owner);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Metadata, CODEPORTING_ARGS(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Data::IPdfObject> owner));
    
    Metadata(System::SharedPtr<Engine::Data::XMP::XmpDataCollection> _data, System::SharedPtr<Engine::Data::IPdfObject> owner);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Metadata, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::XMP::XmpDataCollection> _data, System::SharedPtr<Engine::Data::IPdfObject> owner));
    
    /// <summary>
    /// Creates empty metadata object.
    /// </summary>
    Metadata();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Metadata, CODEPORTING_ARGS());
    /// <summary>
    /// Returns XmpDataCollection object.
    /// </summary>
    /// <returns>Metadata object.</returns>
    System::SharedPtr<Engine::Data::XMP::XmpDataCollection> getData();
    void Update();
    
    virtual ASPOSE_PDF_SHARED_API ~Metadata();
    
private:

    System::SharedPtr<Engine::Data::XMP::XmpDataCollection> data;
    static const System::String _defaultXmpNamespacePrefix;
    static const System::String _defaultXmpNamespaceUri;
    System::SharedPtr<Engine::Data::IPdfObject> _ownerObject;
    
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetNamespaceManager();
    
};

} // namespace Pdf
} // namespace Aspose


