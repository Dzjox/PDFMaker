#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

class ASPOSE_SLIDES_SHARED_CLASS FloatColor : public System::Object
{
    typedef FloatColor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class System::ObjectExt;
    /// @endcond
    
public:

    float A, R, G, B;
    
    ASPOSE_SLIDES_SHARED_API System::Drawing::Color get_Color();
    
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FloatColor> Black;
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FloatColor> White;
    
    ASPOSE_SLIDES_SHARED_API FloatColor(float r, float g, float b);
    ASPOSE_SLIDES_SHARED_API FloatColor(float a, float r, float g, float b);
    ASPOSE_SLIDES_SHARED_API FloatColor(System::SharedPtr<FloatColor> color);
    ASPOSE_SLIDES_SHARED_API FloatColor(System::Drawing::Color c);
    
    ASPOSE_SLIDES_SHARED_API void SetHSL(float hue, float saturation, float luminance);
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FloatColor> FromHSL(float hue, float saturation, float luminance);
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<FloatColor> fc);
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    static ASPOSE_SLIDES_SHARED_API float limit(float value, float min, float max);
    
protected:

    virtual ASPOSE_SLIDES_SHARED_API ~FloatColor();
    
private:

    static ASPOSE_SLIDES_LOCAL_API int32_t GetHashCode(float value);
    static ASPOSE_SLIDES_LOCAL_API float CheckRange(float value);
    static ASPOSE_SLIDES_LOCAL_API float colorComp(float p, float q, float t);
    
};

} // namespace Slides
} // namespace Aspose


