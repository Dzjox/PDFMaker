#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/multicast_delegate.h>
#include <system/guid.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/SaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class ConversionProgressEventsTranslator;
class DocConverter;
class Document;
class HtmlConverter;
class PdfToApsConverter;
class PptxExporter;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// This enum describes possible progress event types
/// that can occure during conversion
/// </summary>
enum class ProgressEventType
{
    /// <summary>
    /// means that occured event informs about total progress of conversion
    /// </summary>
    TotalProgress,
    /// <summary>
    /// means that occured event informs about end of analysis of one of pages before conversion
    /// </summary>
    SourcePageAnalysed,
    /// <summary>
    /// means that occured event informs about creation of one result page before phisical export
    /// </summary>
    ResultPageCreated,
    /// <summary>
    /// means that occured event informs about finished saving of one result page 
    /// </summary>
    ResultPageSaved
};

// UnifiedSaveOptions represents save options for conversions that internaly use APS
// as intermediate conversion format.
// Since we cannot name it directly, term "Unified" used in public API 
/// <summary>
/// Defines conversion options related to pipeline configuration.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IPipelineOptions : public virtual System::Object
{
    typedef IPipelineOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the size of a portion of pages to pass from node to node.
    /// </summary>
    virtual int32_t get_BatchSize() = 0;
    /// <summary>
    /// Specifies the size of a portion of pages to pass from node to node.
    /// </summary>
    virtual void set_BatchSize(int32_t value) = 0;
    
};

/// <summary>
/// Defines conversion options related to a set of pages to convert.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IPageSetOptions : public virtual System::Object
{
    typedef IPageSetOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the array of numbers of pages to convert.
    /// </summary>
    virtual System::ArrayPtr<int32_t> get_ExplicitListOfSavedPages() = 0;
    /// <summary>
    /// Specifies the array of numbers of pages to convert.
    /// </summary>
    virtual void set_ExplicitListOfSavedPages(System::ArrayPtr<int32_t> value) = 0;
    
};

/// <summary>
/// This class represents saving options for saving that 
/// uses unified conversion way (with unified internal document model)
/// </summary>    
class ASPOSE_PDF_SHARED_CLASS UnifiedSaveOptions : public Aspose::Pdf::SaveOptions
{
    typedef UnifiedSaveOptions ThisType;
    typedef Aspose::Pdf::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PdfToApsConverter;
    friend class Aspose::Pdf::HtmlConverter;
    friend class Aspose::Pdf::DocConverter;
    friend class Aspose::Pdf::PptxExporter;
    
public:

    /// <summary>
    ///  Represents method that usually supplied by calling side
    ///  and  handles progress events that comes from converter.
    ///  Usually such suplied customer's handler can be used to show 
    ///  total conversion progress on console or in progress bar.
    ///  <param name="eventInfo">represents information about occured progress event</param>
    /// </summary>
    class ProgressEventHandlerInfo;
    using ConversionProgressEventHandler = System::MulticastDelegate<void(System::SharedPtr<UnifiedSaveOptions::ProgressEventHandlerInfo>)>;
    
protected:

    using OnePageProcessedEventHandler = System::MulticastDelegate<void(int32_t)>;
    
    
public:

    /// <summary>
    /// This class represents information about conversion progress
    /// that can be used in external applicatuion to show conversion progress to end user
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS ProgressEventHandlerInfo : public System::Object
    {
        typedef ProgressEventHandlerInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::ConversionProgressEventsTranslator;
        
    public:
    
        /// <summary>
        /// Type of progress event that occurred.
        /// </summary>
        ProgressEventType EventType;
        /// <summary>
        /// Current value of progress value.
        /// </summary>
        int32_t Value;
        /// <summary>
        /// Maximum possible value of progress value.
        /// </summary>
        int32_t MaxValue;
        /// <summary>
        /// The unique document ID.
        /// </summary>
        System::Guid DocumentId;
        
    protected:
    
        ProgressEventHandlerInfo();
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ProgressEventHandlerInfo, CODEPORTING_ARGS());
        
    };
    
    
public:

    /// <summary>
    ///   Sometimes PDFs contain background images (of pages or table cells)
    ///   constructed from several same tiling background images put one near other.
    ///   In such case renderers of target formats (f.e MsWord for DOCS format) sometimes generates
    ///   visible boundaries beetween parts of background images,
    ///   cause their techniques of image edge smoothing (anti-aliasing) is different from Acrobat Reader.
    ///    If it looks like exported document contains such visible boundaries between 
    ///   parts of same background images, please try use this setting to get rid 
    ///   of that unwanted effect. 
    ///     ATTENTION! This optimization of quality usually essentially slows down conversion,
    ///   so, please, use this option only when it's really necessary.
    /// </summary>
    bool TryMergeAdjacentSameBackgroundImages;
    /// <summary>
    /// Process pages in few threads.
    /// </summary>
    bool IsMultiThreading;
    
    /// <summary>
    /// This atrribute turned on functionality for extracting image or text 
    /// for PDF documents with OCR sublayer.
    /// </summary>
    /// <value><c>true</c> text will be extracted in result document; otherwise, <c>false</c>.</value>
    ASPOSE_PDF_SHARED_API bool get_ExtractOcrSublayerOnly() const;
    /// <summary>
    /// This atrribute turned on functionality for extracting image or text 
    /// for PDF documents with OCR sublayer.
    /// </summary>
    /// <value><c>true</c> text will be extracted in result document; otherwise, <c>false</c>.</value>
    ASPOSE_PDF_SHARED_API void set_ExtractOcrSublayerOnly(bool value);
    
    ASPOSE_PDF_SHARED_API UnifiedSaveOptions();
    
protected:

    static const int32_t DefaultBatchSize;
    /// <summary>
    ///    Represents internal progress events processor that works during conversion and translates 
    ///  conversion events of internal conversion stages into external total progress events
    ///    Also class broadcasts events that allow to free resources that not needed anymore
    /// This internal class handles events of PDF to APS and APS to [Other format] progress
    /// to calculate total progress and inform customer's code about that total progress events
    /// this class uses two types of events : ApsToExternal model conversion 
    /// and events of conversion Pdf to APS to generate total progress events
    ///   Export has three stage :
    ///    1) Pdf to Aps
    ///    2) Aps recognition
    ///    3_ Aps export to target format
    ///  Constructor allows tune how much pages are converted and what is approximmate part of this or that stage in total progress
    /// </summary>
    System::SharedPtr<ConversionProgressEventsTranslator> ProgressEventsRetranslator;
    
    int32_t GetNumberOfConvertiblePages(System::SharedPtr<Document> document);
    
private:

    bool extractOcrSublayerOnly;
    
};

} // namespace Pdf
} // namespace Aspose


