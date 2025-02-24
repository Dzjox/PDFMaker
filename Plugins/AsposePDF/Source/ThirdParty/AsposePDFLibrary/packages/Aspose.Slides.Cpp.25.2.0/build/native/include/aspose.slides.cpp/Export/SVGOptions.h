#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <Export/ISVGOptions.h>
#include <cstdint>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Drawing
{
class SVGCanvas;
class SvgResources;
} // namespace Drawing
namespace Export
{
class FontHandlingRulesCollection;
class IInkOptions;
class ILinkEmbedController;
class InkOptions;
class ISvgShapeFormattingController;
enum class PicturesCompression;
class PicturesCompressionOptions;
class PptxExporter;
enum class SvgExternalFontsHandling;
} // namespace Export
class ShapeLayout;
namespace View
{
class SlideView;
} // namespace View
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents an SVG options.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SVGOptions final : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::ISVGOptions
{
    typedef SVGOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::ISVGOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ShapeLayout;
    friend class Aspose::Slides::View::SlideView;
    friend class Aspose::Slides::Drawing::SVGCanvas;
    friend class Aspose::Slides::Drawing::SvgResources;
    friend class Aspose::Slides::Export::PptxExporter;
    /// @endcond
    
public:

    /// <summary>
    /// Provides options that control the look of Ink objects in exported document.
    /// Read-only <see cref="Aspose::Slides::Export::IInkOptions">IInkOptions</see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IInkOptions> get_InkOptions() override;
    /// <summary>
    /// Determines whether the text frame will be included in a rendering area or not.
    /// Read <see cref="bool"></see>.
    /// Default value is false.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_UseFrameSize() override;
    /// <summary>
    /// Determines whether the text frame will be included in a rendering area or not.
    /// Write <see cref="bool"></see>.
    /// Default value is false.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_UseFrameSize(bool value) override;
    /// <summary>
    /// Determines whether to perform the specified rotation of the shape when rendering or not.
    /// Read <see cref="bool"></see>.
    /// Default value is true.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_UseFrameRotation() override;
    /// <summary>
    /// Determines whether to perform the specified rotation of the shape when rendering or not.
    /// Write <see cref="bool"></see>.
    /// Default value is true.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_UseFrameRotation(bool value) override;
    /// <summary>
    /// Determines whether the text on a slide will be saved as graphics.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_VectorizeText() override;
    /// <summary>
    /// Determines whether the text on a slide will be saved as graphics.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_VectorizeText(bool value) override;
    /// <summary>
    /// Returns the lower resolution limit for metafile rasterization.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_MetafileRasterizationDpi() override;
    /// <summary>
    /// Sets the lower resolution limit for metafile rasterization.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MetafileRasterizationDpi(int32_t value) override;
    /// <summary>
    /// Determines whether the 3D text is disabled in SVG.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Disable3DText() override;
    /// <summary>
    /// Determines whether the 3D text is disabled in SVG.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Disable3DText(bool value) override;
    /// <summary>
    /// Disables splitting FromCornerX and FromCenter gradients.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_DisableGradientSplit() override;
    /// <summary>
    /// Disables splitting FromCornerX and FromCenter gradients.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DisableGradientSplit(bool value) override;
    /// <summary>
    /// SVG 1.1 lacks ability to define insets for markers.
    /// Aspose.Slides SVG writing engine has workaround for that problem:
    /// it crops end of line with arrow, so, line doesn't overlap markers.
    /// This option switches off such behavior.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_DisableLineEndCropping() override;
    /// <summary>
    /// SVG 1.1 lacks ability to define insets for markers.
    /// Aspose.Slides SVG writing engine has workaround for that problem:
    /// it crops end of line with arrow, so, line doesn't overlap markers.
    /// This option switches off such behavior.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DisableLineEndCropping(bool value) override;
    /// <summary>
    /// Returns default settings.
    /// Read-only <see cref="Aspose::Slides::Export::SVGOptions">SVGOptions</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<SVGOptions> get_Default();
    /// <summary>
    /// Returns settings for simpliest and smallest SVG file generation.
    /// Read-only <see cref="Aspose::Slides::Export::SVGOptions">SVGOptions</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<SVGOptions> get_Simple();
    /// <summary>
    /// Returns settings for most accurate SVG file generation.
    /// Read-only <see cref="Aspose::Slides::Export::SVGOptions">SVGOptions</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<SVGOptions> get_WYSIWYG();
    /// <summary>
    /// Determines JPEG encoding quality.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_JpegQuality() override;
    /// <summary>
    /// Determines JPEG encoding quality.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_JpegQuality(int32_t value) override;
    /// <summary>
    /// Returns and sets a callback interface which allows user to control shape conversion.
    /// Read <see cref="ISvgShapeFormattingController"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISvgShapeFormattingController> get_ShapeFormattingController() override;
    /// <summary>
    /// Returns and sets a callback interface which allows user to control shape conversion.
    /// Write <see cref="ISvgShapeFormattingController"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShapeFormattingController(System::SharedPtr<ISvgShapeFormattingController> value) override;
    /// <summary>
    /// Represents the pictures compression level
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Export::PicturesCompression get_PicturesCompression() override;
    /// <summary>
    /// Represents the pictures compression level
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PicturesCompression(Aspose::Slides::Export::PicturesCompression value) override;
    /// <summary>
    /// A boolean flag indicates if the cropped parts remain as part of the document. If true the cropped 
    /// parts will removed, if false they will be serialized in the document (which can possible lead to a 
    /// larger file)
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_DeletePicturesCroppedAreas() override;
    /// <summary>
    /// A boolean flag indicates if the cropped parts remain as part of the document. If true the cropped 
    /// parts will removed, if false they will be serialized in the document (which can possible lead to a 
    /// larger file)
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DeletePicturesCroppedAreas(bool value) override;
    /// <summary>
    /// Determines a way of handling externally loaded fonts.
    /// Read <see cref="SvgExternalFontsHandling"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API SvgExternalFontsHandling get_ExternalFontsHandling() override;
    /// <summary>
    /// Determines a way of handling externally loaded fonts.
    /// Write <see cref="SvgExternalFontsHandling"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ExternalFontsHandling(SvgExternalFontsHandling value) override;
    /// <summary>
    /// Gets a value indicating whether text is rendered without using ligatures.
    /// When set to <c>true</c>, ligatures will be disabled in the rendered output. By default, this property is set to <c>false</c>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<SVGOptions> options = System::MakeObject<SVGOptions>();
    /// options->set_DisableFontLigatures(true); // Disable ligatures in text rendering
    /// 
    /// System::SharedPtr<System::IO::FileStream> fileStream = System::MakeObject<System::IO::FileStream>(u"slide-0.svg", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pres->get_Slide(0)->WriteAsSvg(fileStream);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_DisableFontLigatures() override;
    /// <summary>
    /// Sets a value indicating whether text is rendered without using ligatures.
    /// When set to <c>true</c>, ligatures will be disabled in the rendered output. By default, this property is set to <c>false</c>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<SVGOptions> options = System::MakeObject<SVGOptions>();
    /// options->set_DisableFontLigatures(true); // Disable ligatures in text rendering
    /// 
    /// System::SharedPtr<System::IO::FileStream> fileStream = System::MakeObject<System::IO::FileStream>(u"slide-0.svg", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pres->get_Slide(0)->WriteAsSvg(fileStream);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_DisableFontLigatures(bool value) override;
    
    /// <summary>
    /// Initializes a new instance of the SVGOptions class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API SVGOptions();
    /// <summary>
    /// Initializes a new instance of the SVGOptions class specifying the link embedding controller object.
    /// </summary>
    /// <param name="linkEmbedController">The link embedding controller reference.</param>
    /// <remarks>Link embedding controller is a delegate object that is responsible for making decisions if resources (such as images) need to be
    /// embedded or referenced as external resources.</remarks>
    /// <seealso cref="ILinkEmbedController"></seealso>
    ASPOSE_SLIDES_SHARED_API SVGOptions(System::SharedPtr<ILinkEmbedController> linkEmbedController);
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FontHandlingRulesCollection> get_FontHandlingRules();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ILinkEmbedController> get_LinkEmbedController();
    ASPOSE_SLIDES_LOCAL_API void set_LinkEmbedController(System::SharedPtr<ILinkEmbedController> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Export::PicturesCompressionOptions> get_PicturesCompressionOptions();
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ILinkEmbedController> GetEffectiveLinkEmbedController();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISVGOptions> Clone();
    /// @endcond
    
private:

    bool pr_DisableFontLigatures;
    bool m_vectorizeText, m_disable3DText, m_disableGradientViaClipping, m_disableLineEndCropping;
    int32_t m_metafileDpi;
    System::SharedPtr<ILinkEmbedController> m_linkEmbedController, m_visibleLinkEmbedController;
    System::SharedPtr<FontHandlingRulesCollection> m_fhRules;
    int32_t m_jpegQuality;
    bool m_useFrameSize;
    bool m_useFrameRotation;
    System::SharedPtr<ISvgShapeFormattingController> m_svgShapeFormattingController;
    SvgExternalFontsHandling m_externalFontsHandling;
    System::SharedPtr<Aspose::Slides::Export::PicturesCompressionOptions> m_picturesCompressionOptions;
    System::SharedPtr<Aspose::Slides::Export::InkOptions> m_inkOptions;
    
    ASPOSE_SLIDES_LOCAL_API void Init();
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


