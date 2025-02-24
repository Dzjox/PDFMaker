#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents embedded data info for OLE object.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IOleEmbeddedDataInfo : public virtual System::Object
{
    typedef IOleEmbeddedDataInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the file data of embedded OLE object
    /// Read only <see cref="uint8_t"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<uint8_t> get_EmbeddedFileData() = 0;
    /// <summary>
    /// Returns the file extension for the current embedded OLE object
    /// Read only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_EmbeddedFileExtension() = 0;
    
};

} // namespace Slides
} // namespace Aspose


