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
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Segmenting
{
class TextSegmentBuilder;
class TextSegmenter;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
namespace Data
{
class ITrailerable;
} // namespace Data
} // namespace Engine
class Operator;
namespace Text
{
class TableAbsorber;
class TextSegment;
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
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents base class for operator collection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BaseOperatorCollection : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Operator>>
{
    typedef BaseOperatorCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Operator>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter;
    friend class Aspose::Pdf::Text::TableAbsorber;
    friend class Aspose::Pdf::Text::TextSegment;
    
public:

    /// <summary>
    /// Gets count of operators in the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override = 0;
    /// <summary>
    /// Returns true if collection is read only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override = 0;
    /// <summary>
    /// Indicates wheather collection is limited to fast text extraction
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API bool get_IsFastTextExtractionMode() const = 0;
    
    /// <summary>
    /// Gets operator by its index.
    /// </summary>
    /// <param name="index">Index of operator. Numbering is starts from 1.</param>
    /// <returns>Operator from requested index</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Operator> idx_get(int32_t index) = 0;
    /// <summary>
    /// Gets operator by its index.
    /// </summary>
    /// <param name="index">Index of operator. Numbering is starts from 1.</param>
    /// <param name="value">Operator from requested index</param>
    virtual ASPOSE_PDF_SHARED_API void idx_set(int32_t index, System::SharedPtr<Operator> value) = 0;
    
    /// <summary>
    /// Returns enumerator for collection
    /// </summary>
    /// <returns>Collection enumerator</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Operator>>> GetEnumerator() override = 0;
    /// <summary>
    /// Copies operators into operators list.
    /// </summary>
    /// <param name="array">Array with operators which must to be copied. This array must be Object[] or Operator[].</param>
    /// <param name="index">Starting index from which operators will be copied</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<Operator>> array, int32_t index) override = 0;
    /// <summary> 
    /// Suppresses update contents data.
    /// The contents stream is not updated until ResumeUpdate is called.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void SuppressUpdate() = 0;
    /// <summary>
    /// Resumes document update.
    /// Updates contents stream in case there are any pending changes.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void ResumeUpdate() = 0;
    /// <summary>
    /// Inserts operator into collection.
    /// </summary>
    /// <param name="index">Index where new operator must be added</param>
    /// <param name="op">Operator which will be insterted</param>
    virtual ASPOSE_PDF_SHARED_API void Insert(int32_t index, System::SharedPtr<Operator> op) = 0;
    /// <summary>
    /// Adds new operator into collection.
    /// </summary>
    /// <param name="op">Operator which must be added</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<Operator>& op) override = 0;
    /// <summary>
    /// Removes operator from collection.
    /// </summary>
    /// <param name="item">Operator item to remove.</param>
    /// <returns>True - if item removed; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<Operator>& item) override = 0;
    /// <summary>
    /// Checks if operator exists in collection.
    /// </summary>
    /// <param name="item">Operator item to find.</param>
    /// <returns>True - if item found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<Operator>& item) const override = 0;
    /// <summary>
    /// Clears collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override = 0;
    /// <summary>
    /// Cancels last update.
    /// This method may be called when the change should not raise contents update.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void CancelUpdate() = 0;
    
protected:

    /// <summary>
    /// Indicates wheather collection is limited to fast text extraction
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_IsFastTextExtractionMode(bool value) = 0;
    virtual System::SharedPtr<Engine::Data::ITrailerable> get_Trailerable() = 0;
    
    /// <summary>
    /// Returns opetator list.
    /// </summary>
    /// <returns>opetator list.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> ToList() = 0;
    virtual System::SharedPtr<Operator> GetUnrestricted(int32_t index) = 0;
    virtual void UpdateData() = 0;
    virtual void DeleteUnrestricted(int32_t index) = 0;
    
    virtual ASPOSE_PDF_SHARED_API ~BaseOperatorCollection();
    
};

} // namespace Pdf
} // namespace Aspose


