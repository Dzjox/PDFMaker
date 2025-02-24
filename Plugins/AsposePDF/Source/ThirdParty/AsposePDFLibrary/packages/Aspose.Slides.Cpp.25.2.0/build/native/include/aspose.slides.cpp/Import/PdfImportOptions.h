#pragma once

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Import {

/// <summary>
/// Represents the PDF import options
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS PdfImportOptions : public System::Object
{
    typedef PdfImportOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether detect tables when importing pdf file.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// System::SharedPtr<System::IO::Stream> stream = System::MakeObject<System::IO::FileStream>(u"document.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read, System::IO::FileShare::Read);
    /// 
    /// System::SharedPtr<PdfImportOptions> options = System::MakeObject<PdfImportOptions>();
    /// options->set_DetectTables(true);
    /// 
    /// pres->get_Slides()->AddFromPdf(stream, options);
    /// pres->Save(u"fromPdfDocument.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_API_SHARED_API bool get_DetectTables() const;
    /// <summary>
    /// Determines whether detect tables when importing pdf file.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// System::SharedPtr<System::IO::Stream> stream = System::MakeObject<System::IO::FileStream>(u"document.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read, System::IO::FileShare::Read);
    /// 
    /// System::SharedPtr<PdfImportOptions> options = System::MakeObject<PdfImportOptions>();
    /// options->set_DetectTables(true);
    /// 
    /// pres->get_Slides()->AddFromPdf(stream, options);
    /// pres->Save(u"fromPdfDocument.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_API_SHARED_API void set_DetectTables(bool value);
    
    ASPOSE_SLIDES_API_SHARED_API PdfImportOptions();
    
private:

    bool pr_DetectTables;
    
};

} // namespace Import
} // namespace Slides
} // namespace Aspose


