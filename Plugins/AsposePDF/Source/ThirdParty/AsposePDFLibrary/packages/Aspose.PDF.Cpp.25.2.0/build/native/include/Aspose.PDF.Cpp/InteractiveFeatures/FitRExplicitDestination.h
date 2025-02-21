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
/// Represents explicit destination that displays the page with its contents magnified just enough to fit the rectangle specified by the coordinates left, bottom, right, and topentirely within the window both horizontally and vertically. If the required horizontal and vertical magnification factors are different, use the smaller of the two, centering the rectangle within the window in the other dimension. A null value for any of the parameters may result in unpredictable behavior.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FitRExplicitDestination final : public Aspose::Pdf::Annotations::ExplicitDestination
{
    typedef FitRExplicitDestination ThisType;
    typedef Aspose::Pdf::Annotations::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::ExplicitDestination;
    
public:

    /// <summary>
    /// Gets left horizontal coordinate of visible rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Left();
    /// <summary>
    /// Gets bottom vertical coordinate of visible rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Bottom();
    /// <summary>
    /// Gets right horizontal coordinate of visible rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Right();
    /// <summary>
    /// Gets top vertical coordinate of visible rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Top();
    
    /// <summary>
    /// Creates local explicit destination.
    /// </summary>
    /// <param name="page">The destination page object.</param>
    /// <param name="left">Left horizontal coordinate of visible rectangle.</param>
    /// <param name="bottom">Bottom vertical coordinate of visible rectangle.</param>
    /// <param name="right">Right horizontal coordinate of visible rectangle.</param>
    /// <param name="top">Top vertical coordinate of visible rectangle.</param>
    ASPOSE_PDF_SHARED_API FitRExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, double left, double bottom, double right, double top);
    /// @deprecated Use constructor without Document argument.
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="document">The parent document that contains this object.</param>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="left">Left horizontal coordinate of visible rectangle.</param>
    /// <param name="bottom">Bottom vertical coordinate of visible rectangle.</param>
    /// <param name="right">Right horizontal coordinate of visible rectangle.</param>
    /// <param name="top">Top vertical coordinate of visible rectangle.</param>
    ASPOSE_PDF_SHARED_API FitRExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber, double left, double bottom, double right, double top);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="left">Left horizontal coordinate of visible rectangle.</param>
    /// <param name="bottom">Bottom vertical coordinate of visible rectangle.</param>
    /// <param name="right">Right horizontal coordinate of visible rectangle.</param>
    /// <param name="top">Top vertical coordinate of visible rectangle.</param>
    ASPOSE_PDF_SHARED_API FitRExplicitDestination(int32_t pageNumber, double left, double bottom, double right, double top);
    
    /// <summary>
    /// Converts the object state into string value. Example: "1 FitR 100 200 300 400".
    /// </summary>
    /// <returns>String value representing object state.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Creates the instance and initializes it by engine destination object.
    /// </summary>
    /// <param name="engineDest">Engine destination object.</param>
    FitRExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FitRExplicitDestination, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest));
    
private:

    System::String ToString_NonConst();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


