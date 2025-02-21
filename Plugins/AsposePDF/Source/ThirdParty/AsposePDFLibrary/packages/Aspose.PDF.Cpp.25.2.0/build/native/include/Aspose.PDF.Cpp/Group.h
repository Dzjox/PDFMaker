#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class ColorSpace;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class PdfAConvertStrategyBase;
class PdfXConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
enum class ExtendedBoolean;
namespace Facades
{
class PdfFileMend;
} // namespace Facades
class Page;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// A group attributes class specifying the attributes of the page's page group for use in the transparent imaging model.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Group final : public System::Object
{
    typedef Group ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    
public:

    /// <summary>
    /// The group color space.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ColorSpace get_ColorSpace();
    /// <summary>
    /// The group color space.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ColorSpace(Aspose::Pdf::ColorSpace value);
    
    /// <summary>
    /// The constructor.
    /// </summary>
    /// <param name="page">Pdf page object.</param>
    ASPOSE_PDF_SHARED_API Group(System::SharedPtr<Page> page);
    
protected:

    /// <summary>
    /// The group transparency flag.
    /// </summary>
    bool get_IsTransparency();
    /// <summary>
    /// If this flag is false, later objects within the group are composited with earlier ones with which
    /// they overlap; if true, they are composited with the group's initial backdrop and overwrite ("knock out")
    /// any earlier overlapping objects.
    /// </summary>
    ExtendedBoolean get_IsKnockout();
    /// <summary>
    /// If this flag is false, later objects within the group are composited with earlier ones with which
    /// they overlap; if true, they are composited with the group's initial backdrop and overwrite ("knock out")
    /// any earlier overlapping objects.
    /// </summary>
    void set_IsKnockout(ExtendedBoolean value);
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineGroup;
    
};

} // namespace Pdf
} // namespace Aspose


