#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Specifies load format.
/// </summary>
enum class LoadFormat
{
    /// <summary>
    /// means loading of document in CGM format
    /// </summary>
    CGM,
    /// <summary>
    /// means loading of document in HTML format
    /// </summary>
    HTML,
    /// <summary>
    /// means loading of document in EPUB format(special format of e-books)
    /// </summary>
    EPUB,
    /// <summary>
    /// means loading of document in XML format(special XML that represent logical structure of PDF document)
    /// </summary>
    XML,
    /// <summary>
    /// means loading of document in XSLFO format
    /// </summary>
    XSLFO,
    /// <summary>
    ///  means loading of document in PCL format
    /// </summary>
    PCL,
    /// <summary>
    /// means loading of document in XPS format
    /// </summary>
    XPS,
    /// <summary>
    /// means loading of document in TEX format - format of Latex text editor
    /// </summary>
    TEX,
    /// <summary>
    /// means loading of document in SVG format - format of Latex text editor
    /// </summary>
    SVG,
    /// <summary>
    /// means loading of document in MHT format(that is packed HTML format)
    /// </summary>
    MHT,
    /// <summary>
    /// means loading of document in PS format(format of PostScript document)
    /// </summary>
    PS,
    /// <summary>
    /// means loading document is in MD format (markdown).
    /// </summary>
    MD,
    /// <summary>
    /// means loading document is in TXT format.
    /// </summary>
    TXT,
    /// <summary>
    /// means loading document in APS format.
    /// </summary>
    APS,
    /// <summary>
    /// Internal PDF document structure in XML format.
    /// </summary>
    PDFXML,
    /// <summary>
    /// means loading document in OFD format.
    /// </summary>
    OFD,
    /// <summary>
    /// means loading document in Djvu format.
    /// </summary>
    DJVU,
    /// <summary>
    /// means loading document in CDR format.
    /// </summary>
    CDR
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::LoadFormat>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::LoadFormat, const char_t*>, 18>& values();
};



