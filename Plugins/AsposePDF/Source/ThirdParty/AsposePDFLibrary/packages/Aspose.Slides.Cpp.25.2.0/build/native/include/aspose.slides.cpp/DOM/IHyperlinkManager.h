#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IHyperlink;
class ISlide;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Provide hyperlinks management (adding, removing).
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IHyperlinkManager : public virtual System::Object
{
    typedef IHyperlinkManager ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Set external hyperlink on click.
    /// </summary>
    /// <param name="url">Hyperlink URL.</param>
    /// <returns>Hyperlink object <see cref="Aspose::Slides::IHyperlink">IHyperlink</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlink> SetExternalHyperlinkClick(System::String url) = 0;
    /// <summary>
    /// Sets internal hyperlink on click.
    /// </summary>
    /// <param name="targetSlide">Target slide.</param>
    /// <returns>Hyperlink.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlink> SetInternalHyperlinkClick(System::SharedPtr<ISlide> targetSlide) = 0;
    /// <summary>
    /// Removes hyperlink on click.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveHyperlinkClick() = 0;
    /// <summary>
    /// Sets external hyperlink mouse over.
    /// </summary>
    /// <param name="url">Hyperlink URL.</param>
    /// <returns>Hyperlink.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlink> SetExternalHyperlinkMouseOver(System::String url) = 0;
    /// <summary>
    /// Sets internal hyperlink mouse over.
    /// </summary>
    /// <param name="targetSlide">Target slide.</param>
    /// <returns>Hyperlink.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlink> SetInternalHyperlinkMouseOver(System::SharedPtr<ISlide> targetSlide) = 0;
    /// <summary>
    /// Removes hyperlink mouse over.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveHyperlinkMouseOver() = 0;
    /// <summary>
    /// Set Macro hyperlink on a click.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<IAutoShape> shape = presentation->get_Slides()->idx_get(0)->get_Shapes()->AddAutoShape(Aspose::Slides::ShapeType::BlankButton, 20.0f, 20.0f, 80.0f, 30.0f);
    /// shape->get_HyperlinkManager()->SetMacroHyperlinkClick(u"MacroName");
    /// </code>
    /// </example>        
    /// <param name="macroName">Name of the macro</param>
    /// <returns>Hyperlink object <see cref="Aspose::Slides::IHyperlink">IHyperlink</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlink> SetMacroHyperlinkClick(System::String macroName) = 0;
    
};

} // namespace Slides
} // namespace Aspose


