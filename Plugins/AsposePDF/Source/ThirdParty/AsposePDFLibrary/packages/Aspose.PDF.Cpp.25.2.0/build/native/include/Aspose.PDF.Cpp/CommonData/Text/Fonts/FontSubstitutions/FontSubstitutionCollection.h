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
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Fonts
{
class FontRegistry;
namespace Substitution
{
class FontSubstitutor;
} // namespace Substitution
} // namespace Fonts
} // namespace Text
} // namespace CommonData
} // namespace Engine
namespace Tests
{
namespace Fonts
{
class FontSubstitutionTests;
} // namespace Fonts
} // namespace Tests
namespace Text
{
class FontSubstitution;
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
/// Represents font substitution strategies collection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FontSubstitutionCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>>
{
    typedef FontSubstitutionCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::FontRegistry;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Substitution::FontSubstitutor;
    friend class Aspose::Pdf::Tests::Fonts::FontSubstitutionTests;
    
private:

    class FontSubstitutionsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>>
    {
        typedef FontSubstitutionsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<FontSubstitution>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<FontSubstitution>& get_Current() const override;
        
        FontSubstitutionsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSubstitution>>> fontSubstitutions);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSubstitution>>> cursor;
        int32_t viewed;
        
        bool MoveNextImplementation();
        System::SharedPtr<FontSubstitution>* GetCurrentElementPointer();
        
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
    /// <returns>Enumerator object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSubstitution>>> GetEnumerator() override;
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<FontSubstitution>> array, int32_t index) override;
    /// <summary>
    /// Adds new font substitution object to the collection.
    /// </summary>
    /// <param name="fontSubstitution">Font substitution strategy.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<FontSubstitution>& fontSubstitution) override;
    /// <summary>
    /// Clears the font substitution collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether an element is in the collection.
    /// </summary>
    /// <param name="item">FontSubstitution object to search.</param>
    /// <returns>True - if element found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<FontSubstitution>& item) const override;
    /// <summary>
    /// Deletes the font substitution element.
    /// </summary>
    /// <param name="item">FontSubstitution object to delete.</param>
    /// <returns>True - if element removed; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<FontSubstitution>& item) override;
    
    /// <summary>
    /// Gets the font element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>FontSubstitution object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FontSubstitution> idx_get(int32_t index);
    
protected:

    /// <summary>
    /// Initializes collection object
    /// </summary>
    FontSubstitutionCollection();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontSubstitutionCollection, CODEPORTING_ARGS());
    /// <summary>
    /// Deletes the font substitution element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    /// <summary>
    /// Deletes the font substitution element.
    /// </summary>
    void Delete(System::SharedPtr<FontSubstitution> fontSubstitution);
    
    virtual ASPOSE_PDF_SHARED_API ~FontSubstitutionCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSubstitution>>> fontSubstitutions;
    System::SharedPtr<System::Object> syncRoot;
    
    /// <summary>
    /// Gets a value indicating whether collection is read only. Always returns false;
    /// </summary>
    bool get_IsReadOnly() const override;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


