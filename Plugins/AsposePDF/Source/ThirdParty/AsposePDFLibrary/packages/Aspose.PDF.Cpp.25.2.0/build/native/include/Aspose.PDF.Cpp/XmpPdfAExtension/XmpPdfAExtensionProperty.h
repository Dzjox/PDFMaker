#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/XmpPdfAExtension/XmpPdfAExtensionField.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class XmpPdfAExtensionCategoryType;
class XmpPdfAExtensionSchema;
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
class String;
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
/// Describes a single property. Schema namespace URI: http://www.aiim.org/pdfa/ns/property#
/// Required schema namespace prefix: pdfaProperty
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XmpPdfAExtensionProperty final : public Aspose::Pdf::XmpPdfAExtensionField
{
    typedef XmpPdfAExtensionProperty ThisType;
    typedef Aspose::Pdf::XmpPdfAExtensionField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::XmpPdfAExtensionSchema;
    
public:

    /// <summary>
    /// Gets the property category.
    /// </summary>
    ASPOSE_PDF_SHARED_API XmpPdfAExtensionCategoryType get_Category() const;
    
    /// <summary>
    /// Initializes new object.
    /// </summary>
    /// <param name="name">The property name.</param>
    /// <param name="value">The property value.</param>
    /// <param name="valueType">The property value type.</param>
    /// <param name="category">The property category.</param>
    /// <param name="description">The property description.</param>
    ASPOSE_PDF_SHARED_API XmpPdfAExtensionProperty(System::String name, System::String value, System::String valueType, XmpPdfAExtensionCategoryType category, System::String description);
    
    /// <summary>
    /// Returns the list of xml elements that represent property in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The list of xml elements.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument) override;
    
protected:

    /// <summary>
    /// Gets the extension value type instance that contains Value of the property in case of user defined type used.
    /// </summary>
    System::SharedPtr<XmpPdfAExtensionValueType> get_ExtValueType() const;
    /// <summary>
    /// Sets the extension value type instance that contains Value of the property in case of user defined type used.
    /// </summary>
    void set_ExtValueType(System::SharedPtr<XmpPdfAExtensionValueType> value);
    
    /// <summary>
    /// Returns the list of properties found in li element of xml tree. Used during loading of metadata.
    /// </summary>
    /// <param name="rootNode">The root node of properties in xml document.</param>
    /// <returns>Returns the list of properties.</returns>
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionProperty>>> CreateElements(System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Returns the property found in li element of xml tree. Used during loading of metadata.
    /// </summary>
    /// <param name="rootNode">The root node of property in xml document.</param>
    /// <returns>The new property object.</returns>
    static System::SharedPtr<XmpPdfAExtensionProperty> CreateElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Returns the list of xml elements that represent property value in case of user defined valueType.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The list of xml elements.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXmlForExtTypeValues(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    
private:

    /// <summary>
    /// Property category: internal or external. Internal properties are created automatically from document content.
    /// External properties are based on user input.
    /// </summary>
    XmpPdfAExtensionCategoryType _category;
    System::SharedPtr<XmpPdfAExtensionValueType> _extType;
    
    static void ParseProperty(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlNode>>> childNodes, System::String& name, System::String& valueType, XmpPdfAExtensionCategoryType& categoryType, System::String& description);
    
};

} // namespace Pdf
} // namespace Aspose


