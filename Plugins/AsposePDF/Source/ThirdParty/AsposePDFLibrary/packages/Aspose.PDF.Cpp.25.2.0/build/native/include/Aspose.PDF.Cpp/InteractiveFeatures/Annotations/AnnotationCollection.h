#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/details/pointer_collection_helpers.h>
#include <system/collections/list.h>
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
class AnnotationSelector;
class WidgetAnnotation;
} // namespace Annotations
class Document;
namespace Engine
{
namespace CommonData
{
class IPage;
} // namespace CommonData
namespace Data
{
class IPdfDictionary;
class IPdfObject;
} // namespace Data
} // namespace Engine
namespace Facades
{
class PdfFileSignature;
} // namespace Facades
class Page;
namespace Tests
{
class RegressionTests_v20_09;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class representing annotation collection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AnnotationCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>
{
    typedef AnnotationCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_09;
    
private:

    class AnnotationHandler : public System::Object
    {
        typedef AnnotationHandler ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Aspose::Pdf::Annotations::Annotation> get_Annotation();
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_EngineObject() const;
        
        AnnotationHandler(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> EngineObj, System::SharedPtr<Page> Page);
        AnnotationHandler(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation, System::SharedPtr<Page> page);
        
        int32_t CompareTo(System::SharedPtr<AnnotationCollection::AnnotationHandler> value);
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> _engineObj;
        System::SharedPtr<Aspose::Pdf::Annotations::Annotation> _annotation;
        System::WeakPtr<Page> _page;
        
    };
    
    class AnnotationList : public System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Annotations::AnnotationCollection::AnnotationHandler>>
    {
        typedef AnnotationList ThisType;
        typedef System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Annotations::AnnotationCollection::AnnotationHandler>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t IndexOf(const System::SharedPtr<Annotation>& annotation) const;
        bool Remove(const System::SharedPtr<Annotation>& annotation);
        void SetTemplateWeakPtr(uint32_t argument) override;
        
    protected:
    
        virtual ~AnnotationList();
        
    };
    
    class AnnotationsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>
    {
        typedef AnnotationsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<Annotation>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<Annotation>& get_Current() const override;
        
        AnnotationsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AnnotationCollection::AnnotationHandler>>> annotations, System::SharedPtr<Page> page);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Annotation>>> _annots;
        int32_t _cursor;
        System::SharedPtr<Page> _page;
        
        bool MoveNextImplementation();
        System::SharedPtr<Annotation>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets a value indicating whether access to the Aspose.Pdf.Annotations.AnnotationCollection is synchronized (thread safe).
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets an object that can be used to synchronize access to Aspose.Pdf.Annotations.AnnotationCollection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets count of annotations in collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets a value indicating if collection is readonly.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Adds annotation to the collection. If page is rotated then annotation rectangle will be recalculated accordingly.
    /// </summary>
    /// <param name="annotation">Annotation which shall be added.</param>
    /// <param name="considerRotation">If true and if page is rotated then annotation position will be recaculated accroding to page rotation.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<Annotation> annotation, bool considerRotation);
    /// <summary>
    /// Adds annotation to the collection.
    /// </summary>
    /// <param name="annotation">Annotation which shall be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<Annotation>& annotation) override;
    /// <summary>
    /// Deletes annotation from the collection by index.
    /// </summary>
    /// <param name="index">Index of annotation which shall be deleted.</param>
    ASPOSE_PDF_SHARED_API void Delete(int32_t index);
    /// <summary>
    /// Deletes all annotations from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Delete();
    /// <summary>
    /// Copies array of annotations into collection.
    /// </summary>
    /// <param name="array">Array to copy into collection.</param>
    /// <param name="index">Starting index where colleciton wil lbe copied.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<Annotation>> array, int32_t index) override;
    /// <summary>
    /// Returns collection enumerator.
    /// </summary>
    /// <returns>Enumerator object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Annotation>>> GetEnumerator() override;
    /// <summary>
    /// Accepts visitor to process annotation.
    /// </summary>
    /// <param name="visitor">Annotation selector object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor);
    /// <summary>
    /// Deletes specified annotation from the collection. 
    /// </summary>
    /// <param name="annotation">Annotation which shall be deleted.</param>
    ASPOSE_PDF_SHARED_API void Delete(System::SharedPtr<Annotation> annotation);
    /// <summary>
    /// Deletes all annotations from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Checks if specified annotation belong to collection.
    /// </summary>
    /// <param name="annotation">Annotation to be searched.</param>
    /// <returns>True - if annotation found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<Annotation>& annotation) const override;
    /// <summary>
    /// Deletes specified annotation from the collection.
    /// </summary>
    /// <param name="annotation">Annotation which shall be deleted.</param>
    /// <returns>True - if annotation removed; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<Annotation>& annotation) override;
    
    /// <summary>
    /// The index of the element to get.
    /// </summary>
    /// <param name="index">The index value started from one.</param>
    /// <returns>Annotation object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotation> idx_get(int32_t index);
    
    /// <summary>
    /// Returns annotation by its name.
    /// </summary>
    /// <param name="name">Name of the annotation</param>
    /// <returns>Annotation object if found; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotation> FindByName(System::String name);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::IPage> page;
    
    void assert_();
    
    /// <summary>
    /// Constructor of AnnotationCollection. Creates annotation collection for annotations on the given page.
    /// </summary>
    /// <param name="page">Parent page of annotations.</param>
    AnnotationCollection(System::SharedPtr<Page> page);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AnnotationCollection, CODEPORTING_ARGS(System::SharedPtr<Page> page));
    System::SharedPtr<Annotation> GetUnrestricted(int32_t index);
    /// <summary>
    /// Checks annotation for errors before saving.
    /// </summary>
    void PreSave();
    
    virtual ASPOSE_PDF_SHARED_API ~AnnotationCollection();
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Page> _page;
    System::SharedPtr<AnnotationCollection::AnnotationList> cache;
    
    bool IsValidAnnotationDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict);
    /// <summary>
    /// Returns annotation by its index.
    /// </summary>
    /// <param name="index">Index of annotation. Annotation indexes start from 1.</param>
    /// <returns>Retreived annotation</returns>
    System::SharedPtr<Annotation> get(int32_t index);
    void PreSaveAnnotationActions(System::SharedPtr<Annotation> annotation);
    void PreSaveWidgetAnnotationActions(System::SharedPtr<WidgetAnnotation> widgetAnnotation);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


