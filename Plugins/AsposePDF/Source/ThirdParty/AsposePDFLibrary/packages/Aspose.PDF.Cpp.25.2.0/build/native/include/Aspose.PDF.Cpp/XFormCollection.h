#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/ISupportsMemoryCleanup.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Artifact;
class ArtifactCollection;
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
class DataUtils;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class TransparentContentRemoval;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
namespace Interchange
{
class ContentSequenceXObject;
} // namespace Interchange
namespace LogicalStructure
{
class StructureElement;
} // namespace LogicalStructure
class Page;
class Resources;
namespace Tagged
{
class TaggedContent;
} // namespace Tagged
namespace Tests
{
class RegressionTests_v19_5;
class RegressionTests_v20_07;
class RegressionTests_v8_1;
} // namespace Tests
namespace Vector
{
class GraphicsAbsorber;
} // namespace Vector
class XForm;
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
/// Class represents collection of XFormCollection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XFormCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XForm>>, public Aspose::Pdf::ISupportsMemoryCleanup
{
    typedef XFormCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XForm>> BaseType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Interchange::ContentSequenceXObject;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::Vector::GraphicsAbsorber;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_07;
    
private:

    class XFormsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XForm>>
    {
        typedef XFormsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XForm>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<XForm>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<XForm>& get_Current() const override;
        
        XFormsEnumerator(System::SharedPtr<XFormCollection> parent, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> xForms);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        static const int32_t DefaultIndex;
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> _xForms;
        int32_t _cursor;
        System::SharedPtr<XFormCollection> _parent;
        
        bool MoveNextImplementation();
        System::SharedPtr<XForm>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets count of XForms in collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Returns true if object is synchronized.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Synchronization object.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Adds new XForm into collection.
    /// </summary>
    /// <param name="item">XForm to add into collection.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<XForm>& item) override;
    /// <summary>
    /// Delete XForm from collection
    /// </summary>
    /// <param name="index">Index of XForm which must be deleted</param>
    ASPOSE_PDF_SHARED_API void Delete(int32_t index);
    /// <summary>
    /// Deletes all XForms from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Delete();
    /// <summary>
    /// Copies XFormCollection into collection. 
    /// </summary>
    /// <param name="array">Array of XForm to be copied</param>
    /// <param name="index">Index where XFormCollection will be copied</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<XForm>> array, int32_t index) override;
    /// <summary>
    /// Returns collection enumerator.
    /// </summary>
    /// <returns>Enumerator for collection</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<XForm>>> GetEnumerator() override;
    /// <summary>
    /// Deletes XForm from collection by form name.
    /// </summary>
    /// <param name="name">Name of XForm to be deleted.</param>
    ASPOSE_PDF_SHARED_API void Delete(System::String name);
    
    /// <summary>
    /// Returns XForm by index.
    /// </summary>
    /// <param name="index">Index of XFormCollection. XForms numbering is started from 1.</param>
    /// <returns>Retrieved XForm.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> idx_get(int32_t index);
    /// <summary>
    /// Returns XForm by its name. Exception is thrown if XForm with specified name is not found.
    /// </summary>
    /// <param name="name">Name of the XForm.</param>
    /// <returns>Retrieved XForm.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> idx_get(System::String name);
    
    /// <summary>
    /// Returns name of the form in this form collection.
    /// </summary>
    /// <param name="form">Form which name is searched.</param>
    /// <returns>Form name in the collection; Null if form is not contained in the collection.</returns>
    ASPOSE_PDF_SHARED_API System::String GetFormName(System::SharedPtr<XForm> form);
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<XForm>& item) const override;
    /// <summary>
    /// Deletes specified item from collection.
    /// </summary>
    /// <param name="item">The object to delete</param>
    /// <returns>true if item was deleted from collection; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<XForm>& item) override;
    ASPOSE_PDF_SHARED_API void cpp_set_xfrom_weak(System::SharedPtr<XForm> form);
    /// <summary>
    /// Clears cached data, frees memory etc.
    /// </summary>
    ASPOSE_PDF_SHARED_API void FreeMemory() override;
    
protected:

    /// <summary>
    /// Resources where XForm objects are situated.
    /// </summary>
    System::WeakPtr<Resources> Parent;
    
    void Add(System::String name, System::SharedPtr<Engine::Data::IPdfObject> formObj);
    /// <summary>
    /// Gets XForm by its name. Throws exception if form is not found.
    /// </summary>
    /// <param name="name">XForm name</param>
    /// <returns>Retrieved XForm</returns>
    System::SharedPtr<XForm> Get(System::String name);
    
    /// <summary>
    /// XForm constructor
    /// </summary>
    /// <param name="parent">Resources object which contains forms</param>
    /// <param name="xObject">Dictionary object which contains XFormCollection</param>
    XFormCollection(System::SharedPtr<Resources> parent, System::SharedPtr<Engine::Data::IPdfDictionary> xObject);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XFormCollection, CODEPORTING_ARGS(System::SharedPtr<Resources> parent, System::SharedPtr<Engine::Data::IPdfDictionary> xObject));
    bool HasForm(System::String formName);
    
    virtual ASPOSE_PDF_SHARED_API ~XFormCollection();
    
private:

    System::SharedPtr<System::Object> _syncRoot;
    System::SharedPtr<Engine::Data::IPdfDictionary> _xObject;
    /// <summary>
    /// Cash to store initialized XForm instances.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> _cache;
    /// <summary>
    /// Hash containing XForms by their names.
    /// </summary>
    System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> _hash;
    
    /// <summary>
    /// Gets XObject dictionary.
    /// </summary>
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict() const;
    
    /// <summary>
    /// Gets XForm by index.
    /// </summary>
    /// <param name="index">Index of the XForm to retrieve. Index must be in range [1..N] where N is XForm count in collection.</param>
    /// <returns>Retrieved xForm</returns>
    System::SharedPtr<XForm> Get(int32_t index);
    /// <summary>
    /// Generates unique name for form. Form name is generated in style "Xf(number)".
    /// </summary>
    /// <returns>Unique form name.</returns>
    System::String GetUniqueFormName();
    /// <summary>
    /// Extract XForm by its name and update cache and hashed values
    /// </summary>
    /// <param name="key"></param>
    void SynchronizeCache(System::String key);
    
};

} // namespace Pdf
} // namespace Aspose


