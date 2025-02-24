#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Theme/IOverrideTheme.h>
#include <cstdint>

#include "DOM/Theme/Theme.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class ColorSchemeIndex : uint8_t;
class IColorFormat;
namespace PptSerialization
{
class MasterSlideRoundTripSerialization;
} // namespace PptSerialization
namespace Theme
{
class BaseOverrideThemeManager;
class ColorScheme;
class FontScheme;
class FormatScheme;
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
class ASPOSE_SLIDES_SHARED_CLASS OverrideTheme final : public Aspose::Slides::Theme::Theme, public Aspose::Slides::Theme::IOverrideTheme
{
    typedef OverrideTheme ThisType;
    typedef Aspose::Slides::Theme::Theme BaseType;
    typedef Aspose::Slides::Theme::IOverrideTheme BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptSerialization::MasterSlideRoundTripSerialization;
    friend class Aspose::Slides::Theme::BaseOverrideThemeManager;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the color scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IColorScheme">IColorScheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorScheme> get_ColorScheme() override;
    /// <summary>
    /// Returns the font scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IFontScheme">IFontScheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontScheme> get_FontScheme() override;
    /// <summary>
    /// Returns the shape format scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IFormatScheme">IFormatScheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormatScheme> get_FormatScheme() override;
    /// <summary>
    /// True value means that ColorScheme, FontScheme, FormatScheme is null and any overriding with this theme object are disabled.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsEmpty() override;
    
    /// <summary>
    /// Init ColorScheme with new object for overriding ColorScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the ColorScheme is already initialized (not null).</exception>
    ASPOSE_SLIDES_SHARED_API void InitColorScheme() override;
    /// <summary>
    /// Init ColorScheme with new object for overriding ColorScheme of InheritedTheme.
    /// </summary>
    /// <param name="colorScheme">Data to initialize from.</param>
    /// <exception cref="System::InvalidOperationException">Thrown if the ColorScheme is already initialized (not null).</exception>
    /// <exception cref="System::ArgumentNullException">Thrown if the colorScheme parameter is null.</exception>
    ASPOSE_SLIDES_SHARED_API void InitColorSchemeFrom(System::SharedPtr<IColorScheme> colorScheme) override;
    /// <summary>
    /// Init ColorScheme with new object for overriding ColorScheme of InheritedTheme. And initialize data of this new object with data of the ColorScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the ColorScheme is already initialized (not null).</exception>
    ASPOSE_SLIDES_SHARED_API void InitColorSchemeFromInherited() override;
    /// <summary>
    /// Init FontScheme with new object for overriding FontScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the FontScheme is already initialized (not null).</exception>
    ASPOSE_SLIDES_SHARED_API void InitFontScheme() override;
    /// <summary>
    /// Init FontScheme with new object for overriding FontScheme of InheritedTheme.
    /// </summary>
    /// <param name="fontScheme">Data to initialize from.</param>
    /// <exception cref="System::InvalidOperationException">Thrown if the FontScheme is already initialized (not null).</exception>
    /// <exception cref="System::ArgumentNullException">Thrown if the fontScheme parameter is null.</exception>
    ASPOSE_SLIDES_SHARED_API void InitFontSchemeFrom(System::SharedPtr<IFontScheme> fontScheme) override;
    /// <summary>
    /// Init FontScheme with new object for overriding FontScheme of InheritedTheme. And initialize data of this new object with data of the FontScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the FontScheme is already initialized (not null).</exception>
    ASPOSE_SLIDES_SHARED_API void InitFontSchemeFromInherited() override;
    /// <summary>
    /// Init FormatScheme with new object for overriding FormatScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the FormatScheme is already initialized (not null).</exception>
    ASPOSE_SLIDES_SHARED_API void InitFormatScheme() override;
    /// <summary>
    /// Init FormatScheme with new object for overriding FormatScheme of InheritedTheme.
    /// </summary>
    /// <param name="formatScheme">Data to initialize from.</param>
    /// <exception cref="System::InvalidOperationException">Thrown if the FormatScheme is already initialized (not null).</exception>
    /// <exception cref="System::ArgumentNullException">Thrown if the formatScheme parameter is null.</exception>
    ASPOSE_SLIDES_SHARED_API void InitFormatSchemeFrom(System::SharedPtr<IFormatScheme> formatScheme) override;
    /// <summary>
    /// Init FormatScheme with new object for overriding FormatScheme of InheritedTheme. And initialize data of this new object with data of the FormatScheme of InheritedTheme.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown if the FormatScheme is already initialized (not null).</exception>
    ASPOSE_SLIDES_SHARED_API void InitFormatSchemeFromInherited() override;
    /// <summary>
    /// Set ColorScheme, FontScheme, FormatScheme to null to disable any overriding with this theme object.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_ColorFormat(ColorSchemeIndex index) override;
    
protected:

    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API OverrideTheme(System::SharedPtr<BaseOverrideThemeManager> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OverrideTheme, CODEPORTING_ARGS(System::SharedPtr<BaseOverrideThemeManager> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Theme::ColorScheme> GetOrCreateColorScheme();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~OverrideTheme();
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BaseOverrideThemeManager> get_ParentManager();
    
    System::SharedPtr<Aspose::Slides::Theme::ColorScheme> m_colorScheme;
    System::SharedPtr<Aspose::Slides::Theme::FontScheme> m_fontScheme;
    System::SharedPtr<Aspose::Slides::Theme::FormatScheme> m_formatScheme;
    uint32_t m_version;
    uint32_t m_versionCache;
    
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnOverrideThemeChanged();
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


