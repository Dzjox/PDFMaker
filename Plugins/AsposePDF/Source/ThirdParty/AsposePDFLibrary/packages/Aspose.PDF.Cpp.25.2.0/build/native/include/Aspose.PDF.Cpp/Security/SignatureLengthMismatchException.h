#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.PDF.Cpp/Exceptions/PdfException.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
class PdfDocument;
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Security {

class Details_SignatureLengthMismatchException;
using SignatureLengthMismatchException = System::ExceptionWrapper<Details_SignatureLengthMismatchException>;

/// <summary>
/// Represents errors that occur during PDF signing.
/// Occurs if <see cref="Aspose::Pdf::Forms::SignHash"></see> is used to sign a document and the actual length of the signature is greater than that specified in the <see cref="Signature::DefaultSignatureLength"></see> option.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Details_SignatureLengthMismatchException : public Aspose::Pdf::Details_PdfException
{
    typedef Details_SignatureLengthMismatchException ThisType;
    typedef Aspose::Pdf::Details_PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::PdfDocument;
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Creates an instance of <see cref="SignatureLengthMismatchException"></see> by an actual signature length.
    /// </summary>
    /// <param name="actualSignatureLength">The actual length of signature in bytes.</param>
    Details_SignatureLengthMismatchException(int32_t actualSignatureLength);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_SignatureLengthMismatchException, CODEPORTING_ARGS(int32_t actualSignatureLength));
    
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


