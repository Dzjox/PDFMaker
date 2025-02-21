#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"
#include "Aspose.PDF.Cpp/Artifacts/Artifact.h"

namespace Aspose
{
namespace Pdf
{
class BackgroundArtifact;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
namespace LogicalStructure
{
class StructureElement;
} // namespace LogicalStructure
class Matrix;
class Operator;
class OperatorCollection;
class Page;
class Resources;
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
/// Class represents artifact collection. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ArtifactCollection : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Artifact>>
{
    typedef ArtifactCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Artifact>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::BackgroundArtifact;
    
private:

    enum class WatermarkType
    {
        Unknown,
        Text,
        Image,
        Page
    };
    
    
private:

    class ArtifactEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Artifact>>
    {
        typedef ArtifactEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Artifact>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<Artifact>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<Artifact>& get_Current() const override;
        
        ArtifactEnumerator(System::SharedPtr<ArtifactCollection> collection);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<ArtifactCollection> _collection;
        int32_t current;
        
        bool MoveNextImplementation();
        System::SharedPtr<Artifact>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Is this object synchronized.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets count of artifacts in collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets synchronization object of the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets if collection is readonly. Always returns false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Copies colection into an array.
    /// </summary>
    /// <param name="dest">Destination array.</param>
    /// <param name="index">Starting index.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<Artifact>> dest, int32_t index) override;
    /// <summary>
    /// Gets enumerator for the collection. 
    /// </summary>
    /// <returns>Enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Artifact>>> GetEnumerator() override;
    
    /// <summary>
    /// Gets artifact by index. Index is started from 1.
    /// </summary>
    /// <param name="index">Index of the artifact.</param>
    /// <returns>Artifact on the page.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Artifact> idx_get(int32_t index);
    
    /// <summary>
    /// Adds artifacts to the collection.
    /// </summary>
    /// <param name="artifact">Artifact which sould be added to collection.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<Artifact>& artifact) override;
    /// <summary>
    /// Finds artifacts by custom value.
    /// </summary>
    /// <param name="name">Name of custom value.</param>
    /// <param name="expectedValue">Value to find.</param>
    /// <returns>List of found artifacts.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Artifact>>> FindByValue(System::String name, System::String expectedValue);
    /// <summary>
    /// Deletes specified artifact.
    /// </summary>
    /// <param name="artifact">Artifact which will be deleted.</param>
    ASPOSE_PDF_SHARED_API void Delete(System::SharedPtr<Artifact> artifact);
    /// <summary>
    /// Update artifact inside the collection. 
    /// </summary>
    /// <param name="artifact">Artifact to be updated.</param>
    ASPOSE_PDF_SHARED_API void Update(System::SharedPtr<Artifact> artifact);
    /// <summary>
    /// Deletes artifact by its index. 
    /// </summary>
    /// <param name="index">Index of artifact to delete.</param>
    ASPOSE_PDF_SHARED_API void Delete(int32_t index);
    
protected:

    System::SharedPtr<Aspose::Pdf::Page> get_Page() const;
    
    ArtifactCollection(System::SharedPtr<Aspose::Pdf::Page> page);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ArtifactCollection, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Page> page));
    
    virtual ASPOSE_PDF_SHARED_API ~ArtifactCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Artifact>>> collection;
    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Aspose::Pdf::Page> page;
    
    bool IsArtifact(System::SharedPtr<Operator> op, System::SharedPtr<Engine::Data::IPdfDictionary>& propertyList);
    ArtifactCollection::WatermarkType GetWatermarkType(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Resources> res);
    System::SharedPtr<Artifact> CreateArtifact(System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Engine::Data::IPdfDictionary> properties);
    System::SharedPtr<Artifact> TryFindSubType(System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Engine::Data::IPdfDictionary> properties);
    void CollectArtifacts(System::SharedPtr<Matrix> matrix, System::SharedPtr<OperatorCollection> opc, System::SharedPtr<Resources> res, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Artifact>>> list);
    void UpdateCollection();
    int32_t FindOperatorByTag(System::String Tag);
    void DeleteOperator(int32_t startIndex);
    bool OperatorsEqual(System::SharedPtr<Operator> op1, System::SharedPtr<Operator> op2);
    int32_t FindArtifact(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    /// <summary>
    /// Returns index of the artifact in page contents. If page contents was changed, tryes re-find this artifact in new contents. 
    /// </summary>
    /// <param name="artifact"></param>
    /// <returns></returns>
    int32_t GetIndex(System::SharedPtr<Artifact> artifact);
    /// <summary>
    /// Clears collection. Method is not supported.
    /// </summary>
    void Clear() override;
    /// <summary>
    /// Checks if collection contains specified artifact.
    /// </summary>
    /// <param name="item">Artifact to search.</param>
    bool Contains(const System::SharedPtr<Artifact>& item) const override;
    /// <summary>
    /// Deletes specified artifact.
    /// </summary>
    /// <param name="item">Artifact which will be deleted.</param>
    bool Remove(const System::SharedPtr<Artifact>& item) override;
    
};

} // namespace Pdf
} // namespace Aspose


