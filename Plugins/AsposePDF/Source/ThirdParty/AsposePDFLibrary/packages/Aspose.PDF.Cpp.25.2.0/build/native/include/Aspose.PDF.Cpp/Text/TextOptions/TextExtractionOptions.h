#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Text/TextOptions/TextOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents text extraction options
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextExtractionOptions final : public Aspose::Pdf::Text::TextOptions
{
    typedef TextExtractionOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Defines different modes which can be used while converting pdf document into text. See <see cref="TextDevice"></see> class.
    /// </summary>
    enum class TextFormattingMode
    {
        /// <summary>
        /// Represent pdf content with a bit of formatting routines.
        /// </summary>
        Pure,
        /// <summary>
        /// Represent pdf content as is, i.e. without formatting.
        /// </summary>
        Raw,
        /// <summary>
        /// Represent pdf content with positioning text fragments by their coordinates.
        /// It is basically similar to "Raw" mode. But while "Raw" focuses on preserving the structure
        /// of text fragments (operators) in a document, "Flatten" focuses on keeping text in the order it is read.
        /// </summary>
        Flatten,
        /// <summary>
        /// Extraction with memory saving. It is almost same to 'Raw' mode but works slightly faster and uses less memory.
        /// </summary>
        MemorySaving
    };
    
    
public:

    /// <summary>
    /// Gets formatting mode. 
    /// </summary>
    ASPOSE_PDF_SHARED_API TextExtractionOptions::TextFormattingMode get_FormattingMode() const;
    /// <summary>
    /// Gets formatting mode. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FormattingMode(TextExtractionOptions::TextFormattingMode value);
    /// <summary>
    /// Gets factor that will be applied to scale font size during extraction in pure mode.
    /// Setting of less value leads to more spaces in the extracted text.
    /// Default value is 1 - no scaling;
    /// Setting value to zero allows algorithm choose scaling automatically.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_ScaleFactor() const;
    /// <summary>
    /// Sets factor that will be applied to scale font size during extraction in pure mode.
    /// Setting of less value leads to more spaces in the extracted text.
    /// Default value is 1 - no scaling;
    /// Setting value to zero allows algorithm choose scaling automatically.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ScaleFactor(double value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextExtractionOptions"></see> object for the specified text formatting mode.
    /// </summary>
    /// <param name="formattingMode">Text formatting mode value.</param>
    ASPOSE_PDF_SHARED_API TextExtractionOptions(TextExtractionOptions::TextFormattingMode formattingMode);
    
private:

    TextExtractionOptions::TextFormattingMode _formattingMode;
    double _scaleFactor;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


