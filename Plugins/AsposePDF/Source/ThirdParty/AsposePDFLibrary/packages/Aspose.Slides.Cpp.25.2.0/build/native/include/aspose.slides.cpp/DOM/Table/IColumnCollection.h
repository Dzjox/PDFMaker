#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IColumn;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents collection of columns in a table.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColumnCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IColumn>>
{
    typedef IColumnCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IColumn>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the column at the specified index.
    /// Read-only <see cref="Aspose::Slides::IColumn">IColumn</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColumn> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Creates a copy of the specified template row and inserts it at the bottom of a table.
    /// </summary>
    /// <param name="templ">Column which is used as a template.</param>
    /// <param name="withAttachedColumns">True to copy also all columns attached to the template row.</param>
    /// <returns>Added columns.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IColumn>> AddClone(System::SharedPtr<IColumn> templ, bool withAttachedColumns) = 0;
    /// <summary>
    /// Creates a copy of the specified template column and insert it at the specified position in a table.
    /// </summary>
    /// <param name="index">Index of a new column.</param>
    /// <param name="templ">Column which is used as a template.</param>
    /// <param name="withAttachedColumns">True to copy also all columns attached to the template column.</param>
    /// <returns>Inserted columns.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IColumn>> InsertClone(int32_t index, System::SharedPtr<IColumn> templ, bool withAttachedColumns) = 0;
    /// <summary>
    /// Removes a column at the specified position from a table.
    /// </summary>
    /// <param name="firstColumnIndex">Index of a column to delete.</param>
    /// <param name="withAttachedRows">True to delete also all attached columns.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t firstColumnIndex, bool withAttachedRows) = 0;
    
};

} // namespace Slides
} // namespace Aspose


