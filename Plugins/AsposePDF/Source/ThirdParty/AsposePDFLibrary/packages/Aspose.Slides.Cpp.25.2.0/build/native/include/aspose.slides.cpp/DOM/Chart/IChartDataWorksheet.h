#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents worksheet associated with <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see>
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartDataWorksheet : public virtual System::Object
{
    typedef IChartDataWorksheet ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the name.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    /// <summary>
    /// Gets the index.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Index() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


