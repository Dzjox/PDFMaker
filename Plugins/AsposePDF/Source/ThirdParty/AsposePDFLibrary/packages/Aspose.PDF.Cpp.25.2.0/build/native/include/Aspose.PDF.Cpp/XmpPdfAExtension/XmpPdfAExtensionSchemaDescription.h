#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class XmpPdfAExtensionSchema;
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
/// Represents the description of XMP extension schema which is provided by PDF/A-1.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XmpPdfAExtensionSchemaDescription : public System::Object
{
    typedef XmpPdfAExtensionSchemaDescription ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::XmpPdfAExtensionSchema;
    
public:

    /// <summary>
    /// Gets the prefix.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Prefix() const;
    /// <summary>
    /// Gets the namespace URI.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_NamespaceURI() const;
    /// <summary>
    /// Gets the optional description.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Description() const;
    
    /// <summary>
    /// Initializes new object.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="namespaceURI">The namespace URI.</param>
    /// <param name="description">The optional desciption.</param>
    ASPOSE_PDF_SHARED_API XmpPdfAExtensionSchemaDescription(System::String prefix, System::String namespaceURI, System::String description);
    
    /// <summary>
    /// Returns the list of xml elements that represent schema description in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The list of xml elements.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    
protected:

    /// <summary>
    /// Creates a single schema description object from xml tree.
    /// </summary>
    /// <param name="rootNode">The root node of schema description.</param>
    /// <returns>The new schema description.</returns>
    static System::SharedPtr<XmpPdfAExtensionSchemaDescription> CreateElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    
private:

    /// <summary>
    /// Preferred schema namespace prefix.
    /// </summary>
    System::String _prefix;
    /// <summary>
    /// Unique URI which describes the schema.
    /// </summary>
    System::String _namespaceURI;
    /// <summary>
    /// Optional description of schema.
    /// </summary>
    System::String _description;
    
};

} // namespace Pdf
} // namespace Aspose


