#pragma once

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/Animation/ITextAnimationCollection.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class ITextAnimation;
class Sequence;
class TextAnimation;
} // namespace Animation
class IShape;
namespace OdpSerialization
{
namespace PartParser
{
namespace Animation
{
class AnimBehaviorTargetOdpDeserialization;
} // namespace Animation
} // namespace PartParser
} // namespace OdpSerialization
namespace PptxSerialization
{
namespace PartParser
{
class AnimationTimeLinePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents collection of text animations.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS TextAnimationCollection : public Aspose::Slides::Animation::ITextAnimationCollection
{
    typedef TextAnimationCollection ThisType;
    typedef Aspose::Slides::Animation::ITextAnimationCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimBehaviorTargetOdpDeserialization;
    friend class Aspose::Slides::Animation::Sequence;
    friend class Aspose::Slides::PptxSerialization::PartParser::AnimationTimeLinePPTXSerialization;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<ITextAnimation>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// Returns a number of elements in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() override;
    
    /// <summary>
    /// Adds new text animation to the collection.
    /// </summary>
    /// <returns>Added <c>TextAnimation</c></returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<TextAnimation> Add();
    
    /// <summary>
    /// Returns element by index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextAnimation> idx_get(int32_t index) override;
    /// <summary>
    /// Returns all elements 
    /// </summary>
    /// <param name="shape"></param>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ITextAnimation>> idx_get(System::SharedPtr<IShape> shape) override;
    
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ITextAnimation>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection into the specified array.
    /// </summary>
    /// <param name="array">Array to fill.</param>
    /// <param name="index">Starting position in target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<ITextAnimation>> array, int32_t index) override;
    
    ASPOSE_SLIDES_SHARED_API TextAnimationCollection();
    
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ITextAnimation>>> get_Animations();
    
    ASPOSE_SLIDES_LOCAL_API void Add(System::SharedPtr<TextAnimation> textAnim);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~TextAnimationCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ITextAnimation>>> m_list;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


