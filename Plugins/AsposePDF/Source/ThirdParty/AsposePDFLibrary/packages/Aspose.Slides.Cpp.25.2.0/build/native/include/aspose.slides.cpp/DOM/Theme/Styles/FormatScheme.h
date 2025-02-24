#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/event.h>
#include <DOM/Theme/IFormatScheme.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class FormatSchemeTemplate;
class IBaseSlide;
class IFillFormat;
class ILineFormat;
class IPresentation;
class IPresentationComponent;
class MasterThemeTemplate;
namespace PptSerialization
{
class MasterThemePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class FormatSchemePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace Theme
{
class BaseStyles;
class EffectStyleCollection;
class FillFormatCollection;
class FormatSchemeEffectiveData;
class IEffectStyle;
class IEffectStyleCollection;
class IFillFormatCollection;
class IFormatSchemeEffectiveData;
class ILineFormatCollection;
class LineFormatCollection;
class OverrideTheme;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Stores theme-defined formats for the shapes.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FormatScheme : public Aspose::Slides::Theme::IFormatScheme, public Aspose::Slides::IDOMObject
{
    typedef FormatScheme ThisType;
    typedef Aspose::Slides::Theme::IFormatScheme BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Theme::FormatSchemeEffectiveData;
    friend class Aspose::Slides::Theme::BaseStyles;
    friend class Aspose::Slides::Theme::OverrideTheme;
    friend class Aspose::Slides::PptxSerialization::PartParser::FormatSchemePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::MasterThemePPTSerialization;
    friend class Aspose::Slides::FormatSchemeTemplate;
    friend class Aspose::Slides::MasterThemeTemplate;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a collection of theme defined fill styles.
    /// Read-only <see cref="Aspose::Slides::Theme::IFillFormatCollection">IFillFormatCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormatCollection> get_FillStyles() override;
    /// <summary>
    /// Returns a collection of theme defined line styles.
    /// Read-only <see cref="Aspose::Slides::Theme::ILineFormatCollection">ILineFormatCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormatCollection> get_LineStyles() override;
    /// <summary>
    /// Returns a collection of theme defined effect styles.
    /// Read-only <see cref="Aspose::Slides::Theme::IEffectStyleCollection">IEffectStyleCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectStyleCollection> get_EffectStyles() override;
    /// <summary>
    /// Returns a collection of theme defined background fill styles.
    /// Read-only <see cref="Aspose::Slides::Theme::IFillFormatCollection">IFillFormatCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormatCollection> get_BackgroundFillStyles() override;
    /// <summary>
    /// Returns the parent slide.
    /// Read-only <see cref="IBaseSlide"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    /// <summary>
    /// Returns the theme-defined fill style at the specified index.
    /// Read-only <see cref="Aspose::Slides::IFillFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_FillStyle(int32_t index) override;
    /// <summary>
    /// Returns the theme-defined line style at the specified index.
    /// Read-only <see cref="Aspose::Slides::ILineFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_LineStyle(int32_t index) override;
    /// <summary>
    /// Returns the theme-defined effect style at the specified index.
    /// Read-only <see cref="Aspose::Slides::Theme::IEffectStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectStyle> get_EffectStyle(int32_t index) override;
    /// <summary>
    /// Returns the theme-defined background fill style at the specified index.
    /// Read-only <see cref="Aspose::Slides::IFillFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_BackgroundFillStyle(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    ASPOSE_SLIDES_LOCAL_API System::String get_Name();
    ASPOSE_SLIDES_LOCAL_API void set_Name(System::String value);
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    System::Event<void()> FormatSchemeChanged;
    
    ASPOSE_SLIDES_LOCAL_API FormatScheme(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FormatScheme, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void LoadDefaults();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<FormatScheme> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IFormatSchemeEffectiveData> source);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~FormatScheme();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    uint32_t m_version;
    uint32_t m_versionCache;
    System::String m_name;
    System::SharedPtr<FillFormatCollection> m_fillStyles;
    System::SharedPtr<LineFormatCollection> m_lineStyles;
    System::SharedPtr<EffectStyleCollection> m_effectStyles;
    System::SharedPtr<FillFormatCollection> m_bgFillStyles;
    
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnFormatSchemeChanged();
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


