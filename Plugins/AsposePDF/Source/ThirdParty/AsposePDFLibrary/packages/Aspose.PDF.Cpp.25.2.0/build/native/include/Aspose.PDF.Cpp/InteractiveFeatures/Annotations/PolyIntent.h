#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enumerates the intents of the polygon or polyline annotation.
/// </summary>
enum class PolyIntent
{
    /// <summary>
    /// Undefined state.
    /// </summary>
    Undefined,
    /// <summary>
    /// Means that the annotation is intended to function as a cloud object.
    /// </summary>
    PolygonCloud,
    /// <summary>
    /// Indicates that the polyline annotation is intended to function as a dimension.
    /// </summary>
    PolyLineDimension,
    /// <summary>
    /// Indicates that the polygon annotation is intended to function as a dimension.
    /// </summary>
    PolygonDimension
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS PolyIntentConverter : public System::Object
{
    typedef PolyIntentConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(PolyIntent value);
    static ASPOSE_PDF_SHARED_API System::String ToXfdfString(PolyIntent value);
    static ASPOSE_PDF_SHARED_API PolyIntent ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


