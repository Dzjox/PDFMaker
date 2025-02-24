#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
namespace Web
{
class IOutputFile;
} // namespace Web
} // namespace Export
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

namespace Web {

/// <summary>
/// Represents an output saving service. 
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IOutputSaver : public virtual System::Object
{
    typedef IOutputSaver ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Saves the output file to the given path.
    /// </summary>
    /// <param name="path">Path to save the file to.</param>
    /// <param name="outputFile">Output file.</param>
    /// <example>Saving into the <see cref="System::IO::FileStream"></see> implementation example:
    /// <code>
    /// void Save(System::String path, System::SharedPtr<IOutputFile> outputFile)
    /// {
    ///     auto stream = System::MakeObject<FileStream>(path, FileMode::Create);
    ///     outputFile->Write(stream);
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Save(System::String path, System::SharedPtr<IOutputFile> outputFile) = 0;
    
};

} // namespace Web
} // namespace Export
} // namespace Slides
} // namespace Aspose


