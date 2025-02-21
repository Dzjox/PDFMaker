#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/multicast_delegate.h>
#include <system/exceptions.h>
#include <system/enum_helpers.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class ApsToXpsSavingMode;
class ApsUsingConverter;
class Document;
class HtmlFragment;
enum class LoadFormat;
class Page;
namespace Tests
{
namespace HTML
{
class Pdf2HtmlConverterTests;
class Pdf2HtmlTestUtils;
} // namespace HTML
class PclImportTests;
class RegressionTests_v18_9;
class RegressionTests_v19_12;
class RegressionTests_v8_5;
class TestBase;
} // namespace Tests
class TeXFragment;
class TeXToPdfConverter;
enum class UsageMode;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Text
{
class Encoding;
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enum represented warning type.
/// </summary>
enum class WarningType
{
    /// <summary>
    /// The file is corrupted.
    /// </summary>
    SourceFileCorruption = 0,
    /// <summary>
    /// Text/chart/image or other data is completely missing from either the documet tree following load, or the created document following save. 
    /// </summary>
    DataLoss = 1,
    /// <summary>
    /// Major formatting losses compared to the original document. This is for occasions when the formatting loss is substantial but the data is still there.
    /// </summary>
    MajorFormattingLoss = 2,
    /// <summary>
    /// Minor formatting losses compared to the original document. This is for minor losses of fidelity.
    /// </summary>
    MinorFormattingLoss = 3,
    /// <summary>
    /// Known issue that will prevent the document being opened by certain user agents, or previous versions of user agents.
    /// </summary>
    CompatibilityIssue = 4,
    /// <summary>
    /// Invalid input stream type
    /// </summary>
    InvalidInputStreamType = 5,
    /// <summary>
    /// The file has unexpected content.
    /// </summary>
    UnexpectedContent = 99
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::WarningType);
DECLARE_USING_GLOBAL_OPERATORS

/// <summary>
/// Enum represented a program workflow action in case of invoking the
/// <see cref="IWarningCallback::Warning(Aspose::Pdf::WarningInfo)"></see> method.
/// </summary>
enum class ReturnAction
{
    /// <summary>
    /// Used for continue flow.
    /// </summary>
    Continue,
    /// <summary>
    /// Used for abort flow.
    /// </summary>
    Abort
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::ReturnAction);
DECLARE_USING_GLOBAL_OPERATORS

/// <summary>
/// Immutable object for encapsulating warning information.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS WarningInfo final : public System::Object
{
    typedef WarningInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    ///   Returns string representation of warning message.
    /// </summary>
    /// <returns> 
    /// the warning message
    /// </returns>
    ASPOSE_PDF_SHARED_API System::String get_WarningMessage() const;
    /// <summary>
    ///   Returns warning type.
    /// </summary>
    /// <returns> 
    /// the warning type
    /// </returns>
    ASPOSE_PDF_SHARED_API WarningType get_WarningTypeProperty() const;
    
    /// <summary>
    /// Constructs instance for gathering information.
    /// </summary>
    /// <param name="type">
    /// the warning type to set
    /// </param>
    /// <param name="message">
    /// the warning message to set
    /// </param>
    ASPOSE_PDF_SHARED_API WarningInfo(WarningType type, System::String message);
    
private:

    /// <summary>
    /// The string message of the warning.
    /// </summary>
    System::String warningMessage;
    /// <summary>
    /// The type of the warning.
    /// </summary>
    WarningType warningType;
    
};

/// <summary>
/// Interface for user's callback mechanism support.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IWarningCallback : public virtual System::Object
{
    typedef IWarningCallback ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The callback method for some program notifications. 
    /// </summary>
    /// <param name="warning">
    /// the warning information for some happened warning
    /// </param>
    /// <returns>
    /// the result of further program workflow
    /// </returns>
    virtual ReturnAction Warning(System::SharedPtr<WarningInfo> warning) = 0;
    
};

/// <summary>
/// LoadOptions type holds level of abstraction on individual load options
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LoadOptions : public virtual System::Object
{
    typedef LoadOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::TeXFragment;
    friend class Aspose::Pdf::HtmlFragment;
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::TeXToPdfConverter;
    friend class Aspose::Pdf::Tests::HTML::Pdf2HtmlTestUtils;
    friend class Aspose::Pdf::Tests::TestBase;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_9;
    friend class Aspose::Pdf::Tests::PclImportTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_12;
    friend class Aspose::Pdf::Tests::HTML::Pdf2HtmlConverterTests;
    
public:

    /// <summary>
    /// Represents mode of usage of margins area during conversion  
    /// (like HTML, EPUB etc), defines treatement of instructions of imported format 
    ///  related to usage of margins.
    /// </summary>
    enum class MarginsAreaUsageModes
    {
        /// <summary>
        /// In this mode converter obeyes format of imported document (f.e. CSS of imported HTML)
        /// in usage of margins area.So, if format of imported document requires usage 
        /// of margins area for rendering , converter will allow that
        /// </summary> 
        PutContentOnMarginAreaIfNecessary = 0,
        /// <summary>
        /// This mode strictly forbids usage of margins area,
        /// so, converter will never use area of margins for rendering,
        /// even if CSS or format of source document allows or requirs that
        /// </summary> 
        NeverPutContentOnMarginArea = 1
    };
    
    /// <summary>
    ///  ATTENTION! The feature implemented but did not put yet to public API since blocker issue in 
    ///  OSHARED layer revealed for sample document.
    ///  
    /// 
    /// Represents mode of usage of page size during conversion.
    /// Formats (like HTML, EPUB etc), usually have float design, so, it allows to fit required
    /// pagesize. But sometimes content has specifies horizontal positions or size that 
    /// does not allow put content into required page size.
    /// In such case we can define what should be done in this case (i.e when size of content does not fit 
    /// required initial page size of result PDF document).
    /// </summary>
    enum class PageSizeAdjustmentModes
    {
        /// <summary>
        /// In this mode result pages will have required pagesize defined in LoadOptions,
        /// no matter whether content after conversion goes out of page boundaries or no.
        /// </summary> 
        NoAjustmentAllwaysUsePredefinedSize = 0,
        /// <summary>
        ///  This mode defines such behaviour: after getting of conversion result ,
        /// and detecting of fact that some content has been truncated,
        /// width of portview is enlarged to fit content and conversion is repeated.
        ///   This mode allows getting of less pages in result in such case but requires repeated
        /// rendering(and therefore more processing time).
        /// </summary> 
        EnlargeRequiredViewportWidthAndDoConversionAgain = 1
    };
    
    
public:

    /// <summary>
    ///  Sometimes it's necessary to avoid usage of internal loader of external resources(like images or CSSes)
    ///  and supply custom method, that will get requested resources from somewhere. For example during usage 
    ///  of Aspose.Pdf in cloud direct access to referenced files impossible, and some custome code put into special
    ///   method should be used.
    ///    This delegate defines signature of such custom method.
    /// </summary>
    /// <param name="resourceURI">Resource URI.</param>
    /// <returns>ResourceLoadingResult object.</returns>
    class ResourceLoadingResult;
    using ResourceLoadingStrategy = System::MulticastDelegate<System::SharedPtr<LoadOptions::ResourceLoadingResult>(System::String)>;
    
    
public:

    /// <summary>
    ///   Result of custom loading of resource
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS ResourceLoadingResult : public System::Object
    {
        typedef ResourceLoadingResult ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        ///   Bynary data that loaded with custom loader - it must be set after loading
        /// </summary>
        ASPOSE_PDF_SHARED_API System::ArrayPtr<uint8_t> get_Data() const;
        
        /// <summary>
        ///   Sometimes encoding of resource is known after or during loading.
        ///   In such case  custom code can provide converter with that knowledge via 
        ///   this parameter. You can leave null in this parameter if encoding is unknown or does not matter.
        /// </summary>
        System::SharedPtr<System::Text::Encoding> EncodingIfKnown;
        /// <summary>
        ///    Sometimes it's impossible to load requested resource for some reason.
        ///  Unavailability of resource often does not lead to crash of conversiov and
        ///  result document can be created anyway(but maybe in a bit worse quality, without images etc.).
        ///    If exception occured during loading, just catch it and put in this parameter - 
        ///   sometimes that information is usefull for converter for rendering of result.
        /// </summary>
        System::Exception ExceptionOfLoadingIfAny;
        /// <summary>
        ///  Sometimes knowledge about MIME type of loaded resource is usefull for converter
        ///  You can provide MIME type(if it'd known after loading) in this parameter. Please
        ///  leave parameter equal to null when MIME type unknown or it's not necessary to supply it. 
        /// </summary>
        System::String MIMETypeIfKnown;
        /// <summary>
        ///  Sometimes for some reasons loading should not occure custom code. In such case 
        ///  please set this flag as True. In such case converter will try use internal default
        ///  resource loader to get that result(as it behave in situation when custom strategy not supplied).
        /// </summary>
        bool LoadingCancelled;
        
        /// <summary>
        ///   Creates instance of loading result
        /// </summary>
        /// <param name="data"> reult of custom loading must be allways provided, it can be zero-length array if it's impossible to get any result </param>
        ASPOSE_PDF_SHARED_API ResourceLoadingResult(System::ArrayPtr<uint8_t> data);
        
    protected:
    
        ResourceLoadingResult(System::ArrayPtr<uint8_t> data, System::SharedPtr<System::Text::Encoding> enc);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ResourceLoadingResult, CODEPORTING_ARGS(System::ArrayPtr<uint8_t> data, System::SharedPtr<System::Text::Encoding> enc));
        
    private:
    
        System::ArrayPtr<uint8_t> _fetchedData;
        
    };
    
    
public:

