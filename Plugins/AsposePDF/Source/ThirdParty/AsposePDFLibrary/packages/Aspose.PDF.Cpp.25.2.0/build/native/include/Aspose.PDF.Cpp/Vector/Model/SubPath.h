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
class Page;
class Rectangle;
namespace Vector
{
class GraphicsAbsorber;
class GraphicState;
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
namespace Drawing
{
namespace Drawing2D
{
class GraphicsPath;
} // namespace Drawing2D
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Vector {

/// <summary>
/// Represents vector graphics object on the page.
/// Basically, vector graphics objects are represented by two groups of SubPaths.
/// One of them is represented by a set of lines and curves.
/// Others are presented as rectangles and can sometimes be confused.
/// Usually it is a rectangular area that has a color, but very often this rectangle
/// is placed at the beginning of the page and defines the entire space of the page in white.
/// So you get the SubPath, but visually you only see the text on the page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SubPath final : public Aspose::Pdf::Vector::GraphicElement
{
    typedef SubPath ThisType;
    typedef Aspose::Pdf::Vector::GraphicElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Vector::GraphicsAbsorber;
    
protected:

    /// <summary>
    /// Represents a class to build SubPath instance.
    /// </summary>
    class Builder : public System::Object
    {
        typedef Builder ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates a SubPath instance.
        /// </summary>
        /// <param name="pathOperators">SubPath operators.</param>
        /// <param name="graphicState">Graphic state.</param>
        /// <param name="content">Current content.</param>
        /// <param name="page">Current page.</param>
        Builder(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> pathOperators, System::SharedPtr<GraphicState> graphicState, System::SharedPtr<OperatorCollection> content, System::SharedPtr<Page> page);
        
        /// <summary>
        /// Sets parent property.
        /// </summary>
        /// <param name="xFormPlacement">The parent xFormPlacement</param>
        /// <returns>Current Builder instance.</returns>
        System::SharedPtr<SubPath::Builder> SetParent(System::SharedPtr<XFormPlacement> xFormPlacement);
        /// <summary>
        /// Builds SubPath instance.
        /// </summary>
        /// <returns>SubPath instance.</returns>
        System::SharedPtr<SubPath> Build();
        
    protected:
    
        virtual ~Builder();
        
    private:
    
        System::SharedPtr<SubPath> _subPath;
        
    };
    
    
public:

    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() override;
    
protected:

    /// <summary>
    /// Creates builder to build SubPath instance.
    /// </summary>
    /// <param name="pathOperators">SubPath operators.</param>
    /// <param name="graphicState">Graphic state.</param>
    /// <param name="content">Current content.</param>
    /// <param name="page">Current page.</param>
    /// <returns>The builder to build SubPath instance.</returns>
    static System::SharedPtr<SubPath::Builder> Create(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> pathOperators, System::SharedPtr<Aspose::Pdf::Vector::GraphicState> graphicState, System::SharedPtr<OperatorCollection> content, System::SharedPtr<Page> page);
    /// <summary>
    /// Clones the current graphic element.
    /// The parent is not copied.
    /// </summary>
    /// <returns>Clone object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<GraphicElement> Clone(System::SharedPtr<XFormPlacement> newParent) override;
    ASPOSE_PDF_SHARED_API void GetInitialPoint(double& x, double& y) override;
    
private:

    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> _nativePath;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="SubPath"></see>.
    /// </summary>
    /// <param name="pathOperators">SubPath operators.</param>
    /// <param name="graphicState">Graphic state.</param>
    /// <param name="content">Current content.</param>
    /// <param name="page">Current page.</param>
    SubPath(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> pathOperators, System::SharedPtr<Aspose::Pdf::Vector::GraphicState> graphicState, System::SharedPtr<OperatorCollection> content, System::SharedPtr<Page> page);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SubPath, CODEPORTING_ARGS(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> pathOperators, System::SharedPtr<Aspose::Pdf::Vector::GraphicState> graphicState, System::SharedPtr<OperatorCollection> content, System::SharedPtr<Page> page));
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangle();
    
};

} // namespace Vector
} // namespace Pdf
} // namespace Aspose


