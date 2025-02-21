#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if NETCORE && (NETSTANDARD2_1 || NET5_0 || NET6_0 || NET7_0 || NET8_0)

// C# INACTIVE CODE:
// using KeyValuePair = Aspose.Pdf.Engine.CommonData.KeyValuePair;

// C# preprocessor directive: #endif


#include <system/exceptions.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Collection;
namespace CommonData
{
namespace Tree
{
class NamesTree;
} // namespace Tree
} // namespace CommonData
class Document;
namespace Engine
{
namespace CommonData
{
class ITreeNode;
} // namespace CommonData
namespace Data
{
class IPdfPrimitive;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class PdfA3ConvertStrategy;
class PdfA4ConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
class IPdfDocument;
} // namespace Engine
class FileSpecification;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

class Details_EmbeddedFilesDoesNotExists;
using EmbeddedFilesDoesNotExists = System::ExceptionWrapper<Details_EmbeddedFilesDoesNotExists>;

class Details_EmbeddedFilesDoesNotExists : public System::Details_Exception
{
    typedef Details_EmbeddedFilesDoesNotExists ThisType;
    typedef System::Details_Exception BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    Details_EmbeddedFilesDoesNotExists();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_EmbeddedFilesDoesNotExists, CODEPORTING_ARGS());
    
};

