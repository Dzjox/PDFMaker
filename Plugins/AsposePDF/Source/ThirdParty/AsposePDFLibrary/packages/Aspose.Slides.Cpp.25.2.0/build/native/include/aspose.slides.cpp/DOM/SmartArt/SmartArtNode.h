#pragma once
//Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/SmartArt/ISmartArtNode.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFillFormat;
class ITextFrame;
namespace PptxSerialization
{
namespace PartParser
{
namespace XmlParser
{
enum class dgm_HierBranchStyle;
} // namespace XmlParser
} // namespace PartParser
} // namespace PptxSerialization
namespace SmartArt
{
class DataTreeNode;
class DiagramPoint;
class ISmartArtNodeCollection;
class ISmartArtShape;
class ISmartArtShapeCollection;
class LayoutTree;
enum class OrganizationChartLayoutType;
class PresentationTreeNode;
class SmartArt;
class SmartArtNodeCollection;
} // namespace SmartArt
namespace Util
{
class PresentationInfoProc;
} // namespace Util
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace SmartArt {

/// <summary>
/// Represents node of a SmartArt object
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SmartArtNode final : public Aspose::Slides::SmartArt::ISmartArtNode
{
    typedef SmartArtNode ThisType;
    typedef Aspose::Slides::SmartArt::ISmartArtNode BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::SmartArt::DataTreeNode;
    friend class Aspose::Slides::Util::PresentationInfoProc;
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::SmartArt::SmartArtNodeCollection;
    friend class Aspose::Slides::SmartArt::LayoutTree;
    /// @endcond
    
public:

    /// <summary>
    /// Returns collections of all child nodes of the current node.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNodeCollection">ISmartArtNodeCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISmartArtNodeCollection> get_ChildNodes() override;
    /// <summary>
    /// Returns collections of all shapes associated with the node.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtShapeCollection">ISmartArtShapeCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISmartArtShapeCollection> get_Shapes() override;
    /// <summary>
    /// Returns text frame of the node.
    /// Read-only <see cref="ITextFrame"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrame> get_TextFrame() override;
    /// <summary>
    /// Returns the node as assistant.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsAssistant() override;
    /// <summary>
    /// Sets the node as assistant.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsAssistant(bool value) override;
    /// <summary>
    /// Returns nesting level of the node.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary> 
    ASPOSE_SLIDES_SHARED_API int32_t get_Level() override;
    /// <summary>
    /// Returns the FillFormat object that contains fill formatting properties for a node bullet.
    /// Note: can return null for certain types of SmartArt layout which does not provide bullets for nodes.
    /// Read-only <see cref="IFillFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_BulletFillFormat() override;
    /// <summary>
    /// Returns zero-based position of node among sibling nodes.
    /// Read <see cref="int32_t"></see>.
    /// </summary> 
    /// <exception cref="System::ArgumentOutOfRangeException">value is less than 0.  -or- value is equal to or greater than siblings count</exception>
    ASPOSE_SLIDES_SHARED_API int32_t get_Position() override;
    /// <summary>
    /// Sets zero-based position of node among sibling nodes.
    /// Write <see cref="int32_t"></see>.
    /// </summary> 
    /// <exception cref="System::ArgumentOutOfRangeException">value is less than 0.  -or- value is equal to or greater than siblings count</exception>
    ASPOSE_SLIDES_SHARED_API void set_Position(int32_t value) override;
    /// <summary>
    /// Returns true if this node is a hidden node in the data model.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsHidden() override;
    /// <summary>
    /// Returns organization chart layout type associated with current node.
    /// Read <see cref="OrganizationChartLayoutType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API OrganizationChartLayoutType get_OrganizationChartLayout() override;
    /// <summary>
    /// Sets organization chart layout type associated with current node.
    /// Write <see cref="OrganizationChartLayoutType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_OrganizationChartLayout(OrganizationChartLayoutType value) override;
    
    /// <summary>
    /// Remove current node.
    /// </summary>
    /// <returns><c>True</c> if removed succesfully, otherwise <c>false</c></returns>
    ASPOSE_SLIDES_SHARED_API bool Remove() override;
    /// <summary>
    /// Returns a child node of this node at the specified index.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNode"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISmartArtNode> get_ChildNode(int32_t index) override;
    /// <summary>
    /// Returns a shape associated with this node at the specified index.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtShape"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISmartArtShape> get_Shape(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DiagramPoint> get_ReferencedPoint();
    ASPOSE_SLIDES_LOCAL_API void set_ReferencedPoint(System::SharedPtr<DiagramPoint> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DiagramPoint> get_ParentTransition();
    ASPOSE_SLIDES_LOCAL_API void set_ParentTransition(System::SharedPtr<DiagramPoint> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DiagramPoint> get_SiblingTransition();
    ASPOSE_SLIDES_LOCAL_API void set_SiblingTransition(System::SharedPtr<DiagramPoint> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SmartArtNode> get_Parent();
    ASPOSE_SLIDES_LOCAL_API void set_Parent(System::SharedPtr<SmartArtNode> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::SmartArt::SmartArt> get_Target();
    ASPOSE_SLIDES_LOCAL_API bool get_IsReversed();
    ASPOSE_SLIDES_LOCAL_API void set_IsReversed(bool value);
    
    ASPOSE_SLIDES_LOCAL_API SmartArtNode(System::SharedPtr<SmartArtNode> parent, System::SharedPtr<Aspose::Slides::SmartArt::SmartArt> target);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SmartArtNode, CODEPORTING_ARGS(System::SharedPtr<SmartArtNode> parent, System::SharedPtr<Aspose::Slides::SmartArt::SmartArt> target));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void AssociatePresentationPoints(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PresentationTreeNode>>> allPoints);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~SmartArtNode();
    
private:

    System::WeakPtr<Aspose::Slides::SmartArt::SmartArt> m_target;
    System::WeakPtr<SmartArtNode> m_parent;
    System::SharedPtr<SmartArtNodeCollection> m_childNodes;
    System::SharedPtr<DiagramPoint> m_referencedPoint;
    System::SharedPtr<DiagramPoint> m_parentTransition;
    System::SharedPtr<DiagramPoint> m_siblingTransition;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PresentationTreeNode>>> m_presentationPoints;
    
    ASPOSE_SLIDES_LOCAL_API bool IsIdAssociated(System::String id);
    ASPOSE_SLIDES_LOCAL_API void UpdateBoundToTextFrameCompounded();
    static ASPOSE_SLIDES_LOCAL_API OrganizationChartLayoutType ConvertHierBranchStyle(Aspose::Slides::PptxSerialization::PartParser::XmlParser::dgm_HierBranchStyle value);
    static ASPOSE_SLIDES_LOCAL_API Aspose::Slides::PptxSerialization::PartParser::XmlParser::dgm_HierBranchStyle ConvertOrganizationChartLayoutType(OrganizationChartLayoutType value);
    
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose


