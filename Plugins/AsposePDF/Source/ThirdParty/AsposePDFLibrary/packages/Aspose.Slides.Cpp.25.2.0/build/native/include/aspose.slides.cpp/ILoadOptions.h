#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IBlobManagementOptions;
class IFontSources;
class IInterruptionToken;
class IResourceLoadingCallback;
class ISpreadsheetOptions;
enum class LoadFormat;
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

/// <summary>
/// Allows to specify additional options (such as format or default font) when loading a presentation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILoadOptions : public virtual System::Object
{
    typedef ILoadOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns format of a presentation to load.
    /// Read <see cref="Slides::LoadFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::LoadFormat get_LoadFormat() = 0;
    /// <summary>
    /// Sets format of a presentation to load.
    /// Write <see cref="Slides::LoadFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LoadFormat(Aspose::Slides::LoadFormat value) = 0;
    /// <summary>
    /// Returns Regular font used in case source font is not found.
    /// Reads <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_DefaultRegularFont() = 0;
    /// <summary>
    /// Sets Regular font used in case source font is not found.
    /// Writes <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DefaultRegularFont(System::String value) = 0;
    /// <summary>
    /// Returns Symbol font used in case source font is not found.
    /// Reads <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_DefaultSymbolFont() = 0;
    /// <summary>
    /// Sets Symbol font used in case source font is not found.
    /// Writes <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DefaultSymbolFont(System::String value) = 0;
    /// <summary>
    /// Returns Asian font used in case source font is not found.
    /// Reads <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_DefaultAsianFont() = 0;
    /// <summary>
    /// Sets Asian font used in case source font is not found.
    /// Writes <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DefaultAsianFont(System::String value) = 0;
    /// <summary>
    /// Gets the password.
    /// Reads <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The password.
    /// </value>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Password() = 0;
    /// <summary>
    /// Sets the password.
    /// Writes <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The password.
    /// </value>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Password(System::String value) = 0;
    /// <summary>
    /// This property makes sense, if presentation file is password protected.
    /// Value of true means that only document properties must be loaded from an encrypted 
    /// presentation file and password must be ignored.
    /// Value of false means that entire encrypted presentation must be loaded with use of right 
    /// password.
    /// If presentation isn't encrypted then property value is always ignored.
    /// If document properties of an encrypted file aren't public and property value is true then
    /// document properties cannot be loaded and exception will be thrown.
    /// Reads <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_OnlyLoadDocumentProperties() = 0;
    /// <summary>
    /// This property makes sense, if presentation file is password protected.
    /// Value of true means that only document properties must be loaded from an encrypted 
    /// presentation file and password must be ignored.
    /// Value of false means that entire encrypted presentation must be loaded with use of right 
    /// password.
    /// If presentation isn't encrypted then property value is always ignored.
    /// If document properties of an encrypted file aren't public and property value is true then
    /// document properties cannot be loaded and exception will be thrown.
    /// Writes <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_OnlyLoadDocumentProperties(bool value) = 0;
    /// <summary>
    /// Returns an object which receives warnings and decides whether loading 
    /// process will continue or will be aborted.
    /// Read <see cref="Aspose::Slides::Warnings::IWarningCallback">Warnings::IWarningCallback</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Warnings::IWarningCallback> get_WarningCallback() = 0;
    /// <summary>
    /// Sets an object which receives warnings and decides whether loading 
    /// process will continue or will be aborted.
    /// Write <see cref="Aspose::Slides::Warnings::IWarningCallback">Warnings::IWarningCallback</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_WarningCallback(System::SharedPtr<Warnings::IWarningCallback> value) = 0;
    /// <summary>
    /// Represents the options which can be used to manage Binary Large Objects (BLOBs) handling behavior,
    /// such as using of temporary files or max BLOBs bytes in memory. These options intended to set up
    /// the best performance/memory consumption ratio for a perticular environment or requirements.
    /// <remarks>A Binary Large Object (BLOB) is a binary data stored as a single entity - i.e. BLOB can 
    /// be an audio, video or presentation itself.</remarks>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBlobManagementOptions> get_BlobManagementOptions() = 0;
    /// <summary>
    /// Represents the options which can be used to manage Binary Large Objects (BLOBs) handling behavior,
    /// such as using of temporary files or max BLOBs bytes in memory. These options intended to set up
    /// the best performance/memory consumption ratio for a perticular environment or requirements.
    /// <remarks>A Binary Large Object (BLOB) is a binary data stored as a single entity - i.e. BLOB can 
    /// be an audio, video or presentation itself.</remarks>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BlobManagementOptions(System::SharedPtr<IBlobManagementOptions> value) = 0;
    /// <summary>
    /// Specifies sources for external fonts to be used by the presentation.
    /// These fonts are available to the presentation throughout its lifetime and are not shared with other presentations
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontSources> get_DocumentLevelFontSources() = 0;
    /// <summary>
    /// Specifies sources for external fonts to be used by the presentation.
    /// These fonts are available to the presentation throughout its lifetime and are not shared with other presentations
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DocumentLevelFontSources(System::SharedPtr<IFontSources> value) = 0;
    /// <summary>
    /// The token to monitor for interruption requests.
    /// <remarks>
    /// This token manages the whole <see cref="Aspose::Slides::IPresentation">IPresentation</see> instance lifetime. Any long-running operation, such as presentaion 
    /// loading or saving, will be interrupted via calling of the <see cref="IInterruptionTokenSource::Interrupt"></see> method of 
    /// the <see cref="Aspose::Slides::IInterruptionTokenSource">IInterruptionTokenSource</see>.
    /// </remarks>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IInterruptionToken> get_InterruptionToken() = 0;
    /// <summary>
    /// The token to monitor for interruption requests.
    /// <remarks>
    /// This token manages the whole <see cref="Aspose::Slides::IPresentation">IPresentation</see> instance lifetime. Any long-running operation, such as presentaion 
    /// loading or saving, will be interrupted via calling of the <see cref="IInterruptionTokenSource::Interrupt"></see> method of 
    /// the <see cref="Aspose::Slides::IInterruptionTokenSource">IInterruptionTokenSource</see>.
    /// </remarks>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_InterruptionToken(System::SharedPtr<IInterruptionToken> value) = 0;
    /// <summary>
    /// Returns callback interface which manages external resources loading.
    /// Read <see cref="Aspose::Slides::IResourceLoadingCallback">IResourceLoadingCallback</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IResourceLoadingCallback> get_ResourceLoadingCallback() = 0;
    /// <summary>
    /// Sets callback interface which manages external resources loading.
    /// Write <see cref="Aspose::Slides::IResourceLoadingCallback">IResourceLoadingCallback</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ResourceLoadingCallback(System::SharedPtr<IResourceLoadingCallback> value) = 0;
    /// <summary>
    /// Represents options which can be used to specify additional spreadsheets behavior.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISpreadsheetOptions> get_SpreadsheetOptions() = 0;
    /// <summary>
    /// Represents options which can be used to specify additional spreadsheets behavior.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SpreadsheetOptions(System::SharedPtr<ISpreadsheetOptions> value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_DefaultTextLanguage() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DefaultTextLanguage(System::String value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DeleteEmbeddedBinaryObjects() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DeleteEmbeddedBinaryObjects(bool value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


