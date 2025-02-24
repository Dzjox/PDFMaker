#pragma once
//Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <Export/IHtmlFormattingController.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class EmbeddedFontsHtmlControllerInternal;
class FontDataProvider;
enum class HtmlFontFormat;
class IHtmlGenerator;
class PptxExporter;
} // namespace Export
class IFontData;
class IPresentation;
class IShape;
class ISlide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// The formatting controller class to use for embedding all presentation fonts in WOFF format.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS EmbedAllFontsHtmlController : public Aspose::Slides::Export::IHtmlFormattingController
{
    typedef EmbedAllFontsHtmlController ThisType;
    typedef Aspose::Slides::Export::IHtmlFormattingController BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::PptxExporter;
    /// @endcond
    
public:

    /// <summary>
    /// Creates new instance
    /// </summary>
    ASPOSE_SLIDES_SHARED_API EmbedAllFontsHtmlController();
    /// <summary>
    /// Creates new instance
    /// </summary>
    /// <param name="fontNameExcludeList">Fonts to be excluded from embedding</param>
    ASPOSE_SLIDES_SHARED_API EmbedAllFontsHtmlController(System::ArrayPtr<System::String> fontNameExcludeList);
    
    /// <summary>
    /// Called to write html document header. Called once per presentation conversion.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="presentation">Presentation which being currently rendered.</param>
    ASPOSE_SLIDES_SHARED_API void WriteDocumentStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation) override;
    /// <summary>
    /// Called to write html document footer. Called once per presentation conversion.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="presentation">Presentation which being currently rendered.</param>
    ASPOSE_SLIDES_SHARED_API void WriteDocumentEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation) override;
    /// <summary>
    /// Called to write html slide header. Called once per each of slides.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="slide">Slide which being currently rendered.</param>
    ASPOSE_SLIDES_SHARED_API void WriteSlideStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<ISlide> slide) override;
    /// <summary>
    /// Called to write html slide footer. Called once per each of slides.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="slide">Slide which being currently rendered.</param>
    ASPOSE_SLIDES_SHARED_API void WriteSlideEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<ISlide> slide) override;
    /// <summary>
    /// Called before shape's rendering. Called once per each of shape. If this function writes anything to generator, current slide image generation will be finished, added html fragment inserted and new image will be started atop of the previous.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="shape">Shape which is about to render.</param>
    ASPOSE_SLIDES_SHARED_API void WriteShapeStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IShape> shape) override;
    /// <summary>
    /// Called before shape's rendering. Called once per each of shape. If this function writes anything to generator, current slide image generation will be finished, added html fragment inserted and new image will be started atop of the previous.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="shape">Shape which is rendered last.</param>
    ASPOSE_SLIDES_SHARED_API void WriteShapeEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IShape> shape) override;
    /// <summary>
    /// Write all fonts contained in <see cref="Presentation"></see>.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="presentation">Presentation which being currently rendered.</param>
    virtual ASPOSE_SLIDES_SHARED_API void WriteAllFonts(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation);
    /// <summary>
    /// Writes data as base64 into HTML document itself
    /// </summary>
    /// <param name="generator">HTML generator</param>
    /// <param name="originalFont">Font to be serialized</param>
    /// <param name="substitutedFont">Substituted font (if font substitution occured), null otherwise</param>
    /// <param name="fontStyle">Font style</param>
    /// <param name="fontWeight">Font weight</param>
    /// <param name="fontData">Font data</param>
    virtual ASPOSE_SLIDES_SHARED_API void WriteFont(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IFontData> originalFont, System::SharedPtr<IFontData> substitutedFont, System::String fontStyle, System::String fontWeight, System::ArrayPtr<uint8_t> fontData);
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<EmbeddedFontsHtmlControllerInternal> get_ControllerInternal();
    /// @endcond
    
private:

    System::SharedPtr<EmbeddedFontsHtmlControllerInternal> m_controllerInternal;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FontDataProvider> CreateFontDataProvider(HtmlFontFormat format);
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


