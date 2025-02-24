#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

namespace Web {

/// <summary>
/// Represents an output file.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IOutputFile : public virtual System::Object
{
    typedef IOutputFile ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Writes the file content to the stream.
    /// </summary>
    /// <param name="stream">Destination stream.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Write(System::SharedPtr<System::IO::Stream> stream) = 0;
    
};

} // namespace Web
} // namespace Export
} // namespace Slides
} // namespace Aspose


