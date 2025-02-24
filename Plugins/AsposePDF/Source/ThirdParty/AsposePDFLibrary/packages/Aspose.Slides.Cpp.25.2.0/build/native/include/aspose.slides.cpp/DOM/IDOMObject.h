#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

class ASPOSE_SLIDES_SHARED_CLASS IDOMObject : public virtual System::Object
{
    typedef IDOMObject ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns Parent_Immediate object.
    /// Read-only <see cref="Aspose::Slides::IDOMObject">IDOMObject</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IDOMObject> get_Parent_Immediate() = 0;
    
};

} // namespace Slides
} // namespace Aspose


