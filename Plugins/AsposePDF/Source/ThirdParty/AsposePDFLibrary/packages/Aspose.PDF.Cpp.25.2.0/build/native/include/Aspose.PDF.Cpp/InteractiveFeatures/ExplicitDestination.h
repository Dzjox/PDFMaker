#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/IAppointment.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class CustomExplicitDestination;
class DestinationFactory;
enum class ExplicitDestinationType;
class FitBExplicitDestination;
class FitBHExplicitDestination;
class FitBVExplicitDestination;
class FitExplicitDestination;
class FitHExplicitDestination;
class FitRExplicitDestination;
class FitVExplicitDestination;
class GoToAction;
class GoToRemoteAction;
class LinkAnnotation;
class XYZExplicitDestination;
} // namespace Annotations
class DestinationCollection;
class Document;
namespace Engine
{
namespace Data
{
class IPdfArray;
} // namespace Data
} // namespace Engine
namespace Facades
{
class Bookmark;
} // namespace Facades
class Page;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Globalization
{
class CultureInfo;
} // namespace Globalization
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents the base class for explicit destinations in PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ExplicitDestination : public Aspose::Pdf::Annotations::IAppointment
{
    typedef ExplicitDestination ThisType;
    typedef Aspose::Pdf::Annotations::IAppointment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::CustomExplicitDestination;
    friend class Aspose::Pdf::DestinationCollection;
    friend class Aspose::Pdf::Facades::Bookmark;
    friend class Aspose::Pdf::Annotations::LinkAnnotation;
    friend class Aspose::Pdf::Annotations::FitBExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitBHExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitBVExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitHExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitRExplicitDestination;
    friend class Aspose::Pdf::Annotations::FitVExplicitDestination;
    friend class Aspose::Pdf::Annotations::XYZExplicitDestination;
    friend class Aspose::Pdf::Annotations::GoToAction;
    friend class Aspose::Pdf::Annotations::GoToRemoteAction;
    friend class Aspose::Pdf::Annotations::DestinationFactory;
    
public:

    /// <summary>
    /// Gets the destination page object
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Page> get_Page() const;
    /// <summary>
    /// Gets the destination page number
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageNumber() const;
    
    /// <summary>
    /// Creates instances of ExplicitDestination descendant classes.
    /// </summary>
    /// <param name="page">The object of destination page.</param>
    /// <param name="type">The type of explicit destination.</param>
    /// <param name="values">Array of double values.</param>
    /// <returns>The explicit destination object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<ExplicitDestination> CreateDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    /// @deprecated Use the method without Document argument.
    /// <summary>
    /// Creates instances of ExplicitDestination descendant classes.
    /// </summary>
    /// <param name="doc">Document where destination will be created.</param>
    /// <param name="pageNumber">Number of the page.</param>
    /// <param name="type">Destionatyion type.</param>
    /// <param name="values">Array of destination specific values.</param>
    /// <returns>The explicit destination object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<ExplicitDestination> CreateDestination(System::SharedPtr<Document> doc, int32_t pageNumber, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    /// <summary>
    /// Creates instances of ExplicitDestination descendant classes.
    /// </summary>
    /// <param name="pageNumber">The destination page number.</param>
    /// <param name="type">The type of explicit destination.</param>
    /// <param name="values">Array of double values.</param>
    /// <returns>The explicit destination object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<ExplicitDestination> CreateDestination(int32_t pageNumber, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    /// <summary>
    /// Returns string representation of ExplicitDestination object.
    /// </summary>
    /// <returns>String representation.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override = 0;
    
protected:

    System::SharedPtr<System::Globalization::CultureInfo> Culture;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_EngineDest() const;
    
    /// <summary>
    /// Gets double value by specified index of element.
    /// </summary>
    /// <param name="index">The index of element to get.</param>
    /// <returns>Double value of the specified element.</returns>
    ASPOSE_PDF_SHARED_API double GetNumber(int32_t index) const;
    /// <summary>
    /// Creates instance of ExplicitDestination descendant classes.
    /// </summary>
    /// <param name="engineDest">Engine destination object.</param>
    /// <returns>DOM explicit destination object.</returns>
    static System::SharedPtr<ExplicitDestination> CreateDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    /// <summary>
    /// Creates the explicit destination.
    /// </summary>
    /// <param name="page">The destination Aspose.Pdf.Page object.</param>
    /// <param name="type">The type of explicit destination.</param>
    /// <param name="values">The additional values of explicit destination type.</param>
    ASPOSE_PDF_SHARED_API ExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    /// <summary>
    /// Creates the explicit destination.
    /// </summary>
    /// <param name="pageNumber">The destination page number.</param>
    /// <param name="type">The type of explicit destination.</param>
    /// <param name="values">The additional values of explicit destination type.</param>
    ASPOSE_PDF_SHARED_API ExplicitDestination(int32_t pageNumber, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    ExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
private:

    System::SharedPtr<Aspose::Pdf::Page> _page;
    int32_t _pageNumber;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _engineDest;
    
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> CreateEngineDestination(System::SharedPtr<Aspose::Pdf::Page> page, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> CreateEngineDestination(int32_t pageNumber, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


