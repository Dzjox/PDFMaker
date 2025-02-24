#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IPresentationComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class ColorSchemeIndex : uint8_t;
class IColorFormat;
namespace Theme
{
class IColorScheme;
class IFontScheme;
class IFormatScheme;
class IThemeEffectiveData;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents a theme.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITheme : public Aspose::Slides::IPresentationComponent
{
    typedef ITheme ThisType;
    typedef Aspose::Slides::IPresentationComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the color scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IColorScheme">IColorScheme</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorScheme> get_ColorScheme() = 0;
    /// <summary>
    /// Returns the font scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IFontScheme">IFontScheme</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontScheme> get_FontScheme() = 0;
    /// <summary>
    /// Returns the shape format scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IFormatScheme">IFormatScheme</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormatScheme> get_FormatScheme() = 0;
    
    /// <summary>
    /// Gets effective theme data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Theme::IThemeEffectiveData">IThemeEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IThemeEffectiveData> GetEffective() = 0;
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_ColorFormat(ColorSchemeIndex index) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


