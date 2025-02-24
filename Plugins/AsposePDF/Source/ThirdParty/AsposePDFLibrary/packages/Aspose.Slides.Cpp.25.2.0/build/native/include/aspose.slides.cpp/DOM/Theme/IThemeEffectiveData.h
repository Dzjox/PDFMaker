#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Theme
{
class IColorSchemeEffectiveData;
class IFontSchemeEffectiveData;
class IFormatSchemeEffectiveData;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
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

namespace Theme {

/// <summary>
/// Immutable object which contains effective theme properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::Theme::ITheme">ITheme</see> interface to return effective formatting values with inheritance applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IThemeEffectiveData : public virtual System::Object
{
    typedef IThemeEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the font scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IFontSchemeEffectiveData">IFontSchemeEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontSchemeEffectiveData> get_FontScheme() = 0;
    /// <summary>
    /// Returns the shape format scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IFormatSchemeEffectiveData">IFormatSchemeEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormatSchemeEffectiveData> get_FormatScheme() = 0;
    
    /// <summary>
    /// Returns the color scheme.
    /// </summary>
    /// <param name="styleColor">Color <see cref="System::Drawing::Color"></see></param>
    /// <returns>Color scheme <see cref="Aspose::Slides::Theme::IColorSchemeEffectiveData">IColorSchemeEffectiveData</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorSchemeEffectiveData> GetColorScheme(System::Drawing::Color styleColor) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


