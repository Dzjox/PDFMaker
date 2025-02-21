#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

namespace Aspose
{
namespace Pdf
{
namespace LicenseManagement
{
class VentureLicense;
} // namespace LicenseManagement
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace LicenseManagement {

class IVentureLicenseTarget : public virtual System::Object
{
    typedef IVentureLicenseTarget ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual void SetVentureLicense(System::SharedPtr<VentureLicense> license) = 0;
    virtual System::SharedPtr<VentureLicense> GetVentureLicense() = 0;
    
};

} // namespace LicenseManagement
} // namespace Pdf
} // namespace Aspose


