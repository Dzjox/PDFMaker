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
class Margin64d;
class Vector2d32f;
} // namespace Drawing
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Drawing {

/// <summary>
/// Margin
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Margin32f : public System::Object, public System::Details::BoxableObjectBase
{
    typedef Margin32f ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend ASPOSE_SLIDES_SHARED_API Margin32f operator *(Margin32f l, float r);
    friend ASPOSE_SLIDES_SHARED_API Margin32f operator /(Margin32f l, int32_t r);
    /// @endcond
    
public:

    static ASPOSE_SLIDES_SHARED_API Margin32f Zero;
    float Left;
    float Top;
    float Right;
    float Bottom;
    
    ASPOSE_SLIDES_SHARED_API bool get_IsDefined();
    
    ASPOSE_SLIDES_SHARED_API Margin32f(Vector2d32f leftTop, Vector2d32f rightBottom);
    ASPOSE_SLIDES_SHARED_API Margin32f(float left, float top, float right, float bottom);
    
    ASPOSE_SLIDES_SHARED_API Margin32f Merge(Margin32f source);
    ASPOSE_SLIDES_SHARED_API Margin64d ToMargin64d();
    ASPOSE_SLIDES_SHARED_API bool Equals(const Margin32f& other);
    ASPOSE_SLIDES_SHARED_API bool IsNull() const;
    
    ASPOSE_SLIDES_SHARED_API Margin32f();
    
    ASPOSE_SLIDES_SHARED_API System::String ToString() const override;
    
private:

    System::String ToString_NonConst();
    
};

ASPOSE_SLIDES_SHARED_API Margin32f operator *(Margin32f l, float r);
ASPOSE_SLIDES_SHARED_API Margin32f operator /(Margin32f l, int32_t r);

} // namespace Drawing
} // namespace Slides
} // namespace Aspose


