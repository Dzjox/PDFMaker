#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/idisposable.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class ITrailerable;
} // namespace Data
} // namespace Engine
class Matrix;
class Operator;
class OperatorCollection;
class Page;
class Point;
class Rectangle;
namespace Vector
{
namespace Extraction
{
class ApsSvgRenderer;
} // namespace Extraction
class GraphicAppender;
class GraphicsAbsorber;
class GraphicState;
class SubPath;
class XFormPlacement;
} // namespace Vector
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
class String;
template <typename> class WeakPtr;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Vector {

/// <summary>
/// Represents base class for graphics object on the page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GraphicElement : public System::IDisposable
{
    typedef GraphicElement ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Vector::SubPath;
    friend class Aspose::Pdf::Vector::GraphicsAbsorber;
    friend class Aspose::Pdf::Vector::XFormPlacement;
    friend class Aspose::Pdf::Vector::XFormPlacement;
    friend class Aspose::Pdf::Vector::GraphicAppender;
    friend class Aspose::Pdf::Vector::Extraction::ApsSvgRenderer;
    
public:

    /// <summary>
    /// Gets the page from which the graphic element is extracted.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Page> get_SourcePage() const;
    /// <summary>
    /// Gets graphic element matrix. The matrix sets when element is created.
    /// It changes when SetPosition() is called.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix() const;
    /// <summary>
    /// Gets the bounding rectangle of the <see cref="GraphicElement"></see>.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() = 0;
    /// <summary>
    /// Gets the position in the current coordinate space.
    /// If <see cref="Parent"></see> is not <see cref="null"></see> then the element have xForm coordinate space.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Point> get_Position();
    /// <summary>
    /// Sets the position in the current coordinate space.
    /// If <see cref="Parent"></see> is not <see cref="null"></see> then the element have xForm coordinate space.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Position(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets the current <see cref="XFormPlacement"></see> in which the element is located.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<XFormPlacement>& get_Parent() const;
    /// <summary>
    /// Gets a collection of operators representing the element.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> get_Operators() const;
    
    /// <summary>
    /// Removes current element from the page.
    /// If there are many elements to remove better use <see cref="Page::DeleteGraphics(GraphicElementCollection)"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Remove();
    /// <summary>
    /// Adds current element on the page.
    /// If there are many elements to add better use <see cref="Page::AddGraphics(GraphicElementCollection, Rectangle)"></see>.
    /// </summary>
    /// <param name="destination">Destination page</param>
    virtual ASPOSE_PDF_SHARED_API void AddOnPage(System::SharedPtr<Page> destination);
    /// <summary>
    /// Converts the element into a single SVG image.
    /// </summary>
    /// <returns>The SVG-string.</returns>
    ASPOSE_PDF_SHARED_API System::String SaveToSvg();
    /// <summary>
    /// Converts the element into a single SVG image file.
    /// </summary>
    /// <param name="svgFilePath">The file path to save svg-image.</param>
    ASPOSE_PDF_SHARED_API void SaveToSvg(System::String svgFilePath);
    /// <summary>
    /// Releases all resources used by the <see cref="GraphicElement"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    
protected:

    System::SharedPtr<Page> _page;
    System::SharedPtr<Aspose::Pdf::Vector::GraphicState> _graphicState;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _operators;
    System::SharedPtr<OperatorCollection> _currentContent;
    System::SharedPtr<Aspose::Pdf::Matrix> _matrix;
    
    /// <summary>
    /// Gets the current <see cref="XFormPlacement"></see> in which the element is located.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Parent(System::SharedPtr<XFormPlacement> value);
    /// <summary>
    /// Gets the current graphic state of the element.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Vector::GraphicState> get_GraphicState() const;
    /// <summary>
    /// Gets the current <see cref="ITrailerable"></see> of the the element.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> get_Trailerable() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="GraphicElement"></see>.
    /// </summary>
    /// <param name="graphicState">Graphic state.</param>
    /// <param name="operators">Operators.</param>
    /// <param name="currentContent">Current content</param>
    /// <param name="page">Current page.</param>
    GraphicElement(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Aspose::Pdf::Vector::GraphicState> graphicState, System::SharedPtr<OperatorCollection> currentContent, System::SharedPtr<Page> page);
    
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> FindDelta(System::SharedPtr<Point> newValue);
    ASPOSE_PDF_SHARED_API void SetPosition(System::SharedPtr<Point> point);
    virtual ASPOSE_PDF_SHARED_API void GetInitialPoint(double& x, double& y) = 0;
    /// <summary>
    /// Clones the current graphic element.
    /// </summary>
    /// <returns>Clone object</returns>
    virtual System::SharedPtr<GraphicElement> Clone(System::SharedPtr<XFormPlacement> newParent) = 0;
    /// <summary>
    /// Clears the element.
    /// </summary>
    void Clear();
    /// <summary>
    /// Releases all resources used by the <see cref="GraphicElement"></see> class.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void Dispose(bool disposing);
    
    virtual ASPOSE_PDF_SHARED_API ~GraphicElement();
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _trailerable;
    bool _disposed;
    System::WeakPtr<XFormPlacement> pr_Parent;
    
};

} // namespace Vector
} // namespace Pdf
} // namespace Aspose


