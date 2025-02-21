#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Page;
class Row;
class Table;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a rows collection of table.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Rows final : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Row>>
{
    typedef Rows ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Row>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Row;
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<Row>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// The items count.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count();
    
    /// <summary>
    /// Add row to collection.
    /// </summary>
    /// <returns>The new row</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Row> Add();
    /// <summary>
    /// Add row to cellection.
    /// </summary>
    /// <param name="row">The new row.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<Row> row);
    /// <summary>
    /// Returns index of row in collection.
    /// </summary>
    /// <param name="row">The existing row.</param>
    /// <returns>The row index</returns>
    ASPOSE_PDF_SHARED_API int32_t IndexOf(System::SharedPtr<Row> row);
    /// <summary>
    /// Remove row from collection.
    /// </summary>
    /// <param name="row">The existing row.</param>
    ASPOSE_PDF_SHARED_API void Remove(System::SharedPtr<Row> row);
    /// <summary>
    /// Remove row at position from collection.
    /// </summary>
    /// <param name="index">The collection index.</param>
    ASPOSE_PDF_SHARED_API void RemoveAt(int32_t index);
    /// <summary>
    /// Remove row set from collection.
    /// </summary>
    /// <param name="index">The collection index.</param>
    /// <param name="count">The rows count.</param>
    ASPOSE_PDF_SHARED_API void RemoveRange(int32_t index, int32_t count);
    /// <summary>
    /// Gets collection's enumerator
    /// </summary>
    /// <returns>Enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Row>>> GetEnumerator() override;
    /// <summary>
    /// Dispose.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose();
    
    /// <summary>
    /// Gets row.
    /// </summary>
    /// <param name="index">The row index.</param>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Row> idx_get(int32_t index);
    /// <summary>
    /// Sets row.
    /// </summary>
    /// <param name="index">The row index.</param>
    ASPOSE_PDF_SHARED_API void idx_set(int32_t index, System::SharedPtr<Row> value);
    
    ASPOSE_PDF_SHARED_API Rows();
    
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_PDF_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_PDF_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_PDF_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_PDF_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_PDF_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_PDF_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_PDF_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_PDF_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_PDF_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_PDF_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    
protected:

    double GetRowsHeight(System::SharedPtr<Table> table, System::SharedPtr<Page> page, double curY, double bottomY);
    
    virtual ASPOSE_PDF_SHARED_API ~Rows();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Row>>> rows;
    
};

} // namespace Pdf
} // namespace Aspose


