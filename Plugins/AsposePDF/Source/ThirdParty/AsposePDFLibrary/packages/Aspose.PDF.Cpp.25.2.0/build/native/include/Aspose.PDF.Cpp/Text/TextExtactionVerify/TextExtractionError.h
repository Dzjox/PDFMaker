#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Text
{
class TextExtractionErrorLocation;
class TextExtractionVerifier;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Text
{
class StringBuilder;
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Describes the text extraction error has appeared in the PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextExtractionError final : public System::Object
{
    typedef TextExtractionError ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TextExtractionVerifier;
    
public:

    /// <summary>
    /// Brief description of the error.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Summary() const;
    /// <summary>
    /// Expanded description of the error.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Description() const;
    /// <summary>
    /// Location of the error.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextExtractionErrorLocation> get_Location() const;
    /// <summary>
    /// Key (PDF name) of the Font object that is used for showing text that causes extraction error.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FontKey() const;
    /// <summary>
    /// Readable (internal) name of the Font object that is used for showing text that causes extraction error.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FontName() const;
    /// <summary>
    /// Text that was actually extracted.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ExtractedText() const;
    
    /// <summary>
    /// Returns string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Brief description of the error.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Summary(System::String value);
    /// <summary>
    /// Expanded description of the error.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Description(System::String value);
    /// <summary>
    /// Key (PDF name) of the Font object that is used for showing text that causes extraction error.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontKey(System::String value);
    /// <summary>
    /// Readable (internal) name of the Font object that is used for showing text that causes extraction error.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontName(System::String value);
    /// <summary>
    /// Text that was actually extracted.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExtractedText(System::String value);
    System::SharedPtr<System::Text::StringBuilder> get_DescriptionSb() const;
    
    TextExtractionError(System::SharedPtr<TextExtractionErrorLocation> location);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextExtractionError, CODEPORTING_ARGS(System::SharedPtr<TextExtractionErrorLocation> location));
    void FlushDescription();
    
private:

    System::String _summary;
    System::String _description;
    System::SharedPtr<TextExtractionErrorLocation> _location;
    System::String _fontKey;
    System::String _fontName;
    System::String _extractedText;
    System::SharedPtr<System::Text::StringBuilder> _descriptionSb;
    
    System::String ToString_NonConst();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


