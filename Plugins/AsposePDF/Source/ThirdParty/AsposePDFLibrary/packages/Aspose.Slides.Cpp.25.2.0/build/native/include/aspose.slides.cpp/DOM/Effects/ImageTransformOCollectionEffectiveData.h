#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/Effects/IImageTransformOCollectionEffectiveData.h>
#include <cstdint>

#include "DOM/PVI/IEffectiveData.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IEffectEffectiveData;
class ImageTransformOperation;
} // namespace Effects
class PictureEffectiveData;
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
namespace Drawing
{
class Bitmap;
class Image;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object that represents a readonly collection of effective image transform effects.
/// </summary>
/// <remarks>
/// Name IImageTransformOperationCollectionEffectiveData truncuted to IImageTransformOCollectionEffectiveData because of COM names length cannot be more then 39.
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS ImageTransformOCollectionEffectiveData : public Aspose::Slides::IEffectiveData, public Aspose::Slides::Effects::IImageTransformOCollectionEffectiveData
{
    typedef ImageTransformOCollectionEffectiveData ThisType;
    typedef Aspose::Slides::IEffectiveData BaseType;
    typedef Aspose::Slides::Effects::IImageTransformOCollectionEffectiveData BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PictureEffectiveData;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IEffectEffectiveData>>;
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
    /// Returns the number of image effects in a collection.
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
    /// Returns element by index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> idx_get(int32_t index) override;
    
    /// <summary>
    /// Determines whether the specified object is equal to the current object.
    /// </summary>
    /// <param name="obj">The object to compare with the current object.</param>
    /// <returns>true if the specified object is equal to the current object; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type, suitable for use in hashing algorithms and data structures like a hash table.
    /// </summary>
    /// <returns>A hash code for the current object.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IEffectEffectiveData>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection into the specified array.
    /// </summary>
    /// <param name="array">Array to fill.</param>
    /// <param name="index">Starting position in target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IEffectEffectiveData>> array, int32_t index) override;
    
    ASPOSE_SLIDES_SHARED_API ImageTransformOCollectionEffectiveData();
    
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
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IEffectEffectiveData> Add(System::SharedPtr<ImageTransformOperation> operation);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IEffectEffectiveData> Add(System::SharedPtr<IEffectEffectiveData> effectEffectiveData);
    ASPOSE_SLIDES_LOCAL_API void Clear();
    ASPOSE_SLIDES_LOCAL_API System::String GetStringData();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Drawing::Image> ApplyTransform(System::SharedPtr<System::Drawing::Bitmap> img, bool forceTransformation);
    ASPOSE_SLIDES_LOCAL_API bool EqualsTo(System::SharedPtr<ImageTransformOCollectionEffectiveData> obj);
    ASPOSE_SLIDES_LOCAL_API bool EqualsTo(System::SharedPtr<IImageTransformOCollectionEffectiveData> obj);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ImageTransformOCollectionEffectiveData();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IEffectEffectiveData>>> m_operations;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


