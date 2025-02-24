#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
class TypeInfo;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

namespace Web {

/// <summary>
/// Represents a template engine that transforms template and data pair into resulting output (usually HTML).
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITemplateEngine : public virtual System::Object
{
    typedef ITemplateEngine ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Adds the template to the template collection.
    /// </summary>
    /// <param name="key">Key for the template in the template collection.</param>
    /// <param name="template">Template content.</param>
    /// <param name="modelType">Type of a model object for the template.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddTemplate(System::String key, System::String template_, const System::TypeInfo& modelType) = 0;
    /// <summary>
    /// Transforms the template with the given key and model object to output.
    /// </summary>
    /// <param name="key">Key for the template in the template collection.</param>
    /// <param name="model">Model object with data for transformation.</param>
    /// <returns>Resulting output as a <see cref="System::String"></see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String Compile(System::String key, System::SharedPtr<System::Object> model) = 0;
    
};

} // namespace Web
} // namespace Export
} // namespace Slides
} // namespace Aspose


