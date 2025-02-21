#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// This class represents margins of an image.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Margins final : public System::Object
{
    typedef Margins ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the left.
    /// </summary>
    /// <value>The left.</value>
    ASPOSE_PDF_SHARED_API int32_t get_Left() const;
    /// <summary>
    /// Sets the left.
    /// </summary>
    /// <value>The left.</value>
    ASPOSE_PDF_SHARED_API void set_Left(int32_t value);
    /// <summary>
    /// Gets the right.
    /// </summary>
    /// <value>The right.</value>
    ASPOSE_PDF_SHARED_API int32_t get_Right() const;
    /// <summary>
    /// Sets the right.
    /// </summary>
    /// <value>The right.</value>
    ASPOSE_PDF_SHARED_API void set_Right(int32_t value);
    /// <summary>
    /// Gets the top.
    /// </summary>
    /// <value>The top.</value>
    ASPOSE_PDF_SHARED_API int32_t get_Top() const;
    /// <summary>
    /// Sets the top.
    /// </summary>
    /// <value>The top.</value>
    ASPOSE_PDF_SHARED_API void set_Top(int32_t value);
    /// <summary>
    /// Gets the bottom.
    /// </summary>
    /// <value>The bottom.</value>
    ASPOSE_PDF_SHARED_API int32_t get_Bottom() const;
    /// <summary>
    /// Sets the bottom.
    /// </summary>
    /// <value>The bottom.</value>
    ASPOSE_PDF_SHARED_API void set_Bottom(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Margins"></see> class.
    /// </summary>
    /// <param name="left">The left coordinate.</param>
    /// <param name="right">The right coordinate.</param>
    /// <param name="top">The top coordinate.</param>
    /// <param name="bottom">The bottom coordinate.</param>
    ASPOSE_PDF_SHARED_API Margins(int32_t left, int32_t right, int32_t top, int32_t bottom);
    /// <summary>
    /// Initializes a new instance of the <see cref="Margins"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Margins();
    
private:

    int32_t left;
    int32_t right;
    int32_t top;
    int32_t bottom;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


