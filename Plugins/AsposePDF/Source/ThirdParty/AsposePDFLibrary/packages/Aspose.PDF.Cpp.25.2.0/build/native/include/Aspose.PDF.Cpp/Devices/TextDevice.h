#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/Devices/PageDevice.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Page;
namespace Text
{
class TextExtractionOptions;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
namespace Text
{
class Encoding;
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents class for converting pdf document pages into text.
/// </summary>
/// <remarks>
/// The <see cref="TextDevice"></see> object is basically used to extract text from pdf page.
/// </remarks>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS TextDevice final : public Aspose::Pdf::Devices::PageDevice
{
    typedef TextDevice ThisType;
    typedef Aspose::Pdf::Devices::PageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets text extraction options.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> get_ExtractionOptions() const;
    /// <summary>
    /// Sets text extraction options.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_ExtractionOptions(System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> value);
    /// <summary>
    /// Gets encoding of extracted text.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Text::Encoding> get_Encoding() const;
    /// <summary>
    /// Sets encoding of extracted text.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_Encoding(System::SharedPtr<System::Text::Encoding> value);
    
    /// <summary>
    /// Convert page and save it as text stream.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="page">
    /// The page to convert.
    /// </param>
    /// <param name="output">
    /// Result stream.
    /// </param>
    ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output) override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextDevice"></see> with text extraction options.
    /// </summary>
    /// <param name="extractionOptions">
    /// Text extraction options.
    /// </param>
    ASPOSE_PDF_SHARED_API TextDevice(System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> extractionOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextDevice"></see> with the Raw text formatting mode and Unicode text encoding.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextDevice();
    /// <summary>
    /// Initializes a new instance of the <see cref="TextDevice"></see> for the specified encoding.
    /// </summary>
    /// <param name="encoding">
    /// Encoding of extracted text
    /// </param>
    ASPOSE_PDF_SHARED_API TextDevice(System::SharedPtr<System::Text::Encoding> encoding);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextDevice"></see> for the specified encoding with text extraction options.
    /// </summary>
    /// <param name="extractionOptions">
    /// Text extraction options.
    /// </param>
    /// <param name="encoding">
    /// Encoding of extracted text.
    /// </param>
    ASPOSE_PDF_SHARED_API TextDevice(System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> extractionOptions, System::SharedPtr<System::Text::Encoding> encoding);
    
private:

    System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> extractionOptions;
    System::SharedPtr<System::Text::Encoding> encoding;
    
    void Initialize(System::SharedPtr<Aspose::Pdf::Text::TextExtractionOptions> extractionOptions, System::SharedPtr<System::Text::Encoding> encoding);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


