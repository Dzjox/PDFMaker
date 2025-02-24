#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IGraphicalObject.h>

#include "DOM/Shape.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class Chart;
} // namespace Charts
class IDOMObject;
class IGraphicalObjectLock;
namespace Ink
{
class Ink;
} // namespace Ink
class LegacyDiagram;
class OleObjectFrame;
namespace PptSerialization
{
class TablePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class GraphicalObjectPPTXSerialization;
class GroupShapePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class ShapeCollection;
namespace SmartArt
{
class SmartArt;
} // namespace SmartArt
class SummaryZoomFrame;
class Table;
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class GraphicalObjectPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class GraphicalObjectPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
class ZoomObject;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents abstract graphical object.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS GraphicalObject : public Aspose::Slides::Shape, public virtual Aspose::Slides::IGraphicalObject
{
    typedef GraphicalObject ThisType;
    typedef Aspose::Slides::Shape BaseType;
    typedef Aspose::Slides::IGraphicalObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ZoomObject;
    friend class Aspose::Slides::SummaryZoomFrame;
    friend class Aspose::Slides::Ink::Ink;
    friend class Aspose::Slides::LegacyDiagram;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::OleObjectFrame;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::PptxSerialization::PartParser::GraphicalObjectPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupShapePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::TablePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns shape's locks.
    /// Read-only <see cref="Aspose::Slides::IGraphicalObjectLock">IGraphicalObjectLock</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGraphicalObjectLock> get_GraphicalObjectLock() override;
    
protected:

    /// <summary>
    /// Shows if saving this shape to ppt requires GroupShapeMetroBlob record to save all shape's properties correctly
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_MetroBlobRequired() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::GraphicalObjectPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::GraphicalObjectPPTUnsupportedProps> get_PPTUnsupportedProps();
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GraphicalObject> Create(System::SharedPtr<IDOMObject> parentImmediate);
    
    ASPOSE_SLIDES_LOCAL_API GraphicalObject(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GraphicalObject, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API GraphicalObject(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::GraphicalObjectPPTXUnsupportedProps> pptxUnsupportedProps);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GraphicalObject, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::GraphicalObjectPPTXUnsupportedProps> pptxUnsupportedProps));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API GraphicalObject(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::GraphicalObjectPPTXUnsupportedProps> pptxUnsupportedProps, System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::GraphicalObjectPPTUnsupportedProps> pptUnsupportedProps);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GraphicalObject, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::GraphicalObjectPPTXUnsupportedProps> pptxUnsupportedProps, System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::GraphicalObjectPPTUnsupportedProps> pptUnsupportedProps));
    
};

} // namespace Slides
} // namespace Aspose


