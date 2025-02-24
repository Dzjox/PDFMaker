#pragma once

#include <system/string.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Drawing
{
class Vector2d32f;
} // namespace Drawing
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class PointF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Drawing {

/// <summary>
/// 2D vector with <see cref="double"></see> components
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Vector2d64d : public System::Object, public System::Details::BoxableObjectBase
{
    typedef Vector2d64d ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend ASPOSE_SLIDES_SHARED_API Vector2d64d operator +(Vector2d64d l, Vector2d64d r);
    friend ASPOSE_SLIDES_SHARED_API Vector2d64d operator -(Vector2d64d l, Vector2d64d r);
    friend ASPOSE_SLIDES_SHARED_API Vector2d64d operator /(Vector2d64d l, int32_t r);
    friend ASPOSE_SLIDES_SHARED_API Vector2d64d operator /(Vector2d64d l, double r);
    friend ASPOSE_SLIDES_SHARED_API Vector2d64d operator *(Vector2d64d l, int32_t r);
    friend ASPOSE_SLIDES_SHARED_API Vector2d64d operator *(Vector2d64d l, double r);
    friend ASPOSE_SLIDES_SHARED_API Vector2d64d operator -(Vector2d64d v);
    friend ASPOSE_SLIDES_SHARED_API bool operator ==(Vector2d64d l, Vector2d64d r);
    friend ASPOSE_SLIDES_SHARED_API bool operator !=(Vector2d64d l, Vector2d64d r);
    /// @endcond
    
public:

    /// <summary>
    /// X
    /// </summary>
    double X;
    /// <summary>
    /// Y
    /// </summary>
    double Y;
    static ASPOSE_SLIDES_SHARED_API Vector2d64d Zero;
    static ASPOSE_SLIDES_SHARED_API Vector2d64d One;
    
    /// <summary>
    /// Gets normal vector.
    /// Read-only <see cref="Aspose::Slides::Drawing::Vector2d64d">Vector2d64d</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Vector2d64d get_Norm();
    /// <summary>
    /// Gets scalar length of vector.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Length();
    
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="x"></param>
    /// <param name="y"></param>
    ASPOSE_SLIDES_SHARED_API Vector2d64d(double x, double y);
    /// <summary>
    /// Constructor
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Vector2d64d(System::Drawing::PointF p);
    
    /// <summary>
    /// Swap X and Y
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void SwapXY();
    /// <summary>
    /// Calculates scalar product of two vectors.
    /// </summary>
    /// <param name="r">The other vector</param>
    /// <returns>Scalar product.</returns>
    ASPOSE_SLIDES_SHARED_API double Dot(Vector2d64d r);
    /// <summary>
    /// Creates a collinear vector of length = 1.
    /// This vector should not have zero length.
    /// </summary>
    /// <returns>Returns a collinear vector of length = 1.</returns>
    ASPOSE_SLIDES_SHARED_API Vector2d64d Normalize();
    /// <summary>
    /// To <see cref="Aspose::Slides::Drawing::Vector2d32f">Vector2d32f</see>
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API Vector2d32f ToVector2d32f();
    static ASPOSE_SLIDES_SHARED_API Vector2d64d Min(Vector2d64d l, Vector2d64d r);
    static ASPOSE_SLIDES_SHARED_API Vector2d64d Max(Vector2d64d l, Vector2d64d r);
    ASPOSE_SLIDES_SHARED_API bool Equals(const Vector2d64d& other);
    ASPOSE_SLIDES_SHARED_API bool IsNull() const;
    
    ASPOSE_SLIDES_SHARED_API Vector2d64d();
    
    /// <inheritdoc/>
    ASPOSE_SLIDES_SHARED_API System::String ToString() const override;
    
private:

    System::String ToString_NonConst();
    
};

ASPOSE_SLIDES_SHARED_API Vector2d64d operator +(Vector2d64d l, Vector2d64d r);
ASPOSE_SLIDES_SHARED_API Vector2d64d operator -(Vector2d64d l, Vector2d64d r);
ASPOSE_SLIDES_SHARED_API Vector2d64d operator /(Vector2d64d l, int32_t r);
ASPOSE_SLIDES_SHARED_API Vector2d64d operator /(Vector2d64d l, double r);
ASPOSE_SLIDES_SHARED_API Vector2d64d operator *(Vector2d64d l, int32_t r);
ASPOSE_SLIDES_SHARED_API Vector2d64d operator *(Vector2d64d l, double r);
ASPOSE_SLIDES_SHARED_API Vector2d64d operator -(Vector2d64d v);
ASPOSE_SLIDES_SHARED_API bool operator ==(Vector2d64d l, Vector2d64d r);
ASPOSE_SLIDES_SHARED_API bool operator !=(Vector2d64d l, Vector2d64d r);

} // namespace Drawing
} // namespace Slides
} // namespace Aspose


