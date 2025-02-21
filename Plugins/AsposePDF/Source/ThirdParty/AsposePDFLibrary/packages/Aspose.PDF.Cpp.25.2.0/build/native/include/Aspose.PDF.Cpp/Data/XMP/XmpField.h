#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.



#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
namespace XMP
{
class XmpArray;
class XmpBaseElement;
class XmpDataCollection;
class XmpPacket;
class XmpProperty;
class XmpRawData;
class XmpStructure;
} // namespace XMP
} // namespace Data
namespace IO
{
namespace SaveStrategies
{
class CommonSaveStrategy;
} // namespace SaveStrategies
} // namespace IO
} // namespace Engine
namespace Tests
{
namespace Engine
{
namespace Data
{
namespace XMP
{
class XmpArrayTests;
class XmpMetadataTests;
class XmpPacketTests;
class XmpPropertyTests;
class XmpStructureTests;
} // namespace XMP
} // namespace Data
} // namespace Engine
} // namespace Tests
enum class XmpFieldType;
class XmpValue;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents XMP field.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XmpField : public System::Object
{
    typedef XmpField ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::Data::XMP::XmpArray;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpBaseElement;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpRawData;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpDataCollection;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpPacket;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpProperty;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpStructure;
    friend class Aspose::Pdf::Engine::IO::SaveStrategies::CommonSaveStrategy;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpArrayTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpMetadataTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpPacketTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpPropertyTests;
    friend class Aspose::Pdf::Tests::Engine::Data::XMP::XmpStructureTests;
    friend ASPOSE_PDF_SHARED_API bool operator ==(const System::SharedPtr<XmpField>& field1, const System::SharedPtr<XmpField>& field2);
    friend ASPOSE_PDF_SHARED_API bool operator !=(const System::SharedPtr<XmpField>& field1, const System::SharedPtr<XmpField>& field2);
    
public:

    /// <summary>
    /// Gets an Empty xmp field.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<XmpField> get_Empty();
    /// <summary>
    /// Gets xml:lang qualifier.
    /// </summary>        
    static ASPOSE_PDF_SHARED_API System::SharedPtr<XmpField> get_Lang();
    /// <summary>
    /// Gets the prefix.
    /// </summary>
    /// <value>The prefix.</value>
    ASPOSE_PDF_SHARED_API System::String get_Prefix() const;
    /// <summary>
    /// Gets the prefix.
    /// </summary>
    /// <value>The prefix.</value>
    ASPOSE_PDF_SHARED_API void set_Prefix(System::String value);
    /// <summary>
    /// Gets the namespace URI.
    /// </summary>
    /// <value>The namespace URI.</value>
    ASPOSE_PDF_SHARED_API System::String get_NamespaceUri() const;
    /// <summary>
    /// Gets the namespace URI.
    /// </summary>
    /// <value>The namespace URI.</value>
    ASPOSE_PDF_SHARED_API void set_NamespaceUri(System::String value);
    /// <summary>
    /// Gets the name of the local.
    /// </summary>
    /// <value>The name of the local.</value>
    ASPOSE_PDF_SHARED_API System::String get_LocalName() const;
    /// <summary>
    /// Sets the name of the local.
    /// </summary>
    /// <value>The name of the local.</value>
    ASPOSE_PDF_SHARED_API void set_LocalName(System::String value);
    /// <summary>
    /// Gets the name.
    /// </summary>
    /// <value>The name.</value>
    ASPOSE_PDF_SHARED_API System::String get_Name() const;
    /// <summary>
    /// Gets the value.
    /// </summary>
    /// <value>The value.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XmpValue> get_Value() const;
    /// <summary>
    /// Gets the type of the field.
    /// </summary>
    /// <value>The type of the field.</value>
    ASPOSE_PDF_SHARED_API XmpFieldType get_FieldType();
    /// <summary>
    /// Gets a value indicating whether this instance is empty.
    /// </summary>
    /// <value><c>true</c> if this instance is empty; otherwise, <c>false</c>.</value>
    ASPOSE_PDF_SHARED_API bool get_IsEmpty();
    
