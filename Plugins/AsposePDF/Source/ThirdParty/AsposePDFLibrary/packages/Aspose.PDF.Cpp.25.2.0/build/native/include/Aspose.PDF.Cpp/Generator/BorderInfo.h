#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/icloneable.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class BorderSide;
class Cell;
class Color;
namespace Drawing
{
class Graph;
} // namespace Drawing
class FloatingBox;
class GraphInfo;
class Row;
class Table;
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents border for graphics elements.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BorderInfo final : public System::ICloneable
{
    typedef BorderInfo ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::FloatingBox;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Table;
    
public:

    /// <summary>
    /// Gets a object that indicates left of the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<GraphInfo>& get_Left() const;
    /// <summary>
    /// Sets a object that indicates left of the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Left(System::SharedPtr<GraphInfo> value);
    /// <summary>
    /// Gets a object that indicates right of the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<GraphInfo>& get_Right() const;
    /// <summary>
    /// Sets a object that indicates right of the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Right(System::SharedPtr<GraphInfo> value);
    /// <summary>
    /// Gets a object that indicates the top border.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<GraphInfo>& get_Top() const;
    /// <summary>
    /// Sets a object that indicates the top border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Top(System::SharedPtr<GraphInfo> value);
    /// <summary>
    /// Gets a object that indicates bottom of the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<GraphInfo>& get_Bottom() const;
    /// <summary>
    /// Sets a object that indicates bottom of the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Bottom(System::SharedPtr<GraphInfo> value);
    /// <summary>
    /// Gets a rouded border radius
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_RoundedBorderRadius() const;
    /// <summary>
    /// Sets a rouded border radius
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RoundedBorderRadius(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"></see> class.
    /// </summary>
    /// <param name="borderSide">Indicates the border sides info. For example: (int)(BorderSide.Left | BorderSide.Top).</param>
    /// <param name="borderColor">The border color.</param>
    ASPOSE_PDF_SHARED_API BorderInfo(BorderSide borderSide, System::SharedPtr<Color> borderColor);
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API BorderInfo();
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"></see> class.
    /// </summary>
    /// <param name="borderSide">Indicates the border sides info. For example: (BorderSide.Left | BorderSide.Top).</param>
    ASPOSE_PDF_SHARED_API BorderInfo(BorderSide borderSide);
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"></see> class.
    /// </summary>
    /// <param name="borderSide">Indicates the border sides info. For example: (BorderSide.Left | BorderSide.Top).</param>
    /// <param name="borderWidth">The width of the border.</param>
    ASPOSE_PDF_SHARED_API BorderInfo(BorderSide borderSide, float borderWidth);
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"></see> class.
    /// </summary>
    /// <param name="borderSide">Indicates the border sides info. For example: (BorderSide.Left | BorderSide.Top).</param>
    /// <param name="borderWidth">The width of the border.</param>
    /// <param name="borderColor">The border color.</param>
    ASPOSE_PDF_SHARED_API BorderInfo(BorderSide borderSide, float borderWidth, System::SharedPtr<Color> borderColor);
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"></see> class.
    /// </summary>
    /// <param name="borderSide">Indicates the border sides info. For example: (BorderSide.Left | BorderSide.Top).</param>
    /// <param name="info">The border info.</param>
    ASPOSE_PDF_SHARED_API BorderInfo(BorderSide borderSide, System::SharedPtr<GraphInfo> info);
    
    /// <summary>
    /// Clones a new BorderInfo object.
    /// </summary>
    /// <returns>The new BorderInfo object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    /// <summary>
    /// Gets bool is all four border parts.
    /// </summary>
    bool get_IsSame();
    
    void SerializeGraphInfo(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::String side, System::SharedPtr<GraphInfo> info);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    System::SharedPtr<GraphInfo> pr_Left;
    System::SharedPtr<GraphInfo> pr_Right;
    System::SharedPtr<GraphInfo> pr_Top;
    System::SharedPtr<GraphInfo> pr_Bottom;
    double pr_RoundedBorderRadius;
    
    void AssignBorderSide(BorderSide borderSide);
    
};

} // namespace Pdf
} // namespace Aspose


