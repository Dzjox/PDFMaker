#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/ILegacyDiagram.h>

#include "DOM/GraphicalObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class GroupShape;
class HyperlinkQueries;
class IDOMObject;
class IGroupShape;
namespace PptSerialization
{
class BaseSlidePPTSerialization;
class LegacyDiagramPPTSerialization;
class PptGroupShapeSerializationContext;
class PptLegacyDiagramSerializationContext;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class BaseSlidePPTXSerialization;
class LegacyDiagramPPTXSeriazation;
class VmlDrawingPartParser;
} // namespace PartParser
} // namespace PptxSerialization
class ShapeCollection;
class ShapeLayout;
namespace SmartArt
{
class ISmartArt;
} // namespace SmartArt
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class LegacyDiagramPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a legacy diagram object.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS LegacyDiagram : public Aspose::Slides::GraphicalObject, public Aspose::Slides::ILegacyDiagram
{
    typedef LegacyDiagram ThisType;
    typedef Aspose::Slides::GraphicalObject BaseType;
    typedef Aspose::Slides::ILegacyDiagram BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ShapeLayout;
    friend class Aspose::Slides::HyperlinkQueries;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptLegacyDiagramSerializationContext;
    friend class Aspose::Slides::PptSerialization::LegacyDiagramPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::LegacyDiagramPPTXSeriazation;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::BaseSlidePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::VmlDrawingPartParser;
    friend class Aspose::Slides::PptSerialization::BaseSlidePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Converts legacy digram to editable SmartArt object. 
    /// Created SmartArt object adds to parent group shape at the same position.
    /// </summary>
    /// <returns>Created SmartArt object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<SmartArt::ISmartArt> ConvertToSmartArt() override;
    /// <summary>
    /// Converts legacy digram to editable group shape. 
    /// Created GroupShape object adds to parent group shape at the same position.
    /// </summary>
    /// <returns>Created GroupShape object.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGroupShape> ConvertToGroupShape() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::LegacyDiagramPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GroupShape> get_InnerGroupShape();
    
    ASPOSE_SLIDES_LOCAL_API LegacyDiagram(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LegacyDiagram, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~LegacyDiagram();
    
private:

    System::SharedPtr<GroupShape> m_groupShape;
    
};

} // namespace Slides
} // namespace Aspose