    /// <summary>
    /// Callback to handle any warnings generated. 
    /// The WarningHandler returns ReturnAction enum item specifying either Continue or Abort. 
    /// Continue is the default action and the Load operation continues, however the user may also return Abort in which case the Load operation should cease.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<IWarningCallback> get_WarningHandler() const;
    /// <summary>
    /// Callback to handle any warnings generated. 
    /// The WarningHandler returns ReturnAction enum item specifying either Continue or Abort. 
    /// Continue is the default action and the Load operation continues, however the user may also return Abort in which case the Load operation should cease.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_WarningHandler(System::SharedPtr<IWarningCallback> value);
    /// <summary>
    /// Represents file format which <see cref="LoadOptions"></see> describes.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::LoadFormat get_LoadFormat() const;
    /// <summary>
    /// Gets flag to disable any license restrictions for all fonts while loading the file.
    /// When <see langword="true"></see>, allows to execute operations with font that are prohibited by a license
    /// of this font, for example allows to embed a font into a PDF document even if license rules
    /// disable embedding for this font. 
    /// By default <see langword="false"></see>.
    /// </summary>
    /// <remarks>
    /// Be careful when using this flag. When it is set it means that person who sets this flag, 
    /// takes all responsibility of possible license/law violations on himself. 
    /// So he takes it on it's own risk.
    /// It's strongly recommended to use this flag only when you are fully confident that you are not breaking 
    /// the copyright law.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool get_DisableFontLicenseVerifications() const;
    /// <summary>
    /// Sets flag to disable any license restrictions for all fonts while loading the file.
    /// When <see langword="true"></see>, allows to execute operations with font that are prohibited by a license
    /// of this font, for example allows to embed a font into a PDF document even if license rules
    /// disable embedding for this font. 
    /// By default <see langword="false"></see>.
    /// </summary>
    /// <remarks>
    /// Be careful when using this flag. When it is set it means that person who sets this flag, 
    /// takes all responsibility of possible license/law violations on himself. 
    /// So he takes it on it's own risk.
    /// It's strongly recommended to use this flag only when you are fully confident that you are not breaking 
    /// the copyright law.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_DisableFontLicenseVerifications(bool value);
    
    ASPOSE_PDF_SHARED_API LoadOptions();
    
protected:

    static const int32_t DefaultBatchSize;
    Aspose::Pdf::LoadFormat _loadFormat;
    UsageMode _usageMode;
    System::String ApsIntermediateFileIfAny;
    System::String XpsIntermediateFileIfAny;
    System::String PngIntermediateFileIfAny;
    ApsToXpsSavingMode ApsAsXpsSavingType;
    /// <summary>
    ///  Sometimes we need use temp file to save APS during conversion to avoid OOM exceptions in PalZipWriter
    ///  For such hard tests can be used this parameter - it will force usage of ile instead of MemoryStream
    /// </summary>
    System::String PlainApsIntermediateTempFileIfAny;
    bool UseAreaClipping;
    System::SharedPtr<Aspose::Pdf::Page> Page;
    
private:

    System::SharedPtr<IWarningCallback> _warningHandler;
    bool pr_DisableFontLicenseVerifications;
    
};

} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf);



