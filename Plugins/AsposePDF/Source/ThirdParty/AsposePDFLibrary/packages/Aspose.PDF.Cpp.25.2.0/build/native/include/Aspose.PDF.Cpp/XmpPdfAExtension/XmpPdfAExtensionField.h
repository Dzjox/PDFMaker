#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/XmpPdfAExtension/XmpPdfAExtensionObject.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
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
/// This schema describes a field in a structured type. It is very similar to the PDF/A Property Value Type 
/// schema, but defines a field in a structure instead of a property.
/// Schema namespace URI: http://www.aiim.org/pdfa/ns/field#
/// Required schema namespace prefix: pdfaField.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XmpPdfAExtensionField : public Aspose::Pdf::XmpPdfAExtensionObject
{
    typedef XmpPdfAExtensionField ThisType;
    typedef Aspose::Pdf::XmpPdfAExtensionObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::XmpPdfAExtensionValueType;
    
public:

    /// <summary>
    /// Field name. Field names must be valid XML element names.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name() const;
    /// <summary>
    /// Field value type, drawn from XMP Specification 2004, or an embedded PDF/A value type extension
    /// schema. Predefined XMP type names or names of custom types.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ValueType() const;
    
    /// <summary>
    /// Initializes object.
    /// </summary>
    /// <param name="name">The field name.</param>
    /// <param name="value">The field value.</param>
    /// <param name="valueType">The field value type.</param>
    /// <param name="description">The field description.</param>
    ASPOSE_PDF_SHARED_API XmpPdfAExtensionField(System::String name, System::String value, System::String valueType, System::String description);
    
    /// <summary>
    /// Returns the list of xml elements that represent field in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The list of fields.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument) override;
    
protected:

    /// <summary>
    /// Returns the list of fields found in li element of xml tree. Used during loading of metadata.
    /// </summary>
    /// <param name="rootNode">The root node of fields in xml document.</param>
    /// <returns>Returns the list of fields.</returns>
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionField>>> CreateElements(System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Returns the field found in li element of xml tree. Used during loading of metadata.
    /// </summary>
    /// <param name="rootNode">The root node of field in xml document.</param>
    /// <returns>The new field object.</returns>
    static System::SharedPtr<XmpPdfAExtensionField> CreateElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    
private:

    System::String _name;
    System::String _valueType;
    
};

} // namespace Pdf
} // namespace Aspose


