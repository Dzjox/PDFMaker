#pragma once

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control the look of Ink objects in exported document.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IInkOptions : public virtual System::Object
{
    typedef IInkOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HideInk() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HideInk(bool value) = 0;
    /// <summary>
    /// Uses ROP operation or Opacity for rendering brush.
    /// </summary>
    /// <remarks>
    /// Default value is true.
    /// </remarks>
    /// <example>Next example demonstrates how to set using ROP for exporting Ink elements:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// System::SharedPtr<PdfOptions> pdfOptions = System::MakeObject<PdfOptions>();
    /// pdfOptions->get_InkOptions()->set_InterpretMaskOpAsOpacity(false);
    /// pres->Save(u"output.pptx", SaveFormat::Pdf, pdfOptions);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_InterpretMaskOpAsOpacity() = 0;
    /// <summary>
    /// Uses ROP operation or Opacity for rendering brush.
    /// </summary>
    /// <remarks>
    /// Default value is true.
    /// </remarks>
    /// <example>Next example demonstrates how to set using ROP for exporting Ink elements:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// System::SharedPtr<PdfOptions> pdfOptions = System::MakeObject<PdfOptions>();
    /// pdfOptions->get_InkOptions()->set_InterpretMaskOpAsOpacity(false);
    /// pres->Save(u"output.pptx", SaveFormat::Pdf, pdfOptions);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_InterpretMaskOpAsOpacity(bool value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


