#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/ILayoutSlide.h>

#include "DOM/BaseSlide.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class ExportNotesSlides;
} // namespace Export
class ILayoutPlaceholderManager;
class ILayoutSlideHeaderFooterManager;
class IMasterSlide;
class IPlaceholder;
class ISlide;
class LayoutPlaceholderManager;
class LayoutSlideCollection;
class LayoutSlideHeaderFooterManager;
class LayoutTemplatesContext;
class MasterSlide;
namespace OdpSerialization
{
namespace PartParser
{
class OdpStylesPartParser;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptSerialization
{
class BaseSlidePPTSerialization;
class LayoutSlidePPTSerialization;
class PptSlideSerializationContext;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class LayoutSlidePPTXSerialization;
class PresentationPartParser;
class SlideLayoutPartParser;
class SlideMasterPartParser;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
class PresentationHeaderFooterManager;
class Shape;
enum class SlideLayoutType : int8_t;
namespace Theme
{
class IOverrideThemeManager;
class LayoutSlideThemeManager;
} // namespace Theme
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class BaseSlidePPTUnsupportedProps;
class SlideOrLayoutPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class BaseSlidePPTXUnsupportedProps;
class LayoutSlidePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a layout slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS LayoutSlide final : public Aspose::Slides::BaseSlide, public Aspose::Slides::ILayoutSlide
{
    typedef LayoutSlide ThisType;
    typedef Aspose::Slides::BaseSlide BaseType;
    typedef Aspose::Slides::ILayoutSlide BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PresentationHeaderFooterManager;
    friend class Aspose::Slides::LayoutSlideCollection;
    friend class Aspose::Slides::LayoutTemplatesContext;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::PptSerialization::PptSlideSerializationContext;
    friend class Aspose::Slides::OdpSerialization::PartParser::OdpStylesPartParser;
    friend class Aspose::Slides::MasterSlide;
    friend class Aspose::Slides::PptxSerialization::PartParser::LayoutSlidePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PresentationPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::SlideLayoutPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::SlideMasterPartParser;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptSerialization::BaseSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::LayoutSlidePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns HeaderFooter manager of the layout slide.
    /// Read-only <see cref="Aspose::Slides::ILayoutSlideHeaderFooterManager">ILayoutSlideHeaderFooterManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILayoutSlideHeaderFooterManager> get_HeaderFooterManager() override;
    /// <summary>
    /// Returns the placeholder manager of the layout slide.
    /// Read-only <see cref="Aspose::Slides::ILayoutPlaceholderManager">ILayoutPlaceholderManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILayoutPlaceholderManager> get_PlaceholderManager() override;
    /// <summary>
    /// Returns the master slide for a layout.
    /// Read <see cref="Aspose::Slides::IMasterSlide">IMasterSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterSlide> get_MasterSlide() override;
    /// <summary>
    /// Sets the master slide for a layout.
    /// Write <see cref="Aspose::Slides::IMasterSlide">IMasterSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MasterSlide(System::SharedPtr<IMasterSlide> value) override;
    /// <summary>
    /// Returns the overriding theme manager.
    /// Read-only <see cref="Aspose::Slides::Theme::IOverrideThemeManager">Theme::IOverrideThemeManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Theme::IOverrideThemeManager> get_ThemeManager() override;
    /// <summary>
    /// Returns layout type of this layout slide.
    /// Read-only <see cref="SlideLayoutType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API SlideLayoutType get_LayoutType() override;
    /// <summary>
    /// Returns true if there exists at least one slide that depends on this layout slide.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasDependingSlides() override;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowMasterShapes() override;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowMasterShapes(bool value) override;
    
    /// <summary>
    /// Removes layout from presentation.
    /// </summary>
    /// <exception cref="PptxEditException">
    /// Thrown if layout is already removed from presentation or if layout is used in presentation (its 
    /// HasDependingSlides property is true).
    /// </exception>
    /// <remarks>
    /// To avoid throwing of the PptxEditException check layout's HasDependingSlides property before.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void Remove() override;
    /// <summary>
    /// Returns an array with all slides, which depend on this layout slide.
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlide>> GetDependingSlides() override;
    
protected:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::BaseSlidePPTXUnsupportedProps> get_BaseSlidePPTXUnsupportedProps() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::BaseSlidePPTUnsupportedProps> get_BaseSlidePPTUnsupportedProps() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::LayoutSlidePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::SlideOrLayoutPPTUnsupportedProps> get_PPTUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API LayoutSlide(System::SharedPtr<IMasterSlide> masterSlide, SlideLayoutType layoutType);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LayoutSlide, CODEPORTING_ARGS(System::SharedPtr<IMasterSlide> masterSlide, SlideLayoutType layoutType));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SubscribeForChangesInPlaceholders();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<Shape>> GetPlaceholders(System::SharedPtr<IPlaceholder> placeholder) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~LayoutSlide();
    
private:

    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::LayoutSlidePPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::SlideOrLayoutPPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<LayoutSlideHeaderFooterManager> m_headerFooterManager;
    System::SharedPtr<LayoutPlaceholderManager> m_placeholderManager;
    System::WeakPtr<Aspose::Slides::MasterSlide> m_master;
    SlideLayoutType m_slideLayoutType;
    System::SharedPtr<Theme::LayoutSlideThemeManager> m_themeManager;
    bool m_showMasterShapes;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::MasterSlide> FindInMasters(System::SharedPtr<IMasterSlide> value);
    ASPOSE_SLIDES_LOCAL_API void ChangeMaster(System::SharedPtr<Aspose::Slides::MasterSlide> masterSlide);
    ASPOSE_SLIDES_LOCAL_API void UnSubscribeForChangesInPlaceholders();
    
};

} // namespace Slides
} // namespace Aspose


