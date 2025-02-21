#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PDF3DCrossSection;
class PDF3DView;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfArray;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Tests
{
namespace PDF3D
{
class PDF3DReporter;
} // namespace PDF3D
} // namespace Tests
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
/// Class PDF3DCrossSectionArray.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PDF3DCrossSectionArray : public System::Object
{
    typedef PDF3DCrossSectionArray ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PDF3DView;
    friend class Aspose::Pdf::Tests::PDF3D::PDF3DReporter;
    
public:

    /// <summary>
    /// Gets the cross section count.
    /// </summary>
    /// <value>The cross section count.</value>
    ASPOSE_PDF_SHARED_API int32_t get_Count();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DCrossSectionArray"></see> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    ASPOSE_PDF_SHARED_API PDF3DCrossSectionArray(System::SharedPtr<Document> doc);
    
    /// <summary>
    /// Adds the specified cross section to views array .
    /// </summary>
    /// <param name="crossSection">The cross section.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<PDF3DCrossSection> crossSection);
    /// <summary>
    /// Removes cross section from array at specified index.
    /// </summary>
    /// <param name="index">The index of removed cross section in array.</param>
    /// <exception cref="IndexOutOfRangeException">Invalid index: index should be in the range [1..n] where n equals to the cross sections count.</exception>
    ASPOSE_PDF_SHARED_API void RemoveAt(int32_t index);
    /// <summary>
    /// Removes all cross section from array.
    /// </summary>
    ASPOSE_PDF_SHARED_API void RemoveAll();
    
    /// <summary>
    /// Gets the <see cref="PDF3DCrossSection"></see> at the specified index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>Cross section.</returns>
    /// <exception cref="IndexOutOfRangeException">
    /// Invalid index: index should be in the range [1..n] where n equals to the cross sections count.
    /// </exception>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DCrossSection> idx_get(int32_t index);
    /// <summary>
    /// Sets the <see cref="PDF3DCrossSection"></see> at the specified index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <param name="value">Cross section.</param>
    /// <exception cref="IndexOutOfRangeException">
    /// Invalid index: index should be in the range [1..n] where n equals to the cross sections count.
    /// </exception>
    ASPOSE_PDF_SHARED_API void idx_set(int32_t index, System::SharedPtr<PDF3DCrossSection> value);
    
protected:

    System::WeakPtr<PDF3DView> Pdf3DView;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_CrossSectionPdfArray() const;
    void set_CrossSectionPdfArray(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PDF3DCrossSection>>> get_CrossSectionListArray() const;
    
    PDF3DCrossSectionArray(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DView> view, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> crossSectionPdfArray);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PDF3DCrossSectionArray, CODEPORTING_ARGS(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DView> view, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> crossSectionPdfArray));
    
    PDF3DCrossSectionArray(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DView> view);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PDF3DCrossSectionArray, CODEPORTING_ARGS(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DView> view));
    void AddToList(System::SharedPtr<PDF3DCrossSection> crossSection, int32_t objectID);
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _crossSectionPdfArray;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PDF3DCrossSection>>> _crossSectionListArray;
    System::WeakPtr<Document> _doc;
    
    void UpdateAt(int32_t index, System::SharedPtr<PDF3DCrossSection> crossSection);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


