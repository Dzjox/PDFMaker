#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/multicast_delegate.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IPdfOptions;
class ISVGOptions;
enum class SaveFormat;
} // namespace Export
class Presentation;
class Slide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace LowCode {

/// <summary>
/// Represents a group of methods intended to convert <see cref="Presentation"></see>.
/// </summary>
/// <example>
/// <code>
/// Convert::AutoByExtension(u"pres.pptx", u"pres.pdf");
/// </code>
/// </example> 
class ASPOSE_SLIDES_SHARED_CLASS Convert
{
    typedef Convert ThisType;
    
public:

    /// <summary>
    /// Callback that will be invoked for each <see cref="Slide"></see>, the output path expected to be returned.
    /// </summary>
    /// <param name="slide">Current iterated slide</param>
    /// <param name="index">Index of the current slide</param>
    using GetOutPathCallback = System::MulticastDelegate<System::String(System::SharedPtr<Slide>, int32_t)>;
    
    
public:

    /// <summary>
    /// Converts <see cref="Presentation"></see> using the passed output path extension to determine the required export format.  
    /// </summary>
    /// <param name="presPath">Path of the input presentation</param>
    /// <param name="outPath">Output path</param>
    /// <exception cref="System::ArgumentOutOfRangeException"></exception>
    /// <example>
    /// <code>
    /// Convert::AutoByExtension(u"pres.pptx", u"pres.pdf");
    /// </code>
    /// </example>        
    static ASPOSE_SLIDES_SHARED_API void AutoByExtension(System::String presPath, System::String outPath);
    /// <summary>
    /// Converts <see cref="Presentation"></see> to PDF.
    /// </summary>
    /// <param name="presPath">Path of the input presentation</param>
    /// <param name="outPath">Output path</param>
    /// <example>
    /// <code>
    /// Convert::ToPdf(u"pres.pptx", u"pres.pdf");
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void ToPdf(System::String presPath, System::String outPath);
    /// <summary>
    /// Converts <see cref="Presentation"></see> to PDF.
    /// </summary>
    /// <param name="presPath">Path of the input presentation</param>
    /// <param name="outPath">Output path</param>
    /// <param name="options">Output PDF options</param>
    /// <example>
    /// <code>
    /// auto pdfOptions = System::MakeObject<PdfOptions>();
    /// pdfOptions->set_Compliance(PdfCompliance::PdfUa);
    /// 
    /// Convert::ToPdf(u"pres.pptx", u"pres.pdf", pdfOptions);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void ToPdf(System::String presPath, System::String outPath, System::SharedPtr<Aspose::Slides::Export::IPdfOptions> options);
    /// <summary>
    /// Converts <see cref="Presentation"></see> to PDF.
    /// </summary>
    /// <param name="pres">Input presentation</param>
    /// <param name="outPath">Output path</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"input.pptx");
    ///         
    /// Convert::ToPdf(pres, u"output.pdf");
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void ToPdf(System::SharedPtr<Presentation> pres, System::String outPath);
    /// <summary>
    /// Converts <see cref="Presentation"></see> to PDF.
    /// </summary>
    /// <param name="pres">Input presentation</param>
    /// <param name="outPath">Output path</param>
    /// <param name="options">Output PDF options</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"input.pptx");
    /// auto pdfOptions = System::MakeObject<PdfOptions>();
    /// pdfOptions->set_Compliance(PdfCompliance::PdfUa);
    /// 
    /// Convert::ToPdf(pres, u"output.pdf", pdfOptions);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void ToPdf(System::SharedPtr<Presentation> pres, System::String outPath, System::SharedPtr<Aspose::Slides::Export::IPdfOptions> options);
    /// <summary>
    /// Converts <see cref="Presentation"></see> to SVG.
    /// </summary>
    /// <param name="presPath">Path of the input presentation</param>
    /// <example>
    /// <code>
    /// Convert::ToSvg(u"pres.pptx");
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void ToSvg(System::String presPath);
    /// <summary>
    /// Converts <see cref="Presentation"></see> to SVG.
    /// </summary>
    /// <param name="presPath">Path of the input presentation</param>
    /// <param name="getOutPath">Callback that returns the SVG output path for each slide in the presentation</param>
    /// <example>
    /// <code>
    /// auto callback = std::function<String(SharedPtr<Slide> slide, int32_t index)>([](SharedPtr<Slide> slide, int32_t index)
    /// {
    ///     return String::Format(u"pres_{0}-out.svg", index);
    /// });
    /// 
    /// Convert::ToSvg(u"pres.pptx", callback);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void ToSvg(System::String presPath, Convert::GetOutPathCallback getOutPath);
    /// <summary>
    /// Converts <see cref="Presentation"></see> to SVG.
    /// </summary>
    /// <param name="pres">Input presentation</param>
    /// <param name="getOutPath">>Callback that returns the SVG output path for each slide in the presentation</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"input.pptx");
    /// 
    /// auto callback = std::function<String(SharedPtr<Slide> slide, int32_t index)>([](SharedPtr<Slide> slide, int32_t index)
    /// {
    ///     return String::Format(u"pres_{0}-out.svg", index);
    /// });
    /// 
    /// Convert::ToSvg(pres, callback);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void ToSvg(System::SharedPtr<Presentation> pres, Convert::GetOutPathCallback getOutPath);
    /// <summary>
    /// Converts <see cref="Presentation"></see> to SVG.
    /// </summary>
    /// <param name="pres">Input presentation</param>
    /// <param name="options">SVG export options</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"input.pptx");
    /// 
    /// auto svgOptions = System::MakeObject<SVGOptions>();
    /// svgOptions->set_VectorizeText(true);
    /// 
    /// Convert::ToSvg(pres, svgOptions);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void ToSvg(System::SharedPtr<Presentation> pres, System::SharedPtr<Aspose::Slides::Export::ISVGOptions> options);
    /// <summary>
    /// Converts <see cref="Presentation"></see> to SVG.
    /// </summary>
    /// <param name="pres">Input presentation</param>
    /// <param name="getOutPath">Callback that returns the SVG output path for each slide in the presentation</param>
    /// <param name="options">SVG export options</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"input.pptx");
    /// 
    /// auto callback = std::function<String(SharedPtr<Slide> slide, int32_t index)>([](SharedPtr<Slide> slide, int32_t index)
    /// {
    ///     return String::Format(u"pres_{0}-out.svg", index);
    /// });
    /// 
    /// auto svgOptions = System::MakeObject<SVGOptions>();
    /// svgOptions->set_VectorizeText(true);
    /// 
    /// Convert::ToSvg(pres, callback, svgOptions);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void ToSvg(System::SharedPtr<Presentation> pres, Convert::GetOutPathCallback getOutPath, System::SharedPtr<Aspose::Slides::Export::ISVGOptions> options);
    
private:

    static ASPOSE_SLIDES_LOCAL_API void ToPpt(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToXps(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToPptx(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToPpsx(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToTiff(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToOdp(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToPptm(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToPpsm(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToPotx(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToPotm(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToHtml(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToSwf(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToOtp(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToPps(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToPot(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToFodp(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToGif(System::String presPath, System::String outPath);
    static ASPOSE_SLIDES_LOCAL_API void ToPdf(System::String presPath);
    static ASPOSE_SLIDES_LOCAL_API void Save(System::String presPath, System::String outPath, Aspose::Slides::Export::SaveFormat saveFormat);
    
public:
    Convert() = delete;
};

} // namespace LowCode
} // namespace Slides
} // namespace Aspose


