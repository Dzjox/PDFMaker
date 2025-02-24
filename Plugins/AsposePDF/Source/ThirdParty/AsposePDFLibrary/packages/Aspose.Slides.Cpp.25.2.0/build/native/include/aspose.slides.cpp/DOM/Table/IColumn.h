#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Table/ICellCollection.h"
#include "DOM/IBulkTextFormattable.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IColumnFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a column in a table.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColumn : public virtual Aspose::Slides::ICellCollection, public Aspose::Slides::IBulkTextFormattable
{
    typedef IColumn ThisType;
    typedef Aspose::Slides::ICellCollection BaseType;
    typedef Aspose::Slides::IBulkTextFormattable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the width of a column.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Width() = 0;
    /// <summary>
    /// Sets the width of a column.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Width(double value) = 0;
    /// <summary>
    /// Returns the ColumnFormat object that contains formatting properties for this column.
    /// Read-only <see cref="Aspose::Slides::IColumnFormat">IColumnFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColumnFormat> get_ColumnFormat() = 0;
    
};

} // namespace Slides
} // namespace Aspose


