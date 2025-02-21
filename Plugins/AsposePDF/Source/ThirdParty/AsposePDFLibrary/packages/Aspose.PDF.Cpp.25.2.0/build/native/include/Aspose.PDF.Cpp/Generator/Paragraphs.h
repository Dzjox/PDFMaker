#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ienumerable.h>

#include "Aspose.PDF.Cpp/Generator/BaseParagraph.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
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
/// This class represents paragraph collection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Paragraphs : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::BaseParagraph>>, public System::ICloneable
{
    typedef Paragraphs ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::BaseParagraph>> BaseType;
    typedef System::ICloneable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<BaseParagraph>>;
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
    /// Get paragraphs count.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count();
    
    /// <summary>
    /// Add paragraph to collection.
    /// </summary>
    /// <param name="paragraph">The paragraph.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<BaseParagraph> paragraph);
    /// <summary>
    /// Remove paragraphs range.
    /// </summary>
    /// <param name="index">The first paragraph index.</param>
    /// <param name="count">The paragraphs count.</param>
    /// <returns>The paragraphs collection</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Paragraphs> GetRange(int32_t index, int32_t count);
    /// <summary>
    /// Remove paragraphs range.
    /// </summary>
    /// <param name="index">The first paragraph index.</param>
    /// <param name="count">The paragraphs count.</param>
    ASPOSE_PDF_SHARED_API void RemoveRange(int32_t index, int32_t count);
    /// <summary>
    /// Remove paragraph from collection.
    /// </summary>
    /// <param name="paragraph">The paragraph.</param>
    ASPOSE_PDF_SHARED_API void Remove(System::SharedPtr<BaseParagraph> paragraph);
    /// <summary>
    /// Insert paragraph to collection.
    /// </summary>
    /// <param name="index">The index for paragraph.</param>
    /// <param name="paragraph">The paragraph.</param>
    ASPOSE_PDF_SHARED_API void Insert(int32_t index, System::SharedPtr<BaseParagraph> paragraph);
    /// <summary>
    /// Clear paragraphs.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear();
    /// <summary>
    /// Inserts the elements of a collection into the list at the specified index.
    /// </summary>
    /// <param name="index">Index value.</param>
    /// <param name="collection">Collection.</param>
    ASPOSE_PDF_SHARED_API void InsertRange(int32_t index, System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<BaseParagraph>>> collection);
    
    /// <summary>
    /// Gets paragraph from or to collection.
    /// </summary>
    /// <param name="index">The paragraph index.</param>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<BaseParagraph> idx_get(int32_t index);
    /// <summary>
    /// Sets paragraph from or to collection.
    /// </summary>
    /// <param name="index">The paragraph index.</param>
    /// <param name="value"></param>
    ASPOSE_PDF_SHARED_API void idx_set(int32_t index, System::SharedPtr<BaseParagraph> value);
    
    /// <summary>
    /// Gets the enumerator.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<BaseParagraph>>> GetEnumerator() override;
    static int32_t _anonymous_method_0(System::SharedPtr<BaseParagraph> x, System::SharedPtr<BaseParagraph> y);
    /// <summary>
    /// Clones a new <see cref="Clone"></see> object.
    /// </summary>
    /// <returns>The new <see cref="Clone"></see> object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    ASPOSE_PDF_SHARED_API void cpp_switch_last_paragraph_to_week();
    
    ASPOSE_PDF_SHARED_API Paragraphs();
    
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

    bool IsZIndexSet();
    /// <summary>
    /// Sort collection by zindex.
    /// </summary>
    void Sort();
    
    virtual ASPOSE_PDF_SHARED_API ~Paragraphs();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<BaseParagraph>>> paragraphs;
    
};

} // namespace Pdf
} // namespace Aspose


