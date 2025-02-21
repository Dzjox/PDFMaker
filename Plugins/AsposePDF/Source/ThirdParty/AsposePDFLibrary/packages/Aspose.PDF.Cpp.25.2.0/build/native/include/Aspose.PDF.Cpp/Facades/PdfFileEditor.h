#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/stream.h>
#include <system/exceptions.h>
#include <system/collections/icomparer.h>
#include <system/array.h>
#include <system/action.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/License/IVentureLicenseTarget.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
enum class ContentDisposition;
class Copier;
class Document;
namespace Engine
{
namespace CommonData
{
class IPage;
} // namespace CommonData
namespace Data
{
class IPdfArray;
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Facades
{
class PdfFileEditor;
} // namespace Facades
namespace LicenseManagement
{
class VentureLicense;
} // namespace LicenseManagement
class Matrix;
class OutlineCollection;
class OutlineItemCollection;
class Page;
namespace PageModel
{
class PageElement;
} // namespace PageModel
class PageSize;
enum class PdfFormat;
class Rectangle;
class SaveOptions;
namespace Tests
{
namespace Facades
{
class PdfFileEditorTests;
} // namespace Facades
} // namespace Tests
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class HashSet;
template <typename> class IEnumerable;
template <typename> class List;
template <typename> class Queue;
} // namespace Generic
} // namespace Collections
namespace IO
{
class FileInfo;
class MemoryStream;
enum class SeekOrigin;
} // namespace IO
class TypeInfo;
namespace Web
{
class HttpResponse;
} // namespace Web
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Implements operations with PDF file: concatenation, splitting, extracting pages, making booklet, etc.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfFileEditor final : public Aspose::Pdf::LicenseManagement::IVentureLicenseTarget
{
    typedef PdfFileEditor ThisType;
    typedef Aspose::Pdf::LicenseManagement::IVentureLicenseTarget BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::Facades::PdfFileEditorTests;
    
public:

    /// <summary>
    /// Action performed when corrupted file was met in concatenation process. 
    /// </summary>
    enum class ConcatenateCorruptedFileAction
    {
        /// <summary>
        /// If corrupted file was met, then stop concatentation process and return error.
        /// </summary>
        StopWithError,
        /// <summary>
        /// If corrupted file was met, then don't stop concatenation and don't process corrupted file.
        /// List of corrupted files is accessible in Failures property.
        /// </summary>
        ConcatenateIgnoringCorrupted,
        /// <summary>
        /// When corrupted object is met in source document, process will not stopped and corrupted object only is ignored.
        /// </summary>
        ConcatenateIgnoringCorruptedObjects
    };
    
    
public:

    /// <summary>
    /// Class which provides information about corrupted files in time of concatenation.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS CorruptedItem : public System::Object
    {
        typedef CorruptedItem ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::Facades::PdfFileEditor;
        
    public:
    
        /// <summary>
        /// Index of corrupted file.
        /// </summary>
        ASPOSE_PDF_SHARED_API int32_t get_Index() const;
        /// <summary>
        /// Exception thrown for this file which indicates problem with the file.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::Exception get_Exception() const;
        
    protected:
    
        /// <summary>
        /// constructor.
        /// </summary>
        /// <param name="index"></param>
        /// <param name="exception"></param>
        CorruptedItem(int32_t index, System::Exception exception);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CorruptedItem, CODEPORTING_ARGS(int32_t index, System::Exception exception));
        
    private:
    
        int32_t _index;
        System::Exception _exception;
        
    };
    
    /// <summary>
    /// Value of margin or content size specified in percents of default space units.
    /// This class is used in ContentsResizeParameters.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS ContentsResizeValue : public System::Object
    {
        typedef ContentsResizeValue ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Sets value in percents of page size.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_PercentValue(double value);
        /// <summary>
        /// Sets value in default space units.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_UnitValue(double value);
        /// <summary>
        /// Gets specified value. Use Unit property to get value units.
        /// </summary>
        ASPOSE_PDF_SHARED_API double get_Value() const;
        /// <summary>
        /// Gets true if value is expressed in percents; 
        /// False if value is expressed in default units.
        /// </summary>
        ASPOSE_PDF_SHARED_API bool get_IsPercent() const;
        
        /// <summary>
        /// Initializes value in percents.
        /// </summary>
        /// <param name="value">Value in percents.</param>
        /// <returns>New value instance.</returns>
        static ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeValue> Percents(double value);
        /// <summary>
        /// Initializes value in default space units.
        /// </summary>
        /// <param name="value">Value in units.</param>
        /// <returns>New value instance.</returns>
        static ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeValue> Units(double value);
        /// <summary>
        /// Initializes automatically calculated value.
        /// </summary>
        /// <returns>New value instance.</returns>
        static ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeValue> Auto();
        
    private:
    
        double _value;
        bool _isPercent;
        
        ContentsResizeValue();
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ContentsResizeValue, CODEPORTING_ARGS());
        
    };
    
    /// <summary>
    /// Class for specifing page resize parameters.
    /// Allow to set the following parameters: 
    /// Size of result page (width, height) in default space units or in percents of initial pages size; 
    /// Left, Top, Bottom and Right margins in default space units or in percents of initial page size;
    /// Some values may be left null for automatic calculation. These values will be calculated 
    /// from rest of page size after calculation explicitly specified values.
    /// For example: if page width = 100 and new page width specified 60 units then 
    /// left and right margins are automatically calculated:
    /// (100 - 60) / 2 = 15.
    /// This class is used in ResizeContents method.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS ContentsResizeParameters : public System::Object
    {
        typedef ContentsResizeParameters ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::Facades::PdfFileEditor;
        
    public:
    
        /// <summary>
        /// Gets left margin on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_LeftMargin() const;
        /// <summary>
        /// Sets left margin on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_LeftMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        /// <summary>
        /// Gets right margin on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_RightMargin() const;
        /// <summary>
        /// Sets right margin on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_RightMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        /// <summary>
        /// Gets top margin on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_TopMargin() const;
        /// <summary>
        /// Sets top margin on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_TopMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        /// <summary>
        /// Gets bottom margin on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_BottomMargin() const;
        /// <summary>
        /// Sets bottom margin on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_BottomMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        /// <summary>
        /// Gets width of the content of the source page on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_ContentsWidth() const;
        /// <summary>
        /// Sets width of the content of the source page on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_ContentsWidth(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        /// <summary>
        /// Gets height of the content of the source page on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_ContentsHeight() const;
        /// <summary>
        /// Sets height of the content of the source page on the resultant page.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_ContentsHeight(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        
        /// <summary>
        /// Creates resize parameters where al values are set to "auto". Later margins and contents size may be specified if required.
        /// </summary>
        ASPOSE_PDF_SHARED_API ContentsResizeParameters();
        /// <summary>
        /// Creates resize parameters with specified margin values and contents size. 
        /// </summary>
        /// <param name="leftMargin">Left margin value.</param>
        /// <param name="contentsWidth">Contents width.</param>
        /// <param name="rightMargin">Right margin.</param>
        /// <param name="topMargin">Top margin.</param>
        /// <param name="contentsHeight">Contents height.</param>
        /// <param name="bottomMargin">Bottom margin.</param>
        /// Empty values means that corresponding value calculated automatically
        ASPOSE_PDF_SHARED_API ContentsResizeParameters(System::SharedPtr<PdfFileEditor::ContentsResizeValue> leftMargin, System::SharedPtr<PdfFileEditor::ContentsResizeValue> contentsWidth, System::SharedPtr<PdfFileEditor::ContentsResizeValue> rightMargin, System::SharedPtr<PdfFileEditor::ContentsResizeValue> topMargin, System::SharedPtr<PdfFileEditor::ContentsResizeValue> contentsHeight, System::SharedPtr<PdfFileEditor::ContentsResizeValue> bottomMargin);
        
        /// <summary>
        /// Creates resize parameters with specifed margins value. Contents size is automatically calculated.
        /// </summary>
        /// <param name="left">Left margin.</param>
        /// <param name="right">Right margin.</param>
        /// <param name="top">Top margin.</param>
        /// <param name="bottom">Bottom margin.</param>
        /// <returns>Created resize parameters.</returns>
        static ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeParameters> Margins(double left, double right, double top, double bottom);
        /// <summary>
        /// Creates resize parameters. Margins are specified in percents of initial page size.
        /// </summary>
        /// <param name="left">Left margin (in percents of page width).</param>
        /// <param name="right">Right margin (in percents of page height).</param>
        /// <param name="top">Top margin (in percents of page height).</param>
        /// <param name="bottom">Bottom margin (in percents of page height).</param>
        /// <returns>Returns new resize parameters.</returns>
        static ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeParameters> MarginsPercent(double left, double right, double top, double bottom);
        /// <summary>
        /// Creates resize parameters with specified contents size.
        /// </summary>
        /// <param name="width">New width of contents.</param>
        /// <param name="height">New height of contetns.</param>
        /// <returns>Returns new resize parameters.</returns>
        static ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeParameters> ContentSize(double width, double height);
        /// <summary>
        /// Creates resize parameters with specified contents size in percents of initial page size.
        /// Margins are caculated automatically.
        /// </summary>
        /// <param name="width">New content width in percents.</param>
        /// <param name="height">New contents height in percents.</param>
        /// <returns>New resize parameters.</returns>
        static ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeParameters> ContentSizePercent(double width, double height);
        /// <summary>
        /// Creates resize paramters for page resize. 
        /// </summary>
        /// <param name="width">New page width in units.</param>
        /// <param name="height">New page height in units. </param>
        /// <returns>New resize paramteres.</returns>
        static ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeParameters> PageResize(double width, double height);
        /// <summary>
        /// Creates resize paramters for page resize. New sizes are specified in percent. 
        /// </summary>
        /// <param name="widthPct">New page width in percents.</param>
        /// <param name="heightPct">New page height in percents. </param>
        /// <returns>New resize paramteres.</returns>
        static ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFileEditor::ContentsResizeParameters> PageResizePct(double widthPct, double heightPct);
        
    protected:
    
        System::ArrayPtr<System::ArrayPtr<double>> CalculateMargins(double pageWidth, double pageHeight);
        
    private:
    
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _LeftMargin;
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _ContentsWidth;
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _RightMargin;
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _TopMargin;
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _ContentsHeight;
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _BottomMargin;
        
        System::ArrayPtr<double> CalculateMargins(System::ArrayPtr<System::SharedPtr<PdfFileEditor::ContentsResizeValue>> values, double initialSize);
        
    };
    
    /// <summary>
    /// Data of page break position.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS PageBreak : public System::Object
    {
        typedef PageBreak ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Number of page (starting from 1) where page break must be added.
        /// </summary>
        ASPOSE_PDF_SHARED_API int32_t get_PageNumber() const;
        /// <summary>
        /// Number of page (starting from 1) where page break must be added.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_PageNumber(int32_t value);
        /// <summary>
        /// Vertical position of page break.
        /// </summary>
        ASPOSE_PDF_SHARED_API double get_Position() const;
        /// <summary>
        /// Vertical position of page break.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_Position(double value);
        
        /// <summary>
        /// Constructor to create PageBreak object.
        /// </summary>
        /// <param name="pageNumber">Number of page where page break is placed.</param>
        /// <param name="position">Vertical position of page break.</param>
        ASPOSE_PDF_SHARED_API PageBreak(int32_t pageNumber, double position);
        
    private:
    
        int32_t _pageNumber;
        double _position;
        
    };
    
    
