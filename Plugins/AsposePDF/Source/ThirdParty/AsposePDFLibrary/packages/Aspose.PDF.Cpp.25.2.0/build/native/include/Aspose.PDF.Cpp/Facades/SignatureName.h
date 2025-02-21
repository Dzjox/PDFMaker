#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Facades
{
class PdfFileSignature;
} // namespace Facades
namespace Forms
{
class Signature;
class SignatureField;
} // namespace Forms
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class for a signature name.
/// </summary>
/// <remarks>
/// Represents a more precise signature name. Used instead of string names.
/// Allows you to present signatures with the same string names.
/// </remarks>
class ASPOSE_PDF_SHARED_CLASS SignatureName : public System::Object
{
    typedef SignatureName ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    
public:

    /// <summary>
    /// Gets the name of a signature.
    /// </summary>
    System::String Name;
    /// <summary>
    /// Gets the full name of the signature, providing a unique and precise identifier for the signature field.
    /// </summary>
    System::String FullName;
    
    /// <summary>
    /// Indicates whether the signature is present or not.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_HasSignature();
    
    /// <summary>
    /// Returns a string representation of the <see cref="SignatureName"></see> instance, primarily using its name.
    /// </summary>
    /// <returns>A string representing the name of the signature.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Gets the associated signature field for the signature name.
    /// </summary>
    const System::SharedPtr<Aspose::Pdf::Forms::SignatureField>& get_SignatureField() const;
    /// <summary>
    /// Sets the associated signature field for the signature name.
    /// </summary>
    void set_SignatureField(System::SharedPtr<Aspose::Pdf::Forms::SignatureField> value);
    /// <summary>
    /// Gets the signature associated with the signature name.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Forms::Signature> get_Signature();
    
    /// <summary>
    /// Creates an <see cref="SignatureName"></see> instance.
    /// </summary>
    /// <param name="signatureField">The signature field.</param>
    SignatureName(System::SharedPtr<Aspose::Pdf::Forms::SignatureField> signatureField);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SignatureName, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Forms::SignatureField> signatureField));
    
    /// <summary>
    /// Creates an <see cref="SignatureName"></see> instance for field without a signature.
    /// </summary>
    /// <param name="name">The name of signature.</param>
    /// <param name="fullName">The full name of signature - a full path to the signature field.</param>
    SignatureName(System::String name, System::String fullName);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SignatureName, CODEPORTING_ARGS(System::String name, System::String fullName));
    
private:

    System::SharedPtr<Aspose::Pdf::Forms::SignatureField> pr_SignatureField;
    
    System::String ToString_NonConst();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


