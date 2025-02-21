#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/Generator/Hyperlink.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents web hyperlink object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS WebHyperlink final : public Aspose::Pdf::Hyperlink
{
    typedef WebHyperlink ThisType;
    typedef Aspose::Pdf::Hyperlink BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the web url.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Url() const;
    /// <summary>
    /// Sets the web url.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Url(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="WebHyperlink"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API WebHyperlink();
    /// <summary>
    /// Initializes a new instance of the <see cref="WebHyperlink"></see> class.
    /// </summary>
    /// <param name="url">Web url for hyperlink.</param>
    ASPOSE_PDF_SHARED_API WebHyperlink(System::String url);
    
protected:

    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
private:

    System::String url;
    
};

} // namespace Pdf
} // namespace Aspose


