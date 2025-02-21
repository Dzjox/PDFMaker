#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// PDF/A standard requires, that all fonts must be embedded into document.
/// This class includes flags for cases when it's not possible to embed some font cause this font is absent 
/// on destination PC.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FontEmbeddingOptions : public System::Object
{
    typedef FontEmbeddingOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Indicates whether to substitute non-embedded font using default font substitution strategy.
    /// Default value: <see langword="false"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseDefaultSubstitution() const;
    /// <summary>
    /// Indicates whether to substitute non-embedded font using default font substitution strategy.
    /// Default value: <see langword="false"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseDefaultSubstitution(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="FontEmbeddingOptions"></see> class.
    /// </summary>
    /// <remarks>
    /// This constructor sets the default value for the <see cref="UseDefaultSubstitution"></see> property to <see langword="false"></see>.
    /// </remarks>
    ASPOSE_PDF_SHARED_API FontEmbeddingOptions();
    
private:

    bool pr_UseDefaultSubstitution;
    
};

} // namespace Pdf
} // namespace Aspose


