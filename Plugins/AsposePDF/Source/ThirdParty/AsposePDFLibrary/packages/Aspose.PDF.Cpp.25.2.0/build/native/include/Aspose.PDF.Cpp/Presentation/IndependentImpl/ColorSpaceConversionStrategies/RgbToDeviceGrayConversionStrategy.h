#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/Presentation/IndependentImpl/IColorSpaceConversionStrategy.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Presentation
{
namespace IndependentImpl
{
namespace ColorInitializerStrategies
{
class ContentToGrayConversion;
} // namespace ColorInitializerStrategies
} // namespace IndependentImpl
} // namespace Presentation
} // namespace Engine
class Page;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents rgb to device gray color spaces conversion strategy.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RgbToDeviceGrayConversionStrategy : public Aspose::Pdf::IColorSpaceConversionStrategy
{
    typedef RgbToDeviceGrayConversionStrategy ThisType;
    typedef Aspose::Pdf::IColorSpaceConversionStrategy BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Converts the page of document.
    /// </summary>
    /// <param name="page">The page of document.</param>
    ASPOSE_PDF_SHARED_API void Convert(System::SharedPtr<Page> page) override;
    
    ASPOSE_PDF_SHARED_API RgbToDeviceGrayConversionStrategy();
    
private:

    System::SharedPtr<Engine::Presentation::IndependentImpl::ColorInitializerStrategies::ContentToGrayConversion> _contentToGrayConversion;
    
};

} // namespace Pdf
} // namespace Aspose


