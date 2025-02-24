#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IParagraphFormatEffectiveData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective text style properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::ITextStyle">ITextStyle</see> interface to return effective formatting values with inheritance applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS ITextStyleEffectiveData : public virtual System::Object
{
    typedef ITextStyleEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns effective default paragraph properties.
    /// Read-only <see cref="Aspose::Slides::IParagraphFormatEffectiveData">IParagraphFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraphFormatEffectiveData> get_DefaultParagraphFormat() = 0;
    
    /// <summary>
    /// Returns level of effective style.
    /// </summary>
    /// <param name="index">Zero-based index of level. Must lay in 0..8 interval.</param>
    /// <returns>Effective formatting of level <see cref="Aspose::Slides::IParagraphFormatEffectiveData">IParagraphFormatEffectiveData</see>. </returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraphFormatEffectiveData> GetLevel(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


