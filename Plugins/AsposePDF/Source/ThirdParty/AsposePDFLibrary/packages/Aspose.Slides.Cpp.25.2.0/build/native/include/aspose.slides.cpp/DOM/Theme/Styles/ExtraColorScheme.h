#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/Theme/IExtraColorScheme.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
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
class ColorSchemePPTSerialization;
class MasterThemePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class ExtraColorSchemePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace Theme
{
class BaseOverrideThemeManager;
class ColorMapping;
class ColorScheme;
class ExtraColorSchemeCollection;
class IColorScheme;
class MasterThemeManager;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents an additional color scheme which can be assigned to a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ExtraColorScheme : public Aspose::Slides::Theme::IExtraColorScheme, public Aspose::Slides::IDOMObject
{
    typedef ExtraColorScheme ThisType;
    typedef Aspose::Slides::Theme::IExtraColorScheme BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Theme::ExtraColorSchemeCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::ExtraColorSchemePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::ColorSchemePPTSerialization;
    friend class Aspose::Slides::PptSerialization::MasterThemePPTSerialization;
    friend class Aspose::Slides::Theme::BaseOverrideThemeManager;
    friend class Aspose::Slides::Theme::MasterThemeManager;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a name of this scheme.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Returns a color scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IColorScheme">IColorScheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorScheme> get_ColorScheme() override;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_ColorFormat(ColorSchemeIndex index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Theme::ColorMapping> get_ColorMapping();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    System::Event<void()> ExtraColorSchemeChanged;
    
    ASPOSE_SLIDES_LOCAL_API ExtraColorScheme(System::SharedPtr<ExtraColorSchemeCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ExtraColorScheme, CODEPORTING_ARGS(System::SharedPtr<ExtraColorSchemeCollection> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ExtraColorScheme(System::SharedPtr<ExtraColorSchemeCollection> parentImmediate, bool colorMappingOn);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ExtraColorScheme, CODEPORTING_ARGS(System::SharedPtr<ExtraColorSchemeCollection> parentImmediate, bool colorMappingOn));
    
    virtual ASPOSE_SLIDES_SHARED_API ~ExtraColorScheme();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<Aspose::Slides::Theme::ColorScheme> m_scheme;
    System::SharedPtr<Aspose::Slides::Theme::ColorMapping> m_mapping;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    uint32_t m_versionCache;
    
    ASPOSE_SLIDES_LOCAL_API void OnExtraColorSchemeChanged();
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


