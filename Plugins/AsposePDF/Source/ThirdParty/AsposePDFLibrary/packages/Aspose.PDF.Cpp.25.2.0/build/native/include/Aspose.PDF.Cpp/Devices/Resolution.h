#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents class for holding image resolution.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Resolution final : public System::Object
{
    typedef Resolution ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets horizontal image resolution.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_X() const;
    /// <summary>
    /// Sets horizontal image resolution.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_X(int32_t value);
    /// <summary>
    /// Gets vertical image resolution.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Y() const;
    /// <summary>
    /// Sets vertical image resolution.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Resolution"></see> class.
    /// </summary>
    /// <param name="value">
    /// Value which represents the horizontal and vertical resolution.
    /// </param>
    ASPOSE_PDF_SHARED_API Resolution(int32_t value);
    /// <summary>
    /// Initializes a new instance of the <see cref="Resolution"></see> class.
    /// </summary>
    /// <param name="valueX">
    /// Horizontal resolution.
    /// </param>
    /// <param name="valueY">
    /// Vertical resolution.
    /// </param>
    ASPOSE_PDF_SHARED_API Resolution(int32_t valueX, int32_t valueY);
    
private:

    int32_t x;
    int32_t y;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


