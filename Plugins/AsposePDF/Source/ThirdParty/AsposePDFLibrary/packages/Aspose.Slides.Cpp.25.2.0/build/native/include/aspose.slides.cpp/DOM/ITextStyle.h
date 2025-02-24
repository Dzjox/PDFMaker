#pragma once
//Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IParagraphFormat;
class ITextStyleEffectiveData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Text style formatting properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITextStyle : public virtual System::Object
{
    typedef ITextStyle ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Default paragraph propertiies.
    /// Read-only <see cref="Aspose::Slides::IParagraphFormat">IParagraphFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraphFormat> get_DefaultParagraphFormat() = 0;
    
    /// <summary>
    /// If level of style exist returns it, otherwise returns null.
    /// </summary>
    /// <param name="index">Zero-based index of level. Must lay in 0..8 interval.</param>
    /// <returns>Formatting of level <see cref="Aspose::Slides::IParagraphFormat">IParagraphFormat</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraphFormat> GetLevel(int32_t index) = 0;
    /// <summary>
    /// Gets effective text style formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::ITextStyleEffectiveData">ITextStyleEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextStyleEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


