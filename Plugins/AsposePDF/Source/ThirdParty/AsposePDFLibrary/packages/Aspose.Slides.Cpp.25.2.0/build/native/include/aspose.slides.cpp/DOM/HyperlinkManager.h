#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IHyperlinkManager.h>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IHyperlink;
class IHyperlinkContainer;
class ISlide;
class PortionFormatImpl;
class Shape;
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
class ASPOSE_SLIDES_SHARED_CLASS HyperlinkManager final : public Aspose::Slides::IHyperlinkManager, public Aspose::Slides::IDOMObject
{
    typedef HyperlinkManager ThisType;
    typedef Aspose::Slides::IHyperlinkManager BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::PortionFormatImpl;
    /// @endcond
    
public:

    /// <summary>
    /// Set external hyperlink on click.
    /// </summary>
    /// <param name="url">Hyperlink URL.</param>
    /// <example>
    /// The following sample code shows how to add Text Box with Hyperlink.
    /// <code>
    /// auto pptxPresentation = System::MakeObject<Presentation>();
    /// // Gets the first slide in the presentation
    /// auto slide = pptxPresentation->get_Slides()->idx_get(0);
    /// 
    /// // Adds an AutoShape object with type set as Rectangle
    /// auto pptxShape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 150.0f, 150.0f, 150.0f, 50.0f);
    /// // Accesses the ITextFrame property associated with the AutoShape
    /// pptxShape->AddTextFrame(u"");
    /// auto textFrame = pptxShape->get_TextFrame();
    /// auto portion = textFrame->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0);
    /// 
    /// // Adds some text to the frame
    /// portion->set_Text(u"Aspose.Slides");
    /// 
    /// // Sets the Hyperlink for the portion text
    /// auto hyperlinkManager = portion->get_PortionFormat()->get_HyperlinkManager();
    /// hyperlinkManager->SetExternalHyperlinkClick(u"http://www.aspose.com");
    /// 
    /// // Saves the PPTX Presentation
    /// pptxPresentation->Save(u"hLinkPPTX_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlink> SetExternalHyperlinkClick(System::String url) override;
    /// <summary>
    /// Sets internal hyperlink on click.
    /// </summary>
    /// <param name="targetSlide">Target slide.</param>
    /// <returns>Hyperlink.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlink> SetInternalHyperlinkClick(System::SharedPtr<ISlide> targetSlide) override;
    /// <summary>
    /// Removes hyperlink on click.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void RemoveHyperlinkClick() override;
    /// <summary>
    /// Sets external hyperlink mouse over.
    /// </summary>
    /// <param name="url">Hyperlink URL.</param>
    /// <returns>Hyperlink.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlink> SetExternalHyperlinkMouseOver(System::String url) override;
    /// <summary>
    /// Sets internal hyperlink mouse over.
    /// </summary>
    /// <param name="targetSlide">Target slide.</param>
    /// <returns>Hyperlink.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlink> SetInternalHyperlinkMouseOver(System::SharedPtr<ISlide> targetSlide) override;
    /// <summary>
    /// Removes hyperlink mouse over.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void RemoveHyperlinkMouseOver() override;
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlink> SetMacroHyperlinkClick(System::String macroName) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IHyperlinkContainer> get_ParentHyperlinkContainer();
    
    ASPOSE_SLIDES_LOCAL_API HyperlinkManager(System::SharedPtr<IHyperlinkContainer> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HyperlinkManager, CODEPORTING_ARGS(System::SharedPtr<IHyperlinkContainer> parentImmediate));
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IHyperlinkContainer> m_parentImmediate;
    
};

} // namespace Slides
} // namespace Aspose


