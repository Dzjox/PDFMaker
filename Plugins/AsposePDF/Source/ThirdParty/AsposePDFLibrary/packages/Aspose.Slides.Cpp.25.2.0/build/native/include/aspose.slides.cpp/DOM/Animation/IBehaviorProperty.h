#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

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

namespace Animation {

/// <summary>
/// Represent property types for animation behavior.
/// Follows the list of properties from https://msdn.microsoft.com/en-us/library/dd949052(v=office.15).aspx
/// and https://msdn.microsoft.com/en-us/library/documentformat.openxml.presentation.attributename(v=office.15).aspx
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBehaviorProperty : public virtual System::Object
{
    typedef IBehaviorProperty ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Value of the property
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Value() = 0;
    /// <summary>
    /// Shows if this property does not belong to the predefined properties list in the specification:
    /// https://msdn.microsoft.com/en-us/library/dd949052(v=office.15).aspx
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsCustom() = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


