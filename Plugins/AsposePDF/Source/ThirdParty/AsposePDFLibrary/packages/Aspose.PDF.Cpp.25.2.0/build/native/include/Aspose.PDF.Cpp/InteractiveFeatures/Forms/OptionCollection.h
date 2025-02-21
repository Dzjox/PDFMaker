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
class ComboBoxFieldXfa;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
namespace Facades
{
class FormEditor;
} // namespace Facades
namespace Forms
{
class BaseOptionCollection;
class ChoiceField;
class ComboBoxField;
class ListBoxField;
class Option;
class RadioButtonField;
} // namespace Forms
namespace Tests
{
class RegressionTests_v7_3;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class representing collection of options of the choice field. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OptionCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Forms::Option>>
{
    typedef OptionCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Forms::Option>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Forms::ChoiceField;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::ComboBoxFieldXfa;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_3;
    
private:

    class OptionsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Forms::Option>>
    {
        typedef OptionsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Forms::Option>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<Option>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<Option>& get_Current() const override;
        
        OptionsEnumerator(System::SharedPtr<BaseOptionCollection> options);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<BaseOptionCollection> options;
        int32_t cursor;
        
        bool MoveNextImplementation();
        System::SharedPtr<Option>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Returns true of object is synchronized.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets a value indicating if collection is readonly.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    /// <summary>
    /// Synchronization object of the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets number of options.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    
    /// <summary>
    /// Copies options into array.
    /// </summary>
    /// <param name="array">Array where options wil lbe copied.</param>
    /// <param name="index">Startign index in array.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<Option>> array, int32_t index) override;
    /// <summary>
    /// Returns enumerator for options in collection.
    /// </summary>
    /// <returns>Options enumerator.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Option>>> GetEnumerator() override;
    /// <summary>
    /// Gets option by index.
    /// </summary>
    /// <param name="index">Option index. Index should be in range [1..n] where n is options count.</param>
    /// <returns>Retreived option.</returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API System::SharedPtr<Option> get(int32_t index);
    /// <summary>
    /// Gets option from colleciton by option name.
    /// </summary>
    /// <param name="name">Option name.</param>
    /// <returns>Retreived option.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Option> get(System::String name);
    
    /// <summary>
    /// Gets option by index.
    /// </summary>
    /// <param name="index">Index of the option.</param>
    /// <returns>Option on the specified index.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Option> idx_get(int32_t index);
    /// <summary>
    /// Gets option by its name.
    /// </summary>
    /// <param name="name">Name of the option.</param>
    /// <returns>Found option.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Option> idx_get(System::String name);
    
    /// <summary>
    /// Adds item in collection, throws <exception cref="NotImplementedException">NotImplementedException</exception>.
    /// </summary>
    /// <param name="item">Operator item to add.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<Option>& item) override;
    /// <summary>
    /// Removes all items from collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Checks if item exists in collection, throws <exception cref="NotImplementedException">NotImplementedException</exception>.
    /// </summary>
    /// <param name="item">Operator item to find.</param>
    /// <returns>Throws <exception cref="NotImplementedException">NotImplementedException</exception></returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<Option>& item) const override;
    /// <summary>
    /// Removes item from collection, throws <exception cref="NotImplementedException">NotImplementedException</exception>.
    /// </summary>
    /// <param name="item">Operator item to remove.</param>
    /// <returns>Throws <exception cref="NotImplementedException">NotImplementedException</exception></returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<Option>& item) override;
    
protected:

    OptionCollection(System::SharedPtr<BaseOptionCollection> options);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OptionCollection, CODEPORTING_ARGS(System::SharedPtr<BaseOptionCollection> options));
    /// <summary>
    /// Adds option to the colleciton.
    /// </summary>
    /// <param name="name">Name of new option.</param>
    void AddOption(System::String name);
    /// <summary>
    /// Adds option to the colleciton.
    /// </summary>
    /// <param name="name">Name of new option.</param>
    /// <param name="bigEndian">Is big endian encoding</param>
    void AddOption(System::String name, bool bigEndian);
    /// <summary>
    /// Adds option to the colleciton.
    /// </summary>
    /// <param name="export">Export identifer of the option.</param>
    /// <param name="name">Name of the option.</param>
    void AddOption(System::String export_, System::String name);
    /// <summary>
    /// Deletes option by its name.
    /// </summary>
    /// <param name="name">Name of the option to delete.</param>
    void DeleteOption(System::String name);
    void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict);
    
    virtual ASPOSE_PDF_SHARED_API ~OptionCollection();
    
private:

    System::SharedPtr<BaseOptionCollection> options;
    System::SharedPtr<System::Object> syncRoot;
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


