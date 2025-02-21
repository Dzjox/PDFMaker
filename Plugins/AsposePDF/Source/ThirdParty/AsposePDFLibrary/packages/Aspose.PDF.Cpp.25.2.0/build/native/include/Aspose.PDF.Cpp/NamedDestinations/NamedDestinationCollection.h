#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/NamedDestinations/INamedDestinationCollection.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class IAppointment;
} // namespace Annotations
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
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents the collection of all destinations (a name tree mapping name strings to destinations (see 12.3.2.3, "Named Destinations") and (see 7.7.4, "Name Dictionary")) in the pdf document. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS NamedDestinationCollection : public Aspose::Pdf::INamedDestinationCollection
{
    typedef NamedDestinationCollection ThisType;
    typedef Aspose::Pdf::INamedDestinationCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Count of named destinations.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// List of names of the destinations.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::String> get_Names() override;
    
    /// <summary>
    /// Gets appointment by its name. 
    /// </summary>
    /// <param name="name">Name of the appointment.</param>
    /// <returns>Appoitnemt</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotations::IAppointment> idx_get(System::String name) override;
    /// <summary>
    /// Sets appointment by its name. 
    /// </summary>
    /// <param name="name">Name of the appointment.</param>
    /// <param name="value">Appoitnemt</param>
    ASPOSE_PDF_SHARED_API void idx_set(System::String name, System::SharedPtr<Annotations::IAppointment> value) override;
    
    /// <summary>
    /// Delete named destination.
    /// </summary>
    /// <param name="name">Name of the destination to delete.</param>
    ASPOSE_PDF_SHARED_API void Remove(System::String name) override;
    /// <summary>
    /// Add new named destination.
    /// </summary>
    /// <param name="name">Destination name.</param>
    /// <param name="appointment">Appointment to add.</param>
    ASPOSE_PDF_SHARED_API void Add(System::String name, System::SharedPtr<Annotations::IAppointment> appointment) override;
    
protected:

    NamedDestinationCollection(System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NamedDestinationCollection, CODEPORTING_ARGS(System::SharedPtr<Document> document));
    
private:

    System::WeakPtr<Document> document;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::SharedPtr<CommonData::Tree::NamesTree> _namesTree;
    System::SharedPtr<INamedDestinationCollection> destinations;
    
};

} // namespace Pdf
} // namespace Aspose


