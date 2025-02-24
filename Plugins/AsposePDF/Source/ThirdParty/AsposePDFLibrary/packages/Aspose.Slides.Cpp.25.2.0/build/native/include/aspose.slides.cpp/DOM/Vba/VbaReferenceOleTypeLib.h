#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Vba/IVbaReferenceOleTypeLib.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Vba {

/// <summary>
/// Represents OLE Automation type library reference.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS VbaReferenceOleTypeLib : public Aspose::Slides::Vba::IVbaReferenceOleTypeLib
{
    typedef VbaReferenceOleTypeLib ThisType;
    typedef Aspose::Slides::Vba::IVbaReferenceOleTypeLib BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Represents the name of the VBA project reference.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Represents the name of the VBA project reference.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::String value) override;
    /// <summary>
    /// Represents the identifier of an Automation type library.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Libid() override;
    /// <summary>
    /// Represents the identifier of an Automation type library.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Libid(System::String value) override;
    
    /// <summary>
    /// This constructor creates new OLE Automation type library reference.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API VbaReferenceOleTypeLib(System::String name, System::String libid);
    
private:

    System::String m_name;
    System::String m_libid;
    
};

} // namespace Vba
} // namespace Slides
} // namespace Aspose


