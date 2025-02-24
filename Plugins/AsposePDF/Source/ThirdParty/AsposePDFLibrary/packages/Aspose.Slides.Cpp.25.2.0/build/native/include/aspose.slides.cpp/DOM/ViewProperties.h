#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IViewProperties.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class CommonSlideViewProperties;
class ICommonSlideViewProperties;
class INormalViewProperties;
enum class NullableBool : int8_t;
namespace PptSerialization
{
class PptDeserializator;
} // namespace PptSerialization
namespace PptxSerialization
{
class PptxDeserializator;
} // namespace PptxSerialization
class Presentation;
class PresentationTemplate;
enum class ViewType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Presentation wide view properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ViewProperties : public Aspose::Slides::IViewProperties, public Aspose::Slides::IDOMObject
{
    typedef ViewProperties ThisType;
    typedef Aspose::Slides::IViewProperties BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    friend class Aspose::Slides::PresentationTemplate;
    /// @endcond
    
public:

    /// <summary>
    /// Specifies the view mode that was used when the presentation document was last saved.
    /// Read <see cref="ViewType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ViewType get_LastView() override;
    /// <summary>
    /// Specifies the view mode that was used when the presentation document was last saved.
    /// Write <see cref="ViewType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LastView(ViewType value) override;
    /// <summary>
    /// Specifies whether the slide comments should be shown.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_ShowComments() override;
    /// <summary>
    /// Specifies whether the slide comments should be shown.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowComments(NullableBool value) override;
    /// <summary>
    /// Represents normal view properties. The normal view consists of
    /// three content regions: the slide itself, a side content region, and a bottom content region.
    /// Read-only <see cref="Aspose::Slides::INormalViewProperties">INormalViewProperties</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<INormalViewProperties> get_NormalViewProperties() override;
    /// <summary>
    /// Specifies common view properties associated with the slide view mode.
    /// Read-only <see cref="Aspose::Slides::ICommonSlideViewProperties">ICommonSlideViewProperties</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICommonSlideViewProperties> get_SlideViewProperties() override;
    /// <summary>
    /// Specifies common view properties associated with the notes view mode.
    /// Read-only <see cref="Aspose::Slides::ICommonSlideViewProperties">ICommonSlideViewProperties</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICommonSlideViewProperties> get_NotesViewProperties() override;
    /// <summary>
    /// Returns the grid spacing that should be used for the grid underlying the presentation document, in points. 
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// The grid spacing value must be a positive number .
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
    ASPOSE_SLIDES_SHARED_API float get_GridSpacing() override;
    /// <summary>
    /// Sets the grid spacing that should be used for the grid underlying the presentation document, in points. 
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// The grid spacing value must be a positive number .
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
    ASPOSE_SLIDES_SHARED_API void set_GridSpacing(float value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API float get_GridSpacingInternal() const;
    ASPOSE_SLIDES_LOCAL_API void set_GridSpacingInternal(float value);
    
    ASPOSE_SLIDES_LOCAL_API ViewProperties(System::SharedPtr<Presentation> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ViewProperties, CODEPORTING_ARGS(System::SharedPtr<Presentation> parentImmediate));
    
private:

    float pr_GridSpacingInternal;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    ViewType m_lastView;
    NullableBool m_showComments;
    System::SharedPtr<INormalViewProperties> m_normalViewProperties;
    System::SharedPtr<CommonSlideViewProperties> m_slideViewProperties;
    System::SharedPtr<CommonSlideViewProperties> m_notesViewProperties;
    
};

} // namespace Slides
} // namespace Aspose


