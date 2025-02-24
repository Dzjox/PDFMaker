#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Vba/IVbaReferenceFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Vba
{
class IVbaReferenceOleTypeLib;
} // namespace Vba
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Vba {

/// <summary>
/// Allows to create VBA project references via COM interface
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS VbaReferenceFactory : public Aspose::Slides::Vba::IVbaReferenceFactory
{
    typedef VbaReferenceFactory ThisType;
    typedef Aspose::Slides::Vba::IVbaReferenceFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// VBA project references factory static instance.
    /// Read-only <see cref="Aspose::Slides::Vba::VbaReferenceFactory">VbaReferenceFactory</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<VbaReferenceFactory> get_Instance();
    
    /// <summary>
    /// Creates new OLE Automation type library reference.
    /// </summary>
    /// <returns>New OLE Automation type library reference</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVbaReferenceOleTypeLib> CreateOleTypeLibReference(System::String name, System::String libid) override;
    
private:

    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<VbaReferenceFactory> s_factory;
    
};

} // namespace Vba
} // namespace Slides
} // namespace Aspose


