#pragma once

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFontData;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// FontData factory interface
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFontDataFactory : public virtual System::Object
{
    typedef IFontDataFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates FontData with specified font name.
    /// </summary>
    /// <param name="fontName">Font name</param>
    /// <returns>FontData</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> CreateFontData(System::String fontName) = 0;
    
};

} // namespace Slides
} // namespace Aspose


