#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/Vector/Model/GraphicElement.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Operator;
class OperatorCollection;
namespace Operators
{
class Do;
} // namespace Operators
class Page;
class Point;
class Rectangle;
namespace Vector
{
class GraphicElementCollection;
class GraphicsAbsorber;
class GraphicState;
class SvgExtractor;
} // namespace Vector
class XForm;
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Vector {

/// <summary>
/// Represents XForm placement.
/// If the XForm is displayed on the page more than 1 time,
/// all XformPlacements associated with this XForm will have common graphical elements, but different graphical states.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XFormPlacement final : public Aspose::Pdf::Vector::GraphicElement
{
    typedef XFormPlacement ThisType;
    typedef Aspose::Pdf::Vector::GraphicElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Vector::GraphicsAbsorber;
    friend class Aspose::Pdf::Vector::SvgExtractor;
    
protected:

    /// <summary>
    /// Represents a class to build XFormPlacement instance.
    /// </summary>
    class Builder : public System::Object
    {
        typedef Builder ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates a XFormPlacement instance.
        /// </summary>
        /// <param name="xForm">XForm.</param>
        /// <param name="operator">Operator.</param>
        /// <param name="graphicState">Graphic state.</param>
        /// <param name="content">Current content.</param>
        /// <param name="page">Current page.</param>
        Builder(System::SharedPtr<XForm> xForm, System::SharedPtr<Aspose::Pdf::Operators::Do> operator_, System::SharedPtr<GraphicState> graphicState, System::SharedPtr<OperatorCollection> content, System::SharedPtr<Page> page);
        
        /// <summary>
        /// Sets parent property.
        /// </summary>
        /// <param name="xFormPlacement">The parent xFormPlacement</param>
        /// <returns>Current Builder instance.</returns>
        System::SharedPtr<XFormPlacement::Builder> SetParent(System::SharedPtr<XFormPlacement> xFormPlacement);
        /// <summary>
        /// Sets elements property.
        /// </summary>
        /// <param name="elements">The elements inside this XForm</param>
        /// <param name="needCloneElements">
        /// Whether elements need to be cloned before setting the property.
        /// When cloning, a new parent of the elements will be set to the currently created object.
        /// </param>
        /// <returns>Current Builder instance.</returns>
        System::SharedPtr<XFormPlacement::Builder> SetElements(System::SharedPtr<GraphicElementCollection> elements, bool needCloneElements);
        /// <summary>
        /// Sets all vector operators property.
        /// </summary>
        /// <param name="allVectorOperators">All vector operators in this xForm.</param>
        /// <returns>Current Builder instance.</returns>
        System::SharedPtr<XFormPlacement::Builder> SetAllVectorOperations(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> allVectorOperators);
        /// <summary>
        /// Builds XFormPlacement instance.
        /// </summary>
        /// <returns>XFormPlacement instance.</returns>
        System::SharedPtr<XFormPlacement> Build();
        
    protected:
    
        virtual ~Builder();
        
    private:
    
        System::SharedPtr<XFormPlacement> _xFormPlacement;
        
        static System::SharedPtr<GraphicElementCollection> CloneGraphicElementCollection(System::SharedPtr<GraphicElementCollection> elements, System::SharedPtr<XFormPlacement> newParent);
        
    };
    
    
public:

    /// <summary>
    /// Gets name of the XForm.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name();
    /// <summary>
    /// Gets XForm associated with this XFormPlacement.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::XForm>& get_XForm() const;
    /// <summary>
    /// Gets graphic elements inside this XForm.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<GraphicElementCollection> get_Elements() const;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() override;
    ASPOSE_PDF_SHARED_API void set_Position(System::SharedPtr<Point> value) override;
    
    /// <summary>
    /// Adds current element on the page.
    /// If there are many elements to add better use <see cref="Page::AddGraphics(GraphicElementCollection, Rectangle)"></see>.
    /// </summary>
    /// <param name="destination">Destination page</param>
    ASPOSE_PDF_SHARED_API void AddOnPage(System::SharedPtr<Page> destination) override;
    
protected:

    /// <summary>
    /// Gets graphic elements inside this XForm.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Elements(System::SharedPtr<GraphicElementCollection> value);
    const System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Operator>>>& get_AllVectorOperators() const;
    /// <summary>
    /// Gets the operator, associated with this XForm placement
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Operators::Do> get_Operator();
    
    /// <summary>
    /// Creates builder to build XFormPlacement instance.
    /// </summary>
    /// <param name="xForm">XForm.</param>
    /// <param name="operator">Operator.</param>
    /// <param name="graphicState">Graphic state.</param>
    /// <param name="content">Current content.</param>
    /// <param name="page">Current page.</param>
    /// <returns>The builder to build XFormPlacement instance.</returns>
    static System::SharedPtr<XFormPlacement::Builder> Create(System::SharedPtr<Aspose::Pdf::XForm> xForm, System::SharedPtr<Aspose::Pdf::Operators::Do> operator_, System::SharedPtr<Aspose::Pdf::Vector::GraphicState> graphicState, System::SharedPtr<OperatorCollection> content, System::SharedPtr<Page> page);
    /// <summary>
    /// Clones the current graphic element.
    /// The parent is not copied.
    /// </summary>
    /// <returns>Clone object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<GraphicElement> Clone(System::SharedPtr<XFormPlacement> newParent) override;
    ASPOSE_PDF_SHARED_API void GetInitialPoint(double& x, double& y) override;
    
private:

    System::SharedPtr<GraphicElementCollection> _elements;
    System::SharedPtr<Aspose::Pdf::XForm> pr_XForm;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Operator>>> pr_AllVectorOperators;
    
    void set_AllVectorOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Operator>>> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="SubPath"></see>.
    /// </summary>
    /// <param name="xForm">XForm.</param>
    /// <param name="operator">Operator.</param>
    /// <param name="graphicState">Graphic state.</param>
    /// <param name="content">Current content.</param>
    /// <param name="page">Current page.</param>
    XFormPlacement(System::SharedPtr<Aspose::Pdf::XForm> xForm, System::SharedPtr<Aspose::Pdf::Operators::Do> operator_, System::SharedPtr<Aspose::Pdf::Vector::GraphicState> graphicState, System::SharedPtr<OperatorCollection> content, System::SharedPtr<Page> page);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XFormPlacement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::XForm> xForm, System::SharedPtr<Aspose::Pdf::Operators::Do> operator_, System::SharedPtr<Aspose::Pdf::Vector::GraphicState> graphicState, System::SharedPtr<OperatorCollection> content, System::SharedPtr<Page> page));
    
};

} // namespace Vector
} // namespace Pdf
} // namespace Aspose


