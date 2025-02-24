#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IRow;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents table row collection.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IRowCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IRow>>
{
    typedef IRowCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IRow>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IRow> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Creates a copy of the specified template row and inserts it at the bottom of a table.
    /// </summary>
    /// <param name="templ">Row which is used as a template.</param>
    /// <param name="withAttachedRows">True to copy also all rows attached to the template row.</param>
    /// <returns>Added rows.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IRow>> AddClone(System::SharedPtr<IRow> templ, bool withAttachedRows) = 0;
    /// <summary>
    /// Creates a copy of the specified template row and insert it at the specified position in a table.
    /// </summary>
    /// <param name="index">Index of a new row.</param>
    /// <param name="templ">Row which is used as a template.</param>
    /// <param name="withAttachedRows">True to copy also all rows attached to the template row.</param>
    /// <returns>Inserted rows.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IRow>> InsertClone(int32_t index, System::SharedPtr<IRow> templ, bool withAttachedRows) = 0;
    /// <summary>
    /// Removes a row at the specified position from a table.
    /// </summary>
    /// <param name="firstRowIndex">Index of a row to delete.</param>
    /// <param name="withAttachedRows">True to delete also all attached rows.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t firstRowIndex, bool withAttachedRows) = 0;
    
};

} // namespace Slides
} // namespace Aspose


