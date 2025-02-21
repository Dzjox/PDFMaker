#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/Generator/BaseParagraph.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class BorderInfo;
template <typename> class BoundsCheckableList;
namespace Drawing
{
class Shape;
} // namespace Drawing
class GraphInfo;
class Operator;
class Page;
class PageGenerator;
namespace Text
{
class TextFragment;
} // namespace Text
} // namespace Pdf
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
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents graph - graphics generator paragraph.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Graph final : public Aspose::Pdf::BaseParagraph
{
    typedef Graph ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets a <see cref="GraphInfo"></see> object that indicates the graph info,such as color,
    /// line width,etc.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::GraphInfo> get_GraphInfo() const;
    /// <summary>
    /// Sets a <see cref="GraphInfo"></see> object that indicates the graph info,such as color,
    /// line width,etc.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_GraphInfo(System::SharedPtr<Aspose::Pdf::GraphInfo> value);
    /// <summary>
    /// Gets the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<BorderInfo> get_Border() const;
    /// <summary>
    /// Sets the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets change curret position after process paragraph.(default true)
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsChangePosition() const;
    /// <summary>
    /// Sets change curret position after process paragraph.(default true)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsChangePosition(bool value);
    /// <summary>
    /// Gets the table left coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Left() const;
    /// <summary>
    /// Sets the table left coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Left(double value);
    /// <summary>
    /// Gets the table top coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Top() const;
    /// <summary>
    /// Sets the table top coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Top(double value);
    /// <summary>
    /// Gets a <see cref="Shapes"></see> collection that indicates all shapes in the graph.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<BoundsCheckableList<System::SharedPtr<Shape>>> get_Shapes() const;
    /// <summary>
    /// Sets a <see cref="Shapes"></see> collection that indicates all shapes in the graph.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Shapes(System::SharedPtr<BoundsCheckableList<System::SharedPtr<Shape>>> value);
    /// <summary>
    /// Gets a string value that indicates the title of the graph.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_Title() const;
    /// <summary>
    /// Sets a string value that indicates the title of the graph.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::SharedPtr<Aspose::Pdf::Text::TextFragment> value);
    /// <summary>
    /// Gets a float value that indicates the graph width.
    /// The unit is point.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Width() const;
    /// <summary>
    /// Sets a float value that indicates the graph width.
    /// The unit is point.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(double value);
    /// <summary>
    /// Gets a float value that indicates the graph height.
    /// The unit is point.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Height() const;
    /// <summary>
    /// Sets a float value that indicates the graph height.
    /// The unit is point.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Height(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Graph"></see> class.
    /// </summary>
    /// <param name="width">The width of the graph.</param>
    /// <param name="height">The height of the graph.</param>
    ASPOSE_PDF_SHARED_API Graph(double width, double height);
    /// @deprecated Constructor is deprecated. Please use constructor with double instead
    /// <summary>
    /// Initializes a new instance of the <see cref="Graph"></see> class.
    /// </summary>
    /// <param name="width">The width of the graph.</param>
    /// <param name="height">The height of the graph.</param>
    ASPOSE_PDF_SHARED_API Graph(float width, float height);
    
    /// <summary>
    /// Clone the graph.
    /// </summary>
    /// <returns>The cloned object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    /// <summary>
    /// Gets is left set (for internal use).
    /// </summary>
    bool get_IsLeftSet() const;
    /// <summary>
    /// Sets is left set (for internal use).
    /// </summary>
    void set_IsLeftSet(bool value);
    /// <summary>
    /// Gets is top set (for internal use).
    /// </summary>
    bool get_IsTopSet() const;
    /// <summary>
    /// Sets is top set (for internal use).
    /// </summary>
    void set_IsTopSet(bool value);
    
    Graph();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Graph, CODEPORTING_ARGS());
    bool Process(double& curX, double& curY, bool isNextParagraphInline, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Page> page);
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
private:

    double height;
    System::SharedPtr<BoundsCheckableList<System::SharedPtr<Shape>>> shapes;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> title;
    System::SharedPtr<BorderInfo> border;
    double left;
    bool isChangePosition;
    double top;
    double width;
    System::SharedPtr<Aspose::Pdf::GraphInfo> graphInfo;
    bool pr_IsLeftSet;
    bool pr_IsTopSet;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


