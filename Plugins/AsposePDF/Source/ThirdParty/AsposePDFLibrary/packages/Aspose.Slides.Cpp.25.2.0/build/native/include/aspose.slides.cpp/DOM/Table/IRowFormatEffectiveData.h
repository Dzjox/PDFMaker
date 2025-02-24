#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Table/IBaseTableFormatEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective table row formatting properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::IRowFormat">IRowFormat</see> interface to return effective formatting values with inheritance and table styles applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IRowFormatEffectiveData : public virtual Aspose::Slides::IBaseTableFormatEffectiveData
{
    typedef IRowFormatEffectiveData ThisType;
    typedef Aspose::Slides::IBaseTableFormatEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Slides
} // namespace Aspose


