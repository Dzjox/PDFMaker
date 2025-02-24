#pragma once

#include <Export/IInkOptions.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Drawing
{
class DomInternalRenderingOptions;
class RenderContext;
} // namespace Drawing
namespace Export
{
class HtmlOptions;
class PdfOptions;
class RenderingOptions;
class SVGOptions;
class TiffOptions;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control the look of Ink objects in exported document.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS InkOptions : public Aspose::Slides::Export::IInkOptions
{
    typedef InkOptions ThisType;
    typedef Aspose::Slides::Export::IInkOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Drawing::RenderContext;
    friend class Aspose::Slides::Drawing::DomInternalRenderingOptions;
    friend class Aspose::Slides::Export::RenderingOptions;
    friend class Aspose::Slides::Export::SVGOptions;
    friend class Aspose::Slides::Export::HtmlOptions;
    friend class Aspose::Slides::Export::PdfOptions;
    friend class Aspose::Slides::Export::TiffOptions;
    /// @endcond
    
public:

    /// <summary>
    /// Shows or hides Ink elements in exported document.
    /// </summary>
    /// <remarks>
    /// Default value is false.
    /// </remarks>
    /// <example>Next example demonstrates how to hide Ink elements in exported PDF document:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// System::SharedPtr<PdfOptions> pdfOptions = System::MakeObject<PdfOptions>();
    /// pdfOptions->get_InkOptions()->set_HideInk(true);
    /// pres->Save(u"output.pptx", SaveFormat::Pdf, pdfOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_HideInk() override;
    /// <summary>
    /// Shows or hides Ink elements in exported document.
    /// </summary>
    /// <remarks>
    /// Default value is false.
    /// </remarks>
    /// <example>Next example demonstrates how to hide Ink elements in exported PDF document:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// System::SharedPtr<PdfOptions> pdfOptions = System::MakeObject<PdfOptions>();
    /// pdfOptions->get_InkOptions()->set_HideInk(true);
    /// pres->Save(u"output.pptx", SaveFormat::Pdf, pdfOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_HideInk(bool value) override;
    /// <summary>
    /// Uses ROP operation or Opacity for rendering brush.
    /// </summary>
    /// <remarks>
    /// Default value is true.
    /// </remarks>
    /// <example>Next example demonstrates how to set using ROP for expotring Ink elements:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// System::SharedPtr<PdfOptions> pdfOptions = System::MakeObject<PdfOptions>();
    /// pdfOptions->get_InkOptions()->set_InterpretMaskOpAsOpacity(false);
    /// pres->Save(u"output.pptx", SaveFormat::Pdf, pdfOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_InterpretMaskOpAsOpacity() override;
    /// <summary>
    /// Uses ROP operation or Opacity for rendering brush.
    /// </summary>
    /// <remarks>
    /// Default value is true.
    /// </remarks>
    /// <example>Next example demonstrates how to set using ROP for expotring Ink elements:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// System::SharedPtr<PdfOptions> pdfOptions = System::MakeObject<PdfOptions>();
    /// pdfOptions->get_InkOptions()->set_InterpretMaskOpAsOpacity(false);
    /// pres->Save(u"output.pptx", SaveFormat::Pdf, pdfOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_InterpretMaskOpAsOpacity(bool value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API InkOptions();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(InkOptions, CODEPORTING_ARGS());
    
private:

    bool pr_HideInk;
    bool pr_InterpretMaskOpAsOpacity;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


