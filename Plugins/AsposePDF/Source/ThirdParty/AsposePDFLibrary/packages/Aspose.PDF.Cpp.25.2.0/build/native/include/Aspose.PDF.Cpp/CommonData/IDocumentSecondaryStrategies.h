#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Encoding
{
namespace PdfFontEncoding
{
enum class SimpleFontEncodingRules : uint8_t;
} // namespace PdfFontEncoding
} // namespace Encoding
} // namespace Text
} // namespace CommonData
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace CommonData {

/// <summary>
/// Purpose of this interface - to return different strategies which could be used if user sets
/// special flag which affects usual logic
/// </summary>
class IDocumentSecondaryStrategies : public System::Object
{
    typedef IDocumentSecondaryStrategies ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual Text::Encoding::PdfFontEncoding::SimpleFontEncodingRules get_SimpleFontEncodingRule() = 0;
    
};

} // namespace CommonData
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


