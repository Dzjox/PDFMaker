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
class PdfAction;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
} // namespace Engine
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
/// Collection of actions
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ActionCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>>
{
    typedef ActionCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PdfAction;
    
private:

    class ActionsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>>
    {
        typedef ActionsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<PdfAction>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<PdfAction>& get_Current() const override;
        
        ActionsEnumerator(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> actions);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> actions;
        int32_t cursor;
        
        bool MoveNextImplementation();
        System::SharedPtr<PdfAction>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Count of actions on the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Returns true if object is synchronized.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets synchronization object.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Returns true if collection is readonly.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Adds new action into colleciton.
    /// </summary>
    /// <param name="action">Action which should be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<PdfAction>& action) override;
    /// <summary>
    /// Removes action from collection by index.
    /// </summary>
    /// <param name="index">Index of action to remove.</param>
    ASPOSE_PDF_SHARED_API void Delete(int32_t index);
    /// <summary>
    /// Delete all actions.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Delete();
    /// <summary>
    /// Copies actions array into collection.
    /// </summary>
    /// <param name="array">Array of actions which must be copied into collection.</param>
    /// <param name="index">Index starting from which array will be copied.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<PdfAction>> array, int32_t index) override;
    /// <summary>
    /// Returns enumerator for collection.
    /// </summary>
    /// <returns>Collection enumerator.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<PdfAction>>> GetEnumerator() override;
    /// <summary>
    /// Clear collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Returns true if give item presents in the collection.
    /// </summary>
    /// <param name="item">Item to find.</param>
    /// <returns>Not implemented.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<PdfAction>& item) const override;
    /// <summary>
    /// Removes item from collection.
    /// </summary>
    /// <param name="item">Item to delete.</param>
    /// <returns>Not implemented.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<PdfAction>& item) override;
    
    /// <summary>
    /// Gets action by its index.
    /// </summary>
    /// <param name="index">Index of action.</param>
    /// <returns>Retreived action.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> idx_get(int32_t index);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> _actions;
    System::WeakPtr<PdfAction> _owner;
    
    ActionCollection(System::SharedPtr<PdfAction> owner);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ActionCollection, CODEPORTING_ARGS(System::SharedPtr<PdfAction> owner));
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> createActions(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    
    virtual ASPOSE_PDF_SHARED_API ~ActionCollection();
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfAction>>> created;
    
    System::SharedPtr<PdfAction> get(int32_t index);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


