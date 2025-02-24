#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IGraphicalObject.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace SmartArt
{
class ISmartArtNode;
class ISmartArtNodeCollection;
enum class SmartArtColorType;
enum class SmartArtLayoutType;
enum class SmartArtQuickStyleType;
} // namespace SmartArt
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SmartArt {

/// <summary>
/// Represents a SmartArt diagram.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISmartArt : public virtual Aspose::Slides::IGraphicalObject
{
    typedef ISmartArt ThisType;
    typedef Aspose::Slides::IGraphicalObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns collections of all nodes in SmartArt object.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNodeCollection">ISmartArtNodeCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtNodeCollection> get_AllNodes() = 0;
    /// <summary>
    /// Returns collections of root nodes in SmartArt object.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNodeCollection">ISmartArtNodeCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtNodeCollection> get_Nodes() = 0;
    /// <summary>
    /// Return or set layout of the SmartArt object.
    /// Read <see cref="SmartArtLayoutType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API SmartArtLayoutType get_Layout() = 0;
    /// <summary>
    /// Return or set layout of the SmartArt object.
    /// Write <see cref="SmartArtLayoutType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Layout(SmartArtLayoutType value) = 0;
    /// <summary>
    /// Return or set quick style of the SmartArt object.
    /// Read <see cref="SmartArtQuickStyleType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API SmartArtQuickStyleType get_QuickStyle() = 0;
    /// <summary>
    /// Return or set quick style of the SmartArt object.
    /// Write <see cref="SmartArtQuickStyleType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_QuickStyle(SmartArtQuickStyleType value) = 0;
    /// <summary>
    /// Return or set color style of the SmartArt object.
    /// Read <see cref="SmartArtColorType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API SmartArtColorType get_ColorStyle() = 0;
    /// <summary>
    /// Return or set color style of the SmartArt object.
    /// Write <see cref="SmartArtColorType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ColorStyle(SmartArtColorType value) = 0;
    /// <summary>
    /// Return or set the state of the SmartArt diagram with regard to (left-to-right) LTR or (right-to-left) RTL, if the diagram supports reversal.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsReversed() = 0;
    /// <summary>
    /// Return or set the state of the SmartArt diagram with regard to (left-to-right) LTR or (right-to-left) RTL, if the diagram supports reversal.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsReversed(bool value) = 0;
    
    /// <summary>
    /// Returns a node from collection with all nodes in SmartArt object at specified index.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNode"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtNode> get_NodeFromAll(int32_t index) = 0;
    /// <summary>
    /// Returns a node from collection of root nodes in SmartArt object at specified index.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNode"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtNode> get_Node(int32_t index) = 0;
    
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose


