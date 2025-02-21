#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/weak_ptr.h>
#include <system/shared_ptr.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace LogicalStructure
{
class Element;
class StructTreeRootElement;
class StructureElement;
} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents an ordered collection of elements.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ElementList : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::LogicalStructure::Element>>
{
    typedef ElementList ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::LogicalStructure::Element>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::Element;
    friend class Aspose::Pdf::LogicalStructure::StructTreeRootElement;
    
public:

    /// <summary>
    ///     Gets the number of elements in the ElementList.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API int32_t get_Count() = 0;
    
    /// <summary>
    ///     Retrieves a element at the given index.
    /// </summary>
    /// <param name="index">The index into the list of elements.</param>
    /// <returns>The <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see> with the specified index in the collection. If <paramref name="index" ></paramref> is greater than or equal to the number of elements in the list, this returns null.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Element> Item(int32_t index) = 0;
    
    /// <summary>
    ///     Gets an element at the given index.
    /// </summary>
    /// <param name="index">The index into the list of elements.</param>
    /// <returns>The <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see> with the specified index in the collection. If index is greater than or equal to the number of elements in the list, this returns null.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Element> idx_get(int32_t index);
    
    /// <summary>
    ///     Gets an enumerator that iterates through the collection of elements.
    /// </summary>
    /// <returns>An enumerator used to iterate through the collection of elements.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Element>>> GetEnumerator() override = 0;
    
protected:

    /// <summary>
    /// Add element to list.
    /// </summary>
    /// <param name="element">The <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see>.</param>
    /// <param name="updatePdfDictionary">Should the pdf dictionary be updated.</param>
    virtual void AddElement(System::SharedPtr<Element> element, bool updatePdfDictionary = true) = 0;
    /// <summary>
    /// Insert element to list.
    /// </summary>
    /// <param name="element">The <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see>.</param>
    /// <param name="index">Index to insert to.</param>
    /// <param name="updatePdfDictionary">Should the pdf dictionary be updated.</param>
    virtual void InsertElement(System::SharedPtr<Element> element, int32_t index, bool updatePdfDictionary = true) = 0;
    /// <summary>
    /// Remove element from list.
    /// </summary>
    /// <param name="element">The <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see>.</param>
    /// <param name="updatePdfDictionary">Should the pdf dictionary be updated.</param>
    /// <returns>Index of removed element.</returns>
    virtual int32_t RemoveElement(System::SharedPtr<Element> element, bool updatePdfDictionary = true) = 0;
    /// <summary>
    /// Remove element from list.
    /// </summary>
    /// <param name="index">Index to remove.</param>
    /// <param name="updatePdfDictionary">Should the pdf dictionary be updated.</param>
    virtual void RemoveAt(int32_t index, bool updatePdfDictionary = true) = 0;
    
    ElementList();
    
    virtual ASPOSE_PDF_SHARED_API ~ElementList();
    
};

class ElementListImplementation : public Aspose::Pdf::LogicalStructure::ElementList
{
    typedef ElementListImplementation ThisType;
    typedef Aspose::Pdf::LogicalStructure::ElementList BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    int32_t get_Count() override;
    
    ElementListImplementation(System::SharedPtr<Element> owner);
    
    System::SharedPtr<Element> Item(int32_t index) override;
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Element>>> GetEnumerator() override;
    /// <summary>
    /// Add element to list.
    /// </summary>
    /// <param name="element">The <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see>.</param>
    /// <param name="updatePdfDictionary">Should the pdf dictionary be updated.</param>
    void AddElement(System::SharedPtr<Element> element, bool updatePdfDictionary = true) override;
    /// <summary>
    /// Insert element to list.
    /// </summary>
    /// <param name="element">The <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see>.</param>
    /// <param name="index">Index to insert to.</param>
    /// <param name="updatePdfDictionary">Should the pdf dictionary be updated.</param>
    void InsertElement(System::SharedPtr<Element> element, int32_t index, bool updatePdfDictionary = true) override;
    /// <summary>
    /// Remove element from list.
    /// </summary>
    /// <param name="element">The <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see>.</param>
    /// <param name="updatePdfDictionary">Should the pdf dictionary be updated.</param>
    int32_t RemoveElement(System::SharedPtr<Element> element, bool updatePdfDictionary = true) override;
    /// <summary>
    /// Remove element from list.
    /// </summary>
    /// <param name="index">Index to remove.</param>
    /// <param name="updatePdfDictionary">Should the pdf dictionary be updated.</param>
    void RemoveAt(int32_t index, bool updatePdfDictionary = true) override;
    
protected:

    virtual ~ElementListImplementation();
    
private:

    System::WeakPtr<Element> _owner;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Element>>> _elements;
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


