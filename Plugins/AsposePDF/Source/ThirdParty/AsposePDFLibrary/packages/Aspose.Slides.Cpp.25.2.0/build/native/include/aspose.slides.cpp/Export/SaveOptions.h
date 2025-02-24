#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <Export/ISaveOptions.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class GradientStyle;
class IProgressCallback;
namespace Warnings
{
class IWarningCallback;
} // namespace Warnings
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Abstract class with options that control how a presentation is saved.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SaveOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef SaveOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns of sets an object which receives warnings and decides whether loading process will continue or will be aborted.
    /// Read <see cref="Aspose::Slides::Warnings::IWarningCallback"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::Warnings::IWarningCallback> get_WarningCallback() override;
    /// <summary>
    /// Returns of sets an object which receives warnings and decides whether loading process will continue or will be aborted.
    /// Write <see cref="Aspose::Slides::Warnings::IWarningCallback"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_WarningCallback(System::SharedPtr<Aspose::Slides::Warnings::IWarningCallback> value) override;
    /// <summary>
    /// Represents a callback object for saving progress updates in percentage.
    /// See <see cref="IProgressCallback"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IProgressCallback> get_ProgressCallback() override;
    /// <summary>
    /// Represents a callback object for saving progress updates in percentage.
    /// See <see cref="IProgressCallback"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ProgressCallback(System::SharedPtr<IProgressCallback> value) override;
    /// <summary>
    /// Returns font used in case source font is not found.
    /// Reads <see cref="System::String"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto htmlOpts = System::MakeObject<HtmlOptions>();
    /// htmlOpts->set_DefaultRegularFont(u"Arial Black");
    /// pres->Save(u"SomePresentation-out-ArialBlack.html", Aspose::Slides::Export::SaveFormat::Html, htmlOpts);
    /// htmlOpts->set_DefaultRegularFont(u"Lucida Console");
    /// pres->Save(u"Somepresentation-out-LucidaConsole.html", Aspose::Slides::Export::SaveFormat::Html, htmlOpts);
    /// 
    /// auto pdfOpts = System::MakeObject<PdfOptions>();
    /// pdfOpts->set_DefaultRegularFont(u"Arial Black");
    /// pres->Save(u"SomePresentation-out-ArialBlack.pdf", Aspose::Slides::Export::SaveFormat::Pdf, pdfOpts);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::String get_DefaultRegularFont() override;
    /// <summary>
    /// Sets font used in case source font is not found.
    /// Writes <see cref="System::String"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto htmlOpts = System::MakeObject<HtmlOptions>();
    /// htmlOpts->set_DefaultRegularFont(u"Arial Black");
    /// pres->Save(u"SomePresentation-out-ArialBlack.html", Aspose::Slides::Export::SaveFormat::Html, htmlOpts);
    /// htmlOpts->set_DefaultRegularFont(u"Lucida Console");
    /// pres->Save(u"Somepresentation-out-LucidaConsole.html", Aspose::Slides::Export::SaveFormat::Html, htmlOpts);
    /// 
    /// auto pdfOpts = System::MakeObject<PdfOptions>();
    /// pdfOpts->set_DefaultRegularFont(u"Arial Black");
    /// pres->Save(u"SomePresentation-out-ArialBlack.pdf", Aspose::Slides::Export::SaveFormat::Pdf, pdfOpts);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_DefaultRegularFont(System::String value) override;
    /// <summary>
    /// Returns the visual style of the gradient.
    /// Read <see cref="Aspose::Slides::GradientStyle">GradientStyle</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::GradientStyle get_GradientStyle() override;
    /// <summary>
    /// Sets the visual style of the gradient.
    /// Write <see cref="Aspose::Slides::GradientStyle">GradientStyle</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_GradientStyle(Aspose::Slides::GradientStyle value) override;
    
    ASPOSE_SLIDES_SHARED_API SaveOptions();
    
private:

    Aspose::Slides::GradientStyle m_gradientStyle;
    System::SharedPtr<Aspose::Slides::Warnings::IWarningCallback> m_warningCallback;
    System::SharedPtr<IProgressCallback> m_progressCallback;
    System::String m_defaultRegularFont;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


