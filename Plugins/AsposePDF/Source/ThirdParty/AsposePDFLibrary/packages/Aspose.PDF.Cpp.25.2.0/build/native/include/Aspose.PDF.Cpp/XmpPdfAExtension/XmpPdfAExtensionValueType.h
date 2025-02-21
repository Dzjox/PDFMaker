#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/XmpPdfAExtension/XmpPdfAExtensionObject.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class XmpPdfAExtensionField;
class XmpPdfAExtensionSchema;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
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
/// The PDF/A ValueType schema is required for all property value types which are not defined in the XMP 2004 specification, i.e. for value types outside of the following list:
/// - Array types (these are container types which may contain one or more fields): Alt, Bag, Seq
/// - Basic value types: Boolean, (open and closed) Choice, Date, Dimensions, Integer, Lang Alt, Locale, MIMEType, ProperName, Real, Text, Thumbnail, URI, URL, XPath
/// - Media Management value types: AgentName, RenditionClass, ResourceEvent, ResourceRef, Version
/// - Basic Job/Workflow value type: Job
/// - EXIF schema value types: Flash, CFAPattern, DeviceSettings, GPSCoordinate, OECF/SFR, Rational
/// Schema namespace URI: http://www.aiim.org/pdfa/ns/type#
/// Required schema namespace prefix: pdfaType
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XmpPdfAExtensionValueType final : public Aspose::Pdf::XmpPdfAExtensionObject
{
    typedef XmpPdfAExtensionValueType ThisType;
    typedef Aspose::Pdf::XmpPdfAExtensionObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::XmpPdfAExtensionSchema;
    
public:

    /// <summary>
    /// Gets the value type.
    /// </summary>        
    ASPOSE_PDF_SHARED_API System::String get_Type() const;
    /// <summary>
    /// Gets the namespace URI.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_NamespaceUri() const;
    /// <summary>
    /// Gets the prefix.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Prefix() const;
    /// <summary>
    /// Gets the list of fields.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<XmpPdfAExtensionField>>> get_Fields() const;
    
    /// <summary>
    /// Initializes new object.
    /// </summary>
    /// <param name="type">The value type.</param>
    /// <param name="namespaceUri">The namespace URI.</param>
    /// <param name="prefix">The prefix.</param>
    /// <param name="description">The description.</param>
    ASPOSE_PDF_SHARED_API XmpPdfAExtensionValueType(System::String type, System::String namespaceUri, System::String prefix, System::String description);
    
    /// <summary>
    /// Add new field.
    /// </summary>
    /// <param name="field">The field to add.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<XmpPdfAExtensionField> field);
    /// <summary>
    /// Adds the range of fields.
    /// </summary>
    /// <param name="fields">The fields to add.</param>
    ASPOSE_PDF_SHARED_API void AddRange(System::ArrayPtr<System::SharedPtr<XmpPdfAExtensionField>> fields);
    /// <summary>
    /// Removes the field from the list of fields.
    /// </summary>
    /// <param name="field">The field to remove.</param>
    ASPOSE_PDF_SHARED_API void Remove(System::SharedPtr<XmpPdfAExtensionField> field);
    /// <summary>
    /// Clears all fields.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear();
    /// <summary>
    /// Returns the list of xml elements that represent value type in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The list of xml elements.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument) override;
    
protected:

    /// <summary>
    /// Returns the list of value types found in li element of xml tree. Used during loading of metadata.
    /// </summary>
    /// <param name="rootNode">The root node of value types in xml document.</param>
    /// <returns>Returns the list of value types.</returns>
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionValueType>>> CreateElements(System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Returns the value type found in li element of xml tree. Used during loading of metadata.
    /// </summary>
    /// <param name="rootNode">The root node of value type in xml document.</param>
    /// <returns>The new value type object.</returns>
    static System::SharedPtr<XmpPdfAExtensionValueType> CreateElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Clones XmpPdfAExtensionValueType instance.
    /// (Used for initializing properties. Because one ValueType may be used for several properties.)
    /// </summary>
    /// <returns>Clonned XmpPdfAExtensionValueType instance.</returns>
    System::SharedPtr<XmpPdfAExtensionValueType> Clone();
    
private:

    /// <summary>
    /// Property value type name.
    /// </summary>
    System::String _type;
    /// <summary>
    /// Property value type field namespace URI.
    /// </summary>
    System::String _namespaceUri;
    /// <summary>
    /// Preferred value type field namespace prefix.
    /// </summary>
    System::String _prefix;
    /// <summary>
    /// The list of fields.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionField>>> _fields;
    
};

} // namespace Pdf
} // namespace Aspose


