#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <drawing/color.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
class DocumentInfo;
namespace Pdf
{
enum class ApsToXpsSavingMode;
class ApsUsingConverter;
class FlowToTableAbsorber;
class HtmlConverter;
class HtmlSaveOptions;
class IWarningCallback;
enum class SaveFormat;
class SvgSaveOptions;
namespace Tests
{
class DocConverterFlowTests;
class DocConverterTextBoxTestsBase;
class ExcelConverterTest;
class FlowConverterTests;
namespace HTML
{
class Pdf2HtmlConverterTests;
class Pdf2HtmlTestUtils;
} // namespace HTML
class RegressionTests_v17_6;
class RegressionTests_v23_08;
class RegressionTests_v24_07;
class SvgConverterTests;
class TextBoxTests;
class TextBoxTestsOshared;
class TextBoxTestsPdfnewnetLong;
class XpsConverterTests;
} // namespace Tests
class TeXConverter;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// SaveOptions type hold level of abstraction on individual save options
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SaveOptions : public virtual System::Object
{
    typedef SaveOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    class BorderInfo;
    class MarginPartStyle;
    
private:
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::TeXConverter;
    friend class Aspose::Pdf::FlowToTableAbsorber;
    friend class Aspose::Pdf::Tests::ExcelConverterTest;
    friend class Aspose::Pdf::Tests::FlowConverterTests;
    friend class Aspose::Pdf::Tests::DocConverterTextBoxTestsBase;
    friend class Aspose::Pdf::Tests::TextBoxTestsOshared;
    friend class Aspose::Pdf::Tests::TextBoxTestsPdfnewnetLong;
    friend class Aspose::Pdf::Tests::TextBoxTests;
    friend class Aspose::Pdf::Tests::DocConverterFlowTests;
    friend class Aspose::Pdf::Tests::HTML::Pdf2HtmlTestUtils;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_08;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_07;
    friend class Aspose::Pdf::Tests::XpsConverterTests;
    friend class Aspose::Pdf::Tests::SvgConverterTests;
    friend class Aspose::Pdf::Tests::HTML::Pdf2HtmlConverterTests;
    
public:

    /// <summary>
    /// Represents line types that can be used in result document for drawing borders or another lines
    /// </summary>
    enum class HtmlBorderLineType
    {
        /// <summary>
        /// No line will be shown.
        /// </summary> 
        None = 0,
        /// <summary>
        /// Dotted line will be shown.
        /// </summary> 
        Dotted = 1,
        /// <summary>
        /// Dashed line will be shown.
        /// </summary> 
        Dashed = 2,
        /// <summary>
        /// Solid line will be shown.
        /// </summary> 
        Solid = 3,
        /// <summary>
        /// Double line will be shown.
        /// </summary> 
        Double = 4,
        /// <summary>
        /// Groove line will be shown.
        /// </summary> 
        Groove = 5,
        /// <summary>
        /// Ridge line will be shown.
        /// </summary> 
        Ridge = 6,
        /// <summary>
        /// Inset line will be shown.
        /// </summary> 
        Inset = 7,
        /// <summary>
        /// Outset line will be shown.
        /// </summary> 
        Outset = 8
    };
    
    /// <summary>
    ///  enumerates possible types of saved external resources
    /// </summary>
    enum class NodeLevelResourceType
    {
        /// <summary>
        /// Means that supplied resource is image
        /// </summary>
        Image = 0,
        /// <summary>
        /// Means that supplied resource is font
        /// </summary>
        Font = 1
    };
    
    
public:

    /// <summary>
    /// Represents information of one part of border(top, bottom, left side or right side)
    /// </summary> 
    class ASPOSE_PDF_SHARED_CLASS BorderPartStyle : public System::Object
    {
        typedef BorderPartStyle ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::SaveOptions;
        
    public:
    
        /// <summary>
        /// Represents border line's line color
        /// </summary> 
        System::Drawing::Color Color;
        /// <summary>
        /// Represents border line's type - f.e. Dashed or Solid
        /// </summary> 
        SaveOptions::HtmlBorderLineType LineType;
        
        /// <summary>
        /// Represents border line's width in points. Must be number greater then zero.
        /// </summary> 
        ASPOSE_PDF_SHARED_API int32_t get_WidthInPoints() const;
        /// <summary>
        /// Represents border line's width in points. Must be number greater then zero.
        /// </summary> 
        ASPOSE_PDF_SHARED_API void set_WidthInPoints(int32_t value);
        
        ASPOSE_PDF_SHARED_API BorderPartStyle();
        
    protected:
    
        System::SharedPtr<SaveOptions::BorderPartStyle> Clone();
        
    private:
    
        int32_t _width;
        
    };
    
    /// <summary>
    ///   Instance of this class represents information about border 
    ///   That can be drown on some result document.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS BorderInfo : public System::Object
    {
        typedef BorderInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::HtmlConverter;
        
    public:
    
        /// <summary>
        ///   Represents top part(if any) of border
        /// </summary>
        System::SharedPtr<SaveOptions::BorderPartStyle> TopStyleIfAny;
        /// <summary>
        ///   Represents left part(if any) of border
        /// </summary>
        System::SharedPtr<SaveOptions::BorderPartStyle> LeftStyleIfAny;
        /// <summary>
        ///   Represents right part(if any) of border
        /// </summary>
        System::SharedPtr<SaveOptions::BorderPartStyle> RightStyleIfAny;
        /// <summary>
        ///   Represents bottom part(if any) of border
        /// </summary>
        System::SharedPtr<SaveOptions::BorderPartStyle> BottomStyleIfAny;
        
        /// <summary>
        ///   Creates instance of BorderInfo class
        /// </summary>
        ASPOSE_PDF_SHARED_API BorderInfo();
        /// <summary>
        ///   Creates instance of BorderInfo class and initializes
        ///   all elements of border(Top, Left, Right, Bottom)
        ///   with attributes copied from supplied border style
        /// </summary>
        /// <param name="commonStyle">style of border parts that will be used for all elements of border(left, right, top, bottom)</param>
        ASPOSE_PDF_SHARED_API BorderInfo(System::SharedPtr<SaveOptions::BorderPartStyle> commonStyle);
        
    protected:
    
        bool get_AtLeastOneBorderSideNeeded();
        
    };
    
    /// <summary>
    ///   Instance of this class represents information about page margin 
    ///   That can be drown on some result document.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS MarginInfo : public System::Object
    {
        typedef MarginInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        ///   Represents top page margin(if any) 
        /// </summary>
        System::SharedPtr<SaveOptions::MarginPartStyle> TopMarginIfAny;
        /// <summary>
        ///   Represents right page margin(if any) 
        /// </summary>
        System::SharedPtr<SaveOptions::MarginPartStyle> RightMarginIfAny;
        /// <summary>
        ///   Represents bottom page margin(if any)
        /// </summary>
        System::SharedPtr<SaveOptions::MarginPartStyle> BottomMarginIfAny;
        /// <summary>
        ///   Represents left page margin(if any)
        /// </summary>
        System::SharedPtr<SaveOptions::MarginPartStyle> LeftMarginIfAny;
        
        /// <summary>
        /// Creates instance of MarginInfo
        /// </summary>
        ASPOSE_PDF_SHARED_API MarginInfo();
        /// <summary>
        ///   Creates instance of MarginInfo class and initializes
        ///   all elements of page margin(Top, Left, Right, Bottom)
        ///   with attributes copied from supplied margin style
        /// </summary>
        /// <param name="commonMargin">style of margin parts that will be used for all elements of margin(left, right, top, bottom)</param>
        ASPOSE_PDF_SHARED_API MarginInfo(System::SharedPtr<SaveOptions::MarginPartStyle> commonMargin);
        
    };
    
    /// <summary>
    /// Represents information of one part of margin(top, botom, left side or right side)
    /// </summary> 
    class ASPOSE_PDF_SHARED_CLASS MarginPartStyle : public System::Object
    {
        typedef MarginPartStyle ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::SaveOptions;
        
    public:
    
        /// <summary>
        /// Gets a value indicating whether this instance is auto.
        /// </summary>
        /// <value><c>true</c> if this instance is auto; otherwise, <c>false</c>.</value>
        ASPOSE_PDF_SHARED_API bool get_IsAuto() const;
        /// <summary>
        /// Sets a value indicating whether this instance is auto.
        /// </summary>
        /// <value><c>true</c> if this instance is auto; otherwise, <c>false</c>.</value>
        ASPOSE_PDF_SHARED_API void set_IsAuto(bool value);
        /// <summary>
        /// Represents margin in points. Must be number greater then zero.
        /// </summary> 
        ASPOSE_PDF_SHARED_API int32_t get_ValueInPoints() const;
        /// <summary>
        /// Represents margin in points. Must be number greater then zero.
        /// </summary> 
        ASPOSE_PDF_SHARED_API void set_ValueInPoints(int32_t value);
        
        /// <summary>
        ///   Creates instance of MarginPartStyle class
        ///   and set its value in points 
        /// </summary>
        /// <param name="valueInPoints">Integer value in points</param>
        ASPOSE_PDF_SHARED_API MarginPartStyle(int32_t valueInPoints);
        /// <summary>
        ///   Creates instance of MarginPartStyle class
        ///   and initializes its value in points 
        /// </summary>
        /// <param name="isAuto">Mark margin auto</param>
        ASPOSE_PDF_SHARED_API MarginPartStyle(bool isAuto);
        
    protected:
    
        MarginPartStyle(int32_t valueInPoints, bool isAuto);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MarginPartStyle, CODEPORTING_ARGS(int32_t valueInPoints, bool isAuto));
        System::SharedPtr<SaveOptions::MarginPartStyle> Clone();
        
    private:
    
        bool _isAuto;
        int32_t _value;
        
    };
    
