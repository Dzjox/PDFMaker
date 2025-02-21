#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
namespace Engine
{
namespace Data
{
namespace XMP
{
class XmpPacket;
} // namespace XMP
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class PdfA1ConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
class XmpPdfAExtensionObject;
class XmpPdfAExtensionProperty;
class XmpPdfAExtensionSchemaDescription;
class XmpPdfAExtensionValueType;
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
namespace Xml
{
class XmlDocument;
class XmlElement;
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Describes the XMP extension schema which is provided by PDF/A-1.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XmpPdfAExtensionSchema : public System::Object
{
    typedef XmpPdfAExtensionSchema ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::Data::XMP::XmpPacket;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA1ConvertStrategy;
    
public:

    /// <summary>
    /// Default extension namespace prefix.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API System::String DefaultExtensionNamespacePrefix;
    /// <summary>
    /// Default extension namespace uri.
    /// </summary>        
    static const ASPOSE_PDF_SHARED_API System::String DefaultExtensionNamespaceUri;
    /// <summary>
    /// Default schema namespace prefix.
    /// </summary>        
    static const ASPOSE_PDF_SHARED_API System::String DefaultSchemaNamespacePrefix;
    /// <summary>
    /// Default schema namespace uri.
    /// </summary>        
    static const ASPOSE_PDF_SHARED_API System::String DefaultSchemaNamespaceUri;
    /// <summary>
    /// Default property namespace prefix.
    /// </summary>        
    static const ASPOSE_PDF_SHARED_API System::String DefaultPropertyNamespacePrefix;
    /// <summary>
    /// Default property namespace uri.
    /// </summary>        
    static const ASPOSE_PDF_SHARED_API System::String DefaultPropertyNamespaceUri;
    /// <summary>
    /// Default valie type namespace prefix.
    /// </summary>        
    static const ASPOSE_PDF_SHARED_API System::String DefaultValueTypeNamespacePrefix;
    /// <summary>
    /// Default value namespace uri.
    /// </summary>        
    static const ASPOSE_PDF_SHARED_API System::String DefaultValueNamespaceUri;
    /// <summary>
    /// Default field namespace prefix.
    /// </summary>        
    static const ASPOSE_PDF_SHARED_API System::String DefaultFieldNamespacePrefix;
    /// <summary>
    /// Default extension namespace uri.
    /// </summary>        
    static const ASPOSE_PDF_SHARED_API System::String DefaultFieldNamespaceUri;
    /// <summary>
    /// Default rdf namespace prefix.
    /// </summary>        
    static const ASPOSE_PDF_SHARED_API System::String RdfPrefix;
    /// <summary>
    /// Default rdf namespace uri.
    /// </summary>        
    static const ASPOSE_PDF_SHARED_API System::String RdfNamespaceURI;
    
    /// <summary>
    /// Gets the schema description.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XmpPdfAExtensionSchemaDescription> get_Description() const;
    /// <summary>
    /// Gets the list of objects (properties, value types).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionObject>>> get_Objects() const;
    
    /// <summary>
    /// Initializes new object.
    /// </summary>
    /// <param name="description">The schema description.</param>
    ASPOSE_PDF_SHARED_API XmpPdfAExtensionSchema(System::SharedPtr<XmpPdfAExtensionSchemaDescription> description);
    
    /// <summary>
    /// Adds new object into schema.
    /// </summary>
    /// <param name="obj">The new object.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<XmpPdfAExtensionObject> obj);
    /// <summary>
    /// Determines whether obj exists in schema.
    /// </summary>
    /// <param name="obj">The obj to find.</param>
    /// <returns>True - object exists in schema; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(System::SharedPtr<XmpPdfAExtensionObject> obj);
    /// <summary>
    /// Removes the object from schema.
    /// </summary>
    /// <param name="obj">The object to remove.</param>
    ASPOSE_PDF_SHARED_API void Remove(System::SharedPtr<XmpPdfAExtensionObject> obj);
    /// <summary>
    /// Returns the xml element (tag - li) that represents schema in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The xml element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Xml::XmlElement> GetSchemaXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    /// <summary>
    /// Gets the values of properties as xml tree representation.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <param name="rootElement">The root node of properties values list.</param>
    ASPOSE_PDF_SHARED_API void GetValuesXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument, System::SharedPtr<System::Xml::XmlElement> rootElement);
    /// <summary>
    /// Returns PDF/A property by its name.
    /// </summary>
    /// <param name="name">Property name.</param>
    /// <returns>The property.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XmpPdfAExtensionProperty> GetProperty(System::String name);
    
protected:

