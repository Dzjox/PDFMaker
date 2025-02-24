#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

namespace Xaml {

/// <summary>
/// Represents an output saver implementation for transfer data to the external storage.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IXamlOutputSaver : public virtual System::Object
{
    typedef IXamlOutputSaver ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Saves a bytes array to a destination location.
    /// </summary>
    /// <param name="path">The destination path.</param>
    /// <param name="data">A binary data for saving to a destination location.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::String path, System::ArrayPtr<uint8_t> data) = 0;
    
};

} // namespace Xaml
} // namespace Export
} // namespace Slides
} // namespace Aspose