    /// <summary>
    ///   This class represents set of data 
    ///   that related to external resource file's saving that 
    ///   occures during conversion of PDF to some other format (f.e. HTML)
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS ResourceSavingInfo : public System::Object
    {
        typedef ResourceSavingInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::HtmlConverter;
        friend class Aspose::Pdf::HtmlSaveOptions;
        friend class Aspose::Pdf::SvgSaveOptions;
        
    public:
    
        /// <summary>
        ///  Set by converter.
        ///  Supposed file name that goes from converter to code of custom method
        ///  Can be use in custom code to decide how to process or where save that file
        /// </summary>
        ASPOSE_PDF_SHARED_API SaveOptions::NodeLevelResourceType get_ResourceType() const;
        
        /// <summary>
        ///  Set by converter.
        ///  Supposed file name that goes from converter to code of custom method
        ///  Can be use in custom code to decide how to process or where save that file
        /// </summary>
        System::String SupposedFileName;
        /// <summary>
        ///    Set by converter.
        ///    Represents binary content of saved file. 
        /// </summary>
        System::SharedPtr<System::IO::Stream> ContentStream;
        /// <summary>
        ///    this flag must set to "true" in custom code if for some reasons
        ///    proposed file should be processed not with custom code but 
        ///    with converter's code itself in standard for converter way. 
        ///    So, it' setting set to true  means that custom code did not process referenced file and 
        ///    converter must handle it itself (in both sences - for saving somewhere and for naming in referencing file).
        /// </summary>
        bool CustomProcessingCancelled;
        
    protected:
    
        ResourceSavingInfo(SaveOptions::NodeLevelResourceType resourceType);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ResourceSavingInfo, CODEPORTING_ARGS(SaveOptions::NodeLevelResourceType resourceType));
        
