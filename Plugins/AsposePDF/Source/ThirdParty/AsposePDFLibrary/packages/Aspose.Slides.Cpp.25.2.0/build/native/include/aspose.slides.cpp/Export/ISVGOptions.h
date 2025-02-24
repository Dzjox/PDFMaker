#pragma once
//Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Export/ISaveOptions.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IInkOptions;
class ISvgShapeFormattingController;
enum class PicturesCompression;
enum class SvgExternalFontsHandling;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents an SVG options.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISVGOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef ISVGOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether the text on a slide will be saved as graphics.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_VectorizeText() = 0;
    /// <summary>
    /// Determines whether the text on a slide will be saved as graphics.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_VectorizeText(bool value) = 0;
    /// <summary>
    /// Returns the lower resolution limit for metafile rasterization.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_MetafileRasterizationDpi() = 0;
    /// <summary>
    /// Sets the lower resolution limit for metafile rasterization.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MetafileRasterizationDpi(int32_t value) = 0;
    /// <summary>
    /// Determines whether the 3D text is disabled in SVG.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Disable3DText() = 0;
    /// <summary>
    /// Determines whether the 3D text is disabled in SVG.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Disable3DText(bool value) = 0;
    /// <summary>
    /// Disables splitting FromCornerX and FromCenter gradients.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DisableGradientSplit() = 0;
    /// <summary>
    /// Disables splitting FromCornerX and FromCenter gradients.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DisableGradientSplit(bool value) = 0;
    /// <summary>
    /// SVG 1.1 lacks ability to define insets for markers.
    /// Aspose.Slides SVG writing engine has workaround for that problem:
    /// it crops end of line with arrow, so, line doesn't overlap markers.
    /// This option switches off such behavior.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DisableLineEndCropping() = 0;
    /// <summary>
    /// SVG 1.1 lacks ability to define insets for markers.
    /// Aspose.Slides SVG writing engine has workaround for that problem:
    /// it crops end of line with arrow, so, line doesn't overlap markers.
    /// This option switches off such behavior.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DisableLineEndCropping(bool value) = 0;
    /// <summary>
    /// Determines JPEG encoding quality.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_JpegQuality() = 0;
    /// <summary>
    /// Determines JPEG encoding quality.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_JpegQuality(int32_t value) = 0;
    /// <summary>
    /// Returns and sets a callback interface which allows user to control shape conversion.
    /// Read <see cref="Aspose::Slides::Export::ISvgShapeFormattingController">ISvgShapeFormattingController</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISvgShapeFormattingController> get_ShapeFormattingController() = 0;
    /// <summary>
    /// Returns and sets a callback interface which allows user to control shape conversion.
    /// Write <see cref="Aspose::Slides::Export::ISvgShapeFormattingController">ISvgShapeFormattingController</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShapeFormattingController(System::SharedPtr<ISvgShapeFormattingController> value) = 0;
    /// <summary>
    /// Represents the pictures compression level
    /// Read <see cref="PicturesCompression"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Export::PicturesCompression get_PicturesCompression() = 0;
    /// <summary>
    /// Represents the pictures compression level
    /// Write <see cref="PicturesCompression"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PicturesCompression(Aspose::Slides::Export::PicturesCompression value) = 0;
    /// <summary>
    /// A boolean flag indicates if the cropped parts remain as part of the document. If true the cropped 
    /// parts will removed, if false they will be serialized in the document (which can possible lead to a 
    /// larger file)
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DeletePicturesCroppedAreas() = 0;
    /// <summary>
    /// A boolean flag indicates if the cropped parts remain as part of the document. If true the cropped 
    /// parts will removed, if false they will be serialized in the document (which can possible lead to a 
    /// larger file)
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DeletePicturesCroppedAreas(bool value) = 0;
    /// <summary>
    /// Determines whether the text frame will be included in a rendering area or not.
    /// Read <see cref="bool"></see>.
    /// Default value is false.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_UseFrameSize() = 0;
    /// <summary>
    /// Determines whether the text frame will be included in a rendering area or not.
    /// Write <see cref="bool"></see>.
    /// Default value is false.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_UseFrameSize(bool value) = 0;
    /// <summary>
    /// Determines whether to perform the specified rotation of the shape when rendering or not.
    /// Read <see cref="bool"></see>.
    /// Default value is true.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_UseFrameRotation() = 0;
    /// <summary>
    /// Determines whether to perform the specified rotation of the shape when rendering or not.
    /// Write <see cref="bool"></see>.
    /// Default value is true.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_UseFrameRotation(bool value) = 0;
    /// <summary>
    /// Determines a way of handling externally loaded fonts.
    /// Read <see cref="SvgExternalFontsHandling"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API SvgExternalFontsHandling get_ExternalFontsHandling() = 0;
    /// <summary>
    /// Determines a way of handling externally loaded fonts.
    /// Write <see cref="SvgExternalFontsHandling"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ExternalFontsHandling(SvgExternalFontsHandling value) = 0;
    /// <summary>
    /// Provides options that control the look of Ink objects in exported document.
    /// Read-only <see cref="Aspose::Slides::Export::IInkOptions">IInkOptions</see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IInkOptions> get_InkOptions() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DisableFontLigatures() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DisableFontLigatures(bool value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


