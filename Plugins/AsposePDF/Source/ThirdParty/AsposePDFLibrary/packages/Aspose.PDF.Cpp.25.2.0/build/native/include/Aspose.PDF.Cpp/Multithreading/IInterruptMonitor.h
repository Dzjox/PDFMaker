#pragma once

#include <system/idisposable.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Multithreading {

/// <summary>
/// Represents information about interruption.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IInterruptMonitor : public System::IDisposable
{
    typedef IInterruptMonitor ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Multithreading
} // namespace Pdf
} // namespace Aspose


