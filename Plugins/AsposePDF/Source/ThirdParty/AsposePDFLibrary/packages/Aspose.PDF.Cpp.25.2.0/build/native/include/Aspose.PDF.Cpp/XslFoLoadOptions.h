#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/XmlLoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Tests
{
class XslFoToPdfConverterTests;
} // namespace Tests
class XslFoToPdfConverter;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
namespace Xsl
{
class XsltArgumentList;
} // namespace Xsl
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing XSL-FO file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XslFoLoadOptions final : public Aspose::Pdf::XmlLoadOptions
{
    typedef XslFoLoadOptions ThisType;
    typedef Aspose::Pdf::XmlLoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::XslFoToPdfConverter;
    friend class Aspose::Pdf::Tests::XslFoToPdfConverterTests;
    
public:

    /// <summary>
    ///  Source XSLFO document can contain formatting errors. This enum enumerates possible strategies of handling of such formatting errors
    /// </summary>
    enum class ParsingErrorsHandlingTypes
    {
        /// <summary>
        ///  In this case converter will be instructed to try proceed
        ///  with conversion and ignore found formatting errors.
        ///  In this case success not guaranteed,
        ///  serious problems can occure later in converter,
        ///  anf in suck case will be thrown exception with list of found
        ///  formatting errors.
        /// </summary>
        TryIgnore,
        /// <summary>
        ///  In this case conversion will be stopped immediately
        ///  and exception will be thrown immediately after detecting
        ///  of first formatting error
        /// </summary>
        ThrowExceptionImmediately,
        /// <summary>
        ///  This is the most agile method - custom code must supply (in WarningCallback property) special
        ///  handler that will  be called when formatting error detected. 
        ///  That handler can f.e. log or count errors etc and
        ///  will supply decision whether processing can be continued for this or that error. 
        /// </summary>
        InvokeCustomHandler
    };
    
    
public:

    /// <summary>
    ///  Source XSLFO document can contain formatting errors. This enum enumerates possible strategies of handking of that errors
    /// </summary>
    XslFoLoadOptions::ParsingErrorsHandlingTypes ParsingErrorsHandlingType;
    
    /// <summary>
    /// The base path/url from which are searched relative paths to external resources (if any) referenced in loaded SVG file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_BasePath() const;
    /// <summary>
    /// The base path/url from which are searched relative paths to external resources (if any) referenced in loaded SVG file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BasePath(System::String value);
    /// <summary>
    /// XsltArgumentList for inserting values into existing xls parameters
    /// 
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Xml::Xsl::XsltArgumentList> get_XsltArgumentList() const;
    /// <summary>
    /// XsltArgumentList for inserting values into existing xls parameters
    /// 
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_XsltArgumentList(System::SharedPtr<System::Xml::Xsl::XsltArgumentList> value);
    
    /// <summary>
    /// Creates <see cref="XslFoLoadOptions"></see> object without xsl data.
    /// </summary>
    ASPOSE_PDF_SHARED_API XslFoLoadOptions();
    /// <summary>
    /// Creates <see cref="XslFoLoadOptions"></see> object with xsl data.
    /// </summary>
    /// <param name="xslFile">
    /// Xsl file to convert XSL-FO document into pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API XslFoLoadOptions(System::String xslFile);
    /// <summary>
    /// Creates <see cref="XslFoLoadOptions"></see> object with xsl data.
    /// </summary>
    /// <param name="xslStream">
    /// Xsl stream to convert XSL-FO document into pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API XslFoLoadOptions(System::SharedPtr<System::IO::Stream> xslStream);
    
protected:

    /// <summary>
    /// Internal parameter - we can ask with it to save XML that will be get after XML+XSLT to XSLFO transformation
    /// </summary>
    System::String IntermediateXmlFileIfXslTransformUsed;
    
private:

    System::String _basePath;
    System::SharedPtr<System::Xml::Xsl::XsltArgumentList> _xsltArgumentList;
    
};

} // namespace Pdf
} // namespace Aspose


