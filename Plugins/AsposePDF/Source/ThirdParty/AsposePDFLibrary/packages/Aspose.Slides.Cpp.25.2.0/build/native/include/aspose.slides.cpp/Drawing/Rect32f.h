#pragma once

#include <system/object.h>

#include "Drawing/Vector2d32f.h"
#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Drawing {

/// <summary>
/// Rectangle struct
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Rect32f : public System::Object, public System::Details::BoxableObjectBase
{
    typedef Rect32f ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend ASPOSE_SLIDES_SHARED_API bool operator ==(Rect32f l, Rect32f r);
    friend ASPOSE_SLIDES_SHARED_API bool operator !=(Rect32f l, Rect32f r);
    /// @endcond
    
public:

    /// <summary>
    /// Position
    /// </summary>
    Vector2d32f Pos;
    /// <summary>
    /// Size
    /// </summary>
    Vector2d32f Size;
    
    ASPOSE_SLIDES_SHARED_API Vector2d32f get_RightBottom();
    
    ASPOSE_SLIDES_SHARED_API Rect32f(Vector2d32f pos, Vector2d32f size);
    ASPOSE_SLIDES_SHARED_API Rect32f(float x, float y, float width, float height);
    
    static ASPOSE_SLIDES_SHARED_API Rect32f Union(Rect32f l, Rect32f r);
    ASPOSE_SLIDES_SHARED_API bool Equals(const Rect32f& other);
    ASPOSE_SLIDES_SHARED_API bool IsNull() const;
    
    ASPOSE_SLIDES_SHARED_API Rect32f();
    
};

ASPOSE_SLIDES_SHARED_API bool operator ==(Rect32f l, Rect32f r);
ASPOSE_SLIDES_SHARED_API bool operator !=(Rect32f l, Rect32f r);

} // namespace Drawing
} // namespace Slides
} // namespace Aspose


