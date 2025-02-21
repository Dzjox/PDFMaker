#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//[assembly: System.Security.SecurityRules(System.Security.SecurityRuleSet.Level1)]

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Defines the constants that participate in the license check for the component.
/// These used to be defined directly as assembly attributes, but I moved them into
/// separate class because in .NET Compact Framework I cannot access assembly attributes.
/// Now the licensing code when compiled for the .NET Compact Framework uses these constants
/// instead of the assembly attributes.
/// </summary>
class AssemblyConstants : public System::Object
{
    typedef AssemblyConstants ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static const System::String Title;
    /// <summary>
    /// This is used by Aspose licensing code to verify the license is for the correct product.
    /// </summary>
    static const System::String Product;
    /// @deprecated This is for original Aspose.Pdf tests
    static const System::String PRODUCT;
    static const System::String Family;
    static const System::String Platform;
    /// <summary>
    /// The version of the assembly.
    /// </summary>
    static const System::String Version;
    /// @deprecated This is for original Aspose.Pdf tests
    static const System::String VERSION;
    /// <summary>
    /// This is used by Aspose licensing code to check for subscription expiry.
    /// You need to set this to the date you publish a release or a hotfix.
    /// </summary>
    static const System::String ReleaseDate;
    /// <summary>
    /// The producer of the Pdf file.
    /// </summary>
    static const System::String Producer;
    
};

/// <summary>
/// This class provides information about current product build.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BuildVersionInfo final : public System::Object
{
    typedef BuildVersionInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Assembly Version
    /// </summary>
    static const ASPOSE_PDF_SHARED_API System::String AssemblyVersion;
    /// <summary>
    /// Product Name
    /// </summary>
    static const ASPOSE_PDF_SHARED_API System::String Product;
    /// <summary>
    /// Product Name
    /// </summary>
    static const ASPOSE_PDF_SHARED_API System::String Producer;
    /// <summary>
    /// File Version
    /// </summary>
    static const ASPOSE_PDF_SHARED_API System::String FileVersion;
    /// <summary>
    /// Product Name
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::String InternalProducer;
    
};

} // namespace Pdf
} // namespace Aspose


