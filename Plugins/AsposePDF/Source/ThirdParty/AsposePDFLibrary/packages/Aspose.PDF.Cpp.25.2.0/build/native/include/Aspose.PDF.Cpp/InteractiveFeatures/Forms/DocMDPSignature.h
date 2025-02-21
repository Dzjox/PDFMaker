#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

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
enum class DocMDPAccessPermissions;
class Signature;
} // namespace Forms
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Represents the class of document MDP (modification detection and prevention) signature type.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DocMDPSignature final : public System::Object
{
    typedef DocMDPSignature ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    
public:

    /// <summary>
    /// Returns the access permissions granted for this document.
    /// </summary>
    ASPOSE_PDF_SHARED_API DocMDPAccessPermissions get_AccessPermissions() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="DocMDPSignature"></see> class.
    /// </summary>
    /// <param name="signature">The signature object that used during signing.</param>
    /// <param name="accessPermissions">The access permissions granted for this document.</param>
    ASPOSE_PDF_SHARED_API DocMDPSignature(System::SharedPtr<Aspose::Pdf::Forms::Signature> signature, DocMDPAccessPermissions accessPermissions);
    
protected:

    /// <summary>
    /// Returns the signature object that used during signing.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Forms::Signature> get_Signature() const;
    
private:

    System::SharedPtr<Aspose::Pdf::Forms::Signature> _signature;
    DocMDPAccessPermissions _accessPermissions;
    
    /// <summary>
    /// Initializes the new signature reference entry.
    /// </summary>
    /// <param name="accessPermissions">The access permissions granted for this document.</param>
    void InitializeSignatureReference(DocMDPAccessPermissions accessPermissions);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


