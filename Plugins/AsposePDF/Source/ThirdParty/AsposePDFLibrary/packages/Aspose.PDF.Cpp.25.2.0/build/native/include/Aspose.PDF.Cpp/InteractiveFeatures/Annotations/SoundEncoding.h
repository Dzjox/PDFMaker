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
/// The encoding format for the sample data.
/// </summary>
enum class SoundEncoding
{
    /// <summary>
    /// Unspecified or unsigned values in the range 0 to 2^bits - 1.
    /// </summary>
    Raw,
    /// <summary>
    /// Twos-complement values.
    /// </summary>
    Signed,
    /// <summary>
    /// Mu-law-encoded samples.
    /// </summary>
    MuLaw,
    /// <summary>
    /// A-law-encoded samples.
    /// </summary>
    ALaw
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS SoundEncodingConverter : public System::Object
{
    typedef SoundEncodingConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(SoundEncoding value);
    static ASPOSE_PDF_SHARED_API System::String ToXfdfString(SoundEncoding value);
    static ASPOSE_PDF_SHARED_API SoundEncoding ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


