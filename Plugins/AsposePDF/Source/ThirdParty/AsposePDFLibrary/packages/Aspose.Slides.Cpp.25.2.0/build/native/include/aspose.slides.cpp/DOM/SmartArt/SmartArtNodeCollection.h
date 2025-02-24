#pragma once
//Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/SmartArt/ISmartArtNodeCollection.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace PptxSerialization
{
namespace PartParser
{
namespace XmlParser
{
class dgm_CT_PtElementData;
enum class dgm_PtType;
} // namespace XmlParser
} // namespace PartParser
class PptxDeserializationContext;
} // namespace PptxSerialization
namespace SmartArt
{
class DiagramPoint;
class ISmartArtNode;
class SmartArt;
class SmartArtNode;
} // namespace SmartArt
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

namespace SmartArt {

/// <summary>
/// Represents a collection of SmartArt nodes.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SmartArtNodeCollection final : public Aspose::Slides::SmartArt::ISmartArtNodeCollection
{
    typedef SmartArtNodeCollection ThisType;
    typedef Aspose::Slides::SmartArt::ISmartArtNodeCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::SmartArt::SmartArtNode;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<ISmartArtNode>>;
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
    /// Returns count of nodes in collection
    /// Read-only <see cref="int32_t"></see>
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
    /// Returns node by index
    /// </summary>
    /// <param name="index">The zero-based index of the element</param>
    /// <returns>The SmartArt node</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISmartArtNode> idx_get(int32_t index) override;
    
    /// <summary>
    /// Add new smart art node or sub node.
    /// </summary>
    /// <returns>Added node</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISmartArtNode> AddNode() override;
    /// <summary>
    /// Remove node or sub node by index
    /// </summary>
    /// <param name="index">Zero-based index of node</param>
    /// <exception cref="System::ArgumentOutOfRangeException">index is less than 0.  -or- index is equal to or greater than siblings count</exception>
    ASPOSE_SLIDES_SHARED_API void RemoveNode(int32_t index) override;
    /// <summary>
    /// Remove node or sub node
    /// </summary>
    /// <param name="node">Node to remove</param>
    ASPOSE_SLIDES_SHARED_API void RemoveNode(System::SharedPtr<ISmartArtNode> node) override;
    /// <summary>
    /// Add new node in the selected position of nodes collection
    /// </summary>
    /// <param name="position">Zero-base node position</param>
    /// <exception cref="System::ArgumentOutOfRangeException">position is less than 0</exception>
    /// <returns>Added node</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISmartArtNode> AddNodeByPosition(int32_t position) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ISmartArtNode>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array"></param>
    /// <param name="index"></param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<ISmartArtNode>> array, int32_t index) override;
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
    ASPOSE_SLIDES_LOCAL_API SmartArtNodeCollection(System::SharedPtr<SmartArtNode> parent);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SmartArtNodeCollection, CODEPORTING_ARGS(System::SharedPtr<SmartArtNode> parent));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SmartArtNode> AddNode(System::SharedPtr<DiagramPoint> referenced, System::SharedPtr<DiagramPoint> parentTransition, System::SharedPtr<DiagramPoint> siblingTransition);
    ASPOSE_SLIDES_LOCAL_API void AddParentDescendants();
    ASPOSE_SLIDES_LOCAL_API int32_t GetPosition(System::SharedPtr<ISmartArtNode> node);
    ASPOSE_SLIDES_LOCAL_API void SetPosition(System::SharedPtr<ISmartArtNode> node, int32_t position);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~SmartArtNodeCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ISmartArtNode>>> m_items;
    System::WeakPtr<SmartArtNode> m_parent;
    
    ASPOSE_SLIDES_LOCAL_API void AddParentChildren(System::SharedPtr<ISmartArtNode> parent);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::PptxSerialization::PartParser::XmlParser::dgm_CT_PtElementData> CreatePoint(Aspose::Slides::PptxSerialization::PartParser::XmlParser::dgm_PtType type);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SmartArtNode> CreateNode(System::SharedPtr<Aspose::Slides::PptxSerialization::PptxDeserializationContext> deserializationContext);
    
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose


