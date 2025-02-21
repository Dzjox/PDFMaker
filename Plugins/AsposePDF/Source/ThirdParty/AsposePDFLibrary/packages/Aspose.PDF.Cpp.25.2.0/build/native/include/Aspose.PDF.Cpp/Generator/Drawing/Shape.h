#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/Generator/BoundsCheckableList/IBoundsCheckableItem.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Color;
namespace Drawing
{
class Arc;
class Circle;
class Curve;
class Ellipse;
class Graph;
class Line;
class Path;
class Rectangle;
} // namespace Drawing
class GraphInfo;
class Operator;
class Page;
class Point;
class Rectangle;
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
/// Represents shape - the base graphics object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Shape : public Aspose::Pdf::IBoundsCheckableItem
{
    typedef Shape ThisType;
    typedef Aspose::Pdf::IBoundsCheckableItem BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Ellipse;
    friend class Aspose::Pdf::Drawing::Path;
    friend class Aspose::Pdf::Drawing::Arc;
    friend class Aspose::Pdf::Drawing::Circle;
    friend class Aspose::Pdf::Drawing::Curve;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Drawing::Line;
    friend class Aspose::Pdf::Drawing::Rectangle;
    
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
    /// Gets a text for shape
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_Text() const;
    /// <summary>
    /// Sets a text for shape
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Text(System::SharedPtr<Aspose::Pdf::Text::TextFragment> value);
    
    ASPOSE_PDF_SHARED_API bool CheckBounds(double containerWidth, double containerHeight) override;
    
    ASPOSE_PDF_SHARED_API Shape();
    
protected:

    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators) = 0;
    virtual System::SharedPtr<Pdf::Rectangle> GetRect() = 0;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetTextOperators(System::SharedPtr<Page> page);
    static void SetTransparency(System::SharedPtr<Page> page, System::SharedPtr<Color> color, System::SharedPtr<Color> strokeColor, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    /// <summary>
    /// Sets clip shading.
    /// <param name="start">Start point.</param>
    /// <param name="end">End point.</param>
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void ClipShading(System::SharedPtr<Point> start, System::SharedPtr<Point> end);
    void GetOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Page> page, double curX, double curY);
    virtual ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::String GetArrayString(System::ArrayPtr<float> floatArray);
    System::ArrayPtr<float> GetArrayFromString(System::String split);
    
private:

    System::SharedPtr<Aspose::Pdf::GraphInfo> graphInfo;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> text;
    
    static void SetTransparecyOperator(System::String ca, System::SharedPtr<Page> page, System::SharedPtr<Color> color, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


