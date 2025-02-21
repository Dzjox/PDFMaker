#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/predicate.h>
#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Vector/Model/GraphicElement.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Page;
namespace PdfToMarkdown
{
namespace Extractors
{
class ImagesExtractor;
} // namespace Extractors
} // namespace PdfToMarkdown
class Rectangle;
namespace Vector
{
namespace Extraction
{
class ClusterExtractor;
class SubPathContainer;
} // namespace Extraction
class GraphicsAbsorber;
class SubPathGroup;
class SvgExtractionOptions;
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
template <typename> class IEnumerable;
template <typename> class List;
} // namespace Generic
} // namespace Collections
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Vector {

/// <summary>
/// Represents a class to SVG-images extraction from page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SvgExtractor : public System::Object
{
    typedef SvgExtractor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PdfToMarkdown::Extractors::ImagesExtractor;
    
private:

    class IdGenerator : public System::Object
    {
        typedef IdGenerator ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        IdGenerator();
        
        int32_t Next();
        
    private:
    
        int32_t _lastState;
        
    };
    
    
public:

    /// <summary>
    /// Represents a class to extract SVG images from a page.
    /// </summary>
    ASPOSE_PDF_SHARED_API SvgExtractor();
    /// <summary>
    /// Represents a class to extract SVG images from a page.
    /// </summary>
    /// <param name="options">The extraction options.</param>
    ASPOSE_PDF_SHARED_API SvgExtractor(System::SharedPtr<SvgExtractionOptions> options);
    
    /// <summary>
    /// Exracts svg image to string from graphic elements represents by <see cref="absorber"></see> with a predicate filter.
    /// </summary>
    /// <param name="absorber">The GraphicsAbsorber object that contains the graphic elements.</param>
    /// <param name="filter">A predicate function used to filter the graphic elements.</param>
    /// <param name="page">The page where the absorber gets graphic elements.</param>
    /// <returns>The string with SVG content.</returns>
    /// <exception cref="PdfException">If an error occurred when converting to SVG.</exception>
    ASPOSE_PDF_SHARED_API System::String Extract(System::SharedPtr<GraphicsAbsorber> absorber, System::Predicate<System::SharedPtr<GraphicElement>> filter, System::SharedPtr<Page> page);
    /// <summary>
    /// Exracts svg image to file from graphic elements represents by <see cref="absorber"></see> with a predicate filter.
    /// </summary>
    /// <param name="absorber">The GraphicsAbsorber object that contains the graphic elements.</param>
    /// <param name="filter">A predicate function used to filter the graphic elements.</param>
    /// <param name="page">The page where the absorber gets graphic elements.</param>
    /// <param name="svgFilePath">The target SVG file path.</param>
    /// <exception cref="PdfException">If an error occurred when converting to SVG.</exception>
    ASPOSE_PDF_SHARED_API void Extract(System::SharedPtr<GraphicsAbsorber> absorber, System::Predicate<System::SharedPtr<GraphicElement>> filter, System::SharedPtr<Page> page, System::String svgFilePath);
    /// <summary>
    /// Extracts graphic elements into a SVG string.
    /// Options ignored - grouping, extracting from rectangle
    /// </summary>
    /// <param name="elements">The graphic elements to convert.</param>
    /// <param name="page">The page where the absorber gets graphic elements.</param>
    /// <returns>The string with SVG content.</returns>
    /// <exception cref="PdfException">If an error occurred when converting to SVG.</exception>
    ASPOSE_PDF_SHARED_API System::String Extract(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<GraphicElement>>> elements, System::SharedPtr<Page> page);
    /// <summary>
    /// Extracts graphic elements into a single SVG file.
    /// Options ignored - grouping, extracting from rectangle
    /// </summary>
    /// <param name="elements">The graphic elements to convert.</param>
    /// <param name="page">The page where the absorber gets graphic elements.</param>
    /// <param name="svgFilePath">The target SVG file path.</param>
    /// <exception cref="PdfException">If an error occurred when converting to SVG.</exception>
    ASPOSE_PDF_SHARED_API void Extract(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<GraphicElement>>> elements, System::SharedPtr<Page> page, System::String svgFilePath);
    /// <summary>
    /// Extracts Svg images from a page to strings.
    /// </summary>
    /// <param name="page">The page to extract.</param>
    /// <returns>The list of SVG content strings.</returns>
    /// <exception cref="PdfException">If an error occurred when converting to SVG.</exception>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::String>> Extract(System::SharedPtr<Page> page);
    /// <summary>
    ///  Extracts Svg images from a page to files.
    /// </summary>
    /// <param name="page">The page to extract.</param>
    /// <param name="directory">The target directory to place SVG images.</param>
    /// <exception cref="PdfException">If an error occurred when converting to SVG.</exception>
    ASPOSE_PDF_SHARED_API void Extract(System::SharedPtr<Page> page, System::String directory);
    
protected:

    /// <summary>
    /// Extracts Svg images from a page to strings.
    /// </summary>
    /// <param name="page">The page to extract.</param>
    /// <param name="subPathGroups">The subpath groups.</param>
    /// <returns>The list of SVG content strings.</returns>
    /// <exception cref="PdfException">If an error occurred when converting to SVG.</exception>
    System::SharedPtr<System::Collections::Generic::List<System::String>> Extract(System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<SubPathGroup>>>& subPathGroups);
    
private:

    System::SharedPtr<SvgExtractionOptions> _options;
    System::SharedPtr<Extraction::ClusterExtractor> _clusterExtractor;
    System::SharedPtr<SvgExtractor::IdGenerator> _idGenerator;
    
    /// <summary>
    /// Instantiates a group of sub-path containers from GraphicsAbsorber object and predicate filter to filter graphic elements.
    /// </summary>
    /// <param name="absorber">The GraphicsAbsorber object that contains the graphic elements.</param>
    /// <param name="filter">A predicate function used to filter the graphic elements.</param>
    /// <returns>A SubPathGroup object representing the group of sub-path containers.</returns>
    System::SharedPtr<SubPathGroup> CreateGroup(System::SharedPtr<GraphicsAbsorber> absorber, System::Predicate<System::SharedPtr<GraphicElement>> filter);
    System::SharedPtr<Rectangle> CalculateRectangle(System::SharedPtr<GraphicElement> element);
    System::SharedPtr<SubPathGroup> CreateGroup(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<GraphicElement>>> elements);
    bool IsElementWithinExtractionArea(System::SharedPtr<GraphicElement> element);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<SubPathGroup>>> ExtractGroups(System::SharedPtr<Page> page);
    void UnpackXFormIfNeed(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Extraction::SubPathContainer>>> dataInstances, System::SharedPtr<XFormPlacement> xform);
    void SaveSubPathGroupToFile(System::SharedPtr<SubPathGroup> subPathGroup, System::String svgFilePath, System::SharedPtr<Page> page);
    void SaveSubPathGroupsToFiles(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<SubPathGroup>>> groups, System::String directory, System::SharedPtr<Page> page);
    System::SharedPtr<System::Collections::Generic::List<System::String>> SaveSubPathGroupsToStrings(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<SubPathGroup>>> groups, System::SharedPtr<Page> page);
    System::String SaveSubPathGroupToString(System::SharedPtr<SubPathGroup> subPathGroup, System::SharedPtr<Page> page);
    
};

} // namespace Vector
} // namespace Pdf
} // namespace Aspose


