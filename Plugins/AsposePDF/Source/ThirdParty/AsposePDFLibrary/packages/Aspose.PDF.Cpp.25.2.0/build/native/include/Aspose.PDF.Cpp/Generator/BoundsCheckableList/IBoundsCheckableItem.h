#pragma once

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

class ASPOSE_PDF_SHARED_CLASS IBoundsCheckableItem : public virtual System::Object
{
    typedef IBoundsCheckableItem ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Checks if the item fits within the given container dimensions (inclusive).
    /// </summary>
    /// <param name="containerWidth">Width of the container.</param>
    /// <param name="containerHeight">Height of the container.</param>
    /// <returns>True if fits; otherwise, false.</returns>
    virtual bool CheckBounds(double containerWidth, double containerHeight) = 0;
    
};

} // namespace Pdf
} // namespace Aspose


