#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class BlendMode;
enum class ImageFilterType;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents an object containing graphics compositing parameters of current graphics state.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CompositingParameters final : public System::Object
{
    typedef CompositingParameters ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets blend mode of current graphics state.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::BlendMode get_BlendMode() const;
    /// <summary>
    /// Gets the image filter type.
    /// </summary>
    ASPOSE_PDF_SHARED_API ImageFilterType get_FilterType() const;
    /// <summary>
    /// Gets the mask flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsMasked() const;
    
    /// <summary>
    /// Initializes new instance of the <see cref="CompositingParameters"></see> object.
    /// </summary>
    /// <param name="blendMode">Blend mode of current graphics state.</param>
    ASPOSE_PDF_SHARED_API CompositingParameters(Aspose::Pdf::BlendMode blendMode);
    /// <summary>
    /// Initializes new instance of the <see cref="CompositingParameters"></see> object.
    /// </summary>
    /// <param name="blendMode">Blend mode of current graphics state.</param>
    /// <param name="filterType">The image filter type.</param>
    ASPOSE_PDF_SHARED_API CompositingParameters(Aspose::Pdf::BlendMode blendMode, ImageFilterType filterType);
    /// <summary>
    /// Initializes new instance of the <see cref="CompositingParameters"></see> object.
    /// </summary>
    /// <param name="blendMode">Blend mode of current graphics state.</param>
    /// <param name="filterType">The image filter type.</param>
    /// <param name="isMasked">The adding mask flag.</param>
    ASPOSE_PDF_SHARED_API CompositingParameters(Aspose::Pdf::BlendMode blendMode, ImageFilterType filterType, bool isMasked);
    
private:

    Aspose::Pdf::BlendMode _blendMode;
    ImageFilterType _imageFilterType;
    bool _isMasked;
    
};

} // namespace Pdf
} // namespace Aspose


