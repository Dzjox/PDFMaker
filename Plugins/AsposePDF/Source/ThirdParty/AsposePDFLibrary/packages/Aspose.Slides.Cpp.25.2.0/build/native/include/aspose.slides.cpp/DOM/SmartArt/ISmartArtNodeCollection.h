#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace SmartArt
{
class ISmartArtNode;
} // namespace SmartArt
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SmartArt {

/// <summary>
/// Represents a collection of SmartArt nodes.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISmartArtNodeCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::SmartArt::ISmartArtNode>>
{
    typedef ISmartArtNodeCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::SmartArt::ISmartArtNode>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns node by index.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNode">ISmartArtNode</see>
    /// </summary>
    /// <param name="index">The zero-based index of the element.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtNode> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Add new node or sub node.
    /// </summary>
    /// <returns>Added node</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtNode> AddNode() = 0;
    /// <summary>
    /// Remove node or sub node by index.
    /// </summary>
    /// <param name="index">Zero-based index of node</param>
    /// <exception cref="System::ArgumentOutOfRangeException">index is less than 0.  -or- index is equal to or greater than siblings count.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveNode(int32_t index) = 0;
    /// <summary>
    /// Remove node or sub node.
    /// </summary>
    /// <param name="nodeObj">Node to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveNode(System::SharedPtr<ISmartArtNode> nodeObj) = 0;
    /// <summary>
    /// Add new node in the selected position of nodes collection.
    /// </summary>
    /// <param name="position">Zero-base node position.</param>
    /// <exception cref="System::ArgumentOutOfRangeException">position is less than 0.</exception>
    /// <returns>Added node</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtNode> AddNodeByPosition(int32_t position) = 0;
    
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose


