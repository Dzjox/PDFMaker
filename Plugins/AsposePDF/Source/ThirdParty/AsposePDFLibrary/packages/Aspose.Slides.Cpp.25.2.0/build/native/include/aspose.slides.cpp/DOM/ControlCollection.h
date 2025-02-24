#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/IControlCollection.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlide;
class Control;
enum class ControlType;
class IControl;
namespace PptSerialization
{
class PptShapeDeserializationContext;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class ControlCollectionPPTXSerialization;
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

/// <summary>
/// A collection of ActiveX controls.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ControlCollection : public Aspose::Slides::IControlCollection, public Aspose::Slides::IDOMObject
{
    typedef ControlCollection ThisType;
    typedef Aspose::Slides::IControlCollection BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptSerialization::PptShapeDeserializationContext;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::Control;
    friend class Aspose::Slides::PptxSerialization::PartParser::ControlCollectionPPTXSerialization;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IControl>>;
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
    /// Returns a number of objects in the collection.
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
    /// Creates and adds a new control to the collection.
    /// </summary>
    /// <param name="controlType">Type of a control to add.</param>
    /// <param name="x">The X-coordinate for a left side of shape's frame.</param>
    /// <param name="y">The Y-coordinate for a top side of shape's frame.</param>
    /// <param name="width">The width of shape's frame.</param>
    /// <param name="height">The height of shape's frame.</param>
    /// <returns>Created control.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IControl> AddControl(ControlType controlType, float x, float y, float width, float height) override;
    /// <summary>
    /// Removes an ActiveX control from the collection.
    /// </summary>
    /// <param name="item">A control to remove.</param>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<IControl> item) override;
    /// <summary>
    /// Removes an ActiveX control stored at specified position from the collection.
    /// </summary>
    /// <param name="index">Index of a control to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes all controls from the collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    
    /// <summary>
    /// Returns a control at the specified position.
    /// </summary>
    /// <param name="index">Index of a control.</param>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IControl> idx_get(int32_t index) override;
    
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IControl>>> GetEnumerator() override;
    /// <summary>
    /// Copies the entire collection to the specified array.
    /// </summary>
    /// <param name="array">Target array</param>
    /// <param name="index">Index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IControl>> array, int32_t index) override;
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
    System::WeakPtr<BaseSlide> m_parentImmediate;
    
    ASPOSE_SLIDES_LOCAL_API ControlCollection(System::SharedPtr<BaseSlide> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ControlCollection, CODEPORTING_ARGS(System::SharedPtr<BaseSlide> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IControl> Add();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ControlCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IControl>>> _items;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Control> CreateWindowsMediaPlayer();
    
};

} // namespace Slides
} // namespace Aspose


