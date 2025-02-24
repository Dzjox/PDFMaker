#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/Vba/IVbaProjectFactory.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS VbaProjectFactory : public Aspose::Slides::Vba::IVbaProjectFactory
{
    typedef VbaProjectFactory ThisType;
    typedef Aspose::Slides::Vba::IVbaProjectFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// VBA project factory static instance.
    /// Read-only <see cref="Aspose::Slides::Vba::VbaProjectFactory">VbaProjectFactory</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<VbaProjectFactory> get_Instance();
    
    /// <summary>
    /// Creates new VBA project.
    /// </summary>
    /// <returns>New VBA project</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVbaProject> CreateVbaProject() override;
    /// <summary>
    /// Reads VBA project from OLE container.
    /// </summary>
    /// <returns>Read VBA project</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVbaProject> ReadVbaProject(System::ArrayPtr<uint8_t> data) override;
    
private:

    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<VbaProjectFactory> s_factory;
    
};

} // namespace Vba
} // namespace Slides
} // namespace Aspose


