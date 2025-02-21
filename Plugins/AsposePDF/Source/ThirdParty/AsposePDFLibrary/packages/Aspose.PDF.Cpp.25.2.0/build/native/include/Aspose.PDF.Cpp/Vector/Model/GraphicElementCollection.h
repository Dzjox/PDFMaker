#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/eventhandler.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Page;
namespace Vector
{
class GraphicAppender;
class GraphicElement;
class XFormPlacement;
} // namespace Vector
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

namespace Vector {

/// <summary>
/// Represents <see cref="GraphicElement"></see> collection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GraphicElementCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Vector::GraphicElement>>
{
    typedef GraphicElementCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Vector::GraphicElement>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Vector::XFormPlacement;
    friend class Aspose::Pdf::Vector::GraphicAppender;
    
private:

    class GraphicElementEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Vector::GraphicElement>>
    {
        typedef GraphicElementEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Vector::GraphicElement>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<GraphicElement>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        /// <summary>
        /// Gets the element in the collection at the current position of the enumerator.
        /// </summary>
        /// <returns>The element in the collection at the current position of the enumerator.</returns>
        const System::SharedPtr<GraphicElement>& get_Current() const override;
        
        /// <summary>
        /// Initialize a new instance of the <see cref="GraphicElementCollection"></see>.
        /// </summary>
        /// <param name="elements">Collection of <see cref="GraphicElement"></see>.</param>
        GraphicElementEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<GraphicElement>>> elements);
        
        /// <summary>
        /// Advances the enumerator to the next element of the collection.
        /// </summary>
        /// <returns>true if the enumerator was successfully advanced to the next element; false if the enumerator has passed the end of the collection.</returns>
        bool MoveNext() override;
        /// <summary>
        /// Sets the enumerator to its initial position, which is before the first element in the collection.
        /// </summary>
        void Reset() override;
        /// <summary>
        /// Performs application-defined tasks associated with freeing, releasing, or resetting unmanaged resources.
        /// </summary>
        void Dispose() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<GraphicElement>>> cursor;
        static uint64_t enumeratorKey;
        int32_t viewed;
        
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
        bool MoveNextImplementation();
        System::SharedPtr<GraphicElement>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of <see cref="GraphicElement"></see> object elements actually contained in the collection. 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    
    /// <summary>
    /// Initializes the new collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API GraphicElementCollection();
    
    /// <summary>
    /// Returns an enumerator for the entire collection.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<GraphicElement>>> GetEnumerator() override;
    /// <summary>
    /// Adds a new <see cref="GraphicElement"></see> to the collection.
    /// All items in the collection must have the same <see cref="GraphicElement::Parent"></see>.
    /// </summary>
    /// <param name="item">IGraphicElement.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<GraphicElement>& item) override;
    /// <summary>
    /// Clears the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether an element is in the collection.
    /// </summary>
    /// <param name="item"><see cref="GraphicElement"></see> to search.</param>
    /// <returns>True - if element found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<GraphicElement>& item) const override;
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array.
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="arrayIndex">Starting index from which copying will be started.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<GraphicElement>> array, int32_t arrayIndex) override;
    /// <summary>
    /// Deletes the <see cref="GraphicElement"></see> element.
    /// </summary>
    /// <param name="item"><see cref="GraphicElement"></see> object that will be deleted.</param>
    /// <returns>True - if element found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<GraphicElement>& item) override;
    
    /// <summary>
    /// Gets the <see cref="GraphicElement"></see> element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns><see cref="GraphicElement"></see>.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<GraphicElement> idx_get(int32_t index);
    
    /// <summary>
    /// Gets a string representation of this collection. 
    /// </summary>
    /// <returns>The string.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Gets the common parent element for all items in this collection.
    /// </summary>
    System::SharedPtr<XFormPlacement> get_Parent() const;
    
    System::EventHandler<> CollectionChanged;
    
    /// <summary>
    /// Initializes the new collection.
    /// </summary>
    /// <param name="elements">List with elements</param>
    GraphicElementCollection(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<GraphicElement>>> elements);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GraphicElementCollection, CODEPORTING_ARGS(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<GraphicElement>>> elements));
    /// <summary>
    /// Returns the inner collection for unrestricted enumeration. 
    /// </summary>
    /// <returns>Inner list</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<GraphicElement>>> ToList();
    
    virtual ASPOSE_PDF_SHARED_API ~GraphicElementCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<GraphicElement>>> _graphicElements;
    static uint64_t key;
    System::WeakPtr<XFormPlacement> _parent;
    bool parentWasSet;
    
    /// <summary>
    /// Gets a value indicating whether collection is read only. Always returns false.
    /// </summary>
    bool get_IsReadOnly() const override;
    
    System::String ToString_NonConst();
    void OnCollectionChanged();
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Vector
} // namespace Pdf
} // namespace Aspose


