#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Data {

/// <summary>
/// This interface represents additional info about decoded string.
/// </summary>
class IPdfStringExtractionInfo : public System::Object
{
    typedef IPdfStringExtractionInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual System::ArrayPtr<uint32_t> get_RawCodes() = 0;
    
};

} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