    private:
    
        SaveOptions::NodeLevelResourceType _resourceType;
        
        ResourceSavingInfo();
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ResourceSavingInfo, CODEPORTING_ARGS());
        
    };
    
    
public:

    /// <summary>
    /// Callback to handle any warnings generated. 
    /// The WarningHandler returns ReturnAction enum item specifying either Continue or Abort. 
    /// Continue is the default action and the Save operation continues, however the user may also return Abort in which case the Save operation should cease.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<IWarningCallback> get_WarningHandler() const;
    /// <summary>
    /// Callback to handle any warnings generated. 
    /// The WarningHandler returns ReturnAction enum item specifying either Continue or Abort. 
    /// Continue is the default action and the Save operation continues, however the user may also return Abort in which case the Save operation should cease.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_WarningHandler(System::SharedPtr<IWarningCallback> value);
    /// <summary>
    /// Format of data save.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::SaveFormat get_SaveFormat() const;
    /// <summary>
    /// Gets boolean value which indicates will Response object be closed after document saved into response.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_CloseResponse() const;
    /// <summary>
    /// Sets boolean value which indicates will Response object be closed after document saved into response.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CloseResponse(bool value);
    /// <summary>
    /// Gets boolean value which indicates if will font glyphs be cached while preparing aps pages.
    /// Improves performance of conversion pdf to other formats but increases memory consumption.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_CacheGlyphs() const;
    /// <summary>
    /// Sets boolean value which indicates if will font glyphs be cached while preparing aps pages.
    /// Improves performance of conversion pdf to other formats but increases memory consumption.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CacheGlyphs(bool value);
    
protected:

    Aspose::Pdf::SaveFormat _saveFormat;
    System::String ApsIntermediateFileIfAny;
    System::String XpsIntermediateFileIfAny;
    System::String PngIntermediateFileIfAny;
    ApsToXpsSavingMode ApsAsXpsSavingMode;
    System::SharedPtr<Aspose::DocumentInfo> DocumentInfoForSaveAsXps;
    /// <summary>
    ///  Sometimes we need use temp file to save APS during conversion to avoid OOM exceptions in PalZipWriter
    ///  For such hard tests can be used this parameter - it will force usage of ile instead of MemoryStream
    /// </summary>
    System::String PlainApsIntermediateTempFileIfAny;
    
    /// <summary>
    /// Default ctor.
    /// </summary>
    ASPOSE_PDF_SHARED_API SaveOptions();
    
private:

    System::SharedPtr<IWarningCallback> _warningHandler;
    bool _closeResponse;
    bool pr_CacheGlyphs;
    
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::SaveOptions::HtmlBorderLineType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::SaveOptions::HtmlBorderLineType, const char_t*>, 9>& values();
};



