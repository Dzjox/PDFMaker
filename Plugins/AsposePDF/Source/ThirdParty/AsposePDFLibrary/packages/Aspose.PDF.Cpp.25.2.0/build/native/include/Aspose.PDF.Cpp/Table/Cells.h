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
class Cell;
class Row;
class Table;
namespace Text
{
class TextState;
} // namespace Text
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
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a cells collection of row.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Cells final : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Cell>>
{
    typedef Cells ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Cell>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Row;
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<Cell>>;
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
    /// Add cell to collection.
    /// </summary>
    /// <returns>The new cell</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Cell> Add();
    /// <summary>
    /// Add cell to collection.
    /// </summary>
    /// <param name="text">The text for cell.</param>
    /// <param name="ts">The text state.</param>
    /// <returns>The new cell</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Cell> Add(System::String text, System::SharedPtr<Text::TextState> ts);
    /// <summary>
    /// Add cell to collection.
    /// </summary>
    /// <param name="text">The text for cell.</param>
    /// <returns>The new cell</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Cell> Add(System::String text);
    /// <summary>
    /// Add cell to collection.
    /// </summary>
    /// <param name="cell">The cell to collection.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<Cell> cell);
    /// <summary>
    /// Remove cell set from collection.
    /// </summary>
    /// <param name="index">The collection index.</param>
    /// <param name="count">The rows count.</param>
    ASPOSE_PDF_SHARED_API void RemoveRange(int32_t index, int32_t count);
    /// <summary>
    /// Remove cell set from collection.
    /// </summary>
    /// <param name="cell">The cell object.</param>
    ASPOSE_PDF_SHARED_API void Remove(System::SharedPtr<Cell> cell);
    /// <summary>
    /// Insert cell to collection.
    /// </summary>
    /// <param name="index">The selected index.</param>
    /// <param name="cell">The selected cell.</param>
    ASPOSE_PDF_SHARED_API void Insert(int32_t index, System::SharedPtr<Cell> cell);
    /// <summary>
    /// Gets collection's enumerator.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Cell>>> GetEnumerator() override;
    /// <summary>
    /// Dispose method
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose();
    
    /// <summary>
    /// Gets cells.
    /// </summary>
    /// <returns></returns>
    /// <param name="index">The cell index.</param>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Cell> idx_get(int32_t index);
    /// <summary>
    /// Sets cells.
    /// </summary>
    /// <param name="value"></param>
    /// <param name="index">The cell index.</param>
    ASPOSE_PDF_SHARED_API void idx_set(int32_t index, System::SharedPtr<Cell> value);
    
    ASPOSE_PDF_SHARED_API Cells();
    
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

    virtual ASPOSE_PDF_SHARED_API ~Cells();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Cell>>> cells;
    
};

} // namespace Pdf
} // namespace Aspose


