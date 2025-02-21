#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class OutlineItemCollection;
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
/// Class describes collection of outlines. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Outlines : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>>
{
    typedef Outlines ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::OutlineItemCollection;
    
public:

    /// <summary>
    /// Gets count.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override = 0;
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override = 0;
    /// <summary>
    /// Gets the total number of outline items at all levels in the document outline hierarchy.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API int32_t get_VisibleCount() = 0;
    
    /// <summary>
    /// Adds outline item to collection.
    /// </summary>
    /// <param name="item">The outline item to be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<OutlineItemCollection>& item) override = 0;
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override = 0;
    /// <summary>
    /// Always throws NotImplementedException.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns><exception cref="NotImplementedException">NotImplementedException</exception></returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<OutlineItemCollection>& item) const override = 0;
    /// <summary>
    /// Copies the outline entries to an System.Array, starting at a particular System.Array index.
    /// </summary>
    /// <param name="array">The one-dimensional System.Array that is the destination. Must have zero-based indexing.</param>
    /// <param name="arrayIndex">The zero-based index in array at which copying begins.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<OutlineItemCollection>> array, int32_t arrayIndex) override = 0;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An System.Collections.IEnumerator object that can be used to iterate through the collection.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumerator() override = 0;
    /// <summary>
    /// Remove outline collection item.
    /// </summary>
    /// <param name="item">Item to delete.</param>
    /// <returns>True - if item removed; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<OutlineItemCollection>& item) override = 0;
    
protected:

    virtual void UpdateVisibleCount() = 0;
    
    virtual ASPOSE_PDF_SHARED_API ~Outlines();
    
};

} // namespace Pdf
} // namespace Aspose


