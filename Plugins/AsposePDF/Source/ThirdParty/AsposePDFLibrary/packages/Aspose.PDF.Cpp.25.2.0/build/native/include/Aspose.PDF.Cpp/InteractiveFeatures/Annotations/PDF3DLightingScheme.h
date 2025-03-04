﻿#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enum LightingSchemeType: set of lighting scheme types.
/// </summary>
enum class LightingSchemeType
{
    /// <summary>
    /// The "Artwork" lighting scheme.
    /// </summary>
    Artwork,
    /// <summary>
    /// The "None" lighting scheme.
    /// </summary>
    None,
    /// <summary>
    /// The "White" lighting scheme.
    /// </summary>
    White,
    /// <summary>
    /// The "Day" lighting scheme.
    /// </summary>
    Day,
    /// <summary>
    /// The "Night" lighting scheme.
    /// </summary>
    Night,
    /// <summary>
    /// The "Hard" lighting scheme.
    /// </summary>
    Hard,
    /// <summary>
    /// The "Primary" lighting scheme.
    /// </summary>
    Primary,
    /// <summary>
    /// The "Blue" lighting scheme.
    /// </summary>
    Blue,
    /// <summary>
    /// The "Red" lighting scheme.
    /// </summary>
    Red,
    /// <summary>
    /// The "Cube" lighting scheme.
    /// </summary>
    Cube,
    /// <summary>
    /// The "Cad" lighting scheme.
    /// </summary>
    CAD,
    /// <summary>
    /// The "Headlamp" lighting scheme.
    /// </summary>
    Headlamp
};

/// <summary>
/// Class PDF3DLightingScheme.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PDF3DLightingScheme : public System::Object
{
    typedef PDF3DLightingScheme ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The "Artwork" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> Artwork;
    /// <summary>
    /// The "None" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> None;
    /// <summary>
    /// The "White" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> White;
    /// <summary>
    /// The "Day" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> Day;
    /// <summary>
    /// The "Night" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> Night;
    /// <summary>
    /// The "Hard" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> Hard;
    /// <summary>
    /// The "Primary" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> Primary;
    /// <summary>
    /// The "Blue" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> Blue;
    /// <summary>
    /// The "Red" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> Red;
    /// <summary>
    /// The "Cube" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> Cube;
    /// <summary>
    /// The "Cad" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> CAD;
    /// <summary>
    /// The "Headlamp" lighting scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> Headlamp;
    
    /// <summary>
    /// Gets the lighting scheme type.
    /// </summary>
    /// <value>The lighting scheme type.</value>
    ASPOSE_PDF_SHARED_API LightingSchemeType get_Type() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DLightingScheme"></see> class.
    /// </summary>
    /// <param name="type">The lighting scheme type.</param>
    ASPOSE_PDF_SHARED_API PDF3DLightingScheme(LightingSchemeType type);
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DLightingScheme"></see> class.
    /// </summary>
    /// <param name="typeName">Name of the lighting scheme type.</param>
    /// <exception cref="ArgumentException">Unknown lighting scheme type argument</exception>
    ASPOSE_PDF_SHARED_API PDF3DLightingScheme(System::String typeName);
    
private:

    LightingSchemeType _type;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Annotations::LightingSchemeType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Annotations::LightingSchemeType, const char_t*>, 12>& values();
};



