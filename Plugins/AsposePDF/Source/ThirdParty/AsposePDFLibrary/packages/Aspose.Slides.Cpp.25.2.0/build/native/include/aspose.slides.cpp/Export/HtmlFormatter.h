#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <Export/IHtmlFormatter.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class EmbeddedFontsHtmlControllerInternal;
class IHtmlFormattingController;
class IHtmlGenerator;
class PptxExporter;
class PrimitiveHtmlFormattingController;
class ResponsiveHtmlController;
} // namespace Export
class IPresentation;
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

namespace Export {

/// <summary>
/// Represents HTML file template.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS HtmlFormatter final : public Aspose::Slides::Export::IHtmlFormatter
{
    typedef HtmlFormatter ThisType;
    typedef Aspose::Slides::Export::IHtmlFormatter BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::EmbeddedFontsHtmlControllerInternal;
    friend class Aspose::Slides::Export::ResponsiveHtmlController;
    friend class Aspose::Slides::Export::PptxExporter;
    /// @endcond
    
public:

    /// <summary>
    /// Creates and returns HTML formatter for a simple document view which consists of sequences of slides one below another.
    /// </summary>
    /// <param name="css">Specifies CSS for this file.</param>
    /// <param name="showSlideTitle">Add slide title if there is one above slide image.</param>
    /// <returns></returns>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<HtmlFormatter> CreateDocumentFormatter(System::String css, bool showSlideTitle);
    /// <summary>
    /// Creates and returns HTML formatter for a simple slide show html which shows slides one after another.
    /// </summary>
    /// <param name="css">Specifies URL of CCS file used.</param>
    /// <param name="showSlideTitle">Add slide title if there is one above slide image.</param>
    /// <returns></returns>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<HtmlFormatter> CreateSlideShowFormatter(System::String css, bool showSlideTitle);
    /// <summary>
    /// Creates and returns HTML formatter for custom callback-driven html generation.
    /// </summary>
    /// <param name="formattingController">Callback interface which controls html file generation.</param>
    /// <returns></returns>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<HtmlFormatter> CreateCustomFormatter(System::SharedPtr<IHtmlFormattingController> formattingController);
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IHtmlFormattingController> get_HtmlFormattingController();
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PrimitiveHtmlFormattingController> CreateDocumentFormattingController(System::String css, bool showSlideTitle);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PrimitiveHtmlFormattingController> CreateSlideShowFormattingController(System::String css, bool showSlideTitle);
    ASPOSE_SLIDES_LOCAL_API void WriteHeader(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> pres);
    ASPOSE_SLIDES_LOCAL_API void WriteSlideDivHeader(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<ISlide> slide);
    ASPOSE_SLIDES_LOCAL_API void WriteSlideDivFooter(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<ISlide> slide);
    ASPOSE_SLIDES_LOCAL_API void WriteFooter(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> pres);
    /// @endcond
    
private:

    System::SharedPtr<IHtmlFormattingController> m_formattingController;
    
    ASPOSE_SLIDES_LOCAL_API HtmlFormatter(System::SharedPtr<IHtmlFormattingController> callback);
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HtmlFormatter, CODEPORTING_ARGS(System::SharedPtr<IHtmlFormattingController> callback));
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


