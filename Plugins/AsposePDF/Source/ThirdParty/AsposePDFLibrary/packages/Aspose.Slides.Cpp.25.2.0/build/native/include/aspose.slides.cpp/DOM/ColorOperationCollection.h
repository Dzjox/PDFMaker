#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/IColorOperationCollection.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class RenderingHelper;
} // namespace Charts
class ColorFormat;
class ColorFormatImpl;
enum class ColorTransformOperation;
class FloatColor;
class IColorOperation;
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

/// <summary>
/// Represents a collection of color transform operations.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ColorOperationCollection final : public Aspose::Slides::IColorOperationCollection
{
    typedef ColorOperationCollection ThisType;
    typedef Aspose::Slides::IColorOperationCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ColorFormatImpl;
    friend class Aspose::Slides::ColorFormat;
    friend class Aspose::Slides::Charts::RenderingHelper;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IColorOperation>>;
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
    /// Returns the number of operations in a collection.
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
    /// Returns the operation at the specified index.
    /// Read <see cref="Aspose::Slides::ColorOperation">ColorOperation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorOperation> idx_get(int32_t index) override;
    /// <summary>
    /// Sets the operation at the specified index.
    /// Write <see cref="Aspose::Slides::ColorOperation">ColorOperation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void idx_set(int32_t index, System::SharedPtr<IColorOperation> value) override;
    
    /// <summary>
    /// Adds a new operation to the end of collection.
    /// </summary>
    /// <param name="operation">Operation type.</param>
    /// <param name="parameter">Operation's parameter. </param>
    /// <returns>Added operation.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorOperation> Add(ColorTransformOperation operation, float parameter) override;
    /// <summary>
    /// Adds a new operation to the end of collection.
    /// </summary>
    /// <param name="operation">Operation type.</param>
    /// <returns>Added operation.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorOperation> Add(ColorTransformOperation operation) override;
    /// <summary>
    /// Inserts the new operation to a collection.
    /// </summary>
    /// <param name="position">The index at which the operation will be inserted.</param>
    /// <param name="operation">Operation type.</param>
    /// <param name="parameter">Operation's parameter. </param>
    /// <returns>Inserted operation.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorOperation> Insert(int32_t position, ColorTransformOperation operation, float parameter) override;
    /// <summary>
    /// Inserts the new operation to a collection.
    /// </summary>
    /// <param name="position">The index at which the operation will be inserted.</param>
    /// <param name="operation">Operation type.</param>
    /// <returns>Inserted operation.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorOperation> Insert(int32_t position, ColorTransformOperation operation) override;
    /// <summary>
    /// Removes the color operation from a collection.
    /// </summary>
    /// <param name="index">Index of a color operation to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes all color operations.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IColorOperation>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IColorOperation>> array, int32_t index) override;
    /// <summary>
    /// Creates a copy of a ColorOperationCollection collection.
    /// </summary>
    /// <returns>New <see cref="Aspose::Slides::ColorOperationCollection">ColorOperationCollection</see> collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> Clone() override;
    /// <summary>
    /// Clones current object
    /// </summary>
    /// <returns>Clone</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorOperationCollection> CloneT() override;
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
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    System::Event<void()> ColorOperationCollectionChanged;
    
    ASPOSE_SLIDES_LOCAL_API ColorOperationCollection();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ColorOperationCollection, CODEPORTING_ARGS());
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void Apply(System::SharedPtr<FloatColor> color);
    ASPOSE_SLIDES_LOCAL_API void CopyFrom(System::SharedPtr<ColorOperationCollection> src, bool cloneItems);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ColorOperationCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IColorOperation>>> m_operations;
    uint32_t m_version;
    
    ASPOSE_SLIDES_LOCAL_API void Changed();
    
};

} // namespace Slides
} // namespace Aspose


