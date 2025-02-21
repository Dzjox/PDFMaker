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
class Point;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents explicit destination that displays the page with the coordinates (left, top) positioned at the upper-left corner of the window and the contents of the page magnified by the factor zoom. A null value for any of the parameters left, top, or zoom specifies that the current value of that parameter is to be retained unchanged. A zoom value of 0 has the same meaning as a null value.
/// </summary>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS XYZExplicitDestination final : public Aspose::Pdf::Annotations::ExplicitDestination
{
    typedef XYZExplicitDestination ThisType;
    typedef Aspose::Pdf::Annotations::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::ExplicitDestination;
    
public:

    /// <summary>
    /// Gets left horizontal coordinate of the upper-left corner of the window.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Left();
    /// <summary>
    /// Gets top vertical coordinate of the upper-left corner of the window.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Top();
    /// <summary>
    /// Gets zoom factor.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Zoom();
    
    /// <summary>
    /// Creates local explicit destination.
    /// </summary>
    /// <param name="page">The destination page object.</param>
    /// <param name="left">Left horizontal coordinate of the upper-left corner of the window.</param>
    /// <param name="top">Top vertical coordinate of the upper-left corner of the window.</param>
    /// <param name="zoom">Zoom factor.</param>
    ASPOSE_PDF_SHARED_API XYZExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, double left, double top, double zoom);
    
    /// <summary>
    /// Create destintion to specified location of the page considering page rotation if required.
    /// </summary>
    /// <param name="page">Destination page.</param>
    /// <param name="left">Left position on the page.</param>
    /// <param name="top">Top position on the page.</param>
    /// <param name="zoom">Zoom factor (0 for default).</param>
    /// <param name="considerRotation">If true position will be recalculated according to page rotation.</param>
    /// <returns>Destination object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<XYZExplicitDestination> CreateDestination(System::SharedPtr<Aspose::Pdf::Page> page, double left, double top, double zoom, bool considerRotation);
    /// <summary>
    /// Create destionation to upper left corner of the specifed page.
    /// </summary>
    /// <param name="page">Destination page.</param>
    /// <param name="zoom">Zoom factor.</param>
    /// <returns>Destination object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<XYZExplicitDestination> CreateDestinationToUpperLeftCorner(System::SharedPtr<Aspose::Pdf::Page> page, double zoom);
    /// <summary>
    /// Create destination to specified page.
    /// </summary>
    /// <param name="page">Destination page.</param>
    /// <returns>Destination object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<XYZExplicitDestination> CreateDestinationToUpperLeftCorner(System::SharedPtr<Aspose::Pdf::Page> page);
    
    /// @deprecated Use constructor without Document argument.
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="document">The parent document that contains this object.</param>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="left">Left horizontal coordinate of the upper-left corner of the window.</param>
    /// <param name="top">Top vertical coordinate of the upper-left corner of the window.</param>
    /// <param name="zoom">Zoom factor.</param>
    ASPOSE_PDF_SHARED_API XYZExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber, double left, double top, double zoom);
    /// <summary>
    /// Creates remote explicit destination.
    /// </summary>
    /// <param name="pageNumber">The destination page number of remote document.</param>
    /// <param name="left">Left horizontal coordinate of the upper-left corner of the window.</param>
    /// <param name="top">Top vertical coordinate of the upper-left corner of the window.</param>
    /// <param name="zoom">Zoom factor.</param>
    ASPOSE_PDF_SHARED_API XYZExplicitDestination(int32_t pageNumber, double left, double top, double zoom);
    
    /// <summary>
    /// Converts the object state into string value. Example: "1 XYZ 100 200 3".
    /// </summary>
    /// <returns>String value representing object state.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Creates the instance and initializes it by engine destination object.
    /// </summary>
    /// <param name="engineDest">Engine destination object.</param>
    XYZExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XYZExplicitDestination, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest));
    
private:

    static System::SharedPtr<Point> TranslatePoint(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Point> point);
    System::String ToString_NonConst();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


