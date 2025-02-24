#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/Table/IColumnCollection.h>

#include "DOM/Table/RowCollection.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Cell;
class Column;
class IColumn;
namespace Layout
{
class TableLayout;
} // namespace Layout
namespace PptSerialization
{
class TablePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class TablePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Row;
class ShapeCollection;
class Table;
class ThemeableTableFormat;
} // namespace Slides
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
namespace Drawing
{
class Size;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents collection of columns in a table.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ColumnCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::RowCollection>>, public Aspose::Slides::IColumnCollection
{
    typedef ColumnCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::RowCollection>> BaseType;
    typedef Aspose::Slides::IColumnCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Layout::TableLayout;
    friend class Aspose::Slides::ThemeableTableFormat;
    friend class Aspose::Slides::Cell;
    friend class Aspose::Slides::Column;
    friend class Aspose::Slides::Row;
    friend class Aspose::Slides::RowCollection;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::TablePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::TablePPTSerialization;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IColumn>>;
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
    /// Returns the number of columns in a collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() override;
    
    /// <summary>
    /// Returns the column at the specified index.
    /// Read-only <see cref="Aspose::Slides::Column">Column</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColumn> idx_get(int32_t index) override;
    
    /// <summary>
    /// Creates a copy of the specified template row and inserts it at the bottom of a table.
    /// </summary>
    /// <param name="templ">Column which is used as a template.</param>
    /// <param name="withAttachedColumns">True to copy also all columns attached to the template row.</param>
    /// <returns>Added columns.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IColumn>> AddClone(System::SharedPtr<IColumn> templ, bool withAttachedColumns) override;
    /// <summary>
    /// Creates a copy of the specified template column and insert it at the specified position in a table.
    /// </summary>
    /// <param name="index">Index of a new column.</param>
    /// <param name="templ">Column which is used as a template.</param>
    /// <param name="withAttachedColumns">True to copy also all columns attached to the template column.</param>
    /// <returns>Inserted columns.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IColumn>> InsertClone(int32_t index, System::SharedPtr<IColumn> templ, bool withAttachedColumns) override;
    /// <summary>
    /// Removes a column at the specified position from a table.
    /// </summary>
    /// <param name="firstColumnIndex">Index of a column to delete.</param>
    /// <param name="withAttachedRows">True to delete also all attached columns.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t firstColumnIndex, bool withAttachedRows) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IColumn>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IColumn>> array, int32_t index) override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Table> get_ParentTable();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<RowCollection> get_RowsCollection();
    ASPOSE_SLIDES_LOCAL_API double get_TotalWidth();
    
    ASPOSE_SLIDES_LOCAL_API ColumnCollection(System::SharedPtr<RowCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ColumnCollection, CODEPORTING_ARGS(System::SharedPtr<RowCollection> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Column> GetColumnByIndexInternal(int32_t index);
    ASPOSE_SLIDES_LOCAL_API int32_t GetColumnIndexByOffsetInternal(double targetOffset);
    ASPOSE_SLIDES_LOCAL_API void AddColumnInternal(double width);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Column> InsertColumnInternal(int32_t index, double width);
    ASPOSE_SLIDES_LOCAL_API void SplitColumnByOffsetInternal(double splitOffset);
    ASPOSE_SLIDES_LOCAL_API void SplitColumnByWidthInternal(int32_t columnIndex, double newWidth);
    ASPOSE_SLIDES_LOCAL_API void Clear();
    ASPOSE_SLIDES_LOCAL_API void RemoveUnusedColumns();
    ASPOSE_SLIDES_LOCAL_API void RemoveUnusedColumns(int32_t startColumnIndex, int32_t columnsCount);
    ASPOSE_SLIDES_LOCAL_API void CheckIndexes();
    ASPOSE_SLIDES_LOCAL_API void CheckOffsets();
    ASPOSE_SLIDES_LOCAL_API void DropOffsets();
    ASPOSE_SLIDES_LOCAL_API void DropSizeFlags();
    ASPOSE_SLIDES_LOCAL_API bool CheckOrUnmergeColumnBefore(int32_t index, bool checkOnly);
    ASPOSE_SLIDES_LOCAL_API bool CheckOrUnmergeColumnBeforeAfter(int32_t index, bool checkOnly);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ColumnCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IColumn>>> m_tableColumns;
    bool m_indexesAreActual;
    bool m_offsetssAreActual;
    double m_totalWidth;
    
    ASPOSE_SLIDES_LOCAL_API void RemoveColumnsInternal(int32_t startColumnIndex, int32_t columnsCount);
    ASPOSE_SLIDES_LOCAL_API System::Drawing::Size GetMergedColumnsRange(int32_t columnIndex);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<Column>> GetMergedColumnsArray(int32_t columnIndex);
    
};

} // namespace Slides
} // namespace Aspose


