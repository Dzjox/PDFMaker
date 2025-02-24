#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class ISequence;
} // namespace Animation
class IShape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents collection of interactive sequences.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISequenceCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Animation::ISequence>>
{
    typedef ISequenceCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Animation::ISequence>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the number of elements in a collection
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Add new interactive sequence.
    /// </summary>
    /// <param name="shapeTrigger">Shape object <see cref="IShape"></see></param>
    /// <returns>New sequence <see cref="Aspose::Slides::Animation::ISequence">ISequence</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISequence> Add(System::SharedPtr<IShape> shapeTrigger) = 0;
    /// <summary>
    /// Removes specified sequence from a collection.
    /// </summary>
    /// <param name="item">Sequence to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<ISequence> item) = 0;
    /// <summary>
    /// Removes sequence at the specified index.
    /// </summary>
    /// <param name="index">Index of element in the collection <see cref="int32_t"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes all sequences from a collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
    /// <summary>
    /// Returns a sequense at the specified index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISequence> idx_get(int32_t index) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


