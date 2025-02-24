#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class INormalViewRestoredProperties;
enum class SplitterBarStateType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents normal view properties. The normal view consists of
/// three content regions: the slide itself, a side content region, and a bottom content region.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS INormalViewProperties : public virtual System::Object
{
    typedef INormalViewProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies whether the application should show icons if displaying outline content in any
    /// of the content regions of normal view mode.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowOutlineIcons() = 0;
    /// <summary>
    /// Specifies whether the application should show icons if displaying outline content in any
    /// of the content regions of normal view mode.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowOutlineIcons(bool value) = 0;
    /// <summary>
    /// Specifies whether the vertical splitter should snap to a minimized state when the side
    /// region is sufficiently small.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SnapVerticalSplitter() = 0;
    /// <summary>
    /// Specifies whether the vertical splitter should snap to a minimized state when the side
    /// region is sufficiently small.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SnapVerticalSplitter(bool value) = 0;
    /// <summary>
    /// Specifies the state that the vertical splitter bar should be shown in. 
    /// A vertical splitter bar separates the slide from the side content region.
    /// </summary>
    /// Read <see cref="SplitterBarStateType"></see>
    virtual ASPOSE_SLIDES_API_LOCAL_API SplitterBarStateType get_VerticalBarState() = 0;
    /// <summary>
    /// Specifies the state that the vertical splitter bar should be shown in. 
    /// A vertical splitter bar separates the slide from the side content region.
    /// </summary>
    /// Write <see cref="SplitterBarStateType"></see>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_VerticalBarState(SplitterBarStateType value) = 0;
    /// <summary>
    /// Specifies the state that the horizontal splitter bar should be shown in.
    /// A horizontal splitter bar separates the slide from the content region below the slide.
    /// </summary>
    /// Read <see cref="SplitterBarStateType"></see>
    virtual ASPOSE_SLIDES_API_LOCAL_API SplitterBarStateType get_HorizontalBarState() = 0;
    /// <summary>
    /// Specifies the state that the horizontal splitter bar should be shown in.
    /// A horizontal splitter bar separates the slide from the content region below the slide.
    /// </summary>
    /// Write <see cref="SplitterBarStateType"></see>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HorizontalBarState(SplitterBarStateType value) = 0;
    /// <summary>
    /// Specifies whether the user prefers to see a full-window single-content region over the
    /// standard normal view with three content regions. If enabled, the application may choose
    /// to display one of the content regions in the entire window.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_PreferSingleView() = 0;
    /// <summary>
    /// Specifies whether the user prefers to see a full-window single-content region over the
    /// standard normal view with three content regions. If enabled, the application may choose
    /// to display one of the content regions in the entire window.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PreferSingleView(bool value) = 0;
    /// <summary>
    /// This element specifies the sizing of the side content region of the normal view, when the region is of a variable
    /// restored size(neither minimized nor maximized).
    /// Read opnly <see cref="Aspose::Slides::INormalViewRestoredProperties">INormalViewRestoredProperties</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<INormalViewRestoredProperties> get_RestoredLeft() = 0;
    /// <summary>
    /// This element specifies the sizing of the top slide region of the normal view, when the region is of a variable
    /// restored size(neither minimized nor maximized).
    /// Read only <see cref="Aspose::Slides::INormalViewRestoredProperties">INormalViewRestoredProperties</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<INormalViewRestoredProperties> get_RestoredTop() = 0;
    
};

} // namespace Slides
} // namespace Aspose


