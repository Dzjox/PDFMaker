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
class Vector2d64d;
} // namespace Drawing
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Drawing {

/// <summary>
/// 2D vector with <see cref="float"></see> components
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Vector2d32f : public System::Object, public System::Details::BoxableObjectBase
{
    typedef Vector2d32f ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend ASPOSE_SLIDES_SHARED_API Vector2d32f operator +(Vector2d32f l, Vector2d32f r);
    friend ASPOSE_SLIDES_SHARED_API Vector2d32f operator -(Vector2d32f l, Vector2d32f r);
    friend ASPOSE_SLIDES_SHARED_API Vector2d32f operator /(Vector2d32f l, int32_t r);
    friend ASPOSE_SLIDES_SHARED_API Vector2d32f operator *(Vector2d32f l, float r);
    friend ASPOSE_SLIDES_SHARED_API Vector2d32f operator -(Vector2d32f v);
    friend ASPOSE_SLIDES_SHARED_API bool operator ==(Vector2d32f l, Vector2d32f r);
    friend ASPOSE_SLIDES_SHARED_API bool operator !=(Vector2d32f l, Vector2d32f r);
    /// @endcond
    
public:

    /// <summary>
    /// X
    /// </summary>
    float X;
    /// <summary>
    /// Y
    /// </summary>
    float Y;
    static ASPOSE_SLIDES_SHARED_API Vector2d32f Zero;
    static ASPOSE_SLIDES_SHARED_API Vector2d32f One;
    
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="x"></param>
    /// <param name="y"></param>
    ASPOSE_SLIDES_SHARED_API Vector2d32f(float x, float y);
    
    /// <summary>
    /// Swap X and Y
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void SwapXY();
    /// <summary>
    /// To <see cref="Aspose::Slides::Drawing::Vector2d64d">Vector2d64d</see>
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API Vector2d64d ToVector2d64d();
    /// <summary>
    /// Scale vector
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API Vector2d32f Scale(float scaleX, float scaleY);
    /// <summary>
    /// Scale vector
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API Vector2d32f Scale(Vector2d32f scale);
    static ASPOSE_SLIDES_SHARED_API Vector2d32f Min(Vector2d32f l, Vector2d32f r);
    static ASPOSE_SLIDES_SHARED_API Vector2d32f Max(Vector2d32f l, Vector2d32f r);
    /// <summary>
    /// Get length
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API double GetLength();
    ASPOSE_SLIDES_SHARED_API bool Equals(const Vector2d32f& other);
    ASPOSE_SLIDES_SHARED_API bool IsNull() const;
    
    ASPOSE_SLIDES_SHARED_API Vector2d32f();
    
    ASPOSE_SLIDES_SHARED_API System::String ToString() const override;
    
private:

    System::String ToString_NonConst();
    
};

ASPOSE_SLIDES_SHARED_API Vector2d32f operator +(Vector2d32f l, Vector2d32f r);
ASPOSE_SLIDES_SHARED_API Vector2d32f operator -(Vector2d32f l, Vector2d32f r);
ASPOSE_SLIDES_SHARED_API Vector2d32f operator /(Vector2d32f l, int32_t r);
ASPOSE_SLIDES_SHARED_API Vector2d32f operator *(Vector2d32f l, float r);
ASPOSE_SLIDES_SHARED_API Vector2d32f operator -(Vector2d32f v);
ASPOSE_SLIDES_SHARED_API bool operator ==(Vector2d32f l, Vector2d32f r);
ASPOSE_SLIDES_SHARED_API bool operator !=(Vector2d32f l, Vector2d32f r);

} // namespace Drawing
} // namespace Slides
} // namespace Aspose


