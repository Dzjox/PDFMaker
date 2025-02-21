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
/// The enumeration of states to which the original annotation can be set.
/// </summary>
enum class AnnotationState
{
    /// <summary>
    /// Not defined state.
    /// </summary>
    Undefined,
    /// <summary>
    /// The annotation has been marked by the user.
    /// </summary>
    Marked,
    /// <summary>
    /// The annotation has not been marked by the user.
    /// </summary>
    Unmarked,
    /// <summary>
    /// The user agrees with the change.
    /// </summary>
    Accepted,
    /// <summary>
    /// The user disagrees with the change.
    /// </summary>
    Rejected,
    /// <summary>
    /// The change has been cancelled.
    /// </summary>
    Cancelled,
    /// <summary>
    /// The change has been completed.
    /// </summary>
    Completed,
    /// <summary>
    /// The user has indicated nothing about the change.
    /// </summary>
    None
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS AnnotationStateConverter : public System::Object
{
    typedef AnnotationStateConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(AnnotationState value);
    static ASPOSE_PDF_SHARED_API AnnotationState ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


