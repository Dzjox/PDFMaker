#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Vba
{
class IVbaProject;
} // namespace Vba
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Vba {

/// <summary>
/// Allows to create VBA project via COM interface
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IVbaProjectFactory : public virtual System::Object
{
    typedef IVbaProjectFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates new VBA project.
    /// </summary>
    /// <returns>New VBA project</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVbaProject> CreateVbaProject() = 0;
    /// <summary>
    /// Reads VBA project from OLE container.
    /// </summary>
    /// <param name="data">Ole data <see cref="uint8_t"></see>[]</param>
    /// <returns>Read VBA project</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVbaProject> ReadVbaProject(System::ArrayPtr<uint8_t> data) = 0;
    
};

} // namespace Vba
} // namespace Slides
} // namespace Aspose


