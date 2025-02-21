#pragma once

#include <system/object.h>

#include "Aspose.PDF.Cpp/Multithreading/IInterruptMonitor.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
class Page;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Multithreading {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Multithreading</b> namespace provides classes that are meant to be used in multi-threaded scenarios.
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
/// Represents information about interruption.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS InterruptMonitor : public Aspose::Pdf::Multithreading::IInterruptMonitor
{
    typedef InterruptMonitor ThisType;
    typedef Aspose::Pdf::Multithreading::IInterruptMonitor BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    
protected:

    static void DoInterrupt();
    
};

} // namespace Multithreading
} // namespace Pdf
} // namespace Aspose


