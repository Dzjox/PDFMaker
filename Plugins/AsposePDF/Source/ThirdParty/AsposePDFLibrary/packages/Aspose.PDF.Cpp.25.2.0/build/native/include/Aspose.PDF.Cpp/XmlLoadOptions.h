#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing XML file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XmlLoadOptions : public Aspose::Pdf::LoadOptions
{
    typedef XmlLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
protected:

    /// <summary>
    ///   enumerates engine that loads XML that describes document
    /// </summary>
    enum class RenderingEngines
    {
        /// <summary>
        ///   Legacy engine. Internally uses old engine for rendering
        /// </summary>
        LegacyEngine
    };
    
    
public:

    /// <summary>
    /// Gets xsl data for converting xml into pdf document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_XslStream() const;
    
    /// <summary>
    /// Creates <see cref="XmlLoadOptions"></see> object without xsl data.
    /// </summary>
    ASPOSE_PDF_SHARED_API XmlLoadOptions();
    /// <summary>
    /// Creates <see cref="XmlLoadOptions"></see> object with xsl data.
    /// </summary>
    /// <param name="xslFile">
    /// Xsl file to convert xml document into pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API XmlLoadOptions(System::String xslFile);
    /// <summary>
    /// Creates <see cref="XmlLoadOptions"></see> object with xsl data.
    /// </summary>
    /// <param name="xslStream">
    /// Xsl stream to convert xml document into pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API XmlLoadOptions(System::SharedPtr<System::IO::Stream> xslStream);
    
    virtual ASPOSE_PDF_SHARED_API ~XmlLoadOptions();
    
protected:

    /// <summary>
    ///   defines rendering engine that will be used for loading and rendering of XML model of document
    /// </summary>
    XmlLoadOptions::RenderingEngines RenderingEngine;
    
private:

    bool _xslFromFile;
    System::SharedPtr<System::IO::Stream> _xslStream;
    
};

} // namespace Pdf
} // namespace Aspose


