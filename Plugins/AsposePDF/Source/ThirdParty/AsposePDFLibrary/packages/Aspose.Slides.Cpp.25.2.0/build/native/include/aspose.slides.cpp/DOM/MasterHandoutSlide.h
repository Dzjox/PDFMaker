#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IMasterHandoutSlide.h>

#include "DOM/BaseSlide.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IMasterHandoutSlideHeaderFooterManager;
class MasterHandoutSlideHeaderFooterManager;
class MasterHandoutSlideManager;
namespace PptSerialization
{
class HandoutMasterPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class HandoutMasterPartParser;
class PresentationPartParser;
} // namespace PartParser
} // namespace PptxSerialization
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
class MasterHandoutSlidePPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class BaseSlidePPTXUnsupportedProps;
class MasterHandoutSlidePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents master slide for handouts.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MasterHandoutSlide : public Aspose::Slides::BaseSlide, public Aspose::Slides::IMasterHandoutSlide
{
    typedef MasterHandoutSlide ThisType;
    typedef Aspose::Slides::BaseSlide BaseType;
    typedef Aspose::Slides::IMasterHandoutSlide BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptSerialization::HandoutMasterPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::HandoutMasterPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::PresentationPartParser;
    friend class Aspose::Slides::MasterHandoutSlideManager;
    /// @endcond
    
public:

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
    /// Returns HeaderFooter manager of the master handout slide.
    /// Read-only <see cref="Aspose::Slides::IMasterHandoutSlideHeaderFooterManager">IMasterHandoutSlideHeaderFooterManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterHandoutSlideHeaderFooterManager> get_HeaderFooterManager() override;
    /// <summary>
    /// Returns the theme manager.
    /// Read-only <see cref="Aspose::Slides::Theme::IMasterThemeManager">Theme::IMasterThemeManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Theme::IMasterThemeManager> get_ThemeManager() override;
    
protected:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::BaseSlidePPTXUnsupportedProps> get_BaseSlidePPTXUnsupportedProps() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::BaseSlidePPTUnsupportedProps> get_BaseSlidePPTUnsupportedProps() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::MasterHandoutSlidePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::MasterHandoutSlidePPTUnsupportedProps> get_PPTUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API MasterHandoutSlide(System::SharedPtr<MasterHandoutSlideManager> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MasterHandoutSlide, CODEPORTING_ARGS(System::SharedPtr<MasterHandoutSlideManager> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~MasterHandoutSlide();
    
private:

    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::MasterHandoutSlidePPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::MasterHandoutSlidePPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<MasterHandoutSlideHeaderFooterManager> m_headerFooterManager;
    System::SharedPtr<Theme::MasterThemeManager> m_themeManager;
    
};

} // namespace Slides
} // namespace Aspose


