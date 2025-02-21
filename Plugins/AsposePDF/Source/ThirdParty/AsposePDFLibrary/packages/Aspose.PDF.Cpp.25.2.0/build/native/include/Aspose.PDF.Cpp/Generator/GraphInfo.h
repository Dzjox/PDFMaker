#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/icloneable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class BorderInfo;
class Color;
namespace Drawing
{
class Graph;
class Path;
class Shape;
} // namespace Drawing
class FlowToTableAbsorber;
class Table;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents graphics info.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GraphInfo final : public System::ICloneable
{
    typedef GraphInfo ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::Drawing::Path;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::BorderInfo;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::FlowToTableAbsorber;
    
public:

    /// <summary>
    /// Retrieve the X coordinate of a vertical border when using TableAbsorber, and return "-1" for a horizontal border.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_X() const;
    /// <summary>
    /// Retrieve the Y coordinate of a horizontal border when using TableAbsorber, and return "-1" for a vertical border.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Gets a float value that indicates the line width of the graph.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_LineWidth() const;
    /// <summary>
    /// Sets a float value that indicates the line width of the graph.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LineWidth(float value);
    /// <summary>
    /// Gets a <see cref="Color"></see> object that indicates the color of the graph.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Color> get_Color() const;
    /// <summary>
    /// Sets a <see cref="Color"></see> object that indicates the color of the graph.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Color(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets a dash array.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<int32_t> get_DashArray() const;
    /// <summary>
    /// Sets a dash array.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DashArray(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets a dash phase.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_DashPhase() const;
    /// <summary>
    /// Sets a dash phase.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DashPhase(int32_t value);
    /// <summary>
    /// Gets a <see cref="Color"></see> object that indicates the fill color of the graph.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Color> get_FillColor() const;
    /// <summary>
    /// Sets a <see cref="Color"></see> object that indicates the fill color of the graph.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FillColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets is border doubled.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsDoubled() const;
    /// <summary>
    /// Sets is border doubled.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsDoubled(bool value);
    /// <summary>
    /// Gets a float value that indicates the skew angle of the x-coordinate when transforming a coordinate system.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_SkewAngleX() const;
    /// <summary>
    /// Sets a float value that indicates the skew angle of the x-coordinate when transforming a coordinate system.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SkewAngleX(double value);
    /// <summary>
    /// Gets a float value that indicates the skew angle of the y-coordinate when transforming a coordinate system.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_SkewAngleY() const;
    /// <summary>
    /// Sets a float value that indicates the skew angle of the y-coordinate when transforming a coordinate system.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SkewAngleY(double value);
    /// <summary>
    /// Gets a float value that indicates the scaling rate of the x-coordinate when transforming a coordinate system.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_ScalingRateX() const;
    /// <summary>
    /// Sets a float value that indicates the scaling rate of the x-coordinate when transforming a coordinate system.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ScalingRateX(double value);
    /// <summary>
    /// Gets a float value that indicates the scaling rate of the y-coordinate when transforming a coordinate system.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_ScalingRateY() const;
    /// <summary>
    /// Sets a float value that indicates the scaling rate of the y-coordinate when transforming a coordinate system.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ScalingRateY(double value);
    /// <summary>
    /// Gets a float value that indicates the rotation angle of the coordinate system 
    /// when transforming a coordinate system.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_RotationAngle() const;
    /// <summary>
    /// Sets a float value that indicates the rotation angle of the coordinate system 
    /// when transforming a coordinate system.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RotationAngle(double value);
    
    /// <summary>
    /// Clone the graphics info.
    /// </summary>
    /// <returns>The cloned object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
    ASPOSE_PDF_SHARED_API GraphInfo();
    
protected:

    bool get_IsDefault();
    /// <summary>
    /// Retrieve the X coordinate of a vertical border when using TableAbsorber, and return "-1" for a horizontal border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_X(double value);
    /// <summary>
    /// Retrieve the Y coordinate of a horizontal border when using TableAbsorber, and return "-1" for a vertical border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    /// <summary>
    /// Gets border Ratio for doubled and not doubled borders.
    /// </summary>
    double get_Ratio();
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    System::SharedPtr<Aspose::Pdf::Color> color;
    System::ArrayPtr<int32_t> dashArray;
    int32_t dashPhase;
    System::SharedPtr<Aspose::Pdf::Color> fillColor;
    float lineWidth;
    bool isDoubled;
    double rotationAngle;
    double skewAngleX;
    double skewAngleY;
    double scalingRateX;
    double scalingRateY;
    double x;
    double y;
    
};

} // namespace Pdf
} // namespace Aspose


