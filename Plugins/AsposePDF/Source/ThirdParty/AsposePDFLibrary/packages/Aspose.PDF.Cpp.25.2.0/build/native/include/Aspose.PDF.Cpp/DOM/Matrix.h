#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/details/array_view.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Font
{
class TransformationMatrix;
} // namespace Font
namespace Pdf
{
namespace Annotations
{
class FixedPrint;
} // namespace Annotations
class ApsToPdfConverter;
namespace Drawing
{
class Graph;
} // namespace Drawing
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Segmenting
{
class PhysicalTextSegment;
class TextSegmentBuilder;
class TextSegmenter;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfArray;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Facades
{
class PdfFileEditor;
} // namespace Facades
class ImagePlacementAbsorber;
class Point;
class Rectangle;
enum class Rotation;
namespace Text
{
class TextFragment;
class TextFragmentState;
class TextPostReplaceFixer;
} // namespace Text
namespace Vector
{
namespace Extraction
{
class ApsSvgRenderer;
} // namespace Extraction
class GraphicAppender;
class GraphicElement;
class GraphicsAbsorber;
class GraphicState;
class PositionSetter;
class XFormPlacement;
} // namespace Vector
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
namespace Drawing2D
{
class Matrix;
} // namespace Drawing2D
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents transformation matrix. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Matrix final : public System::Object
{
    typedef Matrix ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Annotations::FixedPrint;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::Vector::GraphicElement;
    friend class Aspose::Pdf::Vector::GraphicsAbsorber;
    friend class Aspose::Pdf::Vector::GraphicState;
    friend class Aspose::Pdf::Vector::XFormPlacement;
    friend class Aspose::Pdf::Vector::PositionSetter;
    friend class Aspose::Pdf::Vector::GraphicAppender;
    friend class Aspose::Pdf::Vector::Extraction::ApsSvgRenderer;
    
public:

    /// <summary>
    /// Gets data of Matrix as array.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<double> get_Data() const;
    /// <summary>
    /// A member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_A();
    /// <summary>
    /// A member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_A(double value);
    /// <summary>
    /// B member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_B();
    /// <summary>
    /// B member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_B(double value);
    /// <summary>
    /// C member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_C();
    /// <summary>
    /// C member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_C(double value);
    /// <summary>
    /// D member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_D();
    /// <summary>
    /// D member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_D(double value);
    /// <summary>
    /// E member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_E();
    /// <summary>
    /// E member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_E(double value);
    /// <summary>
    /// F member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_F();
    /// <summary>
    /// F member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_F(double value);
    /// <summary>
    /// Elements of the matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<float> get_Elements();
    
    /// <summary>
    /// Constructor
    /// creates stanrard 1 to 1 matrix:
    /// [ A B C D E F ] = [ 1, 0, 0, 1, 0, 0]
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Matrix();
    /// <summary>
    /// Constructor
    /// accepts a matrix with following array representation:
    /// [ A B C D E F ]
    /// </summary>
    /// <param name="matrixArray">Matrix data array.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Matrix(System::ArrayPtr<double> matrixArray);
    /// <summary>
    /// Constructor
    /// accepts a matrix with following array representation:
    /// [ A B C D E F ]
    /// </summary>
    /// <param name="matrixArray">Matrix data array.</param>
    ASPOSE_PDF_SHARED_API Matrix(const System::Details::ArrayView<float>& matrixArray);
    /// <summary>
    /// Constructor
    /// accepts a matrix to create a copy
    /// </summary>
    /// <param name="matrix">Matrix object.</param>
    ASPOSE_PDF_SHARED_API Matrix(System::SharedPtr<Matrix> matrix);
    
    /// <summary>
    /// Compares matrix agains other object.
    /// </summary>
    /// <param name="obj">Object to compare.</param>
    /// <returns>Returns true is other object is Matrix and all matrix member are equal to correspondim members of the matrix</returns>
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Creates matrix for given rotation angle. 
    /// </summary>
    /// <param name="alpha">Rotation angle in radians.</param>
    /// <returns>Transformation matrix.</returns>
    /// <example>
    /// </example>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> Rotation(double alpha);
    /// <summary>
    /// Creates matrix for given rotation.
    /// </summary>
    /// <param name="rotation">Rotation. Valid values are: None, on90, on180, on270</param>
    /// <returns>Matrix with rotation.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> Rotation(Aspose::Pdf::Rotation rotation);
    /// <summary>
    /// Creates matrix for given rotation angle. 
    /// </summary>
    /// <param name="alpha">Skew x angle in radians.</param>
    /// <param name="beta">Skew y angle in radians.</param>
    /// <returns>Transformation matrix.</returns>
    /// <example>
    /// </example>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> Skew(double alpha, double beta);
    /// <summary>
    /// Scales x and y with the matrix using the following formula:
    /// x1 = A*x + C*y;
    /// y1 = B*x + D*y;
    /// </summary>
    /// <param name="x">Input X coordinate</param>
    /// <param name="y">Input Y coordinate</param>
    /// <param name="x1">Output X coordinate</param>
    /// <param name="y1">Output Y coordinate</param>
    ASPOSE_PDF_SHARED_API void Scale(double x, double y, double& x1, double& y1);
    /// <summary>
    /// Scales back x1 and y1 and returns x and y before the matrix transformation using the following formula:
    /// x = (D * x1 - C * y1) / (A * D - C * B);
    /// y = (A* y1 - B* x1) / (A* D - C* B);
    /// </summary>
    /// <param name="x1">Input X coordinate</param>
    /// <param name="y1">Input Y coordinate</param>
    /// <param name="x">Output X coordinate</param>
    /// <param name="y">Output Y coordinate</param>
    ASPOSE_PDF_SHARED_API void UnScale(double x1, double y1, double& x, double& y);
    /// <summary>
    /// Transaltes rotation into angle (degrees)
    /// </summary>
    /// <param name="rotation">Rotation value.</param>
    /// <example>
    /// </example>
    /// <returns>Angle value.</returns>
    static ASPOSE_PDF_SHARED_API double GetAngle(Aspose::Pdf::Rotation rotation);
    /// <summary>
    /// Multiplies the matrix by other matrix.
    /// </summary>
    /// <param name="other">Multiplier matrix.</param>
    /// <returns>Result of multiplication.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> Multiply(System::SharedPtr<Matrix> other);
    /// <summary>
    /// Adds matrix to other matrix.
    /// </summary>
    /// <param name="other">Matrix to be added.</param>
    /// <returns>Result of matrix add.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> Add(System::SharedPtr<Matrix> other);
    /// <summary>
    /// Transforms point using this matrix.
    /// </summary>
    /// <param name="p">Point which will be transformed.</param>
    /// <returns>Transformation result.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> Transform(System::SharedPtr<Point> p);
    /// <summary>
    /// Transforms coordinates using this matrix.
    /// </summary>
    /// <param name="x">X coordinate.</param>
    /// <param name="y">Y coordinate.</param>
    /// <param name="x1">Transformed X coordinate.</param>
    /// <param name="y1">Transformed Y coordinate.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Transform(double x, double y, double& x1, double& y1);
    /// <summary>
    /// Transforms back x1 and y1 and returns x and y before the matrix transformation using the following formula:
    /// x = (D * x1 - C * y1 + C * F) / (A * D - C * B)
    /// y = (A * y1 - B * x1 + B * E) / (A * D - C * B).
    /// </summary>
    /// <param name="x1">Input X coordinate</param>
    /// <param name="y1">Input Y coordinate</param>
    /// <param name="x">Output X coordinate</param>
    /// <param name="y">Output Y coordinate</param>
    ASPOSE_PDF_SHARED_API void UnTransform(double x1, double y1, double& x, double& y);
    /// <summary>
    /// Transformes rectangle.
    /// If angle is not 90 * N degrees then bounding rectangle is returned.
    /// </summary>
    /// <param name="rect">Rectangle to be transformed.</param>
    /// <returns>Transformed rectangle.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> Transform(System::SharedPtr<Aspose::Pdf::Rectangle> rect);
    
    /// <summary>
    /// Initializes transformation matrix with specified coefficients.
    /// </summary>
    /// <param name="a">A matrix value.</param>
    /// <param name="b">B matrix value.</param>
    /// <param name="c">C matrix value.</param>
    /// <param name="d">D matrix value.</param>
    /// <param name="e">E matrix value.</param>
    /// <param name="f">F matrix value.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Matrix(double a, double b, double c, double d, double e, double f);
    
    /// <summary>
    /// Calculates reverse matrix.
    /// </summary>
    /// <returns>Reverse matrix.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> Reverse();
    /// <summary>
    /// Hash-code for object.
    /// </summary>
    /// <returns>Hash-code.</returns>
    ASPOSE_PDF_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Translates a matrix by the specified amount in the x and y direction.
    /// </summary>
    /// <param name="dx">The amount to translate in the x direction.</param>
    /// <param name="dy">The amount to translate in the y direction.</param>
    /// <param name="source">The matrix to translate.</param>
    /// <returns>A new matrix that is the result of the translation.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> Translate(double dx, double dy, System::SharedPtr<Matrix> source);
    /// <summary>
    /// Applies scaling to the given matrix.
    /// </summary>
    /// <param name="sx">The scaling factor for the X-axis.</param>
    /// <param name="sy">The scaling factor for the Y-axis.</param>
    /// <param name="source">The matrix to scale.</param>
    /// <returns>A new matrix that is the result of scaling the source matrix.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> Scale(double sx, double sy, System::SharedPtr<Matrix> source);
    /// <summary>
    /// Gets the flipping matrix.
    /// </summary>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> GetFlipMatrix();
    /// <summary>
    /// Returns text reporesentation of the matrix. 
    /// </summary>
    /// <returns>String representation for the matrix</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Checks wether this matrix is identity.
    /// </summary>
    bool get_IsIdentity();
    
    Matrix(System::SharedPtr<System::Drawing::Drawing2D::Matrix> matrix);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Matrix, CODEPORTING_ARGS(System::SharedPtr<System::Drawing::Drawing2D::Matrix> matrix));
    /// <summary>
    /// Translates matrix into PDF array obect.
    /// </summary>
    /// <param name="trailer">Trailerable object</param>
    /// <returns>Result of converting</returns>
    System::SharedPtr<Engine::Data::IPdfArray> getMatrix(System::SharedPtr<Engine::Data::ITrailerable> trailer);
    /// <summary>
    /// Creates matrix for given scale. 
    /// </summary>
    /// <param name="x">Scale x.</param>
    /// <param name="y">Scale y.</param>
    /// <returns>Transformation matrix.</returns>
    /// <example>
    /// </example>
    static System::SharedPtr<Matrix> Scale(double x, double y);
    /// <summary>
    /// Creates matrix for given translate.
    /// </summary>
    /// <param name="x">Translate x.</param>
    /// <param name="y">Translate y.</param>
    /// <returns>Transformation matrix.</returns>
    /// <example>
    /// </example>
    static System::SharedPtr<Matrix> Translate(double x, double y);
    /// <summary>
    /// Gets angle (radians) that corresponds rotation of specified Matrix.
    /// </summary>
    /// <param name="matrix">Matrix object.</param>
    /// <returns>Angle value in radians.</returns>
    static double GetAngleExactValue(System::SharedPtr<Matrix> matrix);
    System::SharedPtr<Matrix> PreMultiply(System::SharedPtr<Matrix> other);
    System::SharedPtr<Engine::Data::IPdfArray> ToPdfArray(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    
    Matrix(System::SharedPtr<Engine::Data::IPdfArray> data);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Matrix, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfArray> data));
    /// <summary>
    /// Creates matrix for given Aspose.Font.TransformationMatrix 
    /// </summary>
    /// <param name="fontsMatrix">Aspose.Font.TransformationMatrix </param>
    /// <returns>Transformation matrix.</returns>
    static System::SharedPtr<Matrix> FromFontsMatrix(System::SharedPtr<Font::TransformationMatrix> fontsMatrix);
    /// <summary>
    /// Creates Aspose.Font.TransformationMatrix for this matrix
    /// </summary>
    /// <param name="matrix"></param>
    /// <returns>Aspose.Font.TransformationMatrix</returns>
    static System::SharedPtr<Font::TransformationMatrix> ToFontsMatrix(System::SharedPtr<Matrix> matrix);
    /// <summary>
    /// Gets rotation matrix for a given matrix.
    /// </summary>
    /// <param name="matrix">Matrix.</param>
    /// <returns>Matrix.</returns>
    static System::SharedPtr<Matrix> GetRotationMatrix(System::SharedPtr<Matrix> matrix);
    static bool IsInt16(double value);
    bool IsInt16Values();
    
private:

    static const int32_t MatrixArrayLength;
    System::ArrayPtr<double> matrixArray;
    
    System::String ToString_NonConst();
    /// <summary>
    /// Returns full matrix (3x3) corresponding the given matrix. 
    /// </summary>
    /// <returns>Array containing matrix data. Data situated "by lines" i.e. all element of 1st line, all elements of 2nd line... </returns>
    System::ArrayPtr<double> getFullMatrix();
    
};

} // namespace Pdf
} // namespace Aspose


