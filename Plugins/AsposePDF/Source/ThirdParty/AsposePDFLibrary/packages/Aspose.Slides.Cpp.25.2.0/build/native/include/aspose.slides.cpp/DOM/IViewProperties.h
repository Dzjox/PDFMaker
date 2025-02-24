#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICommonSlideViewProperties;
class INormalViewProperties;
enum class NullableBool : int8_t;
enum class ViewType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Presentation wide view properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IViewProperties : public virtual System::Object
{
    typedef IViewProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the view mode that was used when the presentation document was last saved.
    /// Read <see cref="ViewType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ViewType get_LastView() = 0;
    /// <summary>
    /// Specifies the view mode that was used when the presentation document was last saved.
    /// Write <see cref="ViewType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LastView(ViewType value) = 0;
    /// <summary>
    /// Specifies whether the slide comments should be shown.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_ShowComments() = 0;
    /// <summary>
    /// Specifies whether the slide comments should be shown.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowComments(NullableBool value) = 0;
    /// <summary>
    /// Specifies common view properties associated with the slide view mode.
    /// Read-only <see cref="Aspose::Slides::ICommonSlideViewProperties">ICommonSlideViewProperties</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICommonSlideViewProperties> get_SlideViewProperties() = 0;
    /// <summary>
    /// Specifies common view properties associated with the notes view mode.
    /// Read-only <see cref="Aspose::Slides::ICommonSlideViewProperties">ICommonSlideViewProperties</see>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICommonSlideViewProperties> get_NotesViewProperties() = 0;
    /// <summary>
    /// Represents normal view properties. The normal view consists of
    /// three content regions: the slide itself, a side content region, and a bottom content region.
    /// Read-only <see cref="Aspose::Slides::INormalViewProperties">INormalViewProperties</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<INormalViewProperties> get_NormalViewProperties() = 0;
    /// <summary>
    /// Returns the grid spacing that should be used for the grid underlying the presentation document, in points. 
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// The grid spacing value must be a positive number.
    /// The typical value range is from 1 mm (2.8349607 points) to 2 inches (144 points).
    /// </remarks>
    /// <example>
    /// The following sample code shows how to change the grid spacing in a PowerPoint presentation.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// pres->get_ViewProperties()->set_GridSpacing(72.0f);
    /// pres->Save(u"GridSpacing_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_GridSpacing() = 0;
    /// <summary>
    /// Sets the grid spacing that should be used for the grid underlying the presentation document, in points. 
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// The grid spacing value must be a positive number.
    /// The typical value range is from 1 mm (2.8349607 points) to 2 inches (144 points).
    /// </remarks>
    /// <example>
    /// The following sample code shows how to change the grid spacing in a PowerPoint presentation.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// pres->get_ViewProperties()->set_GridSpacing(72.0f);
    /// pres->Save(u"GridSpacing_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_GridSpacing(float value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


