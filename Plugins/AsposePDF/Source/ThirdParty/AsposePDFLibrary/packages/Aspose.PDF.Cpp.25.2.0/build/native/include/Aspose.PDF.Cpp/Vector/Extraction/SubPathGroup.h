#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace PdfToMarkdown
{
namespace Extractors
{
class ImagesExtractor;
} // namespace Extractors
} // namespace PdfToMarkdown
class Rectangle;
namespace Tests
{
namespace Vector
{
namespace SvgExtraction
{
class SubPathsExtractorTests;
} // namespace SvgExtraction
} // namespace Vector
} // namespace Tests
namespace Vector
{
namespace Extraction
{
class ApsSvgRenderer;
class ClusterExtractor;
class SubPathContainer;
} // namespace Extraction
class GraphicElement;
class SvgExtractor;
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Vector {

/// <summary>
/// Represents a class for a group of graphic element containers.
/// Class objects have a bounding box to account for group size.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SubPathGroup : public System::Object
{
    typedef SubPathGroup ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PdfToMarkdown::Extractors::ImagesExtractor;
    friend class Aspose::Pdf::Vector::Extraction::ApsSvgRenderer;
    friend class Aspose::Pdf::Vector::Extraction::ClusterExtractor;
    friend class Aspose::Pdf::Vector::SvgExtractor;
    friend class Aspose::Pdf::Tests::Vector::SvgExtraction::SubPathsExtractorTests;
    
protected:

    /// <summary>
    /// Gets the bounding rectangle of group.
    /// </summary>
    const System::SharedPtr<Rectangle>& get_GroupRectangle() const;
    /// <summary>
    /// Gets the list of graphic element containers.
    /// </summary>
    const System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Extraction::SubPathContainer>>>& get_Elements() const;
    
    /// <summary>
    /// Instantiates a group of sub-path containers within a rectangle.
    /// </summary>
    /// <param name="rect">The rectangle that bounds the group.</param>
    /// <param name="graphicElements">The list of sub-path containers within the group.</param>
    SubPathGroup(System::SharedPtr<Rectangle> rect, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Extraction::SubPathContainer>>> graphicElements);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SubPathGroup, CODEPORTING_ARGS(System::SharedPtr<Rectangle> rect, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Extraction::SubPathContainer>>> graphicElements));
    
    /// <summary>
    /// Instantiates a group of sub-path containers with one sub-path container.
    /// </summary>
    /// <param name="container">The sub-path container.</param>
    SubPathGroup(System::SharedPtr<Extraction::SubPathContainer> container);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SubPathGroup, CODEPORTING_ARGS(System::SharedPtr<Extraction::SubPathContainer> container));
    
    /// <summary>
    /// Instantiates a group of sub-path containers within a rectangle.
    /// </summary>
    /// <param name="rect">The rectangle that bounds the group.</param>
    /// <param name="graphicElements">The graphic element to be added to the group.</param>
    SubPathGroup(System::SharedPtr<Rectangle> rect, System::SharedPtr<GraphicElement> graphicElements);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SubPathGroup, CODEPORTING_ARGS(System::SharedPtr<Rectangle> rect, System::SharedPtr<GraphicElement> graphicElements));
    
private:

    System::SharedPtr<Rectangle> pr_GroupRectangle;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Extraction::SubPathContainer>>> pr_Elements;
    
};

} // namespace Vector
} // namespace Pdf
} // namespace Aspose