/// <summary>
/// Class representing embedded files collection. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EmbeddedFileCollection : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::FileSpecification>>
{
    typedef EmbeddedFileCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::FileSpecification>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Collection;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA3ConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA4ConvertStrategy;
    
private:

    class EmbeddedFilesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::FileSpecification>>
    {
        typedef EmbeddedFilesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::FileSpecification>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<FileSpecification>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<FileSpecification>& get_Current() const override;
        
        EmbeddedFilesEnumerator(System::SharedPtr<EmbeddedFileCollection> parent, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::Data::IPdfPrimitive>>> list);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Engine::Data::IPdfPrimitive>>> cursor;
        int32_t viewed;
        System::SharedPtr<EmbeddedFileCollection> _parent;
        
        bool MoveNextImplementation();
        System::SharedPtr<FileSpecification>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets a value indicating whether access to this collection is synchronized (thread safe).
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets an object that can be used to synchronize access to this collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets number of embedded files in collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Returns list of file attachment keys.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::String>> get_Keys();
    
    /// <summary>
    /// Copies array of FileSpecification object into colleciton. 
    /// </summary>
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<FileSpecification>> array, int32_t index) override;
    /// <summary>
    /// Returns colleciton enumerator.
    /// </summary>
    /// <returns>Enumerator of colleciton.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FileSpecification>>> GetEnumerator() override;
    /// <summary>
    /// Adds embedded file specification into collection.
    /// </summary>
    /// <param name="file">FileSpecification which should be added into colleciton.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<FileSpecification>& file) override;
    /// <summary>
    /// Adds file to embedded files with the specified key.
    /// </summary>
    /// <param name="key">Key in the embedded files.</param>
    /// <param name="file">File specification.</param>
    ASPOSE_PDF_SHARED_API void Add(System::String key, System::SharedPtr<FileSpecification> file);
    /// <summary>
    /// Deletes file from the collection by its key in the collection. 
    /// </summary>
    /// <param name="key">Key name.</param>
    ASPOSE_PDF_SHARED_API void DeleteByKey(System::String key);
    /// <summary>
    /// Returns embedded file by its name.
    /// </summary>
    /// <param name="name">Name of the file.</param>
    /// <returns>File specification object if found; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FileSpecification> FindByName(System::String name);
    /// <summary>
    /// Delete embedded file by name.
    /// </summary>
    /// <param name="name">Name of the embedded file which should be deleted.</param>
    ASPOSE_PDF_SHARED_API void Delete(System::String name);
    /// <summary>
    /// Remove all embedded files from document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Delete();
    
    /// <summary>
    /// Gets embedded file by its index.
    /// </summary>
    /// <param name="index">Index of embedded file. Numbering is started from 1.</param>
    /// <returns>Retreived embedded file specification</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FileSpecification> idx_get(int32_t index);
    /// <summary>
    /// Gets embedded file by its name.
    /// </summary>
    /// <param name="name">Embedded file name.</param>
    /// <returns>Retreived embedded file specification.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FileSpecification> idx_get(System::String name);
    
protected:

    /// <summary>
    /// PDF document where embedded files are placed.
    /// </summary>
    System::SharedPtr<Engine::IPdfDocument> EngineDoc;
    
    /// <summary>
    /// Gets the names tree of the embedded files in the PDF document.
    /// </summary>
    /// <exception cref="EmbeddedFilesDoesNotExists">Thrown when there are no embedded files in the PDF document.</exception>
    System::SharedPtr<Aspose::Pdf::CommonData::Tree::NamesTree> get_NamesTree() const;
    
    /// <summary>
    /// Constructor of EmbeddedFileCollection.
    /// </summary>
    EmbeddedFileCollection();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EmbeddedFileCollection, CODEPORTING_ARGS());
    
    /// <summary>
    /// Constructor of EmbeddedFileCollection.
    /// </summary>
    /// <param name="document">Document where embedded files are placed.</param>
    EmbeddedFileCollection(System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EmbeddedFileCollection, CODEPORTING_ARGS(System::SharedPtr<Document> document));
    /// <summary>
    /// Check is Embedded Files structure exists and create if does not. 
    /// </summary>
    void EnsureEmbeddedFilesExisit();
    void ConvertToObjects();
    
    virtual ASPOSE_PDF_SHARED_API ~EmbeddedFileCollection();
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<FileSpecification>>> _cache;
    mutable System::SharedPtr<Aspose::Pdf::CommonData::Tree::NamesTree> _namesTree;
    
    /// <summary>
    /// Determines if collection is read only. Always returns false.
    /// </summary>
    bool get_IsReadOnly() const override;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> get_List();
    
    /// <summary>
    /// LoadCache procedure.
    /// </summary>
    void LoadCache();
    int32_t GetFileSpecificationKey(System::SharedPtr<Engine::Data::IPdfPrimitive> value);
    System::SharedPtr<FileSpecification> GetFileSpecification(System::SharedPtr<Engine::Data::IPdfPrimitive> value);
    /// <summary>
    /// Gets embedded file by index. Numbering is started from 1.
    /// </summary>
    /// <param name="index">Embedded file index.</param>
    /// <returns>FileSpecification of embedded file.</returns>
    System::SharedPtr<FileSpecification> get(int32_t index);
    bool TryCheckFileSecurity(System::SharedPtr<FileSpecification> fs, System::SharedPtr<FileSpecification>& newFile);
    /// <summary>
    /// Gets embedded file specification by its name.
    /// </summary>
    /// <param name="name">File specification name</param>
    /// <returns>Embedded file specification</returns>
    System::SharedPtr<FileSpecification> get(System::String name);
    System::String ExtractString(System::SharedPtr<Engine::Data::IPdfPrimitive> key);
    /// <summary>
    /// Converts all dictionaries into objects.
    /// </summary>
    /// <param name="node"></param>
    void ConvertToObjects(System::SharedPtr<Engine::Data::IPdfPrimitive> node);
    void ClearTreeNode(System::SharedPtr<Engine::CommonData::ITreeNode> node);
    /// <summary>
    /// Removes specified FileSpecification from collection. Not supported.
    /// </summary>
    bool Remove(const System::SharedPtr<FileSpecification>& item) override;
    /// <summary>
    /// Determines if collection contains specified FileSpecification. Not supported.
    /// </summary>
    bool Contains(const System::SharedPtr<FileSpecification>& item) const override;
    /// <summary>
    /// Remove all embedded files from document.
    /// </summary>
    void Clear() override;
    
};

} // namespace Pdf
} // namespace Aspose