private:

    class NullStream : public System::IO::Stream
    {
        typedef NullStream ThisType;
        typedef System::IO::Stream BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int64_t get_Position() const override;
        void set_Position(int64_t value) override;
        int64_t get_Length() const override;
        bool get_CanRead() const override;
        bool get_CanSeek() const override;
        bool get_CanWrite() const override;
        
        void Write(const System::ArrayPtr<uint8_t>& buffer, int32_t offset, int32_t count) override;
        int32_t Read(const System::ArrayPtr<uint8_t>& buffer, int32_t offset, int32_t count) override;
        void SetLength(int64_t value) override;
        void Flush() override;
        int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) override;
        
        NullStream();
        
    private:
    
        int64_t pos;
        
    };
    
    /// <summary>
    /// Class describes created optional contents item and its status.
    /// </summary>
    class OptionalContentsItemDescriptor : public System::Object
    {
        typedef OptionalContentsItemDescriptor ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        const System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject>& get_SrcObj() const;
        void set_SrcObj(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> value);
        const System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject>& get_DestObj() const;
        void set_DestObj(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> value);
        
        bool addedToOrder;
        
        OptionalContentsItemDescriptor(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> dest);
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> pr_SrcObj;
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> pr_DestObj;
        
    };
    
    class PageBreakComparer : public System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>>
    {
        typedef PageBreakComparer ThisType;
        typedef System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t Compare(const System::SharedPtr<PdfFileEditor::PageBreak>& x, const System::SharedPtr<PdfFileEditor::PageBreak>& y) const override;
        
    };
    
    class DocumentFormatter : public System::Object
    {
        typedef DocumentFormatter ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        void Execute();
        
        DocumentFormatter(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>> pageBreaks);
        
    private:
    
        System::SharedPtr<Document> src;
        System::SharedPtr<Document> dest;
        double currentPageOffset;
        double pageBreakOffset;
        double elementOffset;
        int32_t pageIndex;
        System::SharedPtr<System::Collections::Generic::Queue<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>>> pageBreaks;
        System::SharedPtr<Page> currentPage;
        System::SharedPtr<Page> destPage;
        
        void PageBreak(double pageBreakPosition);
        void CheckPageBreak(System::SharedPtr<Aspose::Pdf::PageModel::PageElement> element);
        void AssignPageBreaks(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>> pageBreaksArray);
        
    };
    
    
