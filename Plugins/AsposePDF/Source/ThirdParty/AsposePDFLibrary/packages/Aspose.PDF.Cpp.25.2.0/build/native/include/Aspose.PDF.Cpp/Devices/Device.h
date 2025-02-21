#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Devices {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Devices</b> namespace provides classes which are used for representing document as image(s) or a plain text.
/// So document can be sent on to textual or various graphic devices which means we want to get it textual or graphic representation.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
/// Abstract class for all types of devices. Device is used to represent pdf document in some format.
/// For example, document page can be represented as image or text. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Device : public System::Object
{
    typedef Device ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
protected:

    /// <summary>
    /// Document which is processed by this device instance.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Document> get_Document() const;
    /// <summary>
    /// Document which is processed by this device instance.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Document(System::SharedPtr<Aspose::Pdf::Document> value);
    
private:

    System::SharedPtr<Aspose::Pdf::Document> document;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


