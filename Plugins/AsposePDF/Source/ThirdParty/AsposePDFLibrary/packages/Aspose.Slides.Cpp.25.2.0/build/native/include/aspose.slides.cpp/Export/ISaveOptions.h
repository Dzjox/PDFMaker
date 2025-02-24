#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

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
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Options that control how a presentation is saved.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISaveOptions : public virtual System::Object
{
    typedef ISaveOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns an object which receives warnings and decides whether loading process will continue or will be aborted.
    /// Read <see cref="Aspose::Slides::Warnings::IWarningCallback"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Aspose::Slides::Warnings::IWarningCallback> get_WarningCallback() = 0;
    /// <summary>
    /// Sets an object which receives warnings and decides whether loading process will continue or will be aborted.
    /// Write <see cref="Aspose::Slides::Warnings::IWarningCallback"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_WarningCallback(System::SharedPtr<Aspose::Slides::Warnings::IWarningCallback> value) = 0;
    /// <summary>
    /// Represents a callback object for saving progress updates in percentage. 
    /// See <see cref="IProgressCallback"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IProgressCallback> get_ProgressCallback() = 0;
    /// <summary>
    /// Represents a callback object for saving progress updates in percentage. 
    /// See <see cref="IProgressCallback"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ProgressCallback(System::SharedPtr<IProgressCallback> value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_DefaultRegularFont() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DefaultRegularFont(System::String value) = 0;
    /// <summary>
    /// Returns the visual style of the gradient.
    /// Read <see cref="Aspose::Slides::GradientStyle">GradientStyle</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::GradientStyle get_GradientStyle() = 0;
    /// <summary>
    /// Sets the visual style of the gradient.
    /// Write <see cref="Aspose::Slides::GradientStyle">GradientStyle</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_GradientStyle(Aspose::Slides::GradientStyle value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


