#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICustomXmlPart;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents collection of custom xml parts.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ICustomXmlPartCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ICustomXmlPart>>
{
    typedef ICustomXmlPartCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ICustomXmlPart>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the element at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index of the element to get.</param>
    /// <returns>The element at the specified index.</returns>
    /// <exception cref="System::ArgumentOutOfRangeException">index is less than 0.-or-index is equal to or greater than Count</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICustomXmlPart> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds new custom xml part.
    /// </summary>
    /// <param name="xmlData">The xml data of new part to be added.</param>
    /// <returns>Created custom xml part.</returns>
    /// <exception cref="System::ArgumentNullException">xmlData is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">xmlData is empty or invalid.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICustomXmlPart> Add(System::ArrayPtr<uint8_t> xmlData) = 0;
    /// <summary>
    /// Adds new custom xml part.
    /// </summary>
    /// <param name="xmlString">The xml string of new part to be added.</param>
    /// <returns>Created custom xml part.</returns>
    /// <exception cref="System::ArgumentNullException">xmlString is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">xmlString is empty or xml-data is invalid.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICustomXmlPart> Add(System::String xmlString) = 0;
    /// <summary>
    /// Adds new custom xml part.
    /// </summary>
    /// <param name="inputStream">The inputStream with xml data of new part to be added.</param>
    /// <returns>Created custom xml part.</returns>
    /// <exception cref="System::ArgumentNullException">inputStream is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">Data in inputStream is empty or Sinvalid.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICustomXmlPart> Add(System::SharedPtr<System::IO::Stream> inputStream) = 0;
    /// <summary>
    /// Removes custom xml part at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    /// <exception cref="System::ArgumentOutOfRangeException">index is less than 0.-or-index is equal to or greater than Count</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection.
    /// </summary>
    /// <param name="item">The custom xml part to remove.</param>
    /// <exception cref="System::ArgumentNullException">item is <c>null</c>.</exception>
    /// <returns><c>true</c> if item is successfully removed; otherwise, <c>false</c>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Remove(System::SharedPtr<ICustomXmlPart> item) = 0;
    /// <summary>
    /// Removes all items from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Slides
} // namespace Aspose


