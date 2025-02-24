#pragma once
//Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.
// RK: When EMBEDDED is defined, the licensing code is not included in the component.
// This results in a built that can be embedded in another Aspose component.
// When a component is embedded in another Aspose component, they must be 
// obfuscated into a single assembly so the embedded component is not publicly accessible.
//27/10/2004 by Roman Korchagin
//This file contains all client side licensing for the new Aspose licensing system released in 2004.
//Just include this file in your component and follow instructions and examples how to use it.
//NOTE The code in this file was manually tuned so some crucial functions fail 
//to decompile in Reflector as of 5/11/05. 
//You can either just delete all this and type your namespace, or better yet make sure
//you product is mentioned here and add a conditional compilation constant to your project 
//properties (both to Debug and Release configurations) and it will compile for your namespace.

#include <Util/ILicense.h>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS License : public Aspose::Slides::ILicense
{
    typedef License ThisType;
    typedef Aspose::Slides::ILicense BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Initializes a new instance of this class.
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
    ASPOSE_SLIDES_SHARED_API License();
    
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
    ASPOSE_SLIDES_SHARED_API void SetLicense(System::String licenseName) override;
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
    ASPOSE_SLIDES_SHARED_API void SetLicense(System::SharedPtr<System::IO::Stream> stream) override;
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
    ASPOSE_SLIDES_SHARED_API void ResetLicense() override;
    /// <summary>
    /// Check if licence is applied to component
    /// </summary>
    /// <returns><c>True</c> if component is licensed, otherwise <c>false</c></returns>
    ASPOSE_SLIDES_SHARED_API bool IsLicensed() override;
    
};

} // namespace Slides
} // namespace Aspose


