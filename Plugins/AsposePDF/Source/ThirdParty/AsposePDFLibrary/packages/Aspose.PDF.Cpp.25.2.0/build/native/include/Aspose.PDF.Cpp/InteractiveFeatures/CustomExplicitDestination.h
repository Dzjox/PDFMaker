#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/ExplicitDestination.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfArray;
} // namespace Data
} // namespace Engine
namespace Tests
{
namespace Annotations
{
class PdfActionTests;
} // namespace Annotations
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents custom explicit destination.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CustomExplicitDestination final : public Aspose::Pdf::Annotations::ExplicitDestination
{
    typedef CustomExplicitDestination ThisType;
    typedef Aspose::Pdf::Annotations::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::ExplicitDestination;
    friend class Aspose::Pdf::Tests::Annotations::PdfActionTests;
    
public:

    /// <summary>
    /// Converts to page number.
    /// </summary>
    /// <returns>Page number.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    CustomExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CustomExplicitDestination, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest));
    
private:

    System::String ToString_NonConst();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


