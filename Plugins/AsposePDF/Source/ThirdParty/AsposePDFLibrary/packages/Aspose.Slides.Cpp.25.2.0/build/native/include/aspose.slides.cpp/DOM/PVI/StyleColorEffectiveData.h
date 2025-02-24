#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
template <typename, typename> class AccessibleEffectiveData;
template <typename, typename> class BasePortionFormatEffectiveData;
class BulletFormatEffectiveData;
class ColorEffectiveData;
class ColorFormat;
namespace Effects
{
template <typename, typename> class EffectEffectiveData;
} // namespace Effects
class FloatColor;
class GeometryShapeLayout;
class TextLayout;
namespace Theme
{
class FormatSchemeEffectiveData;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

class ASPOSE_SLIDES_SHARED_CLASS StyleColorEffectiveData : public System::Object
{
    typedef StyleColorEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::GeometryShapeLayout;
    template<typename FT0, typename FT1> friend class Aspose::Slides::AccessibleEffectiveData;
    template<typename FT0, typename FT1> friend class Aspose::Slides::BasePortionFormatEffectiveData;
    friend class Aspose::Slides::BulletFormatEffectiveData;
    template<typename FT0, typename FT1> friend class Aspose::Slides::Effects::EffectEffectiveData;
    friend class Aspose::Slides::Theme::FormatSchemeEffectiveData;
    friend class Aspose::Slides::ColorEffectiveData;
    friend class Aspose::Slides::TextLayout;
    /// @endcond
    
public:

    /// <summary>
    /// StyleColorFormatUnresolved.
    /// Read-only <see cref="Aspose::Slides::ColorFormat">ColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ColorFormat> get_StyleColorFormatUnresolved();
    
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<StyleColorEffectiveData> Empty;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FloatColor> get_StyleColor();
    
    ASPOSE_SLIDES_LOCAL_API StyleColorEffectiveData(System::SharedPtr<FloatColor> styleColor, System::SharedPtr<ColorFormat> styleColorFormatUnresolved);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StyleColorEffectiveData, CODEPORTING_ARGS(System::SharedPtr<FloatColor> styleColor, System::SharedPtr<ColorFormat> styleColorFormatUnresolved));
    
    virtual ASPOSE_SLIDES_SHARED_API ~StyleColorEffectiveData();
    
private:

    System::SharedPtr<FloatColor> m_styleColor;
    System::WeakPtr<ColorFormat> m_styleColorFormatUnresolved;
    
};

} // namespace Slides
} // namespace Aspose


