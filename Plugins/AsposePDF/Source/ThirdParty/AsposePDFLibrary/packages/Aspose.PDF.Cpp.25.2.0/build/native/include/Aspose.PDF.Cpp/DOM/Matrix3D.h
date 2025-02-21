#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PDF3DView;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfArray;
class ITrailerable;
} // namespace Data
} // namespace Engine
enum class Rotation;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents transformation matrix. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Matrix3D final : public System::Object
{
    typedef Matrix3D ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PDF3DView;
    
public:

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
    /// G member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_G();
    /// <summary>
    /// G member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_G(double value);
    /// <summary>
    /// H member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_H();
    /// <summary>
    /// H member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_H(double value);
    /// <summary>
    /// I member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_I();
    /// <summary>
    /// I member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_I(double value);
    /// <summary>
    /// Tx member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Tx();
    /// <summary>
    /// Tx member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Tx(double value);
    /// <summary>
    /// Ty member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Ty();
    /// <summary>
    /// Ty member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Ty(double value);
    /// <summary>
    /// Tz member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Tz();
    /// <summary>
    /// Tz member of the transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Tz(double value);
    
    /// <summary>
    /// Constructor
    /// creates standard 1 to 1 matrix:
    /// [ A B C D E F G H I Tx Ty Tz] = [ 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 , 0]
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Matrix3D();
    /// <summary>
    /// Constructor
    /// accepts a matrix with following array representation:
    /// [ A B C D E F G H I Tx Ty Tz]
    /// </summary>
    /// <param name="matrix3DArray">Matrix data array.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Matrix3D(System::ArrayPtr<double> matrix3DArray);
    /// <summary>
    /// Constructor
    /// accepts a matrix to create a copy
    /// </summary>
    /// <param name="matrix">Matrix3D object.</param>
    ASPOSE_PDF_SHARED_API Matrix3D(System::SharedPtr<Matrix3D> matrix);
    
    /// <summary>
    /// Compares matrix against other object.
    /// </summary>
    /// <param name="obj">Object to compare.</param>
    /// <returns>Returns true is other object is Matrix3D and all matrix members are equal to corresponding members of the matrix</returns>
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Translates rotation into angle (degrees)
    /// </summary>
    /// <param name="rotation">Rotation value.</param>
    /// <example>
    /// </example>
    /// <returns>Angle value.</returns>
    static ASPOSE_PDF_SHARED_API double GetAngle(Rotation rotation);
    /// <summary>
    /// Adds matrix to other matrix.
    /// </summary>
    /// <param name="other">Matrix to be added.</param>
    /// <returns>Result of matrix add.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix3D> Add(System::SharedPtr<Matrix3D> other);
    
    /// <summary>
    /// Initializes transformation matrix with specified coefficients.
    /// </summary>
    /// <param name="a">A matrix value.</param>
    /// <param name="b">B matrix value.</param>
    /// <param name="c">C matrix value.</param>
    /// <param name="d">D matrix value.</param>
    /// <param name="e">E matrix value.</param>
    /// <param name="f">F matrix value.</param>
    /// <param name="g">G matrix value.</param>
    /// <param name="h">H matrix value.</param>
    /// <param name="i">I matrix value.</param>
    /// <param name="tx">TX matrix value.</param>
    /// <param name="ty">TY matrix value.</param>
    /// <param name="tz">TZ matrix value.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Matrix3D(double a, double b, double c, double d, double e, double f, double g, double h, double i, double tx, double ty, double tz);
    
    /// <summary>
    /// Hash-code for object.
    /// </summary>
    /// <returns>Hash-code.</returns>
    ASPOSE_PDF_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Returns text representation of the matrix. 
    /// </summary>
    /// <returns>String representation for the matrix</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Translates matrix into PDF array obect.
    /// </summary>
    /// <param name="trailer">Trailerable object</param>
    /// <returns>Result of converting</returns>
    System::SharedPtr<Engine::Data::IPdfArray> getMatrix3D(System::SharedPtr<Engine::Data::ITrailerable> trailer);
    System::SharedPtr<Engine::Data::IPdfArray> ToPdfArray(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    
    Matrix3D(System::SharedPtr<Engine::Data::IPdfArray> data);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Matrix3D, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfArray> data));
    
private:

    System::ArrayPtr<double> matrix3DArray;
    
    System::String ToString_NonConst();
    /// <summary>
    /// Returns full matrix (4x4) corresponding the given matrix. 
    /// </summary>
    /// <returns>Array containing matrix data. Data situated "by lines" i.e. all element of 1st line, all elements of 2nd line... </returns>
    System::ArrayPtr<double> getFullMatrix3D();
    
};

} // namespace Pdf
} // namespace Aspose


