#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Table/IBaseTableFormatEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective table cell formatting properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::ICellFormat">ICellFormat</see> interface to return effective formatting values with inheritance and table styles applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS ICellFormatEffectiveData : public virtual Aspose::Slides::IBaseTableFormatEffectiveData
{
    typedef ICellFormatEffectiveData ThisType;
    typedef Aspose::Slides::IBaseTableFormatEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the transparency of the fill color.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Transparency() = 0;
    
};

} // namespace Slides
} // namespace Aspose


