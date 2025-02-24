#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IMasterSlide.h>

#include "DOM/BaseSlide.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ILayoutSlide;
class IMasterLayoutSlideCollection;
class IMasterSlideHeaderFooterManager;
class ISlide;
class ITextStyle;
class MasterLayoutSlideCollection;
class MasterSlideCollection;
class MasterSlideHeaderFooterManager;
class MasterSlideTemplate;
namespace OdpSerialization
{
namespace PartParser
{
class MasterPageOdpDeserialization;
class OdpStylesPartParser;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptSerialization
{
class LayoutSlidePPTSerialization;
class MasterSlidePPTSerialization;
class MasterSlideRoundTripSerialization;
class PptDeserializator;
class PptSerializationContext;
class PptSlideDeserializationContext;
class PptSlideSerializationContext;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class PresentationPartParser;
class SlideLayoutPartParser;
class SlideMasterPartParser;
} // namespace PartParser
} // namespace PptxSerialization
class Presentation;
class PresentationHeaderFooterManager;
class SlideCollection;
enum class SlideLayoutType : int8_t;
class TextStyle;
namespace Theme
{
class IMasterThemeManager;
class MasterThemeManager;
} // namespace Theme
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class BaseSlidePPTUnsupportedProps;
class MasterSlidePPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class BaseSlidePPTXUnsupportedProps;
class MasterSlidePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a master slide in a presentation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MasterSlide : public Aspose::Slides::BaseSlide, public Aspose::Slides::IMasterSlide
{
    typedef MasterSlide ThisType;
    typedef Aspose::Slides::BaseSlide BaseType;
    typedef Aspose::Slides::IMasterSlide BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PresentationHeaderFooterManager;
    friend class Aspose::Slides::PptSerialization::PptSlideDeserializationContext;
    friend class Aspose::Slides::PptSerialization::PptSlideSerializationContext;
    friend class Aspose::Slides::OdpSerialization::PartParser::MasterPageOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::OdpStylesPartParser;
    friend class Aspose::Slides::PptSerialization::MasterSlideRoundTripSerialization;
    friend class Aspose::Slides::MasterSlideCollection;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::PptSerialization::PptSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::PresentationPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::SlideLayoutPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::SlideMasterPartParser;
    friend class Aspose::Slides::PptSerialization::LayoutSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::MasterSlidePPTSerialization;
    friend class Aspose::Slides::MasterSlideTemplate;
    /// @endcond
    
public:

    /// <summary>
    /// Returns HeaderFooter manager of the master slide.
    /// Read-only <see cref="Aspose::Slides::IMasterSlideHeaderFooterManager">IMasterSlideHeaderFooterManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterSlideHeaderFooterManager> get_HeaderFooterManager() override;
    /// <summary>
    /// Returns the style of a title text.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextStyle> get_TitleStyle() override;
    /// <summary>
    /// Returns the style of a body text.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextStyle> get_BodyStyle() override;
    /// <summary>
    /// Returns the style of an other text.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextStyle> get_OtherStyle() override;
    /// <summary>
    /// Returns the collection of child layout slides for this master slide.
    /// Read-only <see cref="Aspose::Slides::IMasterLayoutSlideCollection">IMasterLayoutSlideCollection</see>.
    /// </summary>
    /// <remarks>
    /// You can access to alternative API for adding/inserting/removing/cloning layout slides 
    /// by using <see cref="Aspose::Slides::IPresentation::get_LayoutSlides">IPresentation::get_LayoutSlides()</see> property.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterLayoutSlideCollection> get_LayoutSlides() override;
    /// <summary>
    /// Determines whether the corresponding master is deleted when all the slides that follow that master are deleted.
    /// Note: Aspose.Slides will never remove any unused master by itself, to actually remove unused masters call <see cref="MasterSlideCollection::RemoveUnused"></see>
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Preserve() override;
    /// <summary>
    /// Determines whether the corresponding master is deleted when all the slides that follow that master are deleted.
    /// Note: Aspose.Slides will never remove any unused master by itself, to actually remove unused masters call <see cref="MasterSlideCollection::RemoveUnused"></see>
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Preserve(bool value) override;
    /// <summary>
    /// Returns true if there exists at least one slide that depends on this master slide.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasDependingSlides() override;
    /// <summary>
    /// Returns the theme manager.
    /// Read-only <see cref="Aspose::Slides::Theme::IMasterThemeManager">Theme::IMasterThemeManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Theme::IMasterThemeManager> get_ThemeManager() override;
    /// <summary>
    /// Returns the name of a master slide.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Sets the name of a master slide.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::String value) override;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// For master slide itself this property always returns <c>false</c>.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <exception cref="System::NotSupportedException">Thrown if set <c>true</c> for master slide.</exception>
    ASPOSE_SLIDES_SHARED_API bool get_ShowMasterShapes() override;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// For master slide itself this property always returns <c>false</c>.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <exception cref="System::NotSupportedException">Thrown if set <c>true</c> for master slide.</exception>
    ASPOSE_SLIDES_SHARED_API void set_ShowMasterShapes(bool value) override;
    
    /// <summary>
    /// Creates a new master slide based on the current one, applying an external theme to it 
    /// and applies the created master slide to all dependent slides.
    /// </summary>
    /// <param name="fname">Path to the external theme file (.thmx).</param>
    /// <exception cref="PptxReadException">When external theme cannot be applied.</exception>
    /// <returns>New themed MasterSlide.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterSlide> ApplyExternalThemeToDependingSlides(System::String fname) override;
    /// <summary>
    /// Returns an array with all slides, which depend on this master slide.
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> GetDependingSlides() override;
    
protected:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::BaseSlidePPTXUnsupportedProps> get_BaseSlidePPTXUnsupportedProps() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::BaseSlidePPTUnsupportedProps> get_BaseSlidePPTUnsupportedProps() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::MasterSlidePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::MasterSlidePPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MasterSlideHeaderFooterManager> get_HeaderFooterManagerInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ITextStyle> get_LegacyPPT_NotesStyle();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ITextStyle> get_LegacyPPT_CenterTitleStyle();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ITextStyle> get_LegacyPPT_CenterBodyStyle();
    
    System::SharedPtr<MasterLayoutSlideCollection> m_layouts;
    System::SharedPtr<TextStyle> m_titleStyle, m_bodyStyle, m_legacyPPT_notesStyle, m_legacyPPT_centerTitleStyle, m_legacyPPT_centerBodyStyle, m_otherStyle;
    bool m_preserve;
    
    ASPOSE_SLIDES_LOCAL_API MasterSlide(System::SharedPtr<MasterSlideCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MasterSlide, CODEPORTING_ARGS(System::SharedPtr<MasterSlideCollection> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ILayoutSlide> AddEmptyLayout(SlideLayoutType layoutType);
    ASPOSE_SLIDES_LOCAL_API void FillPlaceholders();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API void ScaleGeometry(float scalingCoefX, float scalingCoefY, float scalingContentCoef) override;
    ASPOSE_SLIDES_SHARED_API void LocateGeometry(float locatingCoefX, float locatingCoefY) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MasterSlide();
    
private:

    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::MasterSlidePPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::MasterSlidePPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<MasterSlideHeaderFooterManager> m_headerFooterManager;
    System::SharedPtr<Theme::MasterThemeManager> m_themeManager;
    
};

} // namespace Slides
} // namespace Aspose


