#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

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
class ASPOSE_SLIDES_API_SHARED_CLASS IVbaReferenceFactory : public virtual System::Object
{
    typedef IVbaReferenceFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates new OLE Automation type library reference.
    /// </summary>
    /// <param name="name">Name of the VBA project reference <see cref="System::String"></see></param>
    /// <param name="libid">Identifier of an Automation type library <see cref="System::String"></see></param>
    /// <returns>New OLE Automation type library reference <see cref="Aspose::Slides::Vba::IVbaReferenceOleTypeLib">IVbaReferenceOleTypeLib</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVbaReferenceOleTypeLib> CreateOleTypeLibReference(System::String name, System::String libid) = 0;
    
};

} // namespace Vba
} // namespace Slides
} // namespace Aspose