    /// <summary>
    /// Indicates whether this instance and a specified object are equal.
    /// </summary>
    /// <returns>
    /// true if obj and this instance are the same type and represent the same value; otherwise, false.
    /// </returns>
    /// <param name="obj">Another object to compare to. </param>
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Returns a hash code for this instance.
    /// </summary>
    /// <returns>
    /// A hash code for this instance, suitable for use in hashing algorithms and data structures like a hash table. 
    /// </returns>
    ASPOSE_PDF_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Gets value as a structure.
    /// </summary>
    /// <returns>The tructure.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<XmpField>> ToStructure();
    /// <summary>
    /// Gets value as an array.
    /// </summary>
    /// <returns>The array.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<XmpValue>> ToArray();
    
protected:

    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"></see> struct.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="name">The name.</param>
    /// <param name="namespaceUri">The namespace URI.</param>
    /// <param name="value">The value.</param>
    XmpField(System::String prefix, System::String name, System::String namespaceUri, System::SharedPtr<System::Object> value);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpField, CODEPORTING_ARGS(System::String prefix, System::String name, System::String namespaceUri, System::SharedPtr<System::Object> value));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"></see> struct.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="name">The name.</param>
    /// <param name="namespaceUri">The namespace URI.</param>
    /// <param name="value">The value.</param>
    XmpField(System::String prefix, System::String name, System::String namespaceUri, System::SharedPtr<XmpValue> value);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpField, CODEPORTING_ARGS(System::String prefix, System::String name, System::String namespaceUri, System::SharedPtr<XmpValue> value));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"></see> struct.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="name">The name.</param>
    /// <param name="namespaceUri">The namespace URI.</param>
    /// <param name="fields">The value.</param>
    XmpField(System::String prefix, System::String name, System::String namespaceUri, System::ArrayPtr<System::SharedPtr<XmpField>> fields);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpField, CODEPORTING_ARGS(System::String prefix, System::String name, System::String namespaceUri, System::ArrayPtr<System::SharedPtr<XmpField>> fields));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"></see> struct.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="name">The name.</param>
    /// <param name="namespaceUri">The namespace URI.</param>
    /// <param name="value">The value.</param>
    XmpField(System::String prefix, System::String name, System::String namespaceUri, System::ArrayPtr<System::SharedPtr<XmpValue>> value);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpField, CODEPORTING_ARGS(System::String prefix, System::String name, System::String namespaceUri, System::ArrayPtr<System::SharedPtr<XmpValue>> value));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"></see> struct.
    /// </summary>
    /// <param name="baseField">The base field.</param>
    /// <param name="value">The value.</param>
    XmpField(System::SharedPtr<XmpField> baseField, System::SharedPtr<XmpValue> value);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpField, CODEPORTING_ARGS(System::SharedPtr<XmpField> baseField, System::SharedPtr<XmpValue> value));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"></see> struct.
    /// </summary>
    /// <param name="baseField">The base field.</param>
    /// <param name="value">The value.</param>
    XmpField(System::SharedPtr<XmpField> baseField, System::SharedPtr<System::Object> value);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpField, CODEPORTING_ARGS(System::SharedPtr<XmpField> baseField, System::SharedPtr<System::Object> value));
    /// <summary>
    /// Sets value of XMP field.
    /// </summary>
    /// <param name="value"></param>
    void SetValue(System::SharedPtr<XmpValue> value);
    
private:

    System::String _prefix;
    System::String _namespaceUri;
    System::String _localName;
    System::SharedPtr<XmpValue> _value;
    static System::SharedPtr<XmpField> EmptyField;
    
    static System::SharedPtr<XmpField>& LangField();
    void SetPrefix(System::String value);
    void SetNamespaceUri(System::String value);
    void SetLocalName(System::String value);
    
};

ASPOSE_PDF_SHARED_API bool operator ==(const System::SharedPtr<XmpField>& field1, const System::SharedPtr<XmpField>& field2);
ASPOSE_PDF_SHARED_API bool operator !=(const System::SharedPtr<XmpField>& field1, const System::SharedPtr<XmpField>& field2);

} // namespace Pdf
} // namespace Aspose


