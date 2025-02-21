#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class XmpPdfAExtensionField;
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
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the base class for field, property, value type instances.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XmpPdfAExtensionObject : public System::Object
{
    typedef XmpPdfAExtensionObject ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::XmpPdfAExtensionField;
    friend class Aspose::Pdf::XmpPdfAExtensionValueType;
    
public:

    /// <summary>
    /// Gets the description.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Description() const;
    /// <summary>
    /// Gets the value.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Value() const;
    /// <summary>
    /// Sets the value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Value(System::String value);
    
    /// <summary>
    /// Returns the list of xml elements that represent object in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>>The list of xml elements.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument) = 0;
    
protected:

    /// <summary>
    /// Initializes new object.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <param name="description">The description.</param>
    ASPOSE_PDF_SHARED_API XmpPdfAExtensionObject(System::String value, System::String description);
    
private:

    /// <summary>
    /// Description.
    /// </summary>
    System::String _description;
    /// <summary>
    /// Value.
    /// </summary>
    System::String _value;
    
};

} // namespace Pdf
} // namespace Aspose