public:

    /// <summary>
    /// Gets log of conversion process.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ConversionLog();
    /// <summary>
    /// Optional contents of concatentated documents with equal names will be merged into one layer in resulstant document if this property is true. 
    /// Else, layers with equal names will be save as different layers in resultant document.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_MergeDuplicateLayers() const;
    /// <summary>
    /// Optional contents of concatentated documents with equal names will be merged into one layer in resulstant document if this property is true. 
    /// Else, layers with equal names will be save as different layers in resultant document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MergeDuplicateLayers(bool value);
    /// <summary>
    /// If true then outlines will be copied. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_CopyOutlines() const;
    /// <summary>
    /// If true then outlines will be copied. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CopyOutlines(bool value);
    /// <summary>
    /// If true then logical structure of the file is copied when concatenation is performed. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_CopyLogicalStructure() const;
    /// <summary>
    /// If true then logical structure of the file is copied when concatenation is performed. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CopyLogicalStructure(bool value);
    /// <summary>
    /// If true, duplicate outlines are merged.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_MergeDuplicateOutlines() const;
    /// <summary>
    /// If true, duplicate outlines are merged.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MergeDuplicateOutlines(bool value);
    /// <summary>
    /// If true, user rights of first document are applied to concatenated document. User rights of all other documents are ignored. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_PreserveUserRights() const;
    /// <summary>
    /// If true, user rights of first document are applied to concatenated document. User rights of all other documents are ignored. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PreserveUserRights(bool value);
    /// <summary>
    /// If true, incremental updates are made during concatenation. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IncrementalUpdates() const;
    /// <summary>
    /// If true, incremental updates are made during concatenation. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IncrementalUpdates(bool value);
    /// <summary>
    /// Gets optimization flag. Equal resource streams in resultant file are merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_OptimizeSize() const;
    /// <summary>
    /// Sets optimization flag. Equal resource streams in resultant file are merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OptimizeSize(bool value);
    /// <summary>
    /// Array of encountered problems when concatenation was performed. For every corrupted document from passed to Concatenate() 
    /// function new CorruptedItem entry is created.
    /// This property may be used only when CorruptedFileAction is ConcatenateIgnoringCorrupted.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<PdfFileEditor::CorruptedItem>> get_CorruptedItems();
    /// <summary>
    /// This property defines behavior when concatenating process met corrupted file.
    /// Possible values are: StopWithError and ConcatenateIgnoringCorrupted.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfFileEditor::ConcatenateCorruptedFileAction get_CorruptedFileAction() const;
    /// <summary>
    /// This property defines behavior when concatenating process met corrupted file.
    /// Possible values are: StopWithError and ConcatenateIgnoringCorrupted.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CorruptedFileAction(PdfFileEditor::ConcatenateCorruptedFileAction value);
    /// <summary>
    /// Sets owner's password if the source input Pdf file is encrypted.
    /// This property is not implemented yet.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_OwnerPassword() const;
    /// <summary>
    /// Sets owner's password if the source input Pdf file is encrypted.
    /// This property is not implemented yet.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OwnerPassword(System::String value);
    /// @deprecated This property is deprecated and can not be used to allow throwing exceptions.
    /// <summary>
    /// If set to true, exceptions are thrown if error occured. Else excetion are not thrown and methods return false if failed.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool get_AllowConcatenateExceptions();
    /// @deprecated This property is deprecated and can not be used to allow throwing exceptions.
    /// <summary>
    /// If set to true, exceptions are thrown if error occured. Else excetion are not thrown and methods return false if failed.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_AllowConcatenateExceptions(bool value);
    /// <summary>
    /// Sets PDF file format. Result file will be saved in specified file format. 
    /// If this property is not specified then file will be save in default PDF format without conversion.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ConvertTo(PdfFormat value);
    /// <summary>
    /// If set to true, streams are closed after operation.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool get_CloseConcatenatedStreams() const;
    /// <summary>
    /// If set to true, streams are closed after operation.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_CloseConcatenatedStreams(bool value);
    /// <summary>
    /// Format of the suffix which is added to field name to make it unique when forms are concatenated.
    /// This string must contain %NUM% substring which will be replaced with numbers.
    /// For example if UniqueSuffix = "ABC%NUM%" then for field "fieldName" names will be:
    /// fieldNameABC1, fieldNameABC2, fieldNameABC3 etc.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::String get_UniqueSuffix() const;
    /// <summary>
    /// Format of the suffix which is added to field name to make it unique when forms are concatenated.
    /// This string must contain %NUM% substring which will be replaced with numbers.
    /// For example if UniqueSuffix = "ABC%NUM%" then for field "fieldName" names will be:
    /// fieldNameABC1, fieldNameABC2, fieldNameABC3 etc.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_UniqueSuffix(System::String value);
    /// <summary>
    /// If true actions will be copied from source documents. Defaulkt value : true.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_KeepActions() const;
    /// <summary>
    /// If true actions will be copied from source documents. Defaulkt value : true.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_KeepActions(bool value);
    /// <summary>
    /// If true then field names will be made unique when forms are concatenated.
    /// Suffixes will be added to field names, suffix template may be specified in UniqueSuffix property.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_KeepFieldsUnique() const;
    /// <summary>
    /// If true then field names will be made unique when forms are concatenated.
    /// Suffixes will be added to field names, suffix template may be specified in UniqueSuffix property.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_KeepFieldsUnique(bool value);
    /// <summary>
    /// If true, all signatures will be removed from fields (fields will remain); otherwise, you can get invalid signatures.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_RemoveSignatures() const;
    /// <summary>
    /// If true, all signatures will be removed from fields (fields will remain); otherwise, you can get invalid signatures.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RemoveSignatures(bool value);
    /// <summary>
    /// Gets last occured exception. May be used to check the reason of failure.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::Exception get_LastException() const;
    /// <summary>
    /// If this option used then destination document will be saved on disk periodically and further concatenation will appllied to it as incremental updates. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseDiskBuffer();
    /// <summary>
    /// If this option used then destination document will be saved on disk periodically and further concatenation will appllied to it as incremental updates. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseDiskBuffer(bool value);
    /// <summary>
    /// Number of documents concatenated before new incremental update was made during concatenation when UseDiskBuffer is set to true.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ConcatenationPacketSize() const;
    /// <summary>
    /// Number of documents concatenated before new incremental update was made during concatenation when UseDiskBuffer is set to true.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ConcatenationPacketSize(int32_t value);
    /// <summary>
    /// Gets how content will be stored when result of operation is stored into HttpResponse object. Possible value: inline / attachment.
    /// Default: inline.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ContentDisposition get_ContentDisposition() const;
    /// <summary>
    /// Sets how content will be stored when result of operation is stored into HttpResponse object. Possible value: inline / attachment.
    /// Default: inline.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ContentDisposition(Aspose::Pdf::ContentDisposition value);
    /// <summary>
    /// Gets save options when result is stored as HttpResponse.
    /// Default value: PdfSaveOptions. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::SaveOptions> get_SaveOptions() const;
    /// <summary>
    /// Sets save options when result is stored as HttpResponse.
    /// Default value: PdfSaveOptions. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SaveOptions(System::SharedPtr<Aspose::Pdf::SaveOptions> value);
    /// <summary>
    /// Gets name of attachment when result of operation is stored into HttpResponse objects as attachment.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_AttachmentName() const;
    /// <summary>
    /// Sets name of attachment when result of operation is stored into HttpResponse objects as attachment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AttachmentName(System::String value);
    
    /// <summary>
    /// PdfFileEditor constructor.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfFileEditor();
    
    /// <summary>
    /// Concatenates two files.
    /// </summary>
    /// <param name="firstInputFile">First file to concatenate.</param>
    /// <param name="secInputFile">Second file to concatenate.</param>
    /// <param name="outputFile">Output file.</param>
    /// <example>
    /// </example>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool Concatenate(System::String firstInputFile, System::String secInputFile, System::String outputFile);
    /// <summary>
    /// Concatenates two files.
    /// </summary>
    /// <param name="firstInputStream">Stream of first file.</param>
    /// <param name="secInputStream">Stream of second file.</param>
    /// <param name="outputStream">Stream where result file will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// </example>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool Concatenate(System::SharedPtr<System::IO::Stream> firstInputStream, System::SharedPtr<System::IO::Stream> secInputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Concatenates documents.
    /// </summary>
    /// <param name="src">Array of source documents.</param>
    /// <param name="dest">Destination document.</param>
    /// <returns>True if concatenation is successful. </returns>
    ASPOSE_PDF_SHARED_API bool Concatenate(System::ArrayPtr<System::SharedPtr<Document>> src, System::SharedPtr<Document> dest);
    /// <summary>
    /// Concatenates files into one file. 
    /// </summary>
    /// <param name="inputFiles">Array of files to concatenate.</param>
    /// <param name="outputFile">Name of output file.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Concatenate(System::ArrayPtr<System::String> inputFiles, System::String outputFile);
    /// <summary>
    /// Concatenates files 
    /// </summary>
    /// <param name="inputStream">Array of streams to be concatenated.</param>
    /// <param name="outputStream">Stream where result file will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Concatenate(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Merges two Pdf documents into a new Pdf document with pages in alternate ways and fill the blank places with blank pages.
    /// e.g.: document1 has 5 pages: p1, p2, p3, p4, p5. document2 has 3 pages: p1', p2', p3'.
    /// Merging the two Pdf document will produce the result document with pages:p1, p1', p2, p2', p3, p3', p4, blankpage, p5, blankpage.
    /// </summary>
    /// <param name="firstInputFile">First file.</param>
    /// <param name="secInputFile">Second file.</param>
    /// <param name="blankPageFile">PDF file with blank page.</param>
    /// <param name="outputFile">Result file.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Concatenate(System::String firstInputFile, System::String secInputFile, System::String blankPageFile, System::String outputFile);
    /// <summary>
    /// Merges two Pdf documents into a new Pdf document with pages in alternate ways and fill the blank places with blank pages.
    /// e.g.: document1 has 5 pages: p1, p2, p3, p4, p5. document2 has 3 pages: p1', p2', p3'.
    /// Merging the two Pdf document will produce the result document with pages:p1, p1', p2, p2', p3, p3', p4, blankpage, p5, blankpage.
    /// </summary>
    /// <param name="firstInputStream">The first Pdf Stream.</param>
    /// <param name="secInputStream">The second Pdf Stream.</param>
    /// <param name="blankPageStream">The Pdf Stream with blank page.</param>
    /// <param name="outputStream">Output Pdf Stream.</param>
    /// <returns> True if operation was succeeded.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Concatenate(System::SharedPtr<System::IO::Stream> firstInputStream, System::SharedPtr<System::IO::Stream> secInputStream, System::SharedPtr<System::IO::Stream> blankPageStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Appends pages, which are chosen from array of documents in portStreams.
    /// The result document includes firstInputFile and all portStreams documents pages in the range startPage to endPage.
    /// </summary>
    /// <param name="inputStream">Input Pdf stream.</param>
    /// <param name="portStreams">Documents to copy pages from.</param>
    /// <param name="startPage">Page starts in portStreams documents.</param>
    /// <param name="endPage">Page ends in portStreams documents .</param>
    /// <param name="outputStream">Output Pdf stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Append(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<System::SharedPtr<System::IO::Stream>> portStreams, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Appends pages, which are chosen from portFiles documents. 
    /// The result document includes firstInputFile and all portFiles documents pages in the range startPage to endPage.
    /// </summary>
    /// <param name="inputFile">Input Pdf file.</param>
    /// <param name="portFiles">Documents to copy pages from.</param>
    /// <param name="startPage">Page starts in portFiles documents.</param>
    /// <param name="endPage">Page ends in portFiles documents .</param>
    /// <param name="outputFile">Output Pdf document.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Append(System::String inputFile, System::ArrayPtr<System::String> portFiles, int32_t startPage, int32_t endPage, System::String outputFile);
    /// <summary>
    /// Appends pages, which are chosen from portFile within the range from startPage to endPage, in portFile at the end of firstInputFile.
    /// </summary>
    /// <param name="inputFile">Input Pdf file.</param>
    /// <param name="portFile">Pages from Pdf file.</param>
    /// <param name="startPage">Page starts in portFile.</param>
    /// <param name="endPage">Page ends in portFile.</param>
    /// <param name="outputFile">Output Pdf document.</param>
    /// <returns>True if operation was succeeded.</returns>	
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Append(System::String inputFile, System::String portFile, int32_t startPage, int32_t endPage, System::String outputFile);
    /// <summary>
    ///  Appends pages,which are chosen from portStream within the range from startPage to endPage, in portStream at the end of firstInputStream.
    /// </summary>
    /// <param name="inputStream">Input file Stream.</param>
    /// <param name="portStream">Pages from Pdf file Stream.</param>
    /// <param name="startPage">Page starts in portFile Stream.</param>
    /// <param name="endPage">Page ends in portFile Stream.</param>
    /// <param name="outputStream">Output Pdf file Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Append(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> portStream, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Inserts pages from an other file into the Pdf file at a position. 
    /// </summary>
    /// <param name="inputFile">Input Pdf file.</param>
    /// <param name="insertLocation">Position in input file.</param>
    /// <param name="portFile">The porting Pdf file.</param>
    /// <param name="startPage">Start position in portFile.</param>
    /// <param name="endPage">End position in portFile.</param>
    /// <param name="outputFile">Output Pdf file.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Insert(System::String inputFile, int32_t insertLocation, System::String portFile, int32_t startPage, int32_t endPage, System::String outputFile);
    /// <summary>
    /// Inserts pages from an other file into the input Pdf file.
    /// </summary>
    /// <param name="inputStream">Input Stream of  Pdf file. </param>
    /// <param name="insertLocation">Insert position in input file.</param>
    /// <param name="portStream">Stream of Pdf file for pages.</param>
    /// <param name="startPage">From which page to start.</param>
    /// <param name="endPage">To which page to end.</param>
    /// <param name="outputStream">Output Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Insert(System::SharedPtr<System::IO::Stream> inputStream, int32_t insertLocation, System::SharedPtr<System::IO::Stream> portStream, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Inserts pages from an other file into the input Pdf file.
    /// </summary>
    /// <param name="inputFile">Input Pdf file.</param>
    /// <param name="insertLocation">Insert position in input file.</param>
    /// <param name="portFile">Pages from the Pdf file.</param>
    /// <param name="pageNumber">The page number of the ported in portFile.</param>
    /// <param name="outputFile">Output Pdf file.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Insert(System::String inputFile, int32_t insertLocation, System::String portFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    /// <summary>
    /// Inserts pages from an other file into the input Pdf file.
    /// </summary>
    /// <param name="inputStream">Input Stream of  Pdf file. </param>
    /// <param name="insertLocation">Insert position in input file.</param>
    /// <param name="portStream">Stream of Pdf file for pages.</param>
    /// <param name="pageNumber">The page number of the ported in portFile.</param>
    /// <param name="outputStream">Output Stream.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Insert(System::SharedPtr<System::IO::Stream> inputStream, int32_t insertLocation, System::SharedPtr<System::IO::Stream> portStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Deletes pages specified by number array from input file, saves as a new Pdf file. 
    /// </summary>
    /// <param name="inputFile">Input file path.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputFile">Output file path.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Delete(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    /// <summary>
    /// Deletes pages specified by number array from input file, saves as a new Pdf file. 
    /// </summary>
    /// <param name="inputStream">Input file Stream.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputStream">Output file stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Delete(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Extracts pages from input file,saves as a new Pdf file.
    /// </summary>
    /// <param name="inputFile">Input Pdf file path.</param>
    /// <param name="startPage">Start page number.</param>
    /// <param name="endPage">End page number.</param>
    /// <param name="outputFile">Output Pdf file path.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Extract(System::String inputFile, int32_t startPage, int32_t endPage, System::String outputFile);
    /// <summary>
    /// Extracts pages specified by number array, saves as a new PDF file. 
    /// </summary>
    /// <param name="inputFile">Input file path.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputFile">Output file path.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Extract(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    /// <summary>
    /// Extracts pages from input file,saves as a new Pdf file.
    /// </summary>
    /// <param name="inputStream">Input file Stream.</param>
    /// <param name="startPage">Start page number.</param>
    /// <param name="endPage">End page number.</param>
    /// <param name="outputStream">Output Pdf file Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Extract(System::SharedPtr<System::IO::Stream> inputStream, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Extracts pages specified by number array, saves as a new Pdf file. 
    /// </summary>
    /// <param name="inputStream">Input file Stream.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputStream">Output file stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Extract(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Splits Pdf file from first page to specified location,and saves the front part as a new file.
    /// </summary>
    /// <param name="inputFile">Source Pdf file.</param>
    /// <param name="location">The splitting point.</param>
    /// <param name="outputFile">Output Pdf file.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SplitFromFirst(System::String inputFile, int32_t location, System::String outputFile);
    /// <summary>
    /// Splits from start to specified location,and saves the front part in output Stream.
    /// </summary>
    /// <param name="inputStream">Source Pdf file Stream.</param>
    /// <param name="location">The splitting point.</param>
    /// <param name="outputStream">Output file Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>The streams are NOT closed after this operation.</remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SplitFromFirst(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Splits from location, and saves the rear part as a new file.
    /// </summary>
    /// <param name="inputFile">Source Pdf file.</param>
    /// <param name="location">The splitting position.</param>
    /// <param name="outputFile">Output Pdf file path.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SplitToEnd(System::String inputFile, int32_t location, System::String outputFile);
    /// <summary>
    /// Splits from specified location, and saves the rear part as a new file Stream.
    /// </summary>
    /// <param name="inputStream">Source Pdf file Stream.</param>
    /// <param name="location">The splitting position.</param>
    /// <param name="outputStream">Output Pdf file Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>The streams are NOT closed after this operation unless CloseConcatedStreams is specified.</remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SplitToEnd(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary> Makes booklet from the input file to output file.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::String inputFile, System::String outputFile);
    /// <summary> Makes booklet from the InputStream to outputStream.
    /// </summary>
    /// <param name="inputStream">Input pdf stream.
    /// </param>
    /// <param name="outputStream">output pdf stream.
    /// </param>
    /// <returns> True if operation was succeeded.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary> Makes booklet from the inputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <returns>True if operation is succeeded.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::String inputFile, System::String outputFile, System::SharedPtr<PageSize> pageSize);
    /// <summary> Makes booklet from the input stream and save result into output stream.
    /// </summary>
    /// <param name="inputStream">Input PDF stream.
    /// </param>
    /// <param name="outputStream">output pdf stream.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <example>
    /// </example>
    /// <returns>True if operation was succeeded.</returns> 
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Makes customized booklet from the firstInputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">The input file.</param>
    /// <param name="outputFile">Output pdf file path and name.</param>
    /// <param name="leftPages">The left pages of the booklet.</param>
    /// <param name="rightPages">The right pages of the booklet.</param>
    /// <returns>boolean - True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::String inputFile, System::String outputFile, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary>
    /// Makes customized booklet from the firstInputStream to outputStream.
    /// </summary>
    /// <param name="inputStream">The input stream.</param>
    /// <param name="outputStream">output pdf stream.</param>
    /// <param name="leftPages">The left pages.</param>
    /// <param name="rightPages">The right pages.</param>
    /// <returns>boolean - True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary>
    /// Makes customized booklet from the firstInputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">The input file.</param>
    /// <param name="outputFile">Output pdf file path and name.</param>
    /// <param name="pageSize">The page size of the output pdf file.</param>
    /// <param name="leftPages">The left pages.</param>
    /// <param name="rightPages">The right pages.</param>
    /// <returns>boolean - True for success, or false. </returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::String inputFile, System::String outputFile, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary>
    /// Makes booklet from the firstInputStream to outputStream.
    /// </summary>
    /// <param name="inputStream">The input stream.</param>
    /// <param name="outputStream">output pdf stream.</param>
    /// <param name="pageSize">The page size of the output pdf file.</param>
    /// <param name="leftPages">The left pages.</param>
    /// <param name="rightPages">The right pages.</param>
    /// <returns>boolean - True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary> Makes N-Up document from the firstInputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <returns> boolean - True for success, or false. </returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::String inputFile, System::String outputFile, int32_t x, int32_t y);
    /// <summary> Makes N-Up document from the input stream and saves result into output stream.
    /// </summary>
    /// <param name="inputStream">Input pdf stream.
    /// </param>
    /// <param name="outputStream">Output pdf stream.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, int32_t x, int32_t y);
    /// <summary> Makes N-Up document from the first input stream to output stream.
    /// </summary>
    /// <param name="inputStream">Input pdf stream.
    /// </param>
    /// <param name="outputStream">Output pdf stream.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize);
    /// <summary> Makes N-Up document from the two input PDF files to outputFile. 
    /// Each page of outputFile will contain two pages, one page is from the first input file 
    /// and another is from the second input file. The two pages are piled up horizontally. 
    /// </summary>
    /// <param name="firstInputFile">first input file.
    /// </param>
    /// <param name="secondInputFile">second input file.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::String firstInputFile, System::String secondInputFile, System::String outputFile);
    /// <summary> Makes N-Up document from the two input PDF streams to outputStream.
    /// </summary>
    /// <param name="firstInputStream">first input stream.
    /// </param>
    /// <param name="secondInputStream">second input stream.
    /// </param>
    /// <param name="outputStream">Output pdf stream.
    /// </param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::SharedPtr<System::IO::Stream> firstInputStream, System::SharedPtr<System::IO::Stream> secondInputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary> Makes N-Up document from the multi input PDF files to outputFile. 
    /// Each page of outputFile will contain multi pages, which are combination with pages 
    /// in the input files of the same page number. The multi pages piled up horizontally 
    /// if isSidewise is true and piled up vertically if isSidewise is false. 
    /// </summary>
    /// <param name="inputFiles">Input Pdf files.</param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="isSidewise">Piled up way, true for horizontally and false for vertically.</param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::ArrayPtr<System::String> inputFiles, System::String outputFile, bool isSidewise);
    /// <summary> Makes N-Up document from the multi input PDF streams to outputStream.
    /// Each page of outputStream will contain multi pages, which are combination with pages 
    /// in the input streams of the same page number. The multi-pages piled up horizontally 
    /// if isSidewise is true and piled up vertically if isSidewise is false.
    /// </summary>
    /// <param name="inputStreams">Input Pdf streams.</param>
    /// <param name="outputStream">Output pdf stream.</param>
    /// <param name="isSidewise">Piled up way, true for horizontally and false for vertically.</param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStreams, System::SharedPtr<System::IO::Stream> outputStream, bool isSidewise);
    /// <summary> Makes N-Up document from the input file to outputFile.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::String inputFile, System::String outputFile, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Splits the PDF file into single-page documents.
    /// </summary>
    /// <param name="inputFile">Input PDF file name.</param>
    /// <returns>Output PDF streams, each stream buffers a single-page PDF document.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToPages(System::String inputFile);
    /// <summary>
    /// Splits the Pdf file into single-page documents.
    /// </summary>
    /// <param name="inputStream">Input Pdf stream.</param>
    /// <returns>Array of memory streams which contain pages of the document.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToPages(System::SharedPtr<System::IO::Stream> inputStream);
    /// <summary>
    /// Split the Pdf file into single-page documents and saves it into specified path. Path is specifield by field name temaplate.
    /// </summary>
    /// <param name="inputFile">Input file name.</param>
    /// <param name="fileNameTemplate">Template of resultant file name. Must contain %NUM% which is replaced with page number. For example, if c:/dir/page%NUM%.pdf is specified, resultant files will have the following names: c:/dir/page1.pdf, c:/dir/page2.pdf etc.</param>
    ASPOSE_PDF_SHARED_API void SplitToPages(System::String inputFile, System::String fileNameTemplate);
    /// <summary>
    /// Split the Pdf file into single-page documents and saves it into specified path. Path is specifield by field name temaplate.
    /// </summary>
    /// <param name="inputStream">Stream of the soruce document.</param>
    /// <param name="fileNameTemplate">Template of resultant file name. Must contain %NUM% which is replaced with page number. For example, if c:/dir/page%NUM%.pdf is specified, resultant files will have the following names: c:/dir/page1.pdf, c:/dir/page2.pdf etc.</param>
    ASPOSE_PDF_SHARED_API void SplitToPages(System::SharedPtr<System::IO::Stream> inputStream, System::String fileNameTemplate);
    /// <summary>
    /// Splits the Pdf file into several documents.The documents can be single-page or multi-pages.
    /// </summary>
    /// <param name="inputFile">Input PDF file.</param>
    /// <param name="numberOfPage">Array which contains array of double elements, which is start and end pages of document.</param>
    /// <returns>Output PDF streams, each stream buffers a PDF document.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToBulks(System::String inputFile, System::ArrayPtr<System::ArrayPtr<int32_t>> numberOfPage);
    /// <summary>
    /// Splits the Pdf file into several documents.The documents can be single-page or multi-pages.
    /// </summary>
    /// <param name="inputStream">Input PDF stream.</param>
    /// <param name="numberOfPage">The start page and the end page of each document.</param>
    /// <returns>Output PDF streams, each stream buffers a PDF document.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToBulks(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<System::ArrayPtr<int32_t>> numberOfPage);
    /// <summary>
    /// Resizes contents of pages of the document.
    /// </summary>
    /// <param name="source">Stream with source document.</param>
    /// <param name="destination">Stream with the destination document.</param>
    /// <param name="pages">Array of page indexes.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <returns>Returns true if success.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool ResizeContents(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    /// <summary>
    /// Resizes contents of document pages. 
    /// Shrinks contents of page and adds margins.
    /// New size of contents is specified in default space units.
    /// </summary>
    /// <param name="source">Stream which contains source document.</param>
    /// <param name="destination">Stream where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="newWidth">New width of page contents in default space units.</param>
    /// <param name="newHeight">New height of page contents in default space units.</param>
    /// <returns>True if resize was successful.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool ResizeContents(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    /// <summary>
    /// Resizes contents of document pages.
    /// Shrinks contents of page and adds margins.
    /// New contents size is specified in percents.
    /// </summary>
    /// <param name="source">Stream which contains source document.</param>
    /// <param name="destination">Stream where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="newWidth">New width of page contents in percents.</param>
    /// <param name="newHeight">New height of page contents in percetns.</param>
    /// <returns>true if resized sucessfully.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool ResizeContentsPct(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    /// <summary>
    /// Resizes page contents and add specifed margins. 
    /// Margins are specified in default space units.
    /// </summary>
    /// <param name="source">Stream which contains source document.</param>
    /// <param name="destination">Stream where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="leftMargin">Left margin.</param>
    /// <param name="rightMargin">Right margin.</param>
    /// <param name="topMargin">Top margin.</param>
    /// <param name="bottomMargin">Bottom margin.</param>
    /// <returns>true if operation was successful.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddMargins(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    /// <summary>
    /// Resizes page contents and add specified margins.
    /// Margins are specified in percents of intitial page size.
    /// </summary>
    /// <param name="source">Stream which contains source document.</param>
    /// <param name="destination">Stream where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="leftMargin">Left margin in percents of initial page size.</param>
    /// <param name="rightMargin">Right margin in percents of initial page size.</param>
    /// <param name="topMargin">Top margin in percents of initial page size.</param>
    /// <param name="bottomMargin">Bottom margin in percents of initial page size. </param>
    /// <returns>true if action was performed successfully.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddMarginsPct(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    /// <summary>
    /// Resizes contents of document pages. 
    /// Shrinks contents of page and adds margins.
    /// New size of contents is specified in default space units.
    /// </summary>
    /// <param name="source">Path to source document.</param>
    /// <param name="destination">Path where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="newWidth">New width of page contents in default space units.</param>
    /// <param name="newHeight">New height of page contents in default space units.</param>
    /// <returns>true if resize was successful.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool ResizeContents(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    /// <summary>
    /// Resizes contents of document pages.
    /// Shrinks contents of page and adds margins.
    /// New contents size is specified in percents.
    /// </summary>
    /// <param name="source">Path to source document.</param>
    /// <param name="destination">Path where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="newWidth">New width of page contents in percents.</param>
    /// <param name="newHeight">New height of page contents in percetns.</param>
    /// <returns>true if resize was successful.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool ResizeContentsPct(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    /// <summary>
    /// Resizes page contents and add specifed margins. 
    /// Margins are specified in default space units.
    /// </summary>
    /// <param name="source">Path to source document.</param>
    /// <param name="destination">Path where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="leftMargin">Left margin.</param>
    /// <param name="rightMargin">Right margin.</param>
    /// <param name="topMargin">Top margin.</param>
    /// <param name="bottomMargin">Bottom margin.</param>
    /// <returns>true if resize was successful.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddMargins(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    /// <summary>
    /// Resizes page contents and add specified margins.
    /// Margins are specified in percents of intitial page size.
    /// </summary>
    /// <param name="source">Path to source document.</param>
    /// <param name="destination">Path where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="leftMargin">Left margin in percents of initial page size.</param>
    /// <param name="rightMargin">Right margin in percents of initial page size.</param>
    /// <param name="topMargin">Top margin in percents of initial page size.</param>
    /// <param name="bottomMargin">Bottom margin in percents of initial page size. </param>
    /// <returns>true if resize was successful</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddMarginsPct(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    /// <summary>
    /// Resizes contents of pages in document. If page is shrinked blank margins are added around the page.
    /// </summary>
    /// <param name="source">Source document path.</param>
    /// <param name="destination">Destination document path.</param>
    /// <param name="pages">Array of page indexes (page index starts from 1).</param>
    /// <param name="parameters">Parameters of page resize.</param>
    /// <returns>true if resize was successful.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool ResizeContents(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    /// <summary>
    /// Resizes pages of document. Blank margins are added around of shrinked page.
    /// </summary>
    /// <param name="source">Source document.</param>
    /// <param name="pages">List of page indexes.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <example>
    /// </example>      
    ASPOSE_PDF_SHARED_API void ResizeContents(System::SharedPtr<Document> source, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    /// <summary>
    /// Resizes pages of document. Blank margins are added around of shrinked page.
    /// </summary>
    /// <param name="source">Source document.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <example>
    /// </example>      
    ASPOSE_PDF_SHARED_API void ResizeContents(System::SharedPtr<Document> source, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    /// <summary>
    /// Adds page breaks into document pages. 
    /// </summary>
    /// <param name="src">Source document.</param>
    /// <param name="dest">Destination document.</param>
    /// <param name="pageBreaks">Array of PageBreak objects which describe places of page breaks.</param>
    ASPOSE_PDF_SHARED_API void AddPageBreak(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::ArrayPtr<System::SharedPtr<PdfFileEditor::PageBreak>> pageBreaks);
    /// <summary>
    /// Adds page breaks into document pages. 
    /// </summary>
    /// <param name="src">Path to source document.</param>
    /// <param name="dest">Path to destination document.</param>
    /// <param name="pageBreaks">Array of PageBreak object describing pages and places where page break will be added.</param>
    ASPOSE_PDF_SHARED_API void AddPageBreak(System::String src, System::String dest, System::ArrayPtr<System::SharedPtr<PdfFileEditor::PageBreak>> pageBreaks);
    /// <summary>
    /// Adds page breaks into document pages. 
    /// </summary>
    /// <param name="src">Source which contains source document.</param>
    /// <param name="dest">Source where destination document will be saved.</param>
    /// <param name="pageBreaks">Array of PageBreak object describing pages and places where page break will be added.</param>
    ASPOSE_PDF_SHARED_API void AddPageBreak(System::SharedPtr<System::IO::Stream> src, System::SharedPtr<System::IO::Stream> dest, System::ArrayPtr<System::SharedPtr<PdfFileEditor::PageBreak>> pageBreaks);
    /// <summary>
    /// Concatenates two files.
    /// </summary>
    /// <param name="firstInputFile">First file to concatenate.</param>
    /// <param name="secInputFile">Second file to concatenate.</param>
    /// <param name="outputFile">Output file.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryConcatenate method is like the Concatenate method, except the TryConcatenate 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryConcatenate(System::String firstInputFile, System::String secInputFile, System::String outputFile);
    /// <summary>
    /// Concatenates documents.
    /// </summary>
    /// <param name="src">Array of source documents.</param>
    /// <param name="dest">Destination document.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryConcatenate method is like the Concatenate method, 
    /// except the TryConcatenate method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryConcatenate(System::ArrayPtr<System::SharedPtr<Document>> src, System::SharedPtr<Document> dest);
    /// <summary>
    /// Concatenates files into one file. 
    /// </summary>
    /// <param name="inputFiles">Array of files to concatenate.</param>
    /// <param name="outputFile">Name of output file.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryConcatenate method is like the Concatenate method, 
    /// except the TryConcatenate method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryConcatenate(System::ArrayPtr<System::String> inputFiles, System::String outputFile);
    /// <summary>
    /// Concatenates files 
    /// </summary>
    /// <param name="inputStream">Array of streams to be concatenated.</param>
    /// <param name="outputStream">Stream where result file will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryConcatenate method is like the Concatenate method, 
    /// except the TryConcatenate method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryConcatenate(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Merges two Pdf documents into a new Pdf document with pages in alternate ways and fill the blank places with blank pages.
    /// e.g.: document1 has 5 pages: p1, p2, p3, p4, p5. document2 has 3 pages: p1', p2', p3'.
    /// Merging the two Pdf document will produce the result document with pages:p1, p1', p2, p2', p3, p3', p4, blankpage, p5, blankpage.
    /// </summary>
    /// <param name="firstInputFile">First file.</param>
    /// <param name="secInputFile">Second file.</param>
    /// <param name="blankPageFile">PDF file with blank page.</param>
    /// <param name="outputFile">Result file.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryConcatenate method is like the Concatenate 
    /// method, except the TryConcatenate method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryConcatenate(System::String firstInputFile, System::String secInputFile, System::String blankPageFile, System::String outputFile);
    /// <summary>
    /// Merges two Pdf documents into a new Pdf document with pages in alternate ways and fill the blank places with blank pages.
    /// e.g.: document1 has 5 pages: p1, p2, p3, p4, p5. document2 has 3 pages: p1', p2', p3'.
    /// Merging the two Pdf document will produce the result document with pages:p1, p1', p2, p2', p3, p3', p4, blankpage, p5, blankpage.
    /// </summary>
    /// <param name="firstInputStream">The first Pdf Stream.</param>
    /// <param name="secInputStream">The second Pdf Stream.</param>
    /// <param name="blankPageStream">The Pdf Stream with blank page.</param>
    /// <param name="outputStream">Output Pdf Stream.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryConcatenate method is like the Concatenate 
    /// method, except the TryConcatenate method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryConcatenate(System::SharedPtr<System::IO::Stream> firstInputStream, System::SharedPtr<System::IO::Stream> secInputStream, System::SharedPtr<System::IO::Stream> blankPageStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Appends pages, which are chosen from array of documents in portStreams.
    /// The result document includes firstInputFile and all portStreams documents pages in the range startPage to endPage.
    /// </summary>
    /// <param name="inputStream">Input Pdf stream.</param>
    /// <param name="portStreams">Documents to copy pages from.</param>
    /// <param name="startPage">Page starts in portStreams documents.</param>
    /// <param name="endPage">Page ends in portStreams documents .</param>
    /// <param name="outputStream">Output Pdf stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>
    /// The TryAppend method is like the Append method, except the TryAppend 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryAppend(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<System::SharedPtr<System::IO::Stream>> portStreams, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Appends pages, which are chosen from portFiles documents. 
    /// The result document includes firstInputFile and all portFiles documents pages in the range startPage to endPage.
    /// </summary>
    /// <param name="inputFile">Input Pdf file.</param>
    /// <param name="portFiles">Documents to copy pages from.</param>
    /// <param name="startPage">Page starts in portFiles documents.</param>
    /// <param name="endPage">Page ends in portFiles documents .</param>
    /// <param name="outputFile">Output Pdf document.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryAppend method is like the Append method, except the TryAppend 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryAppend(System::String inputFile, System::ArrayPtr<System::String> portFiles, int32_t startPage, int32_t endPage, System::String outputFile);
    /// <summary>
    /// Inserts pages from an other file into the input Pdf file.
    /// </summary>
    /// <param name="inputFile">Input Pdf file.</param>
    /// <param name="insertLocation">Insert position in input file.</param>
    /// <param name="portFile">Pages from the Pdf file.</param>
    /// <param name="pageNumber">The page number of the ported in portFile.</param>
    /// <param name="outputFile">Output Pdf file.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>
    /// The TryInsert method is like the Insert method, except the TryInsert 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryInsert(System::String inputFile, int32_t insertLocation, System::String portFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    /// <summary>
    /// Inserts pages from an other file into the input Pdf file.
    /// </summary>
    /// <param name="inputStream">Input Stream of  Pdf file. </param>
    /// <param name="insertLocation">Insert position in input file.</param>
    /// <param name="portStream">Stream of Pdf file for pages.</param>
    /// <param name="pageNumber">The page number of the ported in portFile.</param>
    /// <param name="outputStream">Output Stream.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryInsert method is like the Insert method, except the TryInsert 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryInsert(System::SharedPtr<System::IO::Stream> inputStream, int32_t insertLocation, System::SharedPtr<System::IO::Stream> portStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Deletes pages specified by number array from input file, saves as a new Pdf file. 
    /// </summary>
    /// <param name="inputFile">Input file path.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputFile">Output file path.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryDelete method is like the Delete method, except the TryDelete 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryDelete(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    /// <summary>
    /// Deletes pages specified by number array from input file, saves as a new Pdf file. 
    /// </summary>
    /// <param name="inputStream">Input file Stream.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputStream">Output file stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>
    /// The TryDelete method is like the Delete method, except the TryDelete 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryDelete(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Extracts pages from input file,saves as a new Pdf file.
    /// </summary>
    /// <param name="inputFile">Input Pdf file path.</param>
    /// <param name="startPage">Start page number.</param>
    /// <param name="endPage">End page number.</param>
    /// <param name="outputFile">Output Pdf file path.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>
    /// The TryExtract method is like the Extract method, except the TryExtract 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryExtract(System::String inputFile, int32_t startPage, int32_t endPage, System::String outputFile);
    /// <summary>
    /// Extracts pages specified by number array, saves as a new PDF file. 
    /// </summary>
    /// <param name="inputFile">Input file path.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputFile">Output file path.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryExtract method is like the Extract method, except the TryExtract 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API bool TryExtract(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    /// <summary>
    /// Extracts pages specified by number array, saves as a new Pdf file. 
    /// </summary>
    /// <param name="inputStream">Input file Stream.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputStream">Output file stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>
    /// The TryExtract method is like the Extract method, except the TryExtract 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryExtract(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Splits Pdf file from first page to specified location,and saves the front part as a new file.
    /// </summary>
    /// <param name="inputFile">Source Pdf file.</param>
    /// <param name="location">The splitting point.</param>
    /// <param name="outputFile">Output Pdf file.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>
    /// The TrySplitFromFirst method is like the SplitFromFirst 
    /// method, except the TrySplitFromFirst method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TrySplitFromFirst(System::String inputFile, int32_t location, System::String outputFile);
    /// <summary>
    /// Splits from start to specified location,and saves the front part in output Stream.
    /// </summary>
    /// <param name="inputStream">Source Pdf file Stream.</param>
    /// <param name="location">The splitting point.</param>
    /// <param name="outputStream">Output file Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>
    /// The streams are NOT closed after this operation.
    /// The TrySplitFromFirst method is like the SplitFromFirst method, except the TrySplitFromFirst 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TrySplitFromFirst(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Splits from location, and saves the rear part as a new file.
    /// </summary>
    /// <param name="inputFile">Source Pdf file.</param>
    /// <param name="location">The splitting position.</param>
    /// <param name="outputFile">Output Pdf file path.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>
    /// The TrySplitToEnd method is like the SplitToEnd method, except the TrySplitToEnd 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TrySplitToEnd(System::String inputFile, int32_t location, System::String outputFile);
    /// <summary>
    /// Splits from specified location, and saves the rear part as a new file Stream.
    /// </summary>
    /// <param name="inputStream">Source Pdf file Stream.</param>
    /// <param name="location">The splitting position.</param>
    /// <param name="outputStream">Output Pdf file Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>
    /// The streams are NOT closed after this operation unless CloseConcatedStreams is specified.
    /// The TrySplitToEnd method is like the SplitToEnd method, except the TrySplitToEnd 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TrySplitToEnd(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary> 
    /// Makes booklet from the input file to output file.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::String inputFile, System::String outputFile);
    /// <summary> Makes booklet from the InputStream to outputStream.
    /// </summary>
    /// <param name="inputStream">Input pdf stream.
    /// </param>
    /// <param name="outputStream">output pdf stream.
    /// </param>
    /// <returns> true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary> Makes booklet from the inputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <returns>True if operation is succeeded.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::String inputFile, System::String outputFile, System::SharedPtr<PageSize> pageSize);
    /// <summary> Makes booklet from the input stream and save result into output stream.
    /// </summary>
    /// <param name="inputStream">Input PDF stream.
    /// </param>
    /// <param name="outputStream">output pdf stream.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Makes customized booklet from the firstInputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">The input file.</param>
    /// <param name="outputFile">Output pdf file path and name.</param>
    /// <param name="leftPages">The left pages of the booklet.</param>
    /// <param name="rightPages">The right pages of the booklet.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::String inputFile, System::String outputFile, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary>
    /// Makes customized booklet from the firstInputStream to outputStream.
    /// </summary>
    /// <param name="inputStream">The input stream.</param>
    /// <param name="outputStream">output pdf stream.</param>
    /// <param name="leftPages">The left pages.</param>
    /// <param name="rightPages">The right pages.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary>
    /// Makes customized booklet from the firstInputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">The input file.</param>
    /// <param name="outputFile">Output pdf file path and name.</param>
    /// <param name="pageSize">The page size of the output pdf file.</param>
    /// <param name="leftPages">The left pages.</param>
    /// <param name="rightPages">The right pages.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::String inputFile, System::String outputFile, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary>
    /// Makes booklet from the firstInputStream to outputStream.
    /// </summary>
    /// <param name="inputStream">The input stream.</param>
    /// <param name="outputStream">output pdf stream.</param>
    /// <param name="pageSize">The page size of the output pdf file.</param>
    /// <param name="leftPages">The left pages.</param>
    /// <param name="rightPages">The right pages.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary> Makes N-Up document from the firstInputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <returns>true if operation was completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::String inputFile, System::String outputFile, int32_t x, int32_t y);
    /// <summary> Makes N-Up document from the input stream and saves result into output stream.
    /// </summary>
    /// <param name="inputStream">Input pdf stream.
    /// </param>
    /// <param name="outputStream">Output pdf stream.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, int32_t x, int32_t y);
    /// <summary> Makes N-Up document from the first input stream to output stream.
    /// </summary>
    /// <param name="inputStream">Input pdf stream.
    /// </param>
    /// <param name="outputStream">Output pdf stream.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize);
    /// <summary> Makes N-Up document from the two input PDF files to outputFile. 
    /// Each page of outputFile will contain two pages, one page is from the first input file 
    /// and another is from the second input file. The two pages are piled up horizontally. 
    /// </summary>
    /// <param name="firstInputFile">first input file.
    /// </param>
    /// <param name="secondInputFile">second input file.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <returns>true if operation was completed successfully; otherwise, false</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::String firstInputFile, System::String secondInputFile, System::String outputFile);
    /// <summary> Makes N-Up document from the two input PDF streams to outputStream.
    /// </summary>
    /// <param name="firstInputStream">first input stream.
    /// </param>
    /// <param name="secondInputStream">second input stream.
    /// </param>
    /// <param name="outputStream">Output pdf stream.
    /// </param>
    /// <returns>true if operation was completed successfully; otherwise, false</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::SharedPtr<System::IO::Stream> firstInputStream, System::SharedPtr<System::IO::Stream> secondInputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary> Makes N-Up document from the multi input PDF files to outputFile. 
    /// Each page of outputFile will contain multi pages, which are combination with pages 
    /// in the input files of the same page number. The multi pages piled up horizontally 
    /// if isSidewise is true and piled up vertically if isSidewise is false. 
    /// </summary>
    /// <param name="inputFiles">Input Pdf files.</param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="isSidewise">Piled up way, true for horizontally and false for vertically.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::ArrayPtr<System::String> inputFiles, System::String outputFile, bool isSidewise);
    /// <summary> Makes N-Up document from the multi input PDF streams to outputStream.
    /// Each page of outputStream will contain multi pages, which are combination with pages 
    /// in the input streams of the same page number. The multi-pages piled up horizontally 
    /// if isSidewise is true and piled up vertically if isSidewise is false.
    /// </summary>
    /// <param name="inputStreams">Input Pdf streams.</param>
    /// <param name="outputStream">Output pdf stream.</param>
    /// <param name="isSidewise">Piled up way, true for horizontally and false for vertically.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStreams, System::SharedPtr<System::IO::Stream> outputStream, bool isSidewise);
    /// <summary> Makes N-Up document from the input file to outputFile.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::String inputFile, System::String outputFile, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Resizes contents of pages of the document.
    /// </summary>
    /// <param name="source">Stream with source document.</param>
    /// <param name="destination">Stream with the destination document.</param>
    /// <param name="pages">Array of page indexes.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <returns>Returns true if success.</returns>
    /// <remarks>
    /// The TryResizeContents method is like the ResizeContents method, except the TryResizeContents 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryResizeContents(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    /// <summary>
    /// Resizes contents of document pages. 
    /// Shrinks contents of page and adds margins.
    /// New size of contents is specified in default space units.
    /// </summary>
    /// <param name="source">Stream which contains source document.</param>
    /// <param name="destination">Stream where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="newWidth">New width of page contents in default space units.</param>
    /// <param name="newHeight">New height of page contents in default space units.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryResizeContents method is like the ResizeContents method, except the TryResizeContents 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryResizeContents(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    /// <summary>
    /// Resizes contents of pages in document. If page is shrinked blank margins are added around the page.
    /// </summary>
    /// <param name="source">Source document path.</param>
    /// <param name="destination">Destination document path.</param>
    /// <param name="pages">Array of page indexes (page index starts from 1).</param>
    /// <param name="parameters">Parameters of page resize.</param>
    /// <returns>true if resize was successful.</returns>
    /// <remarks>
    /// The TryResizeContents method is like the ResizeContents method, except the TryResizeContents 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryResizeContents(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    /// <summary>
    /// Concatenates files and saves reslt into HttpResposnse object.
    /// </summary>
    /// <param name="inputFiles">Array of files to concatenate.</param>
    /// <param name="response">Response object.</param>
    /// <returns>true if concatenation was successful.</returns>
    ASPOSE_PDF_SHARED_API bool Concatenate(System::ArrayPtr<System::String> inputFiles, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Concatenates files and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Streams array which contain files to concatenate.</param>
    /// <param name="response">Response object/</param>
    /// <returns>true if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool Concatenate(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Appends documents to source document and saves result into response object.
    /// </summary>
    /// <param name="inputStream">Stream which contains source document.</param>
    /// <param name="portStreams">Array of streams with documents to be appended.</param>
    /// <param name="startPage">Start page of appended page.</param>
    /// <param name="endPage">End page of appended pages.</param>
    /// <param name="response">Response object where document will be saved.</param>
    /// <returns>true if operation was successful.</returns>
    ASPOSE_PDF_SHARED_API bool Append(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<System::SharedPtr<System::IO::Stream>> portStreams, int32_t startPage, int32_t endPage, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Appends documents to source document and saves result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Name of file containing source document.</param>
    /// <param name="portFiles">Array of file names containing appended documents.</param>
    /// <param name="startPage">Start page of appended pages.</param>
    /// <param name="endPage">End page of appended pages.</param>
    /// <param name="response">Response object where document will be saved.</param>
    /// <returns>true if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool Append(System::String inputFile, System::ArrayPtr<System::String> portFiles, int32_t startPage, int32_t endPage, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Inserts contents of file into source file and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="insertLocation">Page number where second file will be inserted.</param>
    /// <param name="portFile">Path to file which will be inserted.</param>
    /// <param name="pageNumber">Array of page numbers in source file wihich will be inserted.</param>
    /// <param name="response">Response object where result will be stored.</param>
    /// <returns>true of inserting was successful.</returns>
    ASPOSE_PDF_SHARED_API bool Insert(System::String inputFile, int32_t insertLocation, System::String portFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Inserts document into other document and stores result into response object.
    /// </summary>
    /// <param name="inputStream">Stream with source document</param>
    /// <param name="insertLocation">Location where other document will be inserted.</param>
    /// <param name="portStream">Document to be inserted.</param>
    /// <param name="pageNumber">Array of page numbers in second document  which will be inserted.</param>
    /// <param name="response">Response object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool Insert(System::SharedPtr<System::IO::Stream> inputStream, int32_t insertLocation, System::SharedPtr<System::IO::Stream> portStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Deletes specified pages from document and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Path of source file.</param>
    /// <param name="pageNumber">Array of page numbers which must be deleted.</param>
    /// <param name="response">Response object where result document will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool Delete(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Deletes specified pages from document and saves result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Source document stream.</param>
    /// <param name="pageNumber">Array of page numbers which will be deleted.</param>
    /// <param name="response">HttpResponse object</param>
    /// <returns>True if operation succeded.</returns>
    ASPOSE_PDF_SHARED_API bool Delete(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Extracts specified pages form source file and stores result into  HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream of source document.</param>
    /// <param name="pageNumber">Array of page numbers which will be extracted.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool Extract(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Extracts specified pages from source file and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Source file path.</param>
    /// <param name="pageNumber">Array of page numbers which will be extracted.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>true if pages were extracted successfully.</returns>
    ASPOSE_PDF_SHARED_API bool Extract(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits document from first page to location and saves result into HttpResponse objects.
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="location">Split point.</param>
    /// <param name="response">HttpResponse objects.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool SplitFromFirst(System::String inputFile, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits document from start to specified location and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream of source document.</param>
    /// <param name="location">The splitting point.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool SplitFromFirst(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits from specified location, and saves the rear part into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Source document stream.</param>
    /// <param name="location">Split point.</param>
    /// <param name="response">HttpResponse object.</param>
    /// <returns>true if splitting was successful.</returns>
    ASPOSE_PDF_SHARED_API bool SplitToEnd(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits from specified location, and saves the rear part into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">source file name.</param>
    /// <param name="location">Split point.</param>
    /// <param name="response">HttpResponse objects.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool SplitToEnd(System::String inputFile, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes booklet from source file and stores result into HttpResponse objects.
    /// </summary>
    /// <param name="inputFile">Source file path.</param>
    /// <param name="pageSize">Desired page size.</param>
    /// <param name="leftPages">Aray of page numbers to be placed in left.</param>
    /// <param name="rightPages">Array of page numbers to be placed in right.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::String inputFile, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Make booklet from PDF file and stores it into HttpResponse.
    /// </summary>
    /// <param name="inputStream">Input document stream.</param>
    /// <param name="pageSize">Desired page size.</param>
    /// <param name="leftPages">Array of page numbers which will be placed in left.</param>
    /// <param name="rightPages">Array of page numbers which will b eplaced in right.</param>
    /// <param name="response">HttpResponse object.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes booklet from source file and stores result into HttpResponse objects. 
    /// </summary>
    /// <param name="inputFile">Source file path.</param>
    /// <param name="pageSize">Desired page size in output file.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation is succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::String inputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes booklet from source file and stores result into HttpResponse.
    /// </summary>
    /// <param name="inputStream">Input document stream.</param>
    /// <param name="pageSize">Desired page size in output file.</param>
    /// <param name="response">Respose object where resut will be saved.</param>
    /// <returns>true if booklet was built successfully.</returns>
    ASPOSE_PDF_SHARED_API bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream of source document.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="pageSize">Page size in result file.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Path to source file.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="pageSize">Page size in result file.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::String inputFile, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse.
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::String inputFile, int32_t x, int32_t y, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse. 
    /// </summary>
    /// <param name="inputStream">Stream of input document.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="response">HttpResponse where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, int32_t x, int32_t y, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Resizes contents of pages in document. If page is shrinked blank margins are added around the page. Result is stored into HttpResponse object.
    /// </summary>
    /// <param name="source">Path to source file.</param>
    /// <param name="pages">Array of pages to be resized.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <param name="response">HttpResponse object where result is saved.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool ResizeContents(System::String source, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Resizes contents of pages in document. If page is shrinked blank margins are added around the page. Result is stored into HttpResponse object.
    /// </summary>
    /// <param name="source">Stream of source file.</param>
    /// <param name="pages">Array of pages to be resized.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <param name="response">HttpResponse object where result is saved.</param>
    /// <returns>True if operation was succeeded.</returns>
    ASPOSE_PDF_SHARED_API bool ResizeContents(System::SharedPtr<System::IO::Stream> source, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Concatenates files and saves reslt into HttpResposnse object.
    /// </summary>
    /// <param name="inputFiles">Array of files to concatenate.</param>
    /// <param name="response">Response object.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryConcatenate method is like the Concatenate method, except the TryConcatenate 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryConcatenate(System::ArrayPtr<System::String> inputFiles, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Concatenates files and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Streams array which contain files to concatenate.</param>
    /// <param name="response">Response object/</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryConcatenate method is like the Concatenate method, except the TryConcatenate 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryConcatenate(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Appends documents to source document and saves result into response object.
    /// </summary>
    /// <param name="inputStream">Stream which contains source document.</param>
    /// <param name="portStreams">Array of streams with documents to be appended.</param>
    /// <param name="startPage">Start page of appended page.</param>
    /// <param name="endPage">End page of appended pages.</param>
    /// <param name="response">Response object where document will be saved.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryAppend method is like the Append method, except the TryAppend 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryAppend(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<System::SharedPtr<System::IO::Stream>> portStreams, int32_t startPage, int32_t endPage, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Appends documents to source document and saves result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Name of file containing source document.</param>
    /// <param name="portFiles">Array of file names containing appended documents.</param>
    /// <param name="startPage">Start page of appended pages.</param>
    /// <param name="endPage">End page of appended pages.</param>
    /// <param name="response">Response object where document will be saved.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryAppend method is like the Append method, except the TryAppend 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryAppend(System::String inputFile, System::ArrayPtr<System::String> portFiles, int32_t startPage, int32_t endPage, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Inserts contents of file into source file and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="insertLocation">Page number where second file will be inserted.</param>
    /// <param name="portFile">Path to file which will be inserted.</param>
    /// <param name="pageNumber">Array of page numbers in source file wihich will be inserted.</param>
    /// <param name="response">Response object where result will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryInsert method is like the Insert method, except the TryInsert 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryInsert(System::String inputFile, int32_t insertLocation, System::String portFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Inserts document into other document and stores result into response object.
    /// </summary>
    /// <param name="inputStream">Stream with source document</param>
    /// <param name="insertLocation">Location where other document will be inserted.</param>
    /// <param name="portStream">Document to be inserted.</param>
    /// <param name="pageNumber">Array of page numbers in second document  which will be inserted.</param>
    /// <param name="response">Response object where result will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryInsert method is like the Insert method, except the TryInsert 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryInsert(System::SharedPtr<System::IO::Stream> inputStream, int32_t insertLocation, System::SharedPtr<System::IO::Stream> portStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Deletes specified pages from document and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Path of source file.</param>
    /// <param name="pageNumber">Array of page numbers which must be deleted.</param>
    /// <param name="response">Response object where result document will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryDelete method is like the Delete method, except the TryDelete 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryDelete(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Deletes specified pages from document and saves result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Source document stream.</param>
    /// <param name="pageNumber">Array of page numbers which will be deleted. </param>
    /// <param name="response">HttpResponse object</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryDelete method is like the Delete method, except the TryDelete 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryDelete(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Extracts specified pages form source file and stores result into  HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream of source document.</param>
    /// <param name="pageNumber">Array of page numbers which will be extracted.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryExtract method is like the Extract method, except the TryExtract 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryExtract(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Extracts specified pages from source file and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Source file path.</param>
    /// <param name="pageNumber">Array of page numbers which will be extracted.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryExtract method is like the Extract method, except the TryExtract 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryExtract(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits document from first page to location and saves result into HttpResponse objects.
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="location">Split point.</param>
    /// <param name="response">HttpResponse objects.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TrySplitFromFirst method is like the SplitFromFirst method, except the TrySplitFromFirst 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TrySplitFromFirst(System::String inputFile, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits document from start to specified location and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream of source document.</param>
    /// <param name="location">The splitting point.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TrySplitFromFirst method is like the SplitFromFirst method, except the TrySplitFromFirst 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TrySplitFromFirst(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits from specified location, and saves the rear part into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Source document stream.</param>
    /// <param name="location">Split point.</param>
    /// <param name="response">HttpResponse object.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TrySplitToEnd method is like the SplitToEnd method, except the TrySplitToEnd 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TrySplitToEnd(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits from specified location, and saves the rear part into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">source file name.</param>
    /// <param name="location">Split point.</param>
    /// <param name="response">HttpResponse objects.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TrySplitToEnd method is like the SplitToEnd method, except the TrySplitToEnd 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TrySplitToEnd(System::String inputFile, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes booklet from source file and stores result into HttpResponse objects.
    /// </summary>
    /// <param name="inputFile">Source file path.</param>
    /// <param name="pageSize">Desired page size.</param>
    /// <param name="leftPages">Aray of page numbers to be placed in left.</param>
    /// <param name="rightPages">Array of page numbers to be placed in right.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::String inputFile, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Make booklet from PDF file and stores it into HttpResponse.
    /// </summary>
    /// <param name="inputStream">Input document stream.</param>
    /// <param name="pageSize">Desired page size.</param>
    /// <param name="leftPages">Array of page numbers which will be placed in left.</param>
    /// <param name="rightPages">Array of page numbers which will b eplaced in right.</param>
    /// <param name="response">HttpResponse object.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes booklet from source file and stores result into HttpResponse objects. 
    /// </summary>
    /// <param name="inputFile">Source file path.</param>
    /// <param name="pageSize">Desired page size in output file.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation is succeeded.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::String inputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes booklet from source file and stores result into HttpResponse.
    /// </summary>
    /// <param name="inputStream">Input document stream.</param>
    /// <param name="pageSize">Desired page size in output file.</param>
    /// <param name="response">Respose object where resut will be saved.</param>
    /// <returns>true if booklet was built successfully.</returns>
    /// <remarks>
    /// The TryMakeBooklet method is like the MakeBooklet method, except the TryMakeBooklet 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryMakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Path to source file.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="pageSize">Page size in result file.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::String inputFile, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream of source document.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="pageSize">Page size in result file.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::SharedPtr<System::IO::Stream> inputStream, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse.
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::String inputFile, int32_t x, int32_t y, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse. 
    /// </summary>
    /// <param name="inputStream">Stream of input document.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="response">HttpResponse where result will be stored.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryMakeNUp method is like the MakeNUp method, except the TryMakeNUp 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryMakeNUp(System::SharedPtr<System::IO::Stream> inputStream, int32_t x, int32_t y, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Resizes contents of pages in document. If page is shrinked blank margins are added around the page. Result is stored into HttpResponse object.
    /// </summary>
    /// <param name="source">Path to source file.</param>
    /// <param name="pages">Array of pages to be resized.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <param name="response">HttpResponse object where result is saved.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryResizeContents method is like the ResizeContents method, except the TryResizeContents 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryResizeContents(System::String source, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Resizes contents of pages in document. If page is shrinked blank margins are added around the page. Result is stored into HttpResponse object.
    /// </summary>
    /// <param name="source">Stream of source file.</param>
    /// <param name="pages">Array of pages to be resized.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <param name="response">HttpResponse object where result is saved.</param>
    /// <returns>true if operation completed successfully; otherwise, false.</returns>
    /// <remarks>
    /// The TryResizeContents method is like the ResizeContents method, except the TryResizeContents 
    /// method does not throw an exception if the operation fails.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool TryResizeContents(System::SharedPtr<System::IO::Stream> source, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters, System::SharedPtr<System::Web::HttpResponse> response);
    
protected:

    static const System::String E_EMPTY_PAGE_RANGE;
    static const System::String E_SMALL_PAGE_RANGE;
    static const System::String E_WRONG_PAGE_RANGE;
    
    /// <summary>
    /// Gets licensed state of the system. Returns true is system works in licensed mode and false otherwise. 
    /// </summary>
    bool get__IsObjectLicensed();
    
private:

    System::String ownerPassword;
    bool closeConcatenatedStreams;
    bool _keepFieldUnique;
    static const System::String NUM_TEMPLATE;
    System::String _uniqueSuffix;
    System::Exception _lastException;
    PdfFormat _convertTo;
    bool _executeConvert;
    Aspose::Pdf::ContentDisposition _contentDisposition;
    System::SharedPtr<Aspose::Pdf::SaveOptions> _saveOptions;
    System::String _attachmentName;
    bool _optimizeSize;
    System::String _conversionLog;
    bool _mergeDuplicateLayers;
    bool _mergeDuplicateOutlines;
    bool _preserveUserRights;
    bool _incrementalUpdates;
    bool _copyOutlines;
    bool _copyLogicalStructure;
    bool _removeSignatures;
    bool _keepActions;
    bool _useDiskBuffer;
    int32_t _concatenationPacketSize;
    System::SharedPtr<System::IO::Stream> intermediateStream;
    System::String bufferFileName;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfFileEditor::CorruptedItem>>> _corruptedItems;
    PdfFileEditor::ConcatenateCorruptedFileAction _corruptedFileAction;
    System::SharedPtr<Aspose::Pdf::LicenseManagement::VentureLicense> _ventureLicense;
    
    void SetVentureLicense(System::SharedPtr<Aspose::Pdf::LicenseManagement::VentureLicense> license) override;
    System::SharedPtr<Aspose::Pdf::LicenseManagement::VentureLicense> GetVentureLicense() override;
    bool HasUserRights(System::SharedPtr<Document> doc);
    System::String GetBufferFileName();
    /// <summary>
    /// Internal function to append documents to source document
    /// </summary>
    /// <param name="dest"></param>
    /// <param name="documents"></param>
    /// <param name="startPage"></param>
    /// <param name="endPage"></param>
    void Append(System::SharedPtr<Document> dest, System::ArrayPtr<System::SharedPtr<Document>> documents, int32_t startPage, int32_t endPage);
    void Insert(System::SharedPtr<Document> dest, int32_t insertLocation, System::SharedPtr<Document> src, System::ArrayPtr<int32_t> pageNumber);
    void Extract(System::SharedPtr<Document> doc, System::SharedPtr<Document> dest, System::ArrayPtr<int32_t> pageNumber);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetDictionaryProperty(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> target, System::String key, bool createIfNotExists = true);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> GetArrayProperty(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> target, System::String key, bool createIfNotExists = true);
    void SplitFromFirst(System::SharedPtr<Document> doc, System::SharedPtr<Document> dest, int32_t location);
    void SplitToEnd(System::SharedPtr<Document> doc, System::SharedPtr<Document> dest, int32_t location);
    System::String ExtractName(System::String FieldName, System::String& IndexSuffix);
    bool ConcatenateParallel(System::ArrayPtr<System::SharedPtr<Document>> source, System::SharedPtr<Document> fill, System::SharedPtr<Document> dest);
    System::ArrayPtr<int32_t> GetRange(int32_t startPage, int32_t endPage);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToPages(System::SharedPtr<Document> doc);
    void SplitToPages(System::SharedPtr<Document> doc, System::String fileNameTemplate);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToBulks(System::SharedPtr<Document> doc, System::ArrayPtr<System::ArrayPtr<int32_t>> numberofpage);
    System::SharedPtr<Document> DeletePages(System::SharedPtr<Document> doc, System::ArrayPtr<int32_t> pages);
    /// <summary>
    /// Create XForm from page.
    /// </summary>
    /// <param name="source"></param>
    /// <param name="document"></param>
    /// <param name="copier"></param>
    /// <returns>XForm of the page.</returns>
    System::SharedPtr<XForm> ConvertPageToXForm(System::SharedPtr<Page> source, System::SharedPtr<Document> document, System::SharedPtr<Copier> copier);
    void CopyAnnotations(System::SharedPtr<Page> src, System::SharedPtr<Page> dest, System::SharedPtr<Copier> copier, System::SharedPtr<Matrix> matrix);
    /// <summary>
    /// Place source page on the specified page of the document, on the specified position and with zoom.
    /// </summary>
    /// <param name="source"></param>
    /// <param name="document"></param>
    /// <param name="dest"></param>
    /// <param name="x">abscissa where page will be placed</param>
    /// <param name="y">ordinate where page will be placed</param>
    /// <param name="zoom"></param>
    /// <param name="copier"></param>
    /// <returns>XForm of the page placed on desitnation page.</returns>
    System::SharedPtr<XForm> PlacePage(System::SharedPtr<Page> source, System::SharedPtr<Document> document, System::SharedPtr<Page> dest, double x, double y, double zoom, System::SharedPtr<Copier> copier);
    /// <summary>
    /// Place page from the source document into destination docunment on specified page into specified rectangle. 
    /// </summary>
    /// <param name="src">Source document</param>
    /// <param name="dest">Destionation document</param>
    /// <param name="srcIndex">Index of source page</param>
    /// <param name="destIndex">Index of page where page will be placed.</param>
    /// <param name="rect">Rectangle where page must be placed.</param>
    /// <param name="copier">Copier object used to copy resources</param>
    void PlacePageInRect(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, int32_t srcIndex, int32_t destIndex, System::SharedPtr<Rectangle> rect, System::SharedPtr<Copier> copier);
    /// <summary>
    /// Create booklet from source document.
    /// </summary>
    /// <param name="src">Source document</param>
    /// <param name="dest">Destiantion document</param>
    /// <param name="left">Page layout: left pages</param>
    /// <param name="right">Page layout: right pages</param>
    /// <param name="width">width of the page in result document</param>
    /// <param name="height">heighr of the page in result document</param>
    void MakeBooklet(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::ArrayPtr<int32_t> left, System::ArrayPtr<int32_t> right, double width, double height);
    /// <summary>
    /// Generate layout (arrays of left and right pages) by total number of pages in the document. 
    /// </summary>
    /// <param name="pageCount"></param>
    /// <returns>Array of arrays of int which describes layout of the page.</returns>
    System::ArrayPtr<System::ArrayPtr<int32_t>> CreateLayout(int32_t pageCount);
    void MakeNUp(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, int32_t NX, int32_t NY, double width, double height);
    void Combine(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Document>>> documents, System::SharedPtr<Document> dest, bool sidewise);
    System::SharedPtr<Document> OpenDocument(System::String fileName);
    System::SharedPtr<Document> OpenDocument(System::SharedPtr<System::IO::Stream> stream);
    void Convert(System::SharedPtr<Document> doc);
    void Save(System::SharedPtr<Document> dest, System::SharedPtr<System::IO::Stream> stream);
    void PreSave(System::SharedPtr<Document> dest);
    void Save(System::SharedPtr<Document> dest, System::String fileName);
    void SaveIncremental(System::SharedPtr<Document> dest);
    /// <summary>
    /// Close streams if flag CloseConcatenatedStreams is set.
    /// </summary>
    /// <param name="streams"></param>
    void CloseStreams(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> streams);
    /// <summary>
    /// close stream is CloseConcatenateStreams is set.
    /// </summary>
    /// <param name="stream"></param>
    void CloseStream(System::SharedPtr<System::IO::Stream> stream);
    void CopyActions(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dest, System::SharedPtr<Copier> copier);
    void MergeDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dest, System::SharedPtr<Copier> copier);
    System::String GetFieldName(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    void MoveData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dest, System::String key);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> TransformField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field);
    void MakeAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> parent);
    void AddField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> collection, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>> hash);
    System::String ModifyField(System::String fieldName, System::String suffix);
    System::String ExtractFieldName(System::String fieldName);
    /// <summary>
    /// Merge acro forms
    /// </summary>
    /// <param name="src">soruce acro form dictionary</param>
    /// <param name="dest">destination acroform dictionary</param>
    /// <param name="copier">copier object</param>
    /// <param name="renameMap">map of field renamings</param>
    void CopyAcroForm(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dest, System::SharedPtr<Copier> copier, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> renameMap, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>> fieldsHash);
    void MergeFields(System::SharedPtr<Copier> copier, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> renameMap, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>> fieldsHash, System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> srcForm, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> destForm, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> srcFields);
    void EnsureUniqueFieldName(System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> renameMap, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>> fieldsHash, System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::String rootName, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> destField);
    System::ArrayPtr<System::SharedPtr<Document>> GetDocuments(System::ArrayPtr<System::String> files);
    System::ArrayPtr<System::SharedPtr<Document>> GetDocuments(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> files);
    void MergeOptionalContents(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<PdfFileEditor::OptionalContentsItemDescriptor>>> ocgsIndex);
    void LinkOptionalContents(System::SharedPtr<Document> dest, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<PdfFileEditor::OptionalContentsItemDescriptor>>> ocgsIndex);
    void CopyOCGs(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::ArrayPtr<int32_t> pageNumbers, System::SharedPtr<Copier> copier);
    static void AddPageOCGsToIndex(System::SharedPtr<Page> srcPage, System::SharedPtr<Page> destPage, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::SharedPtr<PdfFileEditor::OptionalContentsItemDescriptor>>> ocgsIndex, System::SharedPtr<Copier> copier);
    static void CopyOCGsArray(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> srcOCGs, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> destOCGs, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::SharedPtr<PdfFileEditor::OptionalContentsItemDescriptor>>> ocgsIndex);
    static System::SharedPtr<PdfFileEditor::OptionalContentsItemDescriptor> GetOrCreateOCGDescriptor(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> srcOCGItem, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::SharedPtr<PdfFileEditor::OptionalContentsItemDescriptor>>> ocgsIndex, System::SharedPtr<Copier> copier);
    void InitOCProperties(System::SharedPtr<Document> dest);
    int32_t PagesCount(System::SharedPtr<Document> doc);
    int32_t PagesCount(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> srcPages);
    /// <summary>
    /// Returns key on the specified position in the Names Tree
    /// </summary>
    /// <param name="array">Array of the names tree</param>
    /// <param name="index">Index of the key</param>
    /// <returns>String key</returns>
    System::String GetKey(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array, int32_t index);
    /// <summary>
    /// Returns index  in the names tree array where specified key may be inserted 
    /// </summary>
    /// <param name="array">Name tree array</param>
    /// <param name="keyToInsert">Key to insert</param>
    /// <param name="startIndex">Starting index</param>
    /// <returns>index of key found in Number Tree</returns>
    int32_t SearchKey(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array, System::String keyToInsert, int32_t startIndex);
    void MergeSimpleDest(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest, System::SharedPtr<Copier> copier);
    void MergeNameTree(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest, System::SharedPtr<Copier> copier, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> renameMap);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> GetEntry(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> tr, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict, System::String key, const System::TypeInfo& type, bool allowCreate);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> GetEntry(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> tr, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict, System::ArrayPtr<System::String> path, const System::TypeInfo& type, bool allowCreate);
    void MergeNameTree(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> srcNameTree, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> destNames, System::SharedPtr<Copier> copier, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> renameMap);
    void MergeDests(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> renameMap);
    void MergeNames(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier, System::String entryName, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> renameMap);
    void MergeJavaScript(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier);
    System::SharedPtr<OutlineItemCollection> FindOutline(System::SharedPtr<OutlineCollection> outlines, System::String title);
    bool Compare(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> item1, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> item2);
    bool CompareDict(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict1, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict2);
    bool CompareOutlines(System::SharedPtr<OutlineItemCollection> outline1, System::SharedPtr<OutlineItemCollection> outline2);
    void FixOutline(System::SharedPtr<OutlineItemCollection> item, System::SharedPtr<System::Collections::Generic::List<int32_t>> fixedOutlines, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> renameNames);
    void MergeOutlines(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> renameNames);
    void ConvertNumsToKids(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> node);
    void MergePageLabels(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, int32_t srcPageCount, int32_t destPageCount, System::SharedPtr<Copier> copier);
    static bool TryFindLimits(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> nums, int32_t& maxId, int32_t& minId);
    void CopyPageLabelsKids(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> srcKids, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> dstKids, System::SharedPtr<Copier> copier, int32_t dstPageCount);
    static void GenerateNewPagesNumsTree(int32_t sourcePageCount, int32_t destinationPageCount, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> destinationNums, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> lastLabel, System::SharedPtr<Copier> copier);
    static void CopyPageLabelNums(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> sourceNums, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> destinationNums, System::SharedPtr<Copier> copier, int32_t dstPageCount);
    void CopyPageLabels(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier);
    void AddOffsetToPageLabels(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> node, int32_t offset);
    /// <summary>
    /// Concatenates pages of the documents into destination document. 
    /// Pages of every document are added to Pages/Kids of destination document.
    /// </summary>
    /// <param name="sources">Array of streams of pathes to document file.</param>
    /// <param name="dest">Destination document.</param>
    void ConcatenateDocuments(System::ArrayPtr<System::SharedPtr<Document>> sources, System::SharedPtr<Document>& dest);
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> ProcessRenameNamesMap(System::SharedPtr<Document> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> copyOfPages, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> renameNames);
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> GetRenameNamesMap(System::SharedPtr<System::Collections::Generic::IEnumerable<System::String>> srcNames, System::SharedPtr<System::Collections::Generic::HashSet<System::String>> existNames);
    System::SharedPtr<System::Collections::Generic::HashSet<System::String>> ProcessRenamesForAnnotations(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> copyOfPages, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> renameNames);
    void ProcessRenameForAnnotations(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> renameNames, System::SharedPtr<System::Collections::Generic::HashSet<System::String>> renames, System::SharedPtr<Aspose::Pdf::Engine::CommonData::IPage> page);
    System::SharedPtr<System::Collections::Generic::HashSet<System::String>> ProcessRenamesForOutlines(System::SharedPtr<OutlineCollection> outlines, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> renameNames);
    void ProcessRenamesForOutlines(System::SharedPtr<OutlineItemCollection> outline, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> renameNames, System::SharedPtr<System::Collections::Generic::HashSet<System::String>> renames);
    bool XrefStreamRequired(System::ArrayPtr<System::SharedPtr<System::IO::FileInfo>> sources);
    System::ArrayPtr<System::SharedPtr<System::IO::FileInfo>> ReadDocumentInfos(System::ArrayPtr<System::String> sources);
    void TransformAppearance(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> appearanceDictionary, double zoomX, double zoomY);
    void AdjustViewport(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> vpDictionary, System::SharedPtr<Rectangle> originalRect, System::SharedPtr<Rectangle> newRect);
    System::SharedPtr<Rectangle> AdjustBox(System::SharedPtr<Rectangle> originalBox, System::SharedPtr<Rectangle> oldMediaBox, System::SharedPtr<Rectangle> newMediaBox);
    void CheckPageNumber(System::SharedPtr<Document> doc, int32_t pageNumber);
    System::SharedPtr<Copier> CreateCopier(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable);
    /// <summary>
    /// Try to invoke the action and catch exceptions.
    /// </summary>
    /// <param name="action">The action.</param>
    /// <returns>True if operation was succeeded, otherwise false.</returns>
    bool TryInvoke(System::Action<> action);
    void Save(System::SharedPtr<Document> dest, System::SharedPtr<System::Web::HttpResponse> response);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


