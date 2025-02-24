#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/guid.h>
#include <system/array.h>
#include <DOM/ICustomXmlPart.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Foundation
{
namespace Blob
{
class IBlobHandler;
} // namespace Blob
} // namespace Foundation
namespace Slides
{
class CustomXmlPartCollection;
class IPresentation;
namespace PptxSerialization
{
namespace PartParser
{
class CustomerDatasPPTXSerialization;
class CustomXmlPropertiesParser;
} // namespace PartParser
class PptxDeserializationContext;
} // namespace PptxSerialization
class Presentation;
} // namespace Slides
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
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents custom xml part.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS CustomXmlPart : public Aspose::Slides::ICustomXmlPart
{
    typedef CustomXmlPart ThisType;
    typedef Aspose::Slides::ICustomXmlPart BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::CustomXmlPartCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::CustomXmlPropertiesParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::CustomerDatasPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializationContext;
    /// @endcond
    
public:

    /// <summary>
    /// Returns xml data.
    /// Read <see cref="uint8_t"></see>[].
    /// <exception cref="System::ArgumentNullException">value is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">value is empty or xml-data is invalid.</exception>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<uint8_t> get_XmlData() override;
    /// <summary>
    /// Sets xml data.
    /// Write <see cref="uint8_t"></see>[].
    /// <exception cref="System::ArgumentNullException">value is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">value is empty or xml-data is invalid.</exception>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_XmlData(System::ArrayPtr<uint8_t> value) override;
    /// <summary>
    /// Returns xml data as UTF-8 string.
    /// Read <see cref="System::String"></see>.
    /// <exception cref="System::ArgumentNullException">value is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">value is empty or xml-data is invalid.</exception>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_XmlAsString() override;
    /// <summary>
    /// Sets xml data as UTF-8 string.
    /// Write <see cref="System::String"></see>.
    /// <exception cref="System::ArgumentNullException">value is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">value is empty or xml-data is invalid.</exception>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_XmlAsString(System::String value) override;
    /// <summary>
    /// Specifies a globally unique identifier (GUID) that uniquely identifies a single custom XML 
    /// part within an Office Open XML document.
    /// Read-only <see cref="System::Guid"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Guid get_ItemId() override;
    /// <summary>
    /// Specifies a globally unique identifier (GUID) that uniquely identifies a single custom XML 
    /// part within an Office Open XML document.
    /// Read-only <see cref="System::Guid"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ItemId(System::Guid value) override;
    /// <summary>
    /// Returns the collection XML schemas that are associated with the custom XML part.
    /// Read-only <see cref="System::String"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::String> get_NamespaceSchemas() override;
    
    /// <summary>
    /// Removes the custom xml part from the presentation.
    /// </summary> 
    /// <exception cref="PptxEditException">Thrown if xml part is already removed.</exception>
    ASPOSE_SLIDES_SHARED_API void Remove() override;
    
protected:

    /// @cond
    /// <summary>
    /// Returns the collection XML schemas that are associated with the custom XML part.
    /// Read-only <see cref="System::String"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NamespaceSchemas(System::ArrayPtr<System::String> value);
    
    ASPOSE_SLIDES_LOCAL_API CustomXmlPart(System::SharedPtr<Presentation> parentImmediate, System::ArrayPtr<uint8_t> data);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CustomXmlPart, CODEPORTING_ARGS(System::SharedPtr<Presentation> parentImmediate, System::ArrayPtr<uint8_t> data));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API CustomXmlPart(System::SharedPtr<Presentation> parentImmediate, System::ArrayPtr<uint8_t> data, System::Guid itemId, System::ArrayPtr<System::String> schemas);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CustomXmlPart, CODEPORTING_ARGS(System::SharedPtr<Presentation> parentImmediate, System::ArrayPtr<uint8_t> data, System::Guid itemId, System::ArrayPtr<System::String> schemas));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void AttachCollection(System::SharedPtr<CustomXmlPartCollection> item);
    ASPOSE_SLIDES_LOCAL_API bool DetachCollection(System::SharedPtr<CustomXmlPartCollection> item);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~CustomXmlPart();
    
private:

    System::WeakPtr<Presentation> m_parentImmediate;
    System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> m_blobHandler;
    System::Guid m_itemId;
    System::ArrayPtr<System::String> m_schemas;
    System::DynamicWeakPtr<System::Collections::Generic::List<System::SharedPtr<CustomXmlPartCollection>>, System::SmartPtrMode::Shared, 0> m_attachedTo;
    
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::String> UpdateSchemas(System::SharedPtr<IPresentation> parent, System::ArrayPtr<uint8_t> data);
    
};

} // namespace Slides
} // namespace Aspose


