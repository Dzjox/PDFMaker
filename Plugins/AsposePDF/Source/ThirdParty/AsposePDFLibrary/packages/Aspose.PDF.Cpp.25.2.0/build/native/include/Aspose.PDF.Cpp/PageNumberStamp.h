#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/TextStamp.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Facades
{
class FormattedText;
} // namespace Facades
enum class NumberingStyle;
class Page;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents page number stamp and used to number pages. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageNumberStamp final : public Aspose::Pdf::TextStamp
{
    typedef PageNumberStamp ThisType;
    typedef Aspose::Pdf::TextStamp BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// String value for stamping page numbers. 
    /// Value must include char '#' which is replaced with the page number in the process of stamping.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Format() const;
    /// <summary>
    /// String value for stamping page numbers. 
    /// Value must include char '#' which is replaced with the page number in the process of stamping.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Format(System::String value);
    /// <summary>
    /// Gets value of the number of starting page. Other pages will be numbered starting from this value.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_StartingNumber() const;
    /// <summary>
    /// Sets value of the number of starting page. Other pages will be numbered starting from this value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StartingNumber(int32_t value);
    /// <summary>
    /// Numbering style which used by this stamp. 
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::NumberingStyle get_NumberingStyle() const;
    /// <summary>
    /// Numbering style which used by this stamp. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NumberingStyle(Aspose::Pdf::NumberingStyle value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PageNumberStamp"></see> class.
    /// </summary>
    /// <param name="format">
    /// String value used for stamping. See <see cref="Format"></see> property for details.
    /// </param>
    ASPOSE_PDF_SHARED_API PageNumberStamp(System::String format);
    
    /// <summary>
    /// Adds page number.
    /// </summary>
    /// <param name="page">
    /// Page for stamping.
    /// </param>
    ASPOSE_PDF_SHARED_API void Put(System::SharedPtr<Page> page) override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PageNumberStamp"></see> class. Format is set to "#".
    /// </summary>
    ASPOSE_PDF_SHARED_API PageNumberStamp();
    /// <summary>
    /// Creates PageNumberStamp by formatted text.
    /// </summary>
    /// <param name="formattedText">Formatted text which used to create Page Number Stamp.</param>
    ASPOSE_PDF_SHARED_API PageNumberStamp(System::SharedPtr<Facades::FormattedText> formattedText);
    
private:

    System::String _format;
    int32_t _startingNumber;
    Aspose::Pdf::NumberingStyle _numberingStyle;
    
};

} // namespace Pdf
} // namespace Aspose


