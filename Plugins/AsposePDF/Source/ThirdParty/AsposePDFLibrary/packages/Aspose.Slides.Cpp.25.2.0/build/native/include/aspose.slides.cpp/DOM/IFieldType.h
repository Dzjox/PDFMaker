#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a type of field. 
/// This value determines which text will be set to the field portion when it will be updated.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFieldType : public virtual System::Object
{
    typedef IFieldType ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the internal name of this FieldTypeEx object.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_InternalString() = 0;
    /// <summary>
    /// Returns the internal name of this FieldTypeEx object.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_InternalString(System::String value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


