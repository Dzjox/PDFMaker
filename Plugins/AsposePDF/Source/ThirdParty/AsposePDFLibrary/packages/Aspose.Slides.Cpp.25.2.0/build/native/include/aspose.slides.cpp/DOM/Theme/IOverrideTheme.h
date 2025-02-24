#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Theme/ITheme.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Theme
{
class IColorScheme;
class IFontScheme;
class IFormatScheme;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents a overriding theme.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IOverrideTheme : public virtual Aspose::Slides::Theme::ITheme
{
    typedef IOverrideTheme ThisType;
    typedef Aspose::Slides::Theme::ITheme BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// True value means that ColorScheme, FontScheme, FormatScheme is null and any overriding with this theme object are disabled.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsEmpty() = 0;
    
    /// <summary>
    /// Init ColorScheme with new object for overriding ColorScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the ColorScheme is already initialized (not null).</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InitColorScheme() = 0;
    /// <summary>
    /// Init ColorScheme with new object for overriding ColorScheme of InheritedTheme.
    /// </summary>
    /// <param name="colorScheme">Data to initialize from.</param>
    /// <exception cref="System::InvalidOperationException">Thrown if the ColorScheme is already initialized (not null).</exception>
    /// <exception cref="System::ArgumentNullException">Thrown if the colorScheme parameter is null.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InitColorSchemeFrom(System::SharedPtr<IColorScheme> colorScheme) = 0;
    /// <summary>
    /// Init ColorScheme with new object for overriding ColorScheme of InheritedTheme. And initialize data of this new object with data of the ColorScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the ColorScheme is already initialized (not null).</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InitColorSchemeFromInherited() = 0;
    /// <summary>
    /// Init FontScheme with new object for overriding FontScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the FontScheme is already initialized (not null).</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InitFontScheme() = 0;
    /// <summary>
    /// Init FontScheme with new object for overriding FontScheme of InheritedTheme.
    /// </summary>
    /// <param name="fontScheme">Data to initialize from.</param>
    /// <exception cref="System::InvalidOperationException">Thrown if the FontScheme is already initialized (not null).</exception>
    /// <exception cref="System::ArgumentNullException">Thrown if the fontScheme parameter is null.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InitFontSchemeFrom(System::SharedPtr<IFontScheme> fontScheme) = 0;
    /// <summary>
    /// Init FontScheme with new object for overriding FontScheme of InheritedTheme. And initialize data of this new object with data of the FontScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the FontScheme is already initialized (not null).</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InitFontSchemeFromInherited() = 0;
    /// <summary>
    /// Init FormatScheme with new object for overriding FormatScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the FormatScheme is already initialized (not null).</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InitFormatScheme() = 0;
    /// <summary>
    /// Init FormatScheme with new object for overriding FormatScheme of InheritedTheme.
    /// </summary>
    /// <param name="formatScheme">Data to initialize from.</param>
    /// <exception cref="System::InvalidOperationException">Thrown if the FormatScheme is already initialized (not null).</exception>
    /// <exception cref="System::ArgumentNullException">Thrown if the formatScheme parameter is null.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InitFormatSchemeFrom(System::SharedPtr<IFormatScheme> formatScheme) = 0;
    /// <summary>
    /// Init FormatScheme with new object for overriding FormatScheme of InheritedTheme. And initialize data of this new object with data of the FormatScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the FormatScheme is already initialized (not null).</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InitFormatSchemeFromInherited() = 0;
    /// <summary>
    /// Set ColorScheme, FontScheme, FormatScheme to null to disable any overriding with this theme object.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


