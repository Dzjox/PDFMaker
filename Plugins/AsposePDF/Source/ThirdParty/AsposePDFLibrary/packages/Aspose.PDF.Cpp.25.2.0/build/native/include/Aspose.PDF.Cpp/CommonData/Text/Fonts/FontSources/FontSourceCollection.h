#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/eventhandler.h>
#include <system/collections/ienumerator.h>
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
namespace Fonts
{
class FontRegistry;
} // namespace Fonts
} // namespace Text
} // namespace CommonData
} // namespace Engine
class HtmlSaveOptions;
namespace Text
{
class FontSource;
} // namespace Text
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

namespace Text {

/// <summary>
/// Represents font sources collection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FontSourceCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSource>>
{
    typedef FontSourceCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSource>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::FontRegistry;
    friend class Aspose::Pdf::HtmlSaveOptions;
    
private:

    class FontSourcesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSource>>
    {
        typedef FontSourcesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSource>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<FontSource>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<FontSource>& get_Current() const override;
        
        FontSourcesEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSource>>> fontSources);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSource>>> cursor;
        int32_t viewed;
        
        bool MoveNextImplementation();
        System::SharedPtr<FontSource>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of <see cref="Font"></see> object elements actually contained in the collection. 
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
    /// Returns an enumerator for the entire collection.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSource>>> GetEnumerator() override;
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<FontSource>> array, int32_t index) override;
    /// <summary>
    /// Adds new font source object to the collection.
    /// </summary>
    /// <param name="fontSource">Font source.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<FontSource>& fontSource) override;
    /// <summary>
    /// Clears the font source collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Deletes the font source element.
    /// </summary>
    /// <param name="fontSource">FontSource object that will be deleted.</param>
    ASPOSE_PDF_SHARED_API void Delete(System::SharedPtr<FontSource> fontSource);
    
    /// <summary>
    /// Gets the font element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>Font source object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FontSource> idx_get(int32_t index);
    
    /// <summary>
    /// Determines whether an element is in the collection.
    /// </summary>
    /// <param name="item">FontSource object to search.</param>
    /// <returns>True - if element found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<FontSource>& item) const override;
    /// <summary>
    /// Deletes the font source element.
    /// </summary>
    /// <param name="item">FontSource object that will be deleted.</param>
    /// <returns>True - if element found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<FontSource>& item) override;
    
protected:

    System::EventHandler<> CollectionChanged;
    
    /// <summary>
    /// Initializes collection object
    /// </summary>
    FontSourceCollection();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontSourceCollection, CODEPORTING_ARGS());
    /// <summary>
    /// Deletes the font source element at the specified index.
    /// </summary>
    /// <param name="index">Index of FontSource object within the collection that will be deleted.</param>
    void Delete(int32_t index);
    
    virtual ASPOSE_PDF_SHARED_API ~FontSourceCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSource>>> fontSources;
    System::SharedPtr<System::Object> syncRoot;
    
    /// <summary>
    /// Gets a value indicating whether collection is read only. Always returns false;
    /// </summary>
    bool get_IsReadOnly() const override;
    
    void OnCollectionChanged();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


