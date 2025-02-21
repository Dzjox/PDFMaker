#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/weak_ptr.h>
#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
class PdfAction;
} // namespace Annotations
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

namespace Annotations {

/// <summary>
/// Class describes list of actions. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfActionCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>>
{
    typedef PdfActionCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    
private:

    class PdfActionsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>>
    {
        typedef PdfActionsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<PdfAction>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<PdfAction>& get_Current() const override;
        
        PdfActionsEnumerator(System::SharedPtr<PdfActionCollection> actions);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<PdfActionCollection> actions;
        int32_t cursor;
        
        bool MoveNextImplementation();
        System::SharedPtr<PdfAction>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets count of actions.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count();
    
    /// <summary>
    /// Gets action by its index.
    /// </summary>
    /// <param name="index">Action index value.</param>
    /// <returns>Action index if found; otherwise, throws <exception cref="IndexOutOfRangeException">IndexOutOfRangeException</exception> </returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> idx_get(int32_t index);
    
    /// <summary>
    /// Remove action by index.
    /// </summary>
    /// <param name="index">Index of action to remove.</param>
    ASPOSE_PDF_SHARED_API void Delete(int32_t index);
    /// <summary>
    /// Add action to action list.
    /// </summary>
    /// <param name="action">Action to be added.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<PdfAction> action);
    /// <summary>
    /// Gets enumerator.
    /// </summary>
    /// <returns>PDfAction enumerator.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<PdfAction>>> GetEnumerator() override;
    
protected:

    PdfActionCollection(System::SharedPtr<Annotation> annotation);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PdfActionCollection, CODEPORTING_ARGS(System::SharedPtr<Annotation> annotation));
    
    virtual ASPOSE_PDF_SHARED_API ~PdfActionCollection();
    
private:

    System::WeakPtr<Annotation> _annotation;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfAction>>> _cache;
    
    void ValidateCache();
    void SaveCache();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


