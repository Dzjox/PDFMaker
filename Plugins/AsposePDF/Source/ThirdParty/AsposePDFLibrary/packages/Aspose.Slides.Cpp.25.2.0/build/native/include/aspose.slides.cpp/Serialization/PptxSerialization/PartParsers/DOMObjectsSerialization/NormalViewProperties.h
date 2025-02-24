#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/INormalViewProperties.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class INormalViewRestoredProperties;
enum class SplitterBarStateType;
class ViewProperties;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents normal view properties. The normal view consists of
/// three content regions: the slide itself, a side content region, and a bottom content region.
/// </summary>
/// <example>
/// The following example shows how to configure ViewProperties::get_NormalViewProperties properties of a PowerPoint Presentation.
/// <code>
/// // Instantiate a presentation object that represents a presentation file
/// auto pres = System::MakeObject<Presentation>(u"demo.pptx");
/// auto normalViewProperties = pres->get_ViewProperties()->get_NormalViewProperties();
/// 
/// normalViewProperties->set_HorizontalBarState(SplitterBarStateType::Restored);
/// normalViewProperties->set_VerticalBarState(SplitterBarStateType::Maximized);
/// normalViewProperties->get_RestoredTop()->set_AutoAdjust(true);
/// normalViewProperties->get_RestoredTop()->set_DimensionSize(80.0f);
/// normalViewProperties->set_ShowOutlineIcons(true);
/// pres->Save(u"presentation_normal_view_state.pptx", SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS NormalViewProperties : public Aspose::Slides::INormalViewProperties
{
    typedef NormalViewProperties ThisType;
    typedef Aspose::Slides::INormalViewProperties BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ViewProperties;
    /// @endcond
    
public:

    /// <summary>
    /// Specifies whether the application should show icons if displaying outline content in any
    /// of the content regions of normal view mode.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowOutlineIcons() override;
    /// <summary>
    /// Specifies whether the application should show icons if displaying outline content in any
    /// of the content regions of normal view mode.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowOutlineIcons(bool value) override;
    /// <summary>
    /// Specifies whether the vertical splitter should snap to a minimized state when the side
    /// region is sufficiently small.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_SnapVerticalSplitter() override;
    /// <summary>
    /// Specifies whether the vertical splitter should snap to a minimized state when the side
    /// region is sufficiently small.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SnapVerticalSplitter(bool value) override;
    /// <summary>
    /// Specifies the state that the vertical splitter bar should be shown in. 
    /// A vertical splitter bar separates the slide from the side content region.
    /// </summary>
    /// Read <see cref="SplitterBarStateType"></see>
    ASPOSE_SLIDES_SHARED_API SplitterBarStateType get_VerticalBarState() override;
    /// <summary>
    /// Specifies the state that the vertical splitter bar should be shown in. 
    /// A vertical splitter bar separates the slide from the side content region.
    /// </summary>
    /// Write <see cref="SplitterBarStateType"></see>
    ASPOSE_SLIDES_SHARED_API void set_VerticalBarState(SplitterBarStateType value) override;
    /// <summary>
    /// Specifies the state that the horizontal splitter bar should be shown in.
    /// A horizontal splitter bar separates the slide from the content region below the slide.
    /// </summary>
    /// Read <see cref="SplitterBarStateType"></see>
    ASPOSE_SLIDES_SHARED_API SplitterBarStateType get_HorizontalBarState() override;
    /// <summary>
    /// Specifies the state that the horizontal splitter bar should be shown in.
    /// A horizontal splitter bar separates the slide from the content region below the slide.
    /// </summary>
    /// Write <see cref="SplitterBarStateType"></see>
    ASPOSE_SLIDES_SHARED_API void set_HorizontalBarState(SplitterBarStateType value) override;
    /// <summary>
    /// Specifies whether the user prefers to see a full-window single-content region over the
    /// standard normal view with three content regions. If enabled, the application may choose
    /// to display one of the content regions in the entire window.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_PreferSingleView() override;
    /// <summary>
    /// Specifies whether the user prefers to see a full-window single-content region over the
    /// standard normal view with three content regions. If enabled, the application may choose
    /// to display one of the content regions in the entire window.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PreferSingleView(bool value) override;
    /// <summary>
    /// This element specifies the sizing of the side content region of the normal view, when the region is of a variable
    /// restored size(neither minimized nor maximized).
    /// Read opnly <see cref="Aspose::Slides::INormalViewRestoredProperties">INormalViewRestoredProperties</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<INormalViewRestoredProperties> get_RestoredLeft() override;
    /// <summary>
    /// This element specifies the sizing of the top slide region of the normal view, when the region is of a variable
    /// restored size(neither minimized nor maximized).
    /// Read only <see cref="Aspose::Slides::INormalViewRestoredProperties">INormalViewRestoredProperties</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<INormalViewRestoredProperties> get_RestoredTop() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API NormalViewProperties();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NormalViewProperties, CODEPORTING_ARGS());
    
private:

    bool m_showOutlineIcons;
    bool m_snapVertSplitter;
    SplitterBarStateType m_vertBarState;
    SplitterBarStateType m_horzBarState;
    bool m_preferSingleView;
    System::SharedPtr<INormalViewRestoredProperties> m_restoredLeft;
    System::SharedPtr<INormalViewRestoredProperties> m_restoredTop;
    
};

} // namespace Slides
} // namespace Aspose


