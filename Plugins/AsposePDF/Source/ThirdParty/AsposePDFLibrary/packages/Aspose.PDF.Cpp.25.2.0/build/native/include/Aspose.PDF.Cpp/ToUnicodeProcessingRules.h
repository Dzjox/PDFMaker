#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class describes rules which can be used to solve Adobe Preflight error 
/// "Text cannot be mapped to Unicode".
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ToUnicodeProcessingRules : public System::Object
{
    typedef ToUnicodeProcessingRules ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Some fonts have ToUnicode character code maps with spaces in names. These spaces could call errors
    /// with unicode text mapping. This flag commands to remove spaces from names of ToUnicode character code maps.
    /// By default false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_RemoveSpacesFromCMapNames() const;
    /// <summary>
    /// Some fonts have ToUnicode character code maps with spaces in names. These spaces could call errors
    /// with unicode text mapping. This flag commands to remove spaces from names of ToUnicode character code maps.
    /// By default false.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RemoveSpacesFromCMapNames(bool value);
    /// <summary>
    /// Some fonts doesn't provide information about unicodes for some text symbols. 
    /// This lack of information calls an error "Text cannot be mapped to Unicode".
    /// Use this flag to map non-linked symbols on unicode "space"(code 32).
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_MapNonLinkedSymbolsOnSpace() const;
    /// <summary>
    /// Some fonts doesn't provide information about unicodes for some text symbols. 
    /// This lack of information calls an error "Text cannot be mapped to Unicode".
    /// Use this flag to map non-linked symbols on unicode "space"(code 32).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MapNonLinkedSymbolsOnSpace(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="ToUnicodeProcessingRules"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API ToUnicodeProcessingRules();
    /// <summary>
    /// Initializes a new instance of the <see cref="ToUnicodeProcessingRules"></see> class with the specified option
    /// to remove spaces from CMap names.
    /// </summary>
    /// <param name="removeSpaces">A boolean value indicating whether to remove spaces from CMap names.</param>
    ASPOSE_PDF_SHARED_API ToUnicodeProcessingRules(bool removeSpaces);
    /// <summary>
    /// Initializes a new instance of the <see cref="ToUnicodeProcessingRules"></see> class with specified options.
    /// </summary>
    /// <param name="removeSpaces">Indicates whether spaces should be removed from CMap names.</param>
    /// <param name="mapNonLinkedUnicodesOnSpace">Indicates whether non-linked Unicode symbols should be mapped to spaces.</param>
    ASPOSE_PDF_SHARED_API ToUnicodeProcessingRules(bool removeSpaces, bool mapNonLinkedUnicodesOnSpace);
    
private:

    bool pr_RemoveSpacesFromCMapNames;
    bool pr_MapNonLinkedSymbolsOnSpace;
    
};

} // namespace Pdf
} // namespace Aspose


