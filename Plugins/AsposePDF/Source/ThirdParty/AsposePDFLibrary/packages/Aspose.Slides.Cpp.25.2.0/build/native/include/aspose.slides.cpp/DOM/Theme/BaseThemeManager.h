#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlide;
namespace PptSerialization
{
class LayoutSlidePPTSerialization;
class MasterSlideRoundTripSerialization;
class MasterThemePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class ColorMappingPPTXSerialization;
class LayoutSlidePPTXSerialization;
class NotesSlidePartParser;
class SlidePartParser;
} // namespace PartParser
} // namespace PptxSerialization
namespace Theme
{
class BaseOverrideThemeManager;
class ColorMapping;
class MasterThemeManager;
} // namespace Theme
namespace ThmxSerialization
{
class ThmxDeserializator;
} // namespace ThmxSerialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Base class for classes that provide access to different types of themes.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BaseThemeManager : public Aspose::Slides::IDOMObject
{
    typedef BaseThemeManager ThisType;
    typedef Aspose::Slides::IDOMObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::PptSerialization::MasterSlideRoundTripSerialization;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::PptxSerialization::PartParser::ColorMappingPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::LayoutSlidePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::NotesSlidePartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::SlidePartParser;
    friend class Aspose::Slides::PptSerialization::LayoutSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::MasterThemePPTSerialization;
    friend class Aspose::Slides::Theme::BaseOverrideThemeManager;
    friend class Aspose::Slides::Theme::MasterThemeManager;
    /// @endcond
    
protected:

    /// @cond
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Theme::ColorMapping> get_ColorMapping() = 0;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Theme::ColorMapping> get_ColorMappingOverride();
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Theme::ColorMapping> DefaultMapping;
    
    ASPOSE_SLIDES_LOCAL_API BaseThemeManager(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<Aspose::Slides::Theme::ColorMapping> m_colorMapOverride;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