    /// <summary>
    /// Returns index of property with given name.
    /// </summary>
    /// <param name="name">Property name.</param>
    /// <returns>Index of property within Objects List, </returns>
    int32_t GetPropertyIndex(System::String name);
    /// <summary>
    /// Determines whether prefix value is a part of pdf-a extension.
    /// </summary>
    /// <param name="localName">The prefix value to validate.</param>
    /// <returns>True - prefix is a part of pdf-a extension; otherwise, false.</returns>
    static bool IsPdfAExtensionPrefix(System::String localName);
    /// <summary>
    /// Creates the list of schemas elements from xml tree.
    /// </summary>
    /// <param name="rootNode">The root node for schemas elements.</param>
    /// <returns>The dictionary of schemas elements in format (key, value): schema_prefix, schema value.</returns>
    static System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<XmpPdfAExtensionSchema>>> CreateSchemasElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Initializes the value of property.
    /// </summary>
    /// <param name="node">The current node that stores property value.</param>
    /// <param name="schema">The schema that contains property definition.</param>
    static void InitializeSchemaValue(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XmpPdfAExtensionSchema> schema);
    /// <summary>
    /// Creates the description xml element for the block of properties values.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The description xml element.</returns>
    static System::SharedPtr<System::Xml::XmlElement> CreateDescriptionValueXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    /// <summary>
    /// Creates the description xml element for the all schemas.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The description xml element.</returns>
    static System::SharedPtr<System::Xml::XmlElement> CreateDescriptionXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    
private:

    /// <summary>
    /// The list of objects (properties, value types).
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionObject>>> _objects;
    /// <summary>
    /// The schema description.
    /// </summary>
    System::SharedPtr<XmpPdfAExtensionSchemaDescription> _description;
    
    /// <summary>
    /// Writes the list properties into xml representation of schema.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <param name="rootNode">The root node of properties list.</param>
    void WriteProperties(System::SharedPtr<System::Xml::XmlDocument> xmlDocument, System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Writes the list of value types into xml representation of schema.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <param name="rootNode">The root node of value type list.</param>
    void WriteValueTypes(System::SharedPtr<System::Xml::XmlDocument> xmlDocument, System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Tries get XmpPdfAExtensionValueType by string representing type.
    /// </summary>
    /// <param name="valueTypeName">String representing type.</param>
    /// <param name="schema">The schema that contains type definition.</param>
    /// <param name="definedType">Type found.</param>
    /// <returns>True if XmpPdfAExtensionValueType represented by string was found. Otherwise false.</returns>
    static bool TryGetType(System::String valueTypeName, System::SharedPtr<XmpPdfAExtensionSchema> schema, System::SharedPtr<XmpPdfAExtensionValueType>& definedType);
    static void FillValues(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XmpPdfAExtensionProperty> property);
    /// <summary>
    /// Creates a single schema object from xml tree.
    /// </summary>
    /// <param name="rootNode">The root node of schema.</param>
    /// <returns>The new schema.</returns>
    static System::SharedPtr<XmpPdfAExtensionSchema> CreateSchemaElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    static void CreateElements(System::SharedPtr<System::Xml::XmlNode> rootNode, System::SharedPtr<XmpPdfAExtensionSchema> schema);
    
};

} // namespace Pdf
} // namespace Aspose


