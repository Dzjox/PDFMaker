#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICustomXmlPart;
class ICustomXmlPartCollection;
class ITagCollection;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents container for custom data.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ICustomData : public virtual System::Object
{
    typedef ICustomData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the Customer Data Tags collection.
    /// Read-only <see cref="Aspose::Slides::ITagCollection">ITagCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITagCollection> get_Tags() = 0;
    /// <summary>
    /// Returns the custom xml parts collection.
    /// Read-only <see cref="Aspose::Slides::ICustomXmlPartCollection">ICustomXmlPartCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICustomXmlPartCollection> get_CustomXmlParts() = 0;
    
    /// <summary>
    /// Returns the Customer Data Tag specified at the index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Tag(System::String name) = 0;
    /// <summary>
    /// Set the Customer Data Tag specified at the index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Tag(System::String name, System::String value) = 0;
    /// <summary>
    /// Returns the custom XML part at the specified index.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">
    /// Index is less than 0 or index is equal or great than length of get_CustomXmlParts()
    /// </exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICustomXmlPart> get_CustomXmlPart(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


