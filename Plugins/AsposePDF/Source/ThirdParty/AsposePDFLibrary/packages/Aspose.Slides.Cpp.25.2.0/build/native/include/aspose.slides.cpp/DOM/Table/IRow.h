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
class IRowFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a row in a table.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IRow : public virtual Aspose::Slides::ICellCollection, public Aspose::Slides::IBulkTextFormattable
{
    typedef IRow ThisType;
    typedef Aspose::Slides::ICellCollection BaseType;
    typedef Aspose::Slides::IBulkTextFormattable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the height of a row.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Height() = 0;
    /// <summary>
    /// Returns the minimal possible height of a row.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MinimalHeight() = 0;
    /// <summary>
    /// Sets the minimal possible height of a row.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MinimalHeight(double value) = 0;
    /// <summary>
    /// Returns the RowFormat object that contains formatting properties for this row.
    /// Read-only <see cref="Aspose::Slides::IRowFormat">IRowFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IRowFormat> get_RowFormat() = 0;
    
};

} // namespace Slides
} // namespace Aspose


