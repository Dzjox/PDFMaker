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
namespace Annotations
{
class Annotation;
class CaretAnnotation;
class CommonFigureAnnotation;
class HighlightAnnotation;
class Redaction;
class RedactionAnnotation;
class ScreenAnnotation;
} // namespace Annotations
class ApsUsingConverter;
namespace Comparison
{
namespace SideBySideComparison
{
class IgnoreSpacesFragmentsProcessor;
} // namespace SideBySideComparison
} // namespace Comparison
class Document;
namespace Engine
{
namespace CommonData
{
class IPdfRectangle;
class PageTreeNode;
namespace Text
{
namespace Segmenting
{
class PhysicalTextSegment;
} // namespace Segmenting
class Subpath;
} // namespace Text
} // namespace CommonData
namespace Data
{
class ITrailerable;
class PdfArray;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class PdfUaConvertStrategy;
class TransparentContentRemoval;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
namespace Facades
{
class PdfFileEditor;
} // namespace Facades
class Page;
class PdfToApsConverter;
namespace PdfToMarkdown
{
namespace Extractors
{
class ImagesExtractor;
class LinksExtractor;
class TablesExtractor;
} // namespace Extractors
} // namespace PdfToMarkdown
class Point;
enum class Rotation;
namespace Tests
{
namespace Plugins
{
class FormExporterTests;
class PdfFormTests;
} // namespace Plugins
} // namespace Tests
namespace Text
{
class PageMarkup;
class TextPostReplaceFixer;
} // namespace Text
class TextStamp;
namespace Vector
{
namespace Extraction
{
class SubPathContainer;
} // namespace Extraction
class SvgExtractor;
} // namespace Vector
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Rectangle;
class RectangleF;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents rectangle.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Rectangle final : public System::ICloneable
{
    typedef Rectangle ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Subpath;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::PdfToApsConverter;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Engine::CommonData::PageTreeNode;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Text::PageMarkup;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Annotations::CaretAnnotation;
    friend class Aspose::Pdf::Annotations::CommonFigureAnnotation;
    friend class Aspose::Pdf::Annotations::HighlightAnnotation;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Annotations::ScreenAnnotation;
    friend class Aspose::Pdf::PdfToMarkdown::Extractors::ImagesExtractor;
    friend class Aspose::Pdf::PdfToMarkdown::Extractors::LinksExtractor;
    friend class Aspose::Pdf::PdfToMarkdown::Extractors::TablesExtractor;
    friend class Aspose::Pdf::Vector::Extraction::SubPathContainer;
    friend class Aspose::Pdf::Vector::SvgExtractor;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::IgnoreSpacesFragmentsProcessor;
    friend class Aspose::Pdf::Tests::Plugins::PdfFormTests;
    friend class Aspose::Pdf::Tests::Plugins::FormExporterTests;
    
public:

    /// <summary>
    /// Width of rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Width();
    /// <summary>
    /// Height of rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Height();
    /// <summary>
    /// X-coordinate of lower - left corner.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_LLX() const;
    /// <summary>
    /// X-coordinate of lower - left corner.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LLX(double value);
    /// <summary>
    /// Y - coordinate of lower-left corner.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_LLY() const;
    /// <summary>
    /// Y - coordinate of lower-left corner.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LLY(double value);
    /// <summary>
    /// X - coordinate of upper-right corner.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_URX() const;
    /// <summary>
    /// X - coordinate of upper-right corner.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_URX(double value);
    /// <summary>
    /// Y - coordinate of upper-right corner.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_URY() const;
    /// <summary>
    /// Y - coordinate of upper-right corner.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_URY(double value);
    /// <summary>
    /// Empty rectangle
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_Empty();
    /// <summary>
    /// Initializes trivial rectangle i.e. rectangle with zero position and size.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_Trivial();
    /// <summary>
    /// Checks if rectangle is trivial i.e. has zero size and position.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsTrivial();
    /// <summary>
    /// Checks if rectangle is empty.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsEmpty() const;
    /// <summary>
    /// Checks if rectangle is point i.e. LLX is equal URX and LLY is equal URY.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsPoint();
    
    /// <summary>
    /// Constructor of Rectangle.
    /// </summary>
    /// <param name="llx">X of lower left corner.</param>
    /// <param name="lly">Y of lower left corner.</param>
    /// <param name="urx">X of upper right corner.</param>
    /// <param name="ury">Y of upper right corner.</param>
    /// <param name="normalizeCoordinates">Normalize coordinates of rectangle.</param>
    ASPOSE_PDF_SHARED_API Rectangle(double llx, double lly, double urx, double ury, bool normalizeCoordinates = true);
    
