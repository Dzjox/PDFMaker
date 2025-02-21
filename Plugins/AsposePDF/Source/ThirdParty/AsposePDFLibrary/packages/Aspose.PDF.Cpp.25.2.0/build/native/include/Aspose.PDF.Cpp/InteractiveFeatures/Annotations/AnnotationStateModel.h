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
/// The state model corresponding to state of annotation.
/// </summary>
enum class AnnotationStateModel
{
    /// <summary>
    /// Not defined state model.
    /// </summary>
    Undefined,
    /// <summary>
    /// The annotation has been marked (or unmarked) by the user.
    /// </summary>
    Marked,
    /// <summary>
    /// The annotation has been reviewed (accepted, rejected, cancelled, completed, none) by the user.
    /// </summary>
    Review
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS AnnotationStateModelConverter : public System::Object
{
    typedef AnnotationStateModelConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(AnnotationStateModel value);
    static ASPOSE_PDF_SHARED_API AnnotationStateModel ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


