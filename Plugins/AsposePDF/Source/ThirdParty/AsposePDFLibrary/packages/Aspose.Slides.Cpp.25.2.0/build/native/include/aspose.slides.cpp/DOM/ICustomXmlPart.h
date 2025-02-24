#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class Guid;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents custom xml part.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ICustomXmlPart : public virtual System::Object
{
    typedef ICustomXmlPart ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns xml data as UTF-8 string.
    /// Read <see cref="System::String"></see>.
    /// <exception cref="System::ArgumentNullException">value is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">value is empty or xml-data is invalid.</exception>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_XmlAsString() = 0;
    /// <summary>
    /// Sets xml data as UTF-8 string.
    /// Write <see cref="System::String"></see>.
    /// <exception cref="System::ArgumentNullException">value is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">value is empty or xml-data is invalid.</exception>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_XmlAsString(System::String value) = 0;
    /// <summary>
    /// Returns xml data.
    /// Read <see cref="uint8_t"></see>[].
    /// <exception cref="System::ArgumentNullException">value is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">value is empty or xml-data is invalid.</exception>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<uint8_t> get_XmlData() = 0;
    /// <summary>
    /// Sets xml data.
    /// Write <see cref="uint8_t"></see>[].
    /// <exception cref="System::ArgumentNullException">value is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">value is empty or xml-data is invalid.</exception>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_XmlData(System::ArrayPtr<uint8_t> value) = 0;
    /// <summary>
    /// Specifies a globally unique identifier (GUID) that uniquely identifies a single custom XML 
    /// part within an Office Open XML document.
    /// Read-only <see cref="System::Guid"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Guid get_ItemId() = 0;
    /// <summary>
    /// Specifies a globally unique identifier (GUID) that uniquely identifies a single custom XML 
    /// part within an Office Open XML document.
    /// Read-only <see cref="System::Guid"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ItemId(System::Guid value) = 0;
    /// <summary>
    /// Returns the collection XML schemas that are associated with the custom XML part.
    /// Read-only <see cref="System::String"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::String> get_NamespaceSchemas() = 0;
    
    /// <summary>
    /// Removes the custom xml part from the presentation.
    /// </summary> 
    /// <exception cref="Aspose::Slides::PptxEditException">Thrown if xml part is already removed.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove() = 0;
    
};

} // namespace Slides
} // namespace Aspose


