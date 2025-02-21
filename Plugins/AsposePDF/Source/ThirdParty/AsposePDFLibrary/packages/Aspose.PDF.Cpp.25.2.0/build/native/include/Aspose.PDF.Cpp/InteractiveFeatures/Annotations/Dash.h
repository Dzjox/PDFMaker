#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Border;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfArray;
class ITrailerable;
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class representing line dash pattern.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Dash final : public System::Object
{
    typedef Dash ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Border;
    
public:

    /// <summary>
    /// Gets length of first dash.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_On();
    /// <summary>
    /// Sets length of first dash.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_On(int32_t value);
    /// <summary>
    /// Gets length of first gap between dashes.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Off();
    /// <summary>
    /// Sets length of first gap between dashes.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Off(int32_t value);
    /// <summary>
    /// Gets dash array defining a pattern of dashes and gaps that shall be used in drawing a dashed border.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<int32_t> get_Pattern() const;
    
    /// <summary>
    /// Constructor for Dash. Defines dashed border with specified dash and gap, which are unchanged for the entire dashed border.
    /// </summary>
    /// <param name="on">Length of the dash.</param>
    /// <param name="off">Length of the gap.</param>
    ASPOSE_PDF_SHARED_API Dash(int32_t on, int32_t off);
    /// <summary>
    /// Constructor for Dash. Defines a pattern of dashes and gaps that shall be used in drawing a dashed border.
    /// </summary>
    /// <param name="pattern">A dash array (of two values minimum) defining a pattern of dashes and gaps that shall be used in drawing a dashed border.</param>
    ASPOSE_PDF_SHARED_API Dash(System::ArrayPtr<int32_t> pattern);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> ToArray(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    
private:

    System::ArrayPtr<int32_t> _pattern;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


