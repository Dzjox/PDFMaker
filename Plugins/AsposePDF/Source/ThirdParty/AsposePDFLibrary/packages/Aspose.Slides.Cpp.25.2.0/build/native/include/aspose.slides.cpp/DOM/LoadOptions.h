#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <ILoadOptions.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AutoShapeLayout;
class EmbeddedFontsStorage;
namespace Export
{
class ExportNotesSlides;
} // namespace Export
class IBlobManagementOptions;
class IFontSources;
class IInterruptionToken;
class IResourceLoadingCallback;
class ISpreadsheetOptions;
class LayoutTemplates;
enum class LoadFormat;
namespace OdpSerialization
{
class OdpDeserializator;
} // namespace OdpSerialization
namespace PptSerialization
{
class CameraPPTSerialization;
class LightRigPPTSerialization;
class OuterShadowPPTSerialization;
class PptDeserializator;
class ThreeDFormatPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
class PptxDeserializator;
} // namespace PptxSerialization
class Presentation;
class PresentationFactory;
class SlideCollection;
namespace ThmxSerialization
{
class ThmxDeserializator;
} // namespace ThmxSerialization
class VentureLicense;
class VentureLicenser;
namespace Warnings
{
class IWarningCallback;
enum class WarningType;
} // namespace Warnings
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Allows to specify additional options (such as format or default font) when loading a presentation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS LoadOptions : public Aspose::Slides::ILoadOptions
{
    typedef LoadOptions ThisType;
    typedef Aspose::Slides::ILoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::AutoShapeLayout;
    friend class Aspose::Slides::EmbeddedFontsStorage;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::OdpSerialization::OdpDeserializator;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::VentureLicenser;
    friend class Aspose::Slides::PptSerialization::CameraPPTSerialization;
    friend class Aspose::Slides::PptSerialization::LightRigPPTSerialization;
    friend class Aspose::Slides::PptSerialization::ThreeDFormatPPTSerialization;
    friend class Aspose::Slides::PptSerialization::OuterShadowPPTSerialization;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    friend class Aspose::Slides::PresentationFactory;
    friend class Aspose::Slides::LayoutTemplates;
    /// @endcond
    
public:

    /// <summary>
    /// Returns format of a presentation to load.
    /// Read <see cref="Slides::LoadFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::LoadFormat get_LoadFormat() override;
    /// <summary>
    /// Sets format of a presentation to load.
    /// Write <see cref="Slides::LoadFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LoadFormat(Aspose::Slides::LoadFormat value) override;
    /// <summary>
    /// Returns Regular font used in case source font is not found.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <example>
    /// The following example shows how to set default fonts for rendering PowerPoint Presentation.
    /// <code>
    /// // Use load options to define the default regular and asian fonts
    /// System::SharedPtr<LoadOptions> loadOptions = System::MakeObject<LoadOptions>(LoadFormat::Auto);
    /// loadOptions->set_DefaultRegularFont(u"Wingdings");
    /// loadOptions->set_DefaultAsianFont(u"Wingdings");
    /// 
    /// // Load the presentation
    /// auto pptx = System::MakeObject<Presentation>(u"DefaultFonts.pptx", loadOptions);
    /// // Generate slide thumbnail
    /// auto slide = pptx->get_Slides()->idx_get(0);
    /// slide->GetThumbnail(1.0f, 1.0f)->Save(u"output_out.png", System::Drawing::Imaging::ImageFormat::get_Png());
    /// 
    /// // Generate PDF
    /// pptx->Save(u"output_out.pdf", SaveFormat::Pdf);
    /// // Generate XPS
    /// pptx->Save(u"output_out.xps", SaveFormat::Xps);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::String get_DefaultRegularFont() override;
    /// <summary>
    /// Sets Regular font used in case source font is not found.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <example>
    /// The following example shows how to set default fonts for rendering PowerPoint Presentation.
    /// <code>
    /// // Use load options to define the default regular and asian fonts
    /// System::SharedPtr<LoadOptions> loadOptions = System::MakeObject<LoadOptions>(LoadFormat::Auto);
    /// loadOptions->set_DefaultRegularFont(u"Wingdings");
    /// loadOptions->set_DefaultAsianFont(u"Wingdings");
    /// 
    /// // Load the presentation
    /// auto pptx = System::MakeObject<Presentation>(u"DefaultFonts.pptx", loadOptions);
    /// // Generate slide thumbnail
    /// auto slide = pptx->get_Slides()->idx_get(0);
    /// slide->GetThumbnail(1.0f, 1.0f)->Save(u"output_out.png", System::Drawing::Imaging::ImageFormat::get_Png());
    /// 
    /// // Generate PDF
    /// pptx->Save(u"output_out.pdf", SaveFormat::Pdf);
    /// // Generate XPS
    /// pptx->Save(u"output_out.xps", SaveFormat::Xps);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_DefaultRegularFont(System::String value) override;
    /// <summary>
    /// Returns Symbol font used in case source font is not found.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_DefaultSymbolFont() override;
    /// <summary>
    /// Sets Symbol font used in case source font is not found.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DefaultSymbolFont(System::String value) override;
    /// <summary>
    /// Returns Asian font used in case source font is not found.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_DefaultAsianFont() override;
    /// <summary>
    /// Sets Asian font used in case source font is not found.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DefaultAsianFont(System::String value) override;
    /// <summary>
    /// Gets the password.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The password.
    /// </value>
    /// <example>
    /// The following sample code shows how to open password protected PowerPoint Presentation.
    /// <code>
    /// System::SharedPtr<LoadOptions> loadOptions = System::MakeObject<LoadOptions>();
    /// loadOptions->set_Password(u"YOUR_PASSWORD");
    /// auto presentation = System::MakeObject<Presentation>(u"pres.pptx", loadOptions);
    /// // work with decrypted presentation
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::String get_Password() override;
    /// <summary>
    /// Sets the password.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The password.
    /// </value>
    /// <example>
    /// The following sample code shows how to open password protected PowerPoint Presentation.
    /// <code>
    /// System::SharedPtr<LoadOptions> loadOptions = System::MakeObject<LoadOptions>();
    /// loadOptions->set_Password(u"YOUR_PASSWORD");
    /// auto presentation = System::MakeObject<Presentation>(u"pres.pptx", loadOptions);
    /// // work with decrypted presentation
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Password(System::String value) override;
    /// <summary>
    /// This property makes sense, if presentation file is password protected.
    /// Value of true means that only document properties must be loaded from an encrypted 
    /// presentation file and password must be ignored.
    /// Value of false means that entire encrypted presentation must be loaded with use of right 
    /// password.
    /// If presentation isn't encrypted then property value is always ignored.
    /// If document properties of an encrypted file aren't public and property value is true then
    /// document properties cannot be loaded and exception will be thrown.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_OnlyLoadDocumentProperties() override;
    /// <summary>
    /// This property makes sense, if presentation file is password protected.
    /// Value of true means that only document properties must be loaded from an encrypted 
    /// presentation file and password must be ignored.
    /// Value of false means that entire encrypted presentation must be loaded with use of right 
    /// password.
    /// If presentation isn't encrypted then property value is always ignored.
    /// If document properties of an encrypted file aren't public and property value is true then
    /// document properties cannot be loaded and exception will be thrown.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_OnlyLoadDocumentProperties(bool value) override;
    /// <summary>
    /// Returns an object which receives warnings and decides whether loading 
    /// process will continue or will be aborted.
    /// Read <see cref="Aspose::Slides::Warnings::IWarningCallback">Warnings::IWarningCallback</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Warnings::IWarningCallback> get_WarningCallback() override;
    /// <summary>
    /// Sets an object which receives warnings and decides whether loading 
    /// process will continue or will be aborted.
    /// Write <see cref="Aspose::Slides::Warnings::IWarningCallback">Warnings::IWarningCallback</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_WarningCallback(System::SharedPtr<Warnings::IWarningCallback> value) override;
    /// <summary>
    /// Represents the options which can be used to manage Binary Large Objects (BLOBs) handling behavior,
    /// such as using of temporary files or max BLOBs bytes in memory. These options intended to set up
    /// the best performance/memory consumption ratio for a perticular environment or requirements.
    /// <remarks>A Binary Large Object (BLOB) is a binary data stored as a single entity - i.e. BLOB can 
    /// be an audio, video or presentation itself.</remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBlobManagementOptions> get_BlobManagementOptions() override;
    /// <summary>
    /// Represents the options which can be used to manage Binary Large Objects (BLOBs) handling behavior,
    /// such as using of temporary files or max BLOBs bytes in memory. These options intended to set up
    /// the best performance/memory consumption ratio for a perticular environment or requirements.
    /// <remarks>A Binary Large Object (BLOB) is a binary data stored as a single entity - i.e. BLOB can 
    /// be an audio, video or presentation itself.</remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BlobManagementOptions(System::SharedPtr<IBlobManagementOptions> value) override;
    /// <summary>
    /// Specifies sources for external fonts to be used by the presentation.
    /// These fonts are available to the presentation throughout its lifetime and are not shared with other presentations
    /// </summary>
    /// <example>
    /// The following example shows how to specify custom fonts used with PowerPoint Presentation.
    /// <code>
    /// System::ArrayPtr<uint8_t> memoryFont1 = System::IO::File::ReadAllBytes(u"customfonts\\CustomFont1.ttf");
    /// System::ArrayPtr<uint8_t> memoryFont2 = System::IO::File::ReadAllBytes(u"customfonts\\CustomFont2.ttf");
    /// 
    /// System::SharedPtr<LoadOptions> loadOptions = System::MakeObject<LoadOptions>();
    /// loadOptions->get_DocumentLevelFontSources()->set_FontFolders(System::MakeArray<System::String>({u"assets\\fonts", u"global\\fonts"}));
    /// loadOptions->get_DocumentLevelFontSources()->set_MemoryFonts(System::MakeArray<System::ArrayPtr<uint8_t>>({memoryFont1, memoryFont2}));
    /// 
    /// auto presentation = System::MakeObject<Presentation>(u"MyPresentation.pptx", loadOptions);
    /// // work with the presentation
    /// // CustomFont1, CustomFont2 as well as fonts from assets\fonts & global\fonts folders and their subfolders are available to the presentation
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontSources> get_DocumentLevelFontSources() override;
    /// <summary>
    /// Specifies sources for external fonts to be used by the presentation.
    /// These fonts are available to the presentation throughout its lifetime and are not shared with other presentations
    /// </summary>
    /// <example>
    /// The following example shows how to specify custom fonts used with PowerPoint Presentation.
    /// <code>
    /// System::ArrayPtr<uint8_t> memoryFont1 = System::IO::File::ReadAllBytes(u"customfonts\\CustomFont1.ttf");
    /// System::ArrayPtr<uint8_t> memoryFont2 = System::IO::File::ReadAllBytes(u"customfonts\\CustomFont2.ttf");
    /// 
    /// System::SharedPtr<LoadOptions> loadOptions = System::MakeObject<LoadOptions>();
    /// loadOptions->get_DocumentLevelFontSources()->set_FontFolders(System::MakeArray<System::String>({u"assets\\fonts", u"global\\fonts"}));
    /// loadOptions->get_DocumentLevelFontSources()->set_MemoryFonts(System::MakeArray<System::ArrayPtr<uint8_t>>({memoryFont1, memoryFont2}));
    /// 
    /// auto presentation = System::MakeObject<Presentation>(u"MyPresentation.pptx", loadOptions);
    /// // work with the presentation
    /// // CustomFont1, CustomFont2 as well as fonts from assets\fonts & global\fonts folders and their subfolders are available to the presentation
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_DocumentLevelFontSources(System::SharedPtr<IFontSources> value) override;
    /// <summary>
    /// The token to monitor for interruption requests.
    /// <remarks>
    /// This token manages the whole <see cref="Aspose::Slides::IPresentation">IPresentation</see> instance lifetime. Any long-running operation, such as loading 
    /// or saving of presentation, will be interrupted via calling of the <see cref="InterruptionTokenSource::Interrupt"></see> method of 
    /// the <see cref="Aspose::Slides::InterruptionTokenSource">InterruptionTokenSource</see>.
    /// </remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IInterruptionToken> get_InterruptionToken() override;
    /// <summary>
    /// The token to monitor for interruption requests.
    /// <remarks>
    /// This token manages the whole <see cref="Aspose::Slides::IPresentation">IPresentation</see> instance lifetime. Any long-running operation, such as loading 
    /// or saving of presentation, will be interrupted via calling of the <see cref="InterruptionTokenSource::Interrupt"></see> method of 
    /// the <see cref="Aspose::Slides::InterruptionTokenSource">InterruptionTokenSource</see>.
    /// </remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_InterruptionToken(System::SharedPtr<IInterruptionToken> value) override;
    /// <summary>
    /// Returns callback interface which manages external resources loading.
    /// Read <see cref="IResourceLoadingCallback"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IResourceLoadingCallback> get_ResourceLoadingCallback() override;
    /// <summary>
    /// Sets callback interface which manages external resources loading.
    /// Write <see cref="IResourceLoadingCallback"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ResourceLoadingCallback(System::SharedPtr<IResourceLoadingCallback> value) override;
    /// <summary>
    /// Gets options for spreadsheets. For example, these options affect calculating formulas for charts.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISpreadsheetOptions> get_SpreadsheetOptions() override;
    /// <summary>
    /// Gets options for spreadsheets. For example, these options affect calculating formulas for charts.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SpreadsheetOptions(System::SharedPtr<ISpreadsheetOptions> value) override;
    /// <summary>
    /// Returns the default language for presentation text.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<LoadOptions> loadOptions = System::MakeObject<LoadOptions>();
    /// loadOptions->set_DefaultTextLanguage(u"en-US");
    /// 
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(loadOptions);
    /// 
    /// // Add new rectangle shape with text
    /// System::SharedPtr<IAutoShape> shp = pres->get_Slide(0)->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 50.0f, 50.0f, 150.0f, 50.0f);
    /// shp->get_TextFrame()->set_Text(u"New Text");
    /// 
    /// // Check the first portion language
    /// System::SharedPtr<IPortion> portion = shp->get_TextFrame()->get_Paragraph(0)->get_Portion(0);
    /// System::Console::WriteLine(portion->get_PortionFormat()->get_LanguageId());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::String get_DefaultTextLanguage() override;
    /// <summary>
    /// Sets the default language for presentation text.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<LoadOptions> loadOptions = System::MakeObject<LoadOptions>();
    /// loadOptions->set_DefaultTextLanguage(u"en-US");
    /// 
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(loadOptions);
    /// 
    /// // Add new rectangle shape with text
    /// System::SharedPtr<IAutoShape> shp = pres->get_Slide(0)->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 50.0f, 50.0f, 150.0f, 50.0f);
    /// shp->get_TextFrame()->set_Text(u"New Text");
    /// 
    /// // Check the first portion language
    /// System::SharedPtr<IPortion> portion = shp->get_TextFrame()->get_Paragraph(0)->get_Portion(0);
    /// System::Console::WriteLine(portion->get_PortionFormat()->get_LanguageId());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_DefaultTextLanguage(System::String value) override;
    /// <summary>
    /// Determines if Aspose.Slides will delete all embedded binary objects while presentation loading.
    /// <para>The types of the embedded binary objects:</para>
    /// <list type="bullet">
    /// <item>
    /// VBA Project <see cref="IPresentation::VbaProject"></see>
    /// </item>
    /// <item>
    /// OLE Object embedded data <see cref="IOleEmbeddedDataInfo::get_EmbeddedFileData"></see>
    /// </item>
    /// <item>
    /// ActiveX Control binary data <see cref="IControl::get_ActiveXControlBinary"></see>
    /// </item>
    /// </list>
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    /// <example>
    /// The following example shows how to load the presentation without any embedded binary objects.
    /// <code>
    /// System::SharedPtr<LoadOptions> loadOptions = System::MakeObject<LoadOptions>();
    /// loadOptions->set_DeleteEmbeddedBinaryObjects(true);
    /// 
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.ppt", loadOptions);
    /// pres->Save(u"output_WithoutBinaryObjects.ppt", SaveFormat::Ppt);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_DeleteEmbeddedBinaryObjects() override;
    /// <summary>
    /// Determines if Aspose.Slides will delete all embedded binary objects while presentation loading.
    /// <para>The types of the embedded binary objects:</para>
    /// <list type="bullet">
    /// <item>
    /// VBA Project <see cref="IPresentation::VbaProject"></see>
    /// </item>
    /// <item>
    /// OLE Object embedded data <see cref="IOleEmbeddedDataInfo::get_EmbeddedFileData"></see>
    /// </item>
    /// <item>
    /// ActiveX Control binary data <see cref="IControl::get_ActiveXControlBinary"></see>
    /// </item>
    /// </list>
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    /// <example>
    /// The following example shows how to load the presentation without any embedded binary objects.
    /// <code>
    /// System::SharedPtr<LoadOptions> loadOptions = System::MakeObject<LoadOptions>();
    /// loadOptions->set_DeleteEmbeddedBinaryObjects(true);
    /// 
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.ppt", loadOptions);
    /// pres->Save(u"output_WithoutBinaryObjects.ppt", SaveFormat::Ppt);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_DeleteEmbeddedBinaryObjects(bool value) override;
    
    /// <summary>
    /// Creates new default load options.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LoadOptions();
    /// <summary>
    /// Creates new load options.
    /// </summary>
    /// <param name="loadFormat">Format of a presentation to load.</param>
    ASPOSE_SLIDES_SHARED_API LoadOptions(Aspose::Slides::LoadFormat loadFormat);
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::VentureLicense> get_VentureLicense();
    ASPOSE_SLIDES_LOCAL_API void set_VentureLicense(System::SharedPtr<Aspose::Slides::VentureLicense> value);
    ASPOSE_SLIDES_LOCAL_API bool get_PasswordIsSet();
    
    ASPOSE_SLIDES_LOCAL_API void SendPresentationSignedWarning();
    ASPOSE_SLIDES_LOCAL_API void SendNotImplementedWarning(System::String description, Warnings::WarningType warningType);
    /// @endcond
    
private:

    System::String pr_DefaultTextLanguage;
    bool pr_DeleteEmbeddedBinaryObjects;
    Aspose::Slides::LoadFormat m_loadFormat;
    System::String m_defaultRegularFont;
    System::String m_defaultSymbolFont;
    System::String m_defaultAsianFont;
    System::String m_password;
    bool m_onlyLoadDocumentProperties;
    System::SharedPtr<Warnings::IWarningCallback> m_warningCallback;
    System::SharedPtr<Aspose::Slides::VentureLicense> m_ventureLicense;
    System::SharedPtr<IBlobManagementOptions> m_blobManagementOptions;
    System::SharedPtr<IFontSources> m_documentLevelFontSources;
    System::SharedPtr<IInterruptionToken> m_interruptionToken;
    System::SharedPtr<IResourceLoadingCallback> m_resourceLoadingCallback;
    System::SharedPtr<ISpreadsheetOptions> m_spreadsheetOptions;
    
};

} // namespace Slides
} // namespace Aspose


