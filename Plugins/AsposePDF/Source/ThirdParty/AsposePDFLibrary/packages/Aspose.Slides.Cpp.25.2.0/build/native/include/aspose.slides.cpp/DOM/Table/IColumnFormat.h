#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IColumnFormatEffectiveData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents format of a table column.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColumnFormat : public virtual System::Object
{
    typedef IColumnFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets effective table column formatting properties with inheritance and table styles applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IColumnFormatEffectiveData">IColumnFormatEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColumnFormatEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


