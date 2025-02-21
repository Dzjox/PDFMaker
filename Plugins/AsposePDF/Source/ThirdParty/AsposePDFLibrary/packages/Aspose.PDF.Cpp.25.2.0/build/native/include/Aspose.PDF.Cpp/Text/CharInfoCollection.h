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
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
namespace Text
{
class CharInfo;
class TextSegment;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents CharInfo objects collection.  
/// </summary>
/// <remarks>
/// Provides access to positioning information of text segment characters.
/// </remarks>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS CharInfoCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::CharInfo>>
{
    typedef CharInfoCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::CharInfo>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TextSegment;
    
private:

    class CharInfoEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::CharInfo>>
    {
        typedef CharInfoEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::CharInfo>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<CharInfo>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<CharInfo>& get_Current() const override;
        
        CharInfoEnumerator(System::SharedPtr<CharInfoCollection> charInfoCollection);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        int32_t current;
        System::SharedPtr<CharInfoCollection> charInfoCollection;
        
        bool MoveNextImplementation();
        System::SharedPtr<CharInfo>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of <see cref="CharInfo"></see> object elements actually contained in the collection. 
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
    /// Gets a value indicating whether collection is read-only
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Returns an enumerator for the entire collection.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<CharInfo>>> GetEnumerator() override;
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<CharInfo>> array, int32_t index) override;
    /// <summary>
    /// Collection is read-only, throws <exception cref="NotImplementedException">NotImplementedException</exception>.
    /// </summary>
    /// <param name="item">Item to add.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<CharInfo>& item) override;
    /// <summary>
    /// Collection is read-only. Always throws NotImplementedException.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<CharInfo>& item) const override;
    /// <summary>
    /// Collection is read-only, throws <exception cref="NotImplementedException">NotImplementedException</exception>.
    /// </summary>
    /// <param name="item">Item to remove.</param>
    /// <returns><exception cref="NotImplementedException">NotImplementedException</exception></returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<CharInfo>& item) override;
    
    /// <summary>
    /// Gets the CharInfo element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>CharInfo object.</returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API System::SharedPtr<CharInfo> idx_get(int32_t index);
    
protected:

    /// <summary>
    /// Initializes collection object with textSegment object
    /// </summary>
    CharInfoCollection(System::SharedPtr<TextSegment> textSegment);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CharInfoCollection, CODEPORTING_ARGS(System::SharedPtr<TextSegment> textSegment));
    
    virtual ASPOSE_PDF_SHARED_API ~CharInfoCollection();
    
private:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::SharedPtr<CharInfo>>> charInfos;
    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<TextSegment> textSegment;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