    /// <summary>
    /// Converts rectangle to instance of System.Drawing.Rectangle. Floating-point positions and size are truncated.
    /// </summary>
    /// <returns>Result of conversion.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Rectangle ToRect();
    /// <summary>
    /// Initializes new rectangle from given instance of System.Drawing.Rectangle.
    /// </summary>
    /// <param name="src">Source rectangle which position and size will be set to new rectangle.</param>
    /// <returns>New rectangle.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> FromRect(System::Drawing::Rectangle src);
    /// <summary>
    /// Initializes new rectangle from given instance of System.Drawing.Rectangle.
    /// </summary>
    /// <param name="src">Source rectangle which position and size will be set to new rectangle.</param>
    /// <returns>New rectangle.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> FromRect(System::Drawing::RectangleF src);
    /// <summary>
    /// Try to parse string and extract from it rectangle components llx, lly, urx, ury.
    /// </summary>
    /// <param name="value">
    /// String to parse.
    /// </param>
    /// <returns>
    /// Rectangle object.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> Parse(System::String value);
    /// <summary>
    /// Check if rectangles are equal i.e. have same position and sizes.
    /// </summary>
    /// <param name="other">Rectangle which will be compared.</param>
    /// <returns>True if rectangles are eqals, false otherwise.</returns>
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<Rectangle> other);
    /// <summary>
    /// Check if rectangles are near equal i.e. have near same (up to delta) position and sizes.
    /// </summary>
    /// <param name="other">Rectangle which will be compared.</param>
    /// <param name="delta">Value of comparation tollerance.</param>
    /// <returns>True if rectangles are eqals, false otherwise.</returns>
    ASPOSE_PDF_SHARED_API bool NearEquals(System::SharedPtr<Rectangle> other, double delta);
    /// <summary>
    /// Intersects to rectangles. 
    /// </summary>
    /// <param name="otherRect">Rectangle to which this recatangle be intersected.</param>
    /// <returns>Intersection of rectangles; null if rectangles are not intersected.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> Intersect(System::SharedPtr<Rectangle> otherRect);
    /// <summary>
    /// Joins rectangles.
    /// </summary>
    /// <param name="otherRect">Rectangle to which this recatangle be joined.</param>
    /// <returns>Described rectangle.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> Join(System::SharedPtr<Rectangle> otherRect);
    /// <summary>
    /// Determines whether this rectangle intersects with other rectangle.
    /// </summary>
    /// <param name="otherRect">Intersection will be tested with specified rectangle.</param>
    /// <returns>True if this rectangle intersects with specified rectangle. Otherwise false.</returns>
    ASPOSE_PDF_SHARED_API bool IsIntersect(System::SharedPtr<Rectangle> otherRect);
    /// <summary>
    /// Determinces whether given point is inside of the rectangle.
    /// </summary>
    /// <param name="point">Point to check.</param>
    /// <param name="inclusive">inclusive: point may be on edge</param>
    /// <returns>True if point is inside of the rectangle.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(System::SharedPtr<Point> point, bool inclusive = false);
    /// <summary>
    /// Determines whether the rectangle contains a line represented by two points.
    /// </summary>
    /// <param name="x1">The X coordinate of the start point of the line.</param>
    /// <param name="y1">The Y coordinate of the start point of the line.</param>
    /// <param name="x2">The X coordinate of the end point of the line.</param>
    /// <param name="y2">The Y coordinate of the end point of the line.</param>
    /// <returns>
    /// <c>true</c> if the rectangle contains the line; otherwise, <c>false</c>.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool ContainsLine(double x1, double y1, double x2, double y2);
    /// <summary>
    /// Determines whether the given point is contained within the rectangle.
    /// </summary>
    /// <param name="x">X-coordinate of the point.</param>
    /// <param name="y">Y-coordinate of the point.</param>
    /// <returns>
    /// <c>true</c> if the point is contained within the rectangle; otherwise, <c>false</c>.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool ContainsPoint(double x, double y);
    /// <summary>
    /// Returncs coordinates of center of the rectangle.
    /// </summary>
    /// <returns>Point which is center of the rectangle.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> Center();
    /// <summary>
    /// Rotate rectangle by the specified angle.
    /// </summary>
    /// <param name="angle">Angle of rotation. Member of Rotation enumeration.</param>
    ASPOSE_PDF_SHARED_API void Rotate(Rotation angle);
    /// <summary>
    /// Rotate rectangle by the specified angle.
    /// </summary>
    /// <param name="angle">Angle of rotation in degrees between 0 and 360.</param>
    ASPOSE_PDF_SHARED_API void Rotate(int32_t angle);
    /// <summary>
    /// Clones the Rectangle object.
    /// </summary>
    /// <returns>Clone object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    /// <summary>
    /// Converts rectangle into array of points ("QuadPoints").
    /// </summary>
    /// <returns>Array of points.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Point>> ToPoints();
    /// <summary>
    /// Shift rectangle by the specified deltas.
    /// </summary>
    /// <param name="dx">Value of shift by X axis.</param>
    /// <param name="dy">Value of shift by Y axis.</param>
    ASPOSE_PDF_SHARED_API void MoveBy(double dx, double dy);
    /// <summary>
    /// Gets rectangle string representation.
    /// </summary>
    /// <returns>
    /// String has format llx,lly,urx,ury.
    /// </returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    System::Drawing::RectangleF ToRectangleF();
    System::SharedPtr<Engine::Data::PdfArray> ToArray(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    /// <summary>
    /// Intersects rectangles. OBolsete method. Please use Intersect instead. 
    /// </summary>
    /// <param name="otherRect"></param>
    /// <returns></returns>
    void _Intersect(System::SharedPtr<Rectangle> otherRect);
    /// <summary>
    /// Checks that this rectangle includes whole another rectangle. I.e. whole another rectangle is inside this rectangle.
    /// Difference with IsIntersect method is that IsIntersect will true for partly intersected rectangles but IsInclude will false.
    /// </summary>
    /// <param name="otherRect">Rectangle for which including is checked.</param>
    /// <param name="rotationAngle">Rotation angle of another rectangle in radians.</param>
    /// <returns>True if this rectangle includes whole specified rectangle. Otherwise false.</returns>
    bool IsInclude(System::SharedPtr<Rectangle> otherRect, double rotationAngle);
    /// <summary>
    /// Checks that this rectangle includes whole another rectangle. I.e. whole another rectangle is inside this rectangle.
    /// Difference with IsIntersect method is that IsIntersect will true for partly intersected rectangles but IsInclude will false.
    /// </summary>
    /// <param name="otherRect">Rectangle for which including is checked.</param>
    /// <returns>True if this rectangle includes whole specified rectangle. Otherwise false.</returns>
    bool IsInclude(System::SharedPtr<Rectangle> otherRect);
    /// <summary>
    /// Creates normalized rectangle from IPdfRectangle
    /// </summary>
    /// <param name="rectangles">The source rectangles.</param>
    /// <returns>Return the first non-null normalized rectangle</returns>
    static System::SharedPtr<Rectangle> CreateNormalizedRectangle(const System::ArrayPtr<System::SharedPtr<Engine::CommonData::IPdfRectangle>>& rectangles);
    /// <summary>
    /// Returns the dimensions of the given set of points, represented by a rectangle.
    /// </summary>
    /// <param name="points">Set of points for which dimensions are determined.</param>
    /// <returns>Dimensions (as a rectangle) of the given set of points. If no points in array return zero rectangle.</returns>
    static System::SharedPtr<Rectangle> GetDimensions(System::ArrayPtr<System::SharedPtr<Point>> points);
    /// <summary>
    /// Calculates the area of the rectangle.
    /// </summary>
    /// <returns>
    /// The area of the rectangle as a double, calculated by multiplying the width and height.
    /// </returns>
    double GetArea();
    void CheckAndCorrectValuesForTwoBytesInterval();
    
    virtual ASPOSE_PDF_SHARED_API ~Rectangle();
    
private:

    static System::SharedPtr<Rectangle> _empty;
    double _llx;
    double _lly;
    double _urx;
    double _ury;
    bool _isEmpty;
    
    /// <summary>
    /// Constructor of Rectangle.
    /// </summary>
    /// <param name="llx">X of lower left corner.</param>
    /// <param name="lly">Y of lower left corner.</param>
    /// <param name="urx">X of upper right corner.</param>
    /// <param name="ury">Y of upper right corner.</param>        
    Rectangle(double llx, double lly, double urx, double ury, bool isEmpty, bool normalizeCoordinates);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Rectangle, CODEPORTING_ARGS(double llx, double lly, double urx, double ury, bool isEmpty, bool normalizeCoordinates));
    void Normalize();
    System::String ToString_NonConst();
    System::ArrayPtr<double> GetIntersect(double l1, double r1, double l2, double r2);
    /// <summary>
    /// Checks that this rectangle includes a point with given coordinates. I.e. a point is inside this rectangle.
    /// </summary>
    /// <param name="x">X-coordinate of point for which including is checked.</param>
    /// <param name="y">Y-coordinate of point for which including is checked.</param>
    /// <returns>True if this rectangle includes whole specified rectangle. Otherwise false.</returns>
    bool IsIncludePointCoordinates(double x, double y);
    double CheckAndCorrectValueForTwoBytesInterval(double value);
    
};

} // namespace Pdf
} // namespace Aspose


