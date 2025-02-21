#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class IAppointment;
} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Collection of Named Destinations.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS INamedDestinationCollection : public virtual System::Object
{
    typedef INamedDestinationCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns count of the destinations.
    /// </summary>
    virtual int32_t get_Count() = 0;
    /// <summary>
    /// Gets array of names of the destinations.
    /// </summary>
    virtual System::ArrayPtr<System::String> get_Names() = 0;
    
    /// <summary>
    /// Gets destination by its name.
    /// </summary>
    /// <param name="name">Name value.</param>
    /// <returns>Destination object.</returns>
    virtual System::SharedPtr<Annotations::IAppointment> idx_get(System::String name) = 0;
    /// <summary>
    /// Sets destination by its name.
    /// </summary>
    /// <param name="name">Name value.</param>
    /// <param name="value">Destination object.</param>
    virtual void idx_set(System::String name, System::SharedPtr<Annotations::IAppointment> value) = 0;
    
    /// <summary>
    /// Removes destination by its name.
    /// </summary>
    /// <param name="name">Name value.</param>
    virtual void Remove(System::String name) = 0;
    /// <summary>
    /// Adds new named destination.
    /// </summary>
    /// <param name="name">Name value.</param>
    /// <param name="appointment">Appointment object.</param>
    virtual void Add(System::String name, System::SharedPtr<Annotations::IAppointment> appointment) = 0;
    
};

} // namespace Pdf
} // namespace Aspose


