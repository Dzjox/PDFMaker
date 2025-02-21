#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/ExplicitDestination.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace Data
{
class IPdfArray;
} // namespace Data
} // namespace Engine
class Page;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents explicit destination that displays the page with its contents magnified just enough to fit the entire page within the window both horizontally and vertically. If the required horizontal and vertical magnification factors are different, use the smaller of the two, centering the page within the window in the other dimension.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FitExplicitDestination final : public Aspose::Pdf::Annotations::ExplicitDestination
{
    typedef FitExplicitDestination ThisType;
    typedef Aspose::Pdf::Annotations::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::ExplicitDestination;
    
public:

    /// <summary>
    /// Creates local explicit destination.
    /// </summary>
    /// <param name="page">The destination page object.</param>
    ASPOSE_PDF_SHARED_API FitExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page);
    /// @deprecated Use constructor without Document argument.
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    /// <param name="pageNumber">The destination page number.</param>
    ASPOSE_PDF_SHARED_API FitExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    ASPOSE_PDF_SHARED_API FitExplicitDestination(int32_t pageNumber);
    
    /// <summary>
    /// Converts the object state into string value. Example: "1 Fit".
    /// </summary>
    /// <returns>String value representing object state.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Creates the instance and initializes it by engine destination object.
    /// </summary>
    /// <param name="engineDest">Engine destination object.</param>
    FitExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FitExplicitDestination, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest));
    
private:

    System::String ToString_NonConst();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


