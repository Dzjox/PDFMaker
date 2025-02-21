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

namespace Engine {

namespace Filters {

/// <summary>
/// 
/// </summary>
enum class FilterType
{
    /// <summary>
    /// 
    /// </summary>
    None,
    /// <summary>
    /// 
    /// </summary>
    LZWDecode,
    /// <summary>
    /// 
    /// </summary>
    FlateDecode,
    /// <summary>
    /// 
    /// </summary>
    ASCIIHexDecode,
    /// <summary>
    /// 
    /// </summary>
    ASCII85Decode,
    /// <summary>
    /// 
    /// </summary>
    CCITTFaxDecode,
    /// <summary>
    /// 
    /// </summary>
    RunLengthDecode,
    /// <summary>
    /// 
    /// </summary>
    JBIG2Decode,
    /// <summary>
    /// 
    /// </summary>
    DCTDecode,
    /// <summary>
    /// 
    /// </summary>
    JPXDecode,
    /// <summary>
    /// 
    /// </summary>
    Crypt,
    /// <summary>
    /// 
    /// </summary>
    Composite
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS FilterTypeConverter : public System::Object
{
    typedef FilterTypeConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(FilterType value);
    static ASPOSE_PDF_SHARED_API FilterType ToEnum(System::String value);
    
};

} // namespace Filters
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


