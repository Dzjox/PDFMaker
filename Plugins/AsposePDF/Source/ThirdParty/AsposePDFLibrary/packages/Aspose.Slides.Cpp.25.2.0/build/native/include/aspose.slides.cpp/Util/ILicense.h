#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Provides methods to license the component.
/// </summary>
/// <example>
/// In this example, an attempt will be made to find a license file named MyLicense.lic
/// in the folder that contains the component, in the folder that contains the calling assembly,
/// in the folder of the entry assembly and then in the embedded resources of the calling assembly.
/// <code>
/// auto license = MakeObject&lt;License&gt;();
/// license->SetLicense(u"MyLicense.lic");
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS ILicense : public virtual System::Object
{
    typedef ILicense ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <param name="licenseName">Can be a full or short file name or name of an embedded resource.
    /// Use an empty string to switch to evaluation mode.</param>
    /// <remarks>
    /// <p>Tries to find the license in the following locations:</p>
    /// <p>1. Explicit path.</p>
    /// <p>2. The folder of the component assembly.</p>
    /// <p>3. The folder of the client's calling assembly.</p>
    /// <p>4. The folder of the entry assembly.</p>
    /// <p>5. An embedded resource in the client's calling assembly.</p>
    /// 
    /// <p><b>Note:</b>On the .NET Compact Framework, tries to find the license only in these locations:</p>
    /// <p>1. Explicit path.</p>
    /// <p>2. An embedded resource in the client's calling assembly.</p>
    /// </remarks>
    /// <example>
    /// In this example, an attempt will be made to find a license file named MyLicense.lic
    /// in the folder that contains the component, in the folder that contains the calling assembly,
    /// in the folder of the entry assembly and then in the embedded resources of the calling assembly.
    /// <code>
    /// auto license = MakeObject&lt;License&gt;();
    /// license->SetLicense(u"MyLicense.lic");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetLicense(System::String licenseName) = 0;
    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <param name="stream">A stream that contains the license.</param>
    /// <remarks>
    /// <p>Use this method to load a license from a stream.</p>
    /// </remarks>
    /// <example>
    /// <code>
    /// auto license = MakeObject&lt;License&gt;();
    /// license->SetLicense(myStream);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetLicense(System::SharedPtr<System::IO::Stream> stream) = 0;
    /// <summary>
    /// Reset the license
    /// </summary>
    /// <remarks>Use this method to reset license in component</remarks>
    /// <example>
    /// <code>
    /// auto license = MakeObject&lt;License&gt;();
    /// license->ResetLicense();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ResetLicense() = 0;
    /// <summary>
    /// Check if licence is applied to component
    /// </summary>
    /// <returns><c>True</c> if component is licensed, otherwise <c>false</c></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool IsLicensed() = 0;
    
};

} // namespace Slides
} // namespace Aspose


