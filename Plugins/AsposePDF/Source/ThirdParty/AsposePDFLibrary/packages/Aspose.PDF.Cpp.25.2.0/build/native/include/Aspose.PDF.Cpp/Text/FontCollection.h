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
namespace Annotations
{
class Annotation;
class FreeTextAnnotation;
class RedactionAnnotation;
class WidgetAnnotation;
} // namespace Annotations
class ApsToPdfConverter;
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
class Document;
namespace Engine
{
namespace CommonData
{
namespace PageContent
{
class IResourceDictionary;
} // namespace PageContent
namespace Text
{
namespace Fonts
{
namespace Utilities
{
class DocumentCIDType2FontContentUpdater;
class FontUtilities;
} // namespace Utilities
} // namespace Fonts
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfDictionary;
class IPdfObject;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
namespace ConvertHelpers
{
class LowLevelFontSubstitutor;
} // namespace ConvertHelpers
class PdfAConvertStrategyBase;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
namespace Facades
{
class FormEditor;
} // namespace Facades
namespace Forms
{
class ButtonField;
class C128Barcode;
class CheckboxField;
class Form;
class RadioButtonOptionField;
class TextModel;
} // namespace Forms
namespace PageModel
{
class TextElement;
} // namespace PageModel
class Resources;
namespace Tests
{
class RegressionTests_v11_6;
class RegressionTests_v19_5;
class RegressionTests_v20_06;
class RegressionTests_v7_6;
} // namespace Tests
namespace Text
{
class Font;
class FontAbsorber;
class FontCleanup;
class FontUsage;
} // namespace Text
class TextStamp;
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
/// Represents font collection.
/// </summary>
/// <remarks>
/// Font collections represented by <see cref="FontCollection"></see> class are used in several scenarios. 
/// For example, in resources with <see cref="Resources::Fonts"></see> property. 
/// </remarks> 
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS FontCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::Font>>
{
    typedef FontCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::Font>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontUtilities;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Text::FontUsage;
    friend class Aspose::Pdf::Text::FontCleanup;
    friend class Aspose::Pdf::Text::FontAbsorber;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::C128Barcode;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Forms::TextModel;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_06;
    
private:

    class FontsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::Font>>
    {
        typedef FontsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::Font>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<Font>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<Font>& get_Current() const override;
        
        FontsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Font>>> fonts, System::SharedPtr<Document> doc);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Font>>> cursor;
        int32_t viewed;
        System::SharedPtr<Document> _licensedDoc;
        
        bool MoveNextImplementation();
        System::SharedPtr<Font>* GetCurrentElementPointer();
        
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
    /// Gets a value indicating whether collection is read-only
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Returns an enumerator for the entire collection.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Font>>> GetEnumerator() override;
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<Font>> array, int32_t index) override;
    /// <summary>
    /// Adds new font to font resources and returns automatically assigned name of font resource.
    /// </summary>
    /// <param name="newFont">Font object.</param>
    /// <param name="resName">The automatically assigned resource item name.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<Font> newFont, System::String& resName);
    
    /// <summary>
    /// Gets the font element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>Font object.</returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API System::SharedPtr<Font> idx_get(int32_t index);
    /// <summary>
    /// Gets font from the collection by font name.
    /// Exception is thrown if font was not found.
    /// </summary>
    /// <param name="name">Name of the font.</param>
    /// <returns>Found font.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Font> idx_get(System::String name);
    
    /// <summary>
    /// Checks if font exists in font collection.
    /// </summary>
    /// <param name="name">Font name.</param>
    /// <returns>True in case collection contains the font with specified name.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::String& name) const;
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<Font>& item) const override;
    /// <summary>
    /// Deletes specified item from collection.
    /// </summary>
    /// <param name="item">The object to delete</param>
    /// <returns>true if item was deleted from collection; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<Font>& item) override;
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> get_ResourceDictionary() const;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_FontsDictionary() const;
    bool get_ResourceMode() const;
    
    /// <summary>
    /// Initializes empty font collection object
    /// </summary>
    FontCollection(System::SharedPtr<Document> doc);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontCollection, CODEPORTING_ARGS(System::SharedPtr<Document> doc));
    
    /// <summary>
    /// Initializes collection object with resource dictionary object
    /// </summary>
    FontCollection(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> resourceDictionary);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontCollection, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> resourceDictionary));
    /// <summary>
    /// Deletes the font element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    /// <summary>
    /// Deletes Font with resource name specified
    /// </summary>
    /// <param name="fontResourceName">name of Font resurce</param>
    void Delete(System::String fontResourceName);
    /// <summary>
    /// Clears all the collection contents. To reinitialize collection data
    /// use Init() methods.
    /// </summary>
    void Clear() override;
    /// <summary>
    /// Initializes collection object with resource dictionary object.
    /// </summary>
    void Init(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> resourceDictionary);
    /// <summary>
    /// Initializes collection object with empty resources.
    /// </summary>
    void Init();
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Font>>> GetHash();
    /// <summary>
    /// Add new font to font collection.
    /// </summary>
    /// <param name="resName"></param>
    /// <param name="newFont"></param>
    void Add(System::String resName, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> newFont);
    /// <summary>
    /// Adds to font resources new font entry with specified base font name. 
    /// </summary>
    /// <param name="resName"></param>
    /// <param name="baseFontName"></param>
    void Add(System::String resName, System::String baseFontName);
    
    virtual ASPOSE_PDF_SHARED_API ~FontCollection();
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> _resourceDictionary;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _fontsDictionary;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Font>>> fonts;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Font>>> hash;
    bool resourceMode;
    bool _isInitialized;
    System::WeakPtr<Document> _licensedDoc;
    
    void BuildHash();
    /// <summary>
    /// Adds Font into collection.
    /// </summary>
    /// <param name="item">Font to add into collection</param>
    void Add(const System::SharedPtr<Font>& item) override;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


