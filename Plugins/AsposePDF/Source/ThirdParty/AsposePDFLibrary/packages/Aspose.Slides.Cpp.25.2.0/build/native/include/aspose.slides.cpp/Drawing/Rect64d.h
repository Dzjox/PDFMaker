#pragma once

#include <system/object.h>

#include "Drawing/Vector2d64d.h"
#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Drawing {

/// <summary>
/// Rectangle struct
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Rect64d : public System::Object, public System::Details::BoxableObjectBase
{
    typedef Rect64d ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Position
    /// </summary>
    Vector2d64d Pos;
    /// <summary>
    /// Size
    /// </summary>
    Vector2d64d Size;
    
    ASPOSE_SLIDES_SHARED_API Rect64d(Vector2d64d pos, Vector2d64d size);
    ASPOSE_SLIDES_SHARED_API Rect64d(double x, double y, double width, double height);
    
    static ASPOSE_SLIDES_SHARED_API Rect64d Union(Rect64d l, Rect64d r);
    ASPOSE_SLIDES_SHARED_API bool Equals(const Rect64d& other);
    ASPOSE_SLIDES_SHARED_API bool IsNull() const;
    
    ASPOSE_SLIDES_SHARED_API Rect64d();
    
};

} // namespace Drawing
} // namespace Slides
} // namespace Aspose


