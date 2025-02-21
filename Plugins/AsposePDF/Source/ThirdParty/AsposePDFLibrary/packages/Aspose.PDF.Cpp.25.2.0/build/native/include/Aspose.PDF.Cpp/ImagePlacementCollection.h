#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
class ImagePlacement;
class ImagePlacementAbsorber;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents an image placements collection
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ImagePlacementCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::ImagePlacement>>
{
    typedef ImagePlacementCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::ImagePlacement>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    
private:

    class ImagePlacementsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::ImagePlacement>>
    {
        typedef ImagePlacementsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::ImagePlacement>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<ImagePlacement>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<ImagePlacement>& get_Current() const override;
        
        ImagePlacementsEnumerator(System::SharedPtr<ImagePlacementCollection> collection);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<ImagePlacementCollection> _collection;
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ImagePlacement>>> cursor;
        int32_t viewed;
        
        bool MoveNextImplementation();
        System::SharedPtr<ImagePlacement>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of <see cref="ImagePlacement"></see> object elements actually contained in the collection. 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets an object that can be used to synchronize access to the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets a value indicating whether access to the collection is synchronized (thread safe). 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Adds the text fragment element at the specified index.
    /// </summary>
    /// <param name="fragment">Text fragment element to add.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<ImagePlacement>& fragment) override;
    /// <summary>
    /// Returns an enumerator for the entire collection.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ImagePlacement>>> GetEnumerator() override;
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<ImagePlacement>> array, int32_t index) override;
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<ImagePlacement>& item) const override;
    /// <summary>
    /// Deletes specified item from collection
    /// </summary>
    /// <param name="item">Item to delete</param>
    /// <returns>true if item was deleted; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<ImagePlacement>& item) override;
    
    /// <summary>
    /// Gets the text fragment element at the specified index.
    /// </summary>
    /// <param name="index">Index of image placement.</param>
    /// <returns>ImagePlacement object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ImagePlacement> idx_get(int32_t index);
    
protected:

    System::SharedPtr<Aspose::Pdf::Document> get_Document() const;
    void set_Document(System::SharedPtr<Aspose::Pdf::Document> value);
    
    /// <summary>
    /// Initializes a new instance of <see cref="ImagePlacementCollection"></see> collection class
    /// </summary>
    ImagePlacementCollection();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ImagePlacementCollection, CODEPORTING_ARGS());
    /// <summary>
    /// Deletes the text fragment element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    
    virtual ASPOSE_PDF_SHARED_API ~ImagePlacementCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ImagePlacement>>> placements;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Aspose::Pdf::Document> _document;
    
};

} // namespace Pdf
} // namespace Aspose


