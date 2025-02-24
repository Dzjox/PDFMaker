#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathBlock;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Collection of math blocks (IMathBlock)
/// </summary>
/// <example>Example:
/// <code>
/// auto blockCollection = System::MakeObject<MathParagraph>();
/// auto block = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"y"));
/// blockCollection->Add(block);
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathBlockCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::MathText::IMathBlock>>
{
    typedef IMathBlockCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::MathText::IMathBlock>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto blockCollection = System::MakeObject<MathParagraph>();
    /// blockCollection->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block1")));
    /// blockCollection->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block2")));
    /// int32_t blocksCount = blockCollection->get_Count();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Adds IMathBlock to the end of collection.
    /// </summary>
    /// <param name="item">A mathematical block that will be added to the end of the collection</param>
    /// <example>Example:
    /// <code>
    /// auto blockCollection = System::MakeObject<MathParagraph>();
    /// blockCollection->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x")));
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::SharedPtr<IMathBlock> item) = 0;
    /// <summary>
    /// Inserts IMathBlock into the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which an item should be inserted.</param>
    /// <param name="item">The IMathBlock to insert.</param>
    /// <example>Example:
    /// <code>
    /// auto blockCollection = System::MakeObject<MathParagraph>();
    /// auto block = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"y"));
    /// blockCollection->Insert(0, block);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Insert(int32_t index, System::SharedPtr<IMathBlock> item) = 0;
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection/>.
    /// </summary>
    /// <param name="item">The object to remove from the collection.</param>
    /// <returns>
    /// true if <paramref name="item"></paramref> was successfully removed from the collection; otherwise, false. 
    /// This method also returns false if <paramref name="item"></paramref> is not found in the original collection/>.
    /// </returns>
    /// <example>Example:
    /// <code>
    /// auto blockCollection = System::MakeObject<MathParagraph>();
    /// auto block = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"y"));
    /// blockCollection->Add(block);
    /// blockCollection->Remove(block);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Remove(System::SharedPtr<IMathBlock> item) = 0;
    /// <summary>
    /// Removes an item at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the item to remove.</param>
    /// <example>Example:
    /// <code>
    /// auto blockCollection = System::MakeObject<MathParagraph>();
    /// auto block = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"y"));
    /// blockCollection->Add(block);
    /// blockCollection->RemoveAt(0);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection.</param>
    /// <returns>
    /// true if <paramref name="item"></paramref> is found in the collection; otherwise, false.
    /// </returns>
    /// <example>Example:
    /// <code>
    /// auto blockCollection = System::MakeObject<MathParagraph>();
    /// auto block = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"y"));
    /// blockCollection->Add(block);
    /// bool contains = blockCollection->Contains(block);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Contains(System::SharedPtr<IMathBlock> item) = 0;
    /// <summary>
    /// Determines the index of a specific IMathBlock in collection.
    /// </summary>
    /// <param name="item">The item to locate in the collection.</param>
    /// <returns>
    /// The index of <paramref name="item"></paramref> if found in the collection; otherwise, -1.
    /// </returns>
    /// <example>Example:
    /// <code>
    /// auto blockCollection = System::MakeObject<MathParagraph>();
    /// auto block = System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"y"));
    /// blockCollection->Add(block);
    /// int32_t index = blockCollection->IndexOf(block);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(System::SharedPtr<IMathBlock> item) = 0;
    
    /// <summary>
    /// Gets the item at the specified index.
    /// Read-only <see cref="Aspose::Slides::MathText::IMathBlock">IMathBlock</see>.
    /// </summary>
    /// <param name="index">The zero-based index of the item to get</param>
    /// <returns>The block of a mathematical text.</returns>
    /// <example>Example:
    /// <code>
    /// auto blockCollection = System::MakeObject<MathParagraph>();
    /// blockCollection->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block1")));
    /// blockCollection->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block2")));
    /// auto block = blockCollection->idx_get(1);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBlock> idx_get(int32_t index) = 0;
    /// <summary>
    /// Gets the item at the specified index.
    /// Read-only <see cref="Aspose::Slides::MathText::IMathBlock">IMathBlock</see>.
    /// </summary>
    /// <param name="index">The zero-based index of the item to get</param>
    /// <param name="value">The block of a mathematical text.</param>
    /// <example>Example:
    /// <code>
    /// auto blockCollection = System::MakeObject<MathParagraph>();
    /// blockCollection->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block1")));
    /// blockCollection->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block2")));
    /// auto block = blockCollection->idx_get(1);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void idx_set(int32_t index, System::SharedPtr<IMathBlock> value) = 0;
    
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto blockCollection = System::MakeObject<MathParagraph>();
    /// blockCollection->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block1")));
    /// blockCollection->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"block2")));
    /// blockCollection->Clear();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


