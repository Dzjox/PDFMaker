#pragma once

#include <system/string.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Drawing
{
class Margin32f;
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
class ASPOSE_SLIDES_SHARED_CLASS Margin64d : public System::Object, public System::Details::BoxableObjectBase
{
    typedef Margin64d ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend ASPOSE_SLIDES_SHARED_API Margin64d operator *(Margin64d l, double r);
    friend ASPOSE_SLIDES_SHARED_API Margin64d operator /(Margin64d l, double r);
    friend ASPOSE_SLIDES_SHARED_API bool operator ==(Margin64d l, Margin64d r);
    friend ASPOSE_SLIDES_SHARED_API bool operator !=(Margin64d l, Margin64d r);
    /// @endcond
    
public:

    static ASPOSE_SLIDES_SHARED_API Margin64d Zero;
    double Left;
    double Top;
    double Right;
    double Bottom;
    
    ASPOSE_SLIDES_SHARED_API Margin64d(double left, double top, double right, double bottom);
    ASPOSE_SLIDES_SHARED_API Margin64d(double value);
    
    ASPOSE_SLIDES_SHARED_API Margin64d Merge(Margin64d source);
    ASPOSE_SLIDES_SHARED_API Margin32f ToMargin32F();
    ASPOSE_SLIDES_SHARED_API bool Equals(const Margin64d& other);
    ASPOSE_SLIDES_SHARED_API bool IsNull() const;
    
    ASPOSE_SLIDES_SHARED_API Margin64d();
    
    ASPOSE_SLIDES_SHARED_API System::String ToString() const override;
    
private:

    System::String ToString_NonConst();
    
};

ASPOSE_SLIDES_SHARED_API Margin64d operator *(Margin64d l, double r);
ASPOSE_SLIDES_SHARED_API Margin64d operator /(Margin64d l, double r);
ASPOSE_SLIDES_SHARED_API bool operator ==(Margin64d l, Margin64d r);
ASPOSE_SLIDES_SHARED_API bool operator !=(Margin64d l, Margin64d r);

} // namespace Drawing
} // namespace Slides
} // namespace Aspose


