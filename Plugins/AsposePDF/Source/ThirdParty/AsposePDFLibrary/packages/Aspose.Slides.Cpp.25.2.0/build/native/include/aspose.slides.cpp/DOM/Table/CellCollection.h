#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/Table/ICellCollection.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Cell;
class Column;
class IBaseSlide;
class ICell;
class IPresentation;
namespace PptxSerialization
{
namespace PartParser
{
class TablePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Row;
class Table;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class CellCollectionPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
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
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of cells.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS CellCollection : public virtual Aspose::Slides::ICellCollection, public Aspose::Slides::IDOMObject
{
    typedef CellCollection ThisType;
    typedef Aspose::Slides::ICellCollection BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::Column;
    friend class Aspose::Slides::Row;
    friend class Aspose::Slides::PptxSerialization::PartParser::TablePPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the number of cells in a collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns the parent slide of a CellCollection.
    /// Read-only <see cref="Aspose::Slides::IBaseSlide">IBaseSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a CellCollection.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
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
    /// Returns a cell by it's position.
    /// Read-only <see cref="Aspose::Slides::Cell">Cell</see>.
    /// </summary>
    /// <remarks>
    /// One Cell object can be returned for several indexes in case cell is merged.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICell> idx_get(int32_t index) override;
    
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ICell>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<ICell>> array, int32_t index) override;
    
protected:

    /// @cond
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Table> get_ParentTable() = 0;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::CellCollectionPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API CellCollection(System::SharedPtr<IDOMObject> parentImmediate);
    
    virtual ASPOSE_SLIDES_LOCAL_API int32_t FindByOffset(double offset) = 0;
    virtual ASPOSE_SLIDES_LOCAL_API int32_t GetCellsCount() = 0;
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Cell> GetCellByIndexInternal(int32_t index) = 0;
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ICell>>> ReturnEnumerator() = 0;
    static ASPOSE_SLIDES_LOCAL_API bool CanReturnCell(System::SharedPtr<System::Object> obj, System::SharedPtr<System::Object> data);
    virtual ASPOSE_SLIDES_LOCAL_API void CopyToArrayInternal(System::ArrayPtr<System::SharedPtr<ICell>> array, int32_t destIndex) = 0;
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~CellCollection();
    
private:

    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::CellCollectionPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
};

} // namespace Slides
} // namespace Aspose


