#pragma once
//Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/SmartArt/ISmartArt.h>

#include "DOM/GraphicalObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Drawing
{
namespace ThreeD
{
class CameraSettingsManager;
class Shape3DBaseSettingsManager;
} // namespace ThreeD
} // namespace Drawing
class IDOMObject;
class IPresentation;
namespace OdpSerialization
{
namespace PartParser
{
class ShapeOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptxSerialization
{
namespace PartParser
{
class SmartArtPPTXSerialization;
namespace XmlParser
{
class dgm_CT_ElemPropSetElementData;
} // namespace XmlParser
} // namespace PartParser
class PptxDeserializationContext;
class PptxSerializationContext;
class SmartArtTemplateDeserializator;
} // namespace PptxSerialization
class ShapeCollection;
namespace SmartArt
{
class DiagramConnectionCollection;
class DiagramPoint;
class DiagramPointCollection;
class ISmartArtNode;
class ISmartArtNodeCollection;
class LayoutTree;
class LayoutTreeLayoutNode;
class PresentationTreeNode;
enum class SmartArtColorType;
class SmartArtLayout;
enum class SmartArtLayoutType;
class SmartArtNode;
class SmartArtNodeCollection;
enum class SmartArtQuickStyleType;
class SmartArtShape;
} // namespace SmartArt
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace SmartArt
{
class SmartArtPPTXUnsupportedProps;
} // namespace SmartArt
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
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
/// Represents a SmartArt diagram
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SmartArt : public Aspose::Slides::GraphicalObject, public Aspose::Slides::SmartArt::ISmartArt
{
    typedef SmartArt ThisType;
    typedef Aspose::Slides::GraphicalObject BaseType;
    typedef Aspose::Slides::SmartArt::ISmartArt BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Drawing::ThreeD::CameraSettingsManager;
    friend class Aspose::Slides::Drawing::ThreeD::Shape3DBaseSettingsManager;
    friend class Aspose::Slides::SmartArt::SmartArtLayout;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpSerialization;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::SmartArt::SmartArtNode;
    friend class Aspose::Slides::SmartArt::SmartArtNodeCollection;
    friend class Aspose::Slides::SmartArt::SmartArtShape;
    friend class Aspose::Slides::SmartArt::PresentationTreeNode;
    friend class Aspose::Slides::SmartArt::LayoutTree;
    friend class Aspose::Slides::SmartArt::LayoutTreeLayoutNode;
    friend class Aspose::Slides::PptxSerialization::PartParser::SmartArtPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::SmartArtTemplateDeserializator;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    /// @endcond
    
public:

    /// <summary>
    /// Returns collections of all nodes in the SmartArt object.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNodeCollection">ISmartArtNodeCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISmartArtNodeCollection> get_AllNodes() override;
    /// <summary>
    /// Returns collections of root nodes in SmartArt object.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNodeCollection">ISmartArtNodeCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISmartArtNodeCollection> get_Nodes() override;
    /// <summary>
    /// Returns layout of the SmartArt object.
    /// Read <see cref="SmartArtLayoutType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API SmartArtLayoutType get_Layout() override;
    /// <summary>
    /// Sets layout of the SmartArt object.
    /// Write <see cref="SmartArtLayoutType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Layout(SmartArtLayoutType value) override;
    /// <summary>
    /// Returns quick style of SmartArt object.
    /// Read <see cref="SmartArtQuickStyleType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API SmartArtQuickStyleType get_QuickStyle() override;
    /// <summary>
    /// Sets quick style of SmartArt object.
    /// Write <see cref="SmartArtQuickStyleType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_QuickStyle(SmartArtQuickStyleType value) override;
    /// <summary>
    /// Returns color style of SmartArt object.
    /// Read <see cref="SmartArtColorType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API SmartArtColorType get_ColorStyle() override;
    /// <summary>
    /// Sets color style of SmartArt object.
    /// Write <see cref="SmartArtColorType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ColorStyle(SmartArtColorType value) override;
    /// <summary>
    /// Return or set the state of the SmartArt diagram with regard to (left-to-right) LTR or (right-to-left) RTL, if the diagram supports reversal.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsReversed() override;
    /// <summary>
    /// Return or set the state of the SmartArt diagram with regard to (left-to-right) LTR or (right-to-left) RTL, if the diagram supports reversal.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsReversed(bool value) override;
    
    /// <summary>
    /// Returns a node from collection with all nodes in SmartArt object at specified index.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNode"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISmartArtNode> get_NodeFromAll(int32_t index) override;
    /// <summary>
    /// Returns a node from collection of root nodes in SmartArt object at specified index.
    /// Read-only <see cref="Aspose::Slides::SmartArt::ISmartArtNode"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISmartArtNode> get_Node(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SmartArtLayout> get_View();
    ASPOSE_SLIDES_LOCAL_API System::String get_LayoutIdInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::SmartArt::SmartArtPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::SmartArt::LayoutTree> get_LayoutTree();
    
    ASPOSE_SLIDES_LOCAL_API SmartArt(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SmartArt, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API SmartArt(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<IPresentation> presentation, SmartArtLayoutType layoutType);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SmartArt, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<IPresentation> presentation, SmartArtLayoutType layoutType));
    /// <summary>
    /// Sets all formats to NotDefined state. For shapes with placeholders this will cause default state.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Reset() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void AfterLoadFromElement(System::SharedPtr<Aspose::Slides::PptxSerialization::PptxDeserializationContext> deserializationContext);
    ASPOSE_SLIDES_LOCAL_API void BeforeSaving(System::SharedPtr<Aspose::Slides::PptxSerialization::PptxSerializationContext> serializationContext);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DiagramPoint> GetDiagramPoint(System::String modelID, System::String layoutNode);
    ASPOSE_SLIDES_LOCAL_API void NodesChanged();
    ASPOSE_SLIDES_LOCAL_API void NodesChanged(System::SharedPtr<Aspose::Slides::PptxSerialization::PptxDeserializationContext> deserializationContext);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API void ScaleGeometry(float scalingCoefX, float scalingCoefY, float scalingContentCoef) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool IsDrawingXmlValid();
    ASPOSE_SLIDES_LOCAL_API void UpdateVersion();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~SmartArt();
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::PptxSerialization::PartParser::XmlParser::dgm_CT_ElemPropSetElementData> get_DocNodeProps();
    
    System::SharedPtr<SmartArtNode> m_docNode;
    System::SharedPtr<Aspose::Slides::SmartArt::LayoutTree> m_layoutTree;
    System::SharedPtr<DiagramConnectionCollection> m_cnxList;
    System::SharedPtr<DiagramPointCollection> m_ptsList;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Slides::SmartArt::LayoutTree>>> m_layoutTreeCopies;
    uint32_t m_lastValidVersion;
    
    ASPOSE_SLIDES_LOCAL_API void Init();
    ASPOSE_SLIDES_LOCAL_API void CopyChangesToDataNodes();
    ASPOSE_SLIDES_LOCAL_API void InitializeDataNodes(System::SharedPtr<Aspose::Slides::PptxSerialization::PptxDeserializationContext> deserializationContext);
    ASPOSE_SLIDES_LOCAL_API void InitializeChildrenDataNodes(System::SharedPtr<SmartArtNode> parent, System::SharedPtr<DiagramPoint> parentPoint);
    ASPOSE_SLIDES_LOCAL_API void RecreateLayoutTree(System::SharedPtr<Aspose::Slides::PptxSerialization::PptxDeserializationContext> deserializationContext);
    
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose


