#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathElement;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Represents a collection of mathematical elements (MathElement).
/// </summary>
/// <example>Example:
/// <code>
/// auto collection = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
/// auto plusElement = System::MakeObject<MathematicalText>(u"+");
/// collection->Add(plusElement);
/// collection->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathElementCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::MathText::IMathElement>>
{
    typedef IMathElementCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::MathText::IMathElement>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto collection = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// int32_t count = collection->get_Count();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::MathText::IMathElement">IMathElement</see>.
    /// </summary>
    /// <param name="index">The zero-based index of the item to get</param>
    /// <example>Example:
    /// <code>
    /// auto collection = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto firstElem = collection->idx_get(0);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds a math element to the end of the collection.
    /// </summary>
    /// <param name="item">The IMathElement to be added to the end of the collection.</param>
    /// <example>Example:
    /// <code>
    /// auto collection = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// collection->Add(System::MakeObject<MathematicalText>(u"+"));
    /// collection->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::SharedPtr<IMathElement> item) = 0;
    /// <summary>
    /// Determines the index of a specific math element in collection.
    /// </summary>
    /// <returns>
    /// The index of <paramref name="item"></paramref> if found in the collection; otherwise, -1.
    /// </returns>
    /// <param name="item">The element to locate in the collection.</param>
    /// <example>Example:
    /// <code>
    /// auto collection = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// collection->Add(plusElement);
    /// collection->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// int32_t index = collection->IndexOf(plusElement);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(System::SharedPtr<IMathElement> item) = 0;
    /// <summary>
    /// Inserts a math element into the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which IMathElement should be inserted.</param>
    /// <param name="item">The IMathElement to insert.</param>
    /// <example>Example:
    /// <code>
    /// auto collection = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// collection->Add(plusElement);
    /// collection->Insert(0, System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Insert(int32_t index, System::SharedPtr<IMathElement> item) = 0;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto collection = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// collection->Clear();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection.</param>
    /// <returns>
    /// true if <paramref name="item"></paramref> is found in the collection; otherwise, false.
    /// </returns>
    /// <example>Example:
    /// <code>
    /// auto collection = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// collection->Add(plusElement);
    /// collection->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// bool contains = collection->Contains(plusElement);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Contains(System::SharedPtr<IMathElement> item) = 0;
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> was successfully removed from the collection; otherwise, false. This method also returns false if <paramref name="item"></paramref> is not found in the original collection.
    /// </returns>
    /// <param name="item">The object to remove from the collection.</param>
    /// <example>Example:
    /// <code>
    /// auto collection = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// collection->Add(plusElement);
    /// collection->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// collection->Remove(plusElement);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Remove(System::SharedPtr<IMathElement> item) = 0;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    /// <example>Example:
    /// <code>
    /// auto collection = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// collection->Add(plusElement);
    /// collection->Insert(0, System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// collection->RemoveAt(2);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Copy to specified array.
    /// </summary>
    /// <param name="array">Array to copy to.</param>
    /// <param name="arrayIndex">Index to begin copying.</param>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<IMathElementCollection> collection = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x"));
    /// auto plusElement = System::MakeObject<MathematicalText>(u"+");
    /// collection->Add(plusElement);
    /// collection->Add(System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3")));
    /// auto destinationArray = System::MakeArray<System::SharedPtr<Aspose::Slides::MathText::IMathElement>>(collection->get_Count());
    /// collection->CopyTo(destinationArray, 0);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void CopyTo(System::ArrayPtr<System::SharedPtr<IMathElement>> array, int32_t arrayIndex) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


