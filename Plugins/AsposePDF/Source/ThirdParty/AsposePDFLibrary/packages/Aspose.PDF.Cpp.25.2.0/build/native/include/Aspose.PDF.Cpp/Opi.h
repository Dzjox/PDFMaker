#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
class XForm;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents The Open Prepress Interface (OPI) is a mechanism for creating low-resolution placeholders, or proxies,
/// for such high-resolution images.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Opi final : public System::Object
{
    typedef Opi ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the version of OPI to which this dictionary refers.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Version();
    /// <summary>
    /// Gets the external file containing the low- resolution proxy image.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FileSpecification();
    /// <summary>
    /// Gets an array of eight numbers of the form specifying the location on the page of the cropped image.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<double> get_Position();
    
    /// <summary>
    /// The constructor.
    /// </summary>
    /// <param name="xform">Xform object.</param>
    ASPOSE_PDF_SHARED_API Opi(System::SharedPtr<XForm> xform);
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineOpi;
    System::String _version;
    System::String _fileSpecification;
    System::ArrayPtr<double> _position;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> GetOpiDictionary();
    
};

} // namespace Pdf
} // namespace Aspose


