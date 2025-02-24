#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Vba/IVbaReference.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Vba {

/// <summary>
/// Represents OLE Automation type library reference.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IVbaReferenceOleTypeLib : public Aspose::Slides::Vba::IVbaReference
{
    typedef IVbaReferenceOleTypeLib ThisType;
    typedef Aspose::Slides::Vba::IVbaReference BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents the identifier of an Automation type library.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Libid() = 0;
    /// <summary>
    /// Represents the identifier of an Automation type library.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Libid(System::String value) = 0;
    
};

} // namespace Vba
} // namespace Slides
} // namespace Aspose


