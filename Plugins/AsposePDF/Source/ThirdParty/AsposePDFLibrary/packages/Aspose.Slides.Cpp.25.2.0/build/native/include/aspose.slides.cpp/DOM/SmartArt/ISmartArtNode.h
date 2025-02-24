#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFillFormat;
class ITextFrame;
namespace SmartArt
{
class ISmartArtNodeCollection;
class ISmartArtShape;
class ISmartArtShapeCollection;
enum class OrganizationChartLayoutType;
} // namespace SmartArt
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SmartArt {

/// <summary>
/// Represents node of a SmartArt diagram.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISmartArtNode : public virtual System::Object
{
    typedef ISmartArtNode ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns collections of all child nodes of current node.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNodeCollection">ISmartArtNodeCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtNodeCollection> get_ChildNodes() = 0;
    /// <summary>
    /// Returns collections of all shapes associated with the node.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtShapeCollection">ISmartArtShapeCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtShapeCollection> get_Shapes() = 0;
    /// <summary>
    /// Returns text of the node.
    /// Read-only <see cref="ITextFrame"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextFrame> get_TextFrame() = 0;
    /// <summary>
    /// Returns the node as assistant.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsAssistant() = 0;
    /// <summary>
    /// Sets the node as assistant.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsAssistant(bool value) = 0;
    /// <summary>
    /// Returns nesting level of the node.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Level() = 0;
    /// <summary>
    /// Returns the FillFormat object that contains fill formatting properties for a node bullet.
    /// Note: can return null for certain types of SmartArt layout which does not provide bullets for nodes.
    /// Read-only <see cref="IFillFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormat> get_BulletFillFormat() = 0;
    /// <summary>
    /// Returns zero-based position of the node among sibling nodes.
    /// Read <see cref="int32_t"></see>.
    /// </summary>  
    /// <exception cref="System::ArgumentOutOfRangeException">Value is less than 0.  -or- value is equal to or greater than siblings count.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Position() = 0;
    /// <summary>
    /// Sets zero-based position of the node among sibling nodes.
    /// Write <see cref="int32_t"></see>.
    /// </summary>  
    /// <exception cref="System::ArgumentOutOfRangeException">Value is less than 0.  -or- value is equal to or greater than siblings count.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Position(int32_t value) = 0;
    /// <summary>
    /// Returns true if this node is a hidden node in the data model.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsHidden() = 0;
    /// <summary>
    /// Returns organization chart layout type associated with current node.
    /// Read <see cref="OrganizationChartLayoutType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API OrganizationChartLayoutType get_OrganizationChartLayout() = 0;
    /// <summary>
    /// Sets organization chart layout type associated with current node.
    /// Write <see cref="OrganizationChartLayoutType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_OrganizationChartLayout(OrganizationChartLayoutType value) = 0;
    
    /// <summary>
    /// Remove current node.
    /// </summary>
    /// <returns><c>True</c> if removed succesfully, otherwise <c>false</c>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Remove() = 0;
    /// <summary>
    /// Returns a child node of current node at the specified index.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNode"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtNode> get_ChildNode(int32_t index) = 0;
    /// <summary>
    /// Returns a shape associated with this node at the specified index.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtShape"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISmartArtShape> get_Shape(int32_t index) = 0;
    
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose


