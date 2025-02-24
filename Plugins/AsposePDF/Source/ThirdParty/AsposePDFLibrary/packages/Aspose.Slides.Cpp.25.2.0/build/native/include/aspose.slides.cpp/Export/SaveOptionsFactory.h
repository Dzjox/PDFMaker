#pragma once
//Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <Export/ISaveOptionsFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IPptxOptions;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Allows to create save options' instances
/// </summary>
/// <remarks>
/// For COM compatibility.
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS SaveOptionsFactory : public Aspose::Slides::Export::ISaveOptionsFactory
{
    typedef SaveOptionsFactory ThisType;
    typedef Aspose::Slides::Export::ISaveOptionsFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates PPTX save options.
    /// </summary>
    /// <returns>Save options.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPptxOptions> CreatePptxOptions() override;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


