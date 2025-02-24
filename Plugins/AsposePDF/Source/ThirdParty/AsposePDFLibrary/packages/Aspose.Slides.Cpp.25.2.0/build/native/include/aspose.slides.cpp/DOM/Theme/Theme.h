#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Theme/ITheme.h>

#include "DOM/PVI/IPVIObject.h"
#include "DOM/IStyleColorOwner.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlide;
enum class ColorSchemeIndex : uint8_t;
class FontsManager;
class IColorFormat;
class IDOMObject;
class IPresentation;
class IPresentationComponent;
namespace Theme
{
class BaseOverrideThemeManager;
class IColorScheme;
class IFontScheme;
class IFormatScheme;
class IThemeable;
class IThemeEffectiveData;
class IThemeManager;
class MasterTheme;
class OverrideTheme;
class ThemeEffectiveData;
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
class ASPOSE_SLIDES_SHARED_CLASS Theme : public virtual Aspose::Slides::Theme::ITheme, public Aspose::Slides::IStyleColorOwner, public Aspose::Slides::IPVIObject
{
    typedef Theme ThisType;
    typedef Aspose::Slides::Theme::ITheme BaseType;
    typedef Aspose::Slides::IStyleColorOwner BaseType1;
    typedef Aspose::Slides::IPVIObject BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::Theme::ThemeEffectiveData;
    friend class Aspose::Slides::FontsManager;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::Theme::MasterTheme;
    friend class Aspose::Slides::Theme::OverrideTheme;
    friend class Aspose::Slides::Theme::BaseOverrideThemeManager;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the color scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IColorScheme">IColorScheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorScheme> get_ColorScheme() override = 0;
    /// <summary>
    /// Returns the font scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IFontScheme">IFontScheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontScheme> get_FontScheme() override = 0;
    /// <summary>
    /// Returns the shape format scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IFormatScheme">IFormatScheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormatScheme> get_FormatScheme() override = 0;
    /// <summary>
    /// Returns the parent presentation.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    /// <summary>
    /// Gets effective theme data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Theme::IThemeEffectiveData">IThemeEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates getting effective theme properties.
    /// <code>
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto effectiveTheme = pres->get_Slides()->idx_get(0)->get_ThemeManager()->get_OverrideTheme()->GetEffective();
    /// 
    /// Console::WriteLine(String(u"Font scheme name: ") + effectiveTheme->get_FontScheme()->get_Name());
    /// Console::WriteLine(String(u"Major latin font: ") + effectiveTheme->get_FontScheme()->get_Major()->get_LatinFont()->get_FontName());
    /// Console::WriteLine(String(u"Minor latin font: ") + effectiveTheme->get_FontScheme()->get_Minor()->get_LatinFont()->get_FontName());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IThemeEffectiveData> GetEffective() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_ColorFormat(ColorSchemeIndex index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent() override;
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version() override = 0;
    
    ASPOSE_SLIDES_LOCAL_API Theme(System::SharedPtr<IDOMObject> parentImmediate);
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ThemeEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API void ClearEffective();
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IThemeManager> GetThemeManager(System::SharedPtr<IThemeable> themeableObj);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Theme();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    System::SharedPtr<ThemeEffectiveData> m_effective;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


